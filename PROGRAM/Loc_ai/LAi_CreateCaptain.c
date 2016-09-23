#define DEBUG_CAPTAIN_CREATION			0	//(int) on 0 no messages are given. on 1 only error, on 2 all steps are shown. If set to 3 a characterdump of each captain will be made

// Fantom_AddFantomCharacter(string sGroupName, int iShipType, string sFantomType, int iEncounterType, int iNation)

//New function for captain generation written by Levis
ref LAi_Create_Captain(ref rCaptain, string sFantomType, int iShipType, int iNation)
{
	if(DEBUG_CAPTAIN_CREATION>1) Trace("CAPTAIN CREATION: Called function LAi_Create_Captain with params sFantomType="+sFantomType+" iShipType="+iShipType+" iNation="+iNation);
	//Clear all data from it so we know for sure no data is left over. It will only restore the ID and idx
	ClearCharacter(rCaptain);
	
	//Determine the fantomtype
	if(iNation == PIRATE) 
	{
		sFantomType = "pirate";
	}
	if(DEBUG_CAPTAIN_CREATION>1) Trace("CAPTAIN CREATION: FantomType after check="+sFantomType);
	
	//Determine the shipclass
	int iShipClass = sti(ShipsTypes[iShipType].class);
	if(DEBUG_CAPTAIN_CREATION>1) Trace("CAPTAIN CREATION: Shipclass is ="+iShipClass);
	
	//Set up model data
	rCaptain.nation = iNation;
	Fantom_SetRandomModel(rCaptain, sFantomType);
	rCaptain.model.entity = "NPCharacter";
	if(DEBUG_CAPTAIN_CREATION>1) Trace("CAPTAIN CREATION: pick model "+rCaptain.model);
	
	//Set some basic data
	rCaptain.FantomType = sFantomType;
	rCaptain.reputation = 20 + rand(69);
	rCaptain.quest.officertype = GetCaptainType(rCaptain);
	rCaptain.rank = GetCaptainRank(rCaptain, iShipClass);
	SetRandomNameToCharacter(rCaptain);
	rCaptain.old.name = rCaptain.name;
	rCaptain.old.lastname = rCaptain.lastname;
	rCaptain.location = "";
	rCaptain.location.group = "";
	rCaptain.location.locator = "";
	rCaptain.skipsetfantom = true; //Making sure the game knows it's generated okay already
	rCaptain.nodisarm = 1;
	LAi_SetGuardianType(rCaptain);
	DeleteAttribute(rCaptain,"isSoldier"); //For now let's tackle it like this
	LAi_SetLoginTime(rCaptain, 0.0, 24.0);
	if(DEBUG_CAPTAIN_CREATION>1) Trace("CAPTAIN CREATION: Set up basic data");
	
	//Set up dialog data
	if(!CheckAttribute(rCaptain,"Dialog"))
	{
		rCaptain.Dialog.Filename = "Cabinfight_dialog.c";
		rCaptain.Dialog.Currentnode = "First time";
		if(rCaptain.sex=="woman") rCaptain.greeting = "Gr_Pirate_f";
		else rCaptain.greeting = "Gr_Dark Teacher";
	}
	
	//Set up the character skills and perks
	rCaptain.skipPostInit = true; //Make sure the captain is processed instantly
	InitCharacterSkills(rCaptain);
	if(DEBUG_CAPTAIN_CREATION>1) Trace("CAPTAIN CREATION: Skill setup complete");
	
	//Set the ship to the captain
	rCaptain.ship.cannons.borts = true; //making sure cannons are set up right
	GiveShip2Character(rCaptain, GetShipID(iShipType), "Ship Name", -1, iNation, true, true);
	SetRandomNameToShip(rCaptain);
	Ship_SetFantomData(rCaptain);
	rCaptain.ship.cannons.Charge.Type = GOOD_BALLS; //Start with canonballs
	Fantom_SetCannons(rCaptain, sFantomType);
	Fantom_SetBalls(rCaptain, sFantomType);
	Fantom_SetSails(rCaptain, sFantomType);
	Fantom_SetGoods(rCaptain, sFantomType);
	SetRandomStatsToShip(sti(rCaptain.index), iShipType, iNation);
	if(DEBUG_CAPTAIN_CREATION>1) Trace("CAPTAIN CREATION: Ship Setup Complete");
	
	//Set the fatom points
	aref arship; makearef(arship, rCaptain.ship);
	float mult = CaptainMultFromOfficerType(rCaptain.quest.officertype); //Levis removed other lines to make it character independend
	string weight = GetLocalShipAttrib(arship,iShipType,"Weight");
	rCaptain.Points = mult * stf(weight) / 5000;
	
	//Set fantom money
	Fantom_SetRandomMoney(rCaptain, sFantomType);
	rCaptain.wealth = makeint(sti(rCaptain.money)*(frand(5.0)+2.3));
	if(DEBUG_CAPTAIN_CREATION>1) Trace("CAPTAIN CREATION: Has wealth="+rCaptain.wealth+" and money="+rCaptain.money);
	
	//Give captain weapons
	LAi_NPC_Equip(rCaptain, sti(rCaptain.rank), true, 1.0);
	EquipCharacterByItem(rCaptain, FindCharacterItemByGroup(rCaptain, BLADE_ITEM_TYPE));
	EquipCharacterByItem(rCaptain, FindCharacterItemByGroup(rCaptain, GUN_ITEM_TYPE));
	EquipCharacterByItem(rCaptain, FindCharacterItemByGroup(rCaptain, ARMOR_ITEM_TYPE));
	SetModelArmor(rCaptain); //will also do a equip of everything
	
	//Check if we can sail this ship
	//if(EnableLimitedShipClass())
	//{
		if(DEBUG_CAPTAIN_CREATION>1) Trace("CAPTAIN CREATION: min shipclass for captain is="+GetShipMinClassForCharacter(rCaptain)+" shipclass is="+iShipClass);
		if (GetShipMinClassForCharacter(rCaptain) > iShipClass)
		{
			if(DEBUG_CAPTAIN_CREATION>0) Trace("CAPTAIN CREATION: Captain can't sail this ship!!!");
		}
	//}
	
	//Increase the number of fantoms
	iNumFantoms++;
	
	if(DEBUG_CAPTAIN_CREATION>1) Trace("CAPTAIN CREATION: Finish captain with ID="+rCaptain.id+" and numfantoms ="+iNumFantoms);
	if(DEBUG_CAPTAIN_CREATION>2) DumpAttributes(rCaptain);
	return rCaptain;
}

ref LAi_Find_New_Captain()
{
	return GetFantomCharacter(iNumFantoms);
}

int GetCaptainRank(ref SCaptain, int shipclass)
{
	//Class 8 ship should have a rank 1 captain. TY Class 1 ship has a minimum captain rank of 39, but usually should be in the 50s. Class 1 Navy ship should have a navy officer on average of level 57, given a rank bonus of 10 for him. 
	int rank = (8-shipclass)*7;
	rank = rank*0.8 + 0.3*rand(rank);
	rank += GetOfficTypeRankBonus(SCaptain.quest.officertype);
	rank += (4*(GetDifficulty()-2)); //TY added difficulty effect
	if(rank < 1) rank = 1;
	return rank;
}

int GetBoardingCrewRank(ref Crewmember)
{
	int crank = sti(Crewmember.rank);
	int rank = crank*0.6 + 0.2*rand(crank);
	rank += GetOfficTypeRankBonus(Crewmember.quest.officertype);
	if(rank < 1) rank = 1;
	return rank;
}