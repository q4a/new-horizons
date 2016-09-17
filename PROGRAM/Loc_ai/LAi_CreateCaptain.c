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
	string model = RandomCaptain(iNation);
	rCaptain.model	= model;
	float mheight = MAN_HEIGHT;
	string sex = "man";
	string ani = "man";
	int modelidx = GetModelIndex(model);
	ref rmodel; // KK
	if (modelidx != -1)
	{
		makeref(rmodel, Models[modelidx]);
		ani = rmodel.ani;
		sex = rmodel.sex;
		mheight = stf(rmodel.height);
	}
	rCaptain.model.entity = "NPCharacter";
	rCaptain.model.animation = ani;
	rCaptain.sex = sex;
	rCaptain.model.height = MAN_HEIGHT;
	facemaker(rCaptain);
	if(DEBUG_CAPTAIN_CREATION>1) Trace("CAPTAIN CREATION: Set up model data");
	
	//Set some basic data
	rCaptain.nation = iNation;
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
	SetRandomStatsToShip(sti(rCaptain.index), iShipType, iNation);
	if(DEBUG_CAPTAIN_CREATION>1) Trace("CAPTAIN CREATION: Ship Setup Complete");
	
	//Set the fatom points
	aref arship; makearef(arship, rCaptain.ship);
	float mult = CaptainMultFromOfficerType(rCaptain.quest.officertype); //Levis removed other lines to make it character independend
	rCaptain.Points = mult * stf(GetLocalShipAttrib(arship,iShipType,"Weight")) / 5000;
	
	//Set fantom money
	Fantom_SetRandomMoney(rCaptain, sFantomType);
	rCaptain.wealth = makeint(sti(rCaptain.money)*(frand(5.0)+2.3));
	
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
	//Class 8 ship should have a rank 1 captain. A class 1 ship should have something round a rank 40 captain.
	int rank = (8-shipclass)*7;
	rank = rank*0.8 + 0.3*rand(rank);
	rank += GetOfficTypeRankBonus(SCaptain.quest.officertype);
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