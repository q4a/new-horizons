void InitTowns(bool first)
{
	int n = 0;
	object otown;
	ref q, ctown;

	q = &n;
	makeref(ctown, otown);

	ctown.id = "Conceicao";
	ctown.island = "Conceicao";
	ctown.position.x = 786.734070;
	ctown.position.z = 615.279358;
	ctown.monsterprob = 1.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 1000;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = PORTUGAL; // KK
	ctown.homeland = PORTUGAL; // KK
	ctown.store = CONCEICAO_STORE;
	ctown.gov = "Jacinto Arcibaldo Barreto";
	ctown.officiant = "Conceicao_officiant"; // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Conceicao Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.crew.data.year = GetDataYear();
	ctown.shipberth = 1; // KK
	ctown.boarding.l1 = "Conceicao_port";
	ctown.boarding.l2 = "Conceicao_town";
	ctown.laigroup = "CONCEICAO";
	ctown.economy = TOWN_ECONOMY_SURVIVING;
	AddTown(q, ctown);

	ctown.id = "Douwesen";
	ctown.island = "Douwesen";
	ctown.position.x = 780.439728;
	ctown.position.z = 164.659912;
	ctown.monsterprob = 0.75;
	if(first) ctown.captured = false;
	if(first) ctown.size = 1200;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = HOLLAND; // KK
	ctown.homeland = HOLLAND; // KK
	ctown.store = DOUWESEN_STORE;
	ctown.gov = "Reynard Grueneveldt";
	ctown.officiant = "Douwesen_officiant"; // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Douwesen Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 1; // KK
	ctown.boarding.l1 = "Douwesen_port";
	ctown.boarding.l2 = "Douwesen_town";
	ctown.laigroup = "DOUWESEN";
	ctown.economy = TOWN_ECONOMY_SURVIVING;
	AddTown(q, ctown);

	ctown.id = "Falaise de Fleur";
	ctown.island = "FalaiseDeFleur";
	ctown.position.x = -190.0;
	ctown.position.z = 770.0;
	ctown.monsterprob = 2.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 2000;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = FRANCE; // KK
	ctown.homeland = FRANCE; // KK
	ctown.store = FALAISE_DE_FLEUR_STORE;
	ctown.gov = "Joseph Claude Le Moigne";
	ctown.officiant = "Falaise_de_fleur_officiant" // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "FalaiseDeFleur Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 1; // KK
	ctown.boarding.l1 = "Falaise_de_Fleur_port_01";
	ctown.boarding.l2 = "Falaise_de_Fleur_port_02";
	ctown.boarding.l3 = "Falaise_de_Fleur_location_02";
	ctown.boarding.l4 = "Falaise_de_Fleur_location_03";
	ctown.boarding.l5 = "Falaise_de_Fleur_location_04";
	ctown.boarding.l6 = "Falaise_de_Fleur_location_05";
	ctown.laigroup = "FRANCE";
	ctown.economy = TOWN_ECONOMY_PROSPERING;
	AddTown(q, ctown);

	ctown.id = "Isla Muelle";
	ctown.island = "IslaMuelle";
	ctown.position.x = -729.571899;
	ctown.position.z = 118.555008;
	ctown.monsterprob = 5.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 3000;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = SPAIN; // KK
	ctown.homeland = SPAIN; // KK
	ctown.store = ISLA_MUELLE_STORE;
	ctown.gov = "Christofor Manuel De Alencar";
	ctown.officiant = "Muelle_officiant"; // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "IslaMuelle Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 2; // KK
	ctown.boarding.l1 = "Muelle_port";
	ctown.boarding.l2 = "Muelle_town_01";
	ctown.boarding.l3 = "Muelle_town_02";
	ctown.boarding.l4 = "Muelle_town_03";
	ctown.boarding.l5 = "Muelle_town_04";
	ctown.laigroup = "SPAIN";
	ctown.economy = TOWN_ECONOMY_PROSPERING;
	AddTown(q, ctown);

	ctown.id = "Oxbay";
	ctown.island = "Oxbay";
	ctown.position.x = 261.453;
	ctown.position.z = 771.66;
	ctown.monsterprob = 2.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 800;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = ENGLAND; // KK
	ctown.homeland = ENGLAND; // KK
	ctown.store = OXBAY_STORE;
	ctown.officiant = "Oxbay_officiant"; // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Oxbay Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 1; // KK
	ctown.boarding.l1 = "Oxbay_port";
	ctown.boarding.l2 = "Oxbay_town";
	ctown.boarding.l3 = "Oxbay_suburb";
	ctown.laigroup = "ENGLAND";
	ctown.economy = TOWN_ECONOMY_SURVIVING;
	AddTown(q, ctown);

	ctown.id = "Greenford";
	ctown.island = "Oxbay";
	ctown.position.x = 343.052856;
	ctown.position.z = 737.840000;
	ctown.monsterprob = 0.5;
	if(first) ctown.captured = false;
	if(first) ctown.size = 500;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = ENGLAND; // KK
	ctown.homeland = ENGLAND; // KK
	ctown.store = GREENFORD_STORE;
	ctown.officiant = "Greenford_officiant"; // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Greenford Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 1; // KK
	ctown.boarding.l1 = "Greenford_port";
	ctown.boarding.l2 = "Greenford_town";
	ctown.boarding.l3 = "Greenford_suburb";
	ctown.laigroup = "ENGLAND";
	ctown.economy = TOWN_ECONOMY_STRUGGLING;
	AddTown(q, ctown);

	ctown.id = "Redmond";
	ctown.island = "Redmond";
	ctown.position.x = -54.605331;
	ctown.position.z = -243.0;
	ctown.monsterprob = 1.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 2000;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = ENGLAND; // KK
	ctown.homeland = ENGLAND; // KK
	ctown.store = REDMOND_STORE;
	ctown.gov = "John Clifford Brin"; // KK
	ctown.officiant = "Redmond_officiant"; // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Redmond Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 2; // KK
	ctown.boarding.l1 = "Redmond_port";
	ctown.boarding.l2 = "Redmond_Town_01";
	ctown.boarding.l3 = "Redmond_town_03";
	ctown.boarding.l4 = "Redmond_town_04";
	ctown.laigroup = "ENGLAND";
	ctown.economy = TOWN_ECONOMY_SURVIVING;
	AddTown(q, ctown);

	ctown.id = "Charlestown";
	ctown.island = "QuebradasCostillas";
	ctown.position.x = -611.34;
	ctown.position.z = 487.738100;
	ctown.monsterprob = 1.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 600;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = ENGLAND; // KK
	ctown.homeland = ENGLAND; // KK
	ctown.store = CHARLESTOWN_STORE; // KK
	ctown.gov = "Thomas Modiford"; // KK
	ctown.officiant = "Charlestown_officiant"; // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Charlestown Commander";
	ctown.troops = sti(ctown.size) * 4 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 1; // KK
	ctown.boarding.l1 = "Charlestown_Port";
	ctown.laigroup = "ENGLAND";
	ctown.economy = TOWN_ECONOMY_STRUGGLING;
	AddTown(q, ctown);

	ctown.id = "Quebradas Costillas";
	ctown.island = "QuebradasCostillas";
	ctown.position.x = -662.385010;
	ctown.position.z = 535.290100;
	ctown.monsterprob = 1.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 500;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = PIRATE; // KK
	ctown.homeland = PIRATE; // KK
	ctown.store = PIRATES_STORE;
	ctown.gov = "Isenbrandt Jurcksen"; // PB
	ctown.officiant = "QC_officiant"; // KK
	ctown.forts.Quantity = 0;
	ctown.troops = sti(ctown.size) * 4 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 0; // KK
	ctown.boarding.l1 = "QC_port";
	ctown.boarding.l2 = "QC_town_exit";
	ctown.boarding.l3 = "QC_town";
	ctown.laigroup = "QC";
	ctown.economy = TOWN_ECONOMY_STRUGGLING;
	AddTown(q, ctown);

	ctown.id = "Smugglers Lair";
	ctown.island = "Conceicao";
	ctown.position.x = 805.399963; // Smugglers Lair uses Sunny Haven as port
	ctown.position.z = 592.0;
	ctown.monsterprob = 1.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 300;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = PIRATE; // KK
	ctown.homeland = PIRATE; // KK
	ctown.store = SMUGGLERS_STORE;
	ctown.forts.Quantity = 0;
	ctown.troops = sti(ctown.size) * 4 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.boarding.l1 = "Conceicao_shore_02";
	ctown.boarding.l2 = "Smugglers_lair_exit";
	ctown.boarding.l3 = "Smugglers_lair";
	ctown.laigroup = "SMUGGLERS";
	ctown.economy = TOWN_ECONOMY_SURVIVING;
	AddTown(q, ctown);

	ctown.id = "Pirate Fort";
	ctown.island = "Douwesen";
	ctown.position.x = 767.739746; // Pirate Fort uses Palm Beach as port
	ctown.position.z = 184.559875;
	ctown.monsterprob = 1.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 200;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = PIRATE; // KK
	ctown.homeland = PIRATE; // KK
	ctown.store = PIRATE_FORT_STORE; // Ansel
	ctown.gov = "Alistair Garcilaso";
	ctown.officiant = "Pirate_officiant"; // PB
	ctown.forts.Quantity = 0;
	ctown.troops = sti(ctown.size) * 4 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.boarding.l1 = "Douwesen_Shore_01";
	ctown.boarding.l2 = "Douwesen_Jungle_01";
	ctown.boarding.l3 = "Pirate_Fort";
	ctown.laigroup = "DOUWESEN_PIRATE";
	ctown.economy = TOWN_ECONOMY_SURVIVING;
	AddTown(q, ctown);

	ctown.id = "Port au Prince";
	ctown.island = "Hispaniola";
	ctown.position.x = -532.1;
	ctown.position.z = -330.5;
	ctown.monsterprob = 2.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 4500;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = FRANCE; // KK
	ctown.homeland = FRANCE; // KK
	ctown.store = PORT_AU_PRINCE_STORE;
	ctown.gov = "Isabelle de Cussy";
	ctown.officiant = "PoPrince_officiant"; // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Port au Prince Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 1; // KK
	ctown.boarding.l1 = "PoPrince_Port";
	ctown.boarding.l2 = "PoPrince_town";
	ctown.boarding.l3 = "PoPrince_town_02";
	ctown.laigroup = "FRANCE";
	ctown.economy = TOWN_ECONOMY_WEALTHY;
	AddTown(q, ctown);

	ctown.id = "Tortuga";
	ctown.island = "Hispaniola";
	ctown.position.x = -510.1;
	ctown.position.z = -580.5;
	ctown.monsterprob = 3.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 2000;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = FRANCE; // KK
	ctown.homeland = FRANCE; // KK
	ctown.store = TORTUGA_STORE;
	ctown.gov = "Bertrand Ogeron"; // PB
	ctown.officiant = "Tortuga_officiant"; // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Tortuga Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 0; // KK
	ctown.boarding.l1 = "Tortuga_port";
	//ctown.boarding.l2 = "Tortuga_town_01";		//JRH: not used any longer
	ctown.laigroup = "QC";
	ctown.economy = TOWN_ECONOMY_SURVIVING;
	AddTown(q, ctown);

	ctown.id = "Buccaneers Camp";
	ctown.island = "Hispaniola";
	ctown.position.x = 805.399963;
	ctown.position.z = 592.0;
	ctown.monsterprob = 1.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 300;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = PIRATE;
	ctown.homeland = PIRATE;
	ctown.store = BUCCANEERS_CAMP_STORE;
	ctown.officiant = "BuccaneersCamp_officiant";
	ctown.forts.Quantity = 0;
	ctown.troops = sti(ctown.size) * 4 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.boarding.l1 = "Hispaniola_shore_02";
	ctown.boarding.l2 = "Buccaneers_Camp";
	ctown.laigroup = "DOUWESEN_PIRATE";
	ctown.economy = TOWN_ECONOMY_SURVIVING;
	AddTown(q, ctown);

	ctown.id = "Grand Turk";
	ctown.island = "Turks";
	ctown.storegroup = "Turks"; // NK 05-05-04
	ctown.position.x = -580.0;
	ctown.position.z = -780.0;
	ctown.monsterprob = 2.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 1000;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = PIRATE; // KK
	ctown.homeland = PIRATE; // KK
	ctown.store = TURKS_STORE;
	ctown.gov = "Dante Siciliano"; // CTM
	ctown.officiant = "Turks_officiant"; // KK
	ctown.forts.Quantity = 1; // KK
	ctown.forts."0".fortchar = "Grand Turk Commander"; // KK
	ctown.troops = sti(ctown.size) * 4 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 0; // KK
	ctown.boarding.l1 = "Turks_port";
	ctown.laigroup = "QC";
	ctown.economy = TOWN_ECONOMY_SURVIVING;
	AddTown(q, ctown);

	ctown.id = "Santo Domingo";
	ctown.island = "Hispaniola";
	ctown.position.x = -655.1;
	ctown.position.z = -195.5;
	ctown.monsterprob = 2.0;
	ctown.storegroup = "Santo_Domingo";
	if(first) ctown.captured = false;
	if(first) ctown.size = 3500;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = SPAIN; // KK
	ctown.homeland = SPAIN; // KK
	ctown.store = SANTO_DOMINGO_STORE;
	ctown.gov = "Salvador Allende"; // KK
	ctown.officiant = "Santo_Domingo_officiant"; // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "santo domingo Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 1; // KK
	ctown.boarding.l1 = "Santo_Domingo_port";
	ctown.boarding.l2 = "Santo_Domingo_town";
	ctown.laigroup = "SPAIN";
	ctown.economy = TOWN_ECONOMY_PROSPERING;
	AddTown(q, ctown);

	ctown.id = "Grand Cayman";
	ctown.island = "Cayman";
	ctown.position.x = 395.3;
	ctown.position.z = -405.3;
	ctown.monsterprob = 2.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 1000;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = ENGLAND; // KK
	ctown.homeland = ENGLAND; // KK
	ctown.store = GRAND_CAYMAN_STORE;
	ctown.gov = "Edmund Christobel Shaw"; // KK
	ctown.officiant = "Grand_Cayman_officiant"; // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Grand Cayman Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 1; // KK
	ctown.boarding.l1 = "Cayman_Port";
	ctown.boarding.l2 = "Grand_Cayman_town";
	ctown.laigroup = "ENGLAND";
	ctown.economy = TOWN_ECONOMY_SURVIVING;
	AddTown(q, ctown);

	ctown.id = "Havana";
	ctown.island = "Cuba";
	ctown.position.x = 145.3;
	ctown.position.z = -880.5;
	ctown.monsterprob = 4.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 10000;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = SPAIN; // KK
	ctown.homeland = SPAIN; // KK
	ctown.store = HAVANA_STORE;
	ctown.gov = "Felipe Cisneros"; // KK
	ctown.officiant = "Havana_officiant"; // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Havana Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 2; // KK
	ctown.boarding.l1 = "Cuba_port";
	ctown.boarding.l2 = "Havana_town_01";
	ctown.boarding.l3 = "Havana_town_02";
	ctown.boarding.l4 = "Havana_town_05";
	ctown.laigroup = "SPAIN";
	ctown.economy = TOWN_ECONOMY_WEALTHY;
	AddTown(q, ctown);

	ctown.id = "Santiago";
	ctown.island = "Cuba";
	ctown.position.x = -183;
	ctown.position.z = -553.5;
	ctown.monsterprob = 2.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 5000;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = SPAIN; // KK
	ctown.homeland = SPAIN; // KK
	ctown.store = SANTIAGO_STORE;
	ctown.gov = "Javier Balboa"; // KK
	ctown.officiant = "Santiago_officiant"; // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Santiago Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 1; // KK
	ctown.boarding.l1 = "Santiago_port";
	ctown.boarding.l2 = "Santiago_town_01";
	ctown.laigroup = "SPAIN";
	ctown.economy = TOWN_ECONOMY_PROSPERING;
	AddTown(q, ctown);

	ctown.id = "Pointe a Pitre";
	ctown.island = "Guadeloupe";
	ctown.position.x = -445;
	ctown.position.z = 618.5;
	ctown.monsterprob = 2.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 1800;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = FRANCE; // KK
	ctown.homeland = FRANCE; // KK
	ctown.store = POINTE_A_PITRE_STORE;
	ctown.gov = "Remy Gatien_gov"; // KK
	ctown.officiant = "Pointe_a_pitre_officiant"; // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Pointe a pitre Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 2; // KK
	ctown.boarding.l1 = "Guadeloupe_Port";
	ctown.boarding.l2 = "Guadeloupe_Plantation";
	ctown.laigroup = "FRANCE";
	ctown.economy = TOWN_ECONOMY_SURVIVING;
	AddTown(q, ctown);

	ctown.id = "Philipsburg";
	ctown.island = "SaintMartin";
	ctown.position.x = -925.5;
	ctown.position.z = 475.5;
	ctown.monsterprob = 0.75;
	if(first) ctown.captured = false;
	if(first) ctown.size = 600;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = HOLLAND; // KK
	ctown.homeland = HOLLAND; // KK
	ctown.store = PHILIPSBURG_STORE;
	ctown.gov = "Arendt Dickman"; // KK
	ctown.officiant = "Philipsburg_officiant"; // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Philipsburg Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 1; // KK
	ctown.boarding.l1 = "Philipsburg_port";
	ctown.boarding.l2 = "Philipsburg_town";
	ctown.boarding.l3 = "Philipsburg_town_02";
	ctown.laigroup = "DOUWESEN";
	ctown.economy = TOWN_ECONOMY_STRUGGLING;
	AddTown(q, ctown);

	ctown.id = "Marigot";
	ctown.island = "SaintMartin";
	ctown.position.x = -920.5;
	ctown.position.z = 470.5;
	ctown.monsterprob = 1.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 600;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = FRANCE; // KK
	ctown.homeland = FRANCE; // KK
	ctown.store = MARIGOT_STORE;
	ctown.gov = "Philippe de Rivarol"; // KK
	ctown.officiant = "Marigot_officiant"; // KK
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Marigot Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 1; // KK
	ctown.boarding.l1 = "Marigot_port";
	ctown.boarding.l2 = "Marigot_town";
	ctown.boarding.l3 = "Marigot_town_01";
	ctown.boarding.l4 = "Marigot_town_02";
	ctown.laigroup = "FRANCE";
	ctown.economy = TOWN_ECONOMY_STRUGGLING;
	AddTown(q, ctown);

	ctown.id = "St John's";
	ctown.island = "Antigua";
	ctown.position.x = -681.5;
	ctown.position.z = 740.5;
	ctown.monsterprob = 1.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 1400;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = ENGLAND; // KK
	ctown.homeland = ENGLAND; // KK
	ctown.store = ST_JOHNS_STORE;
	ctown.officiant = "Antigua_officiant"; // KK
	ctown.gov = "Antigua_Portadmiral";
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "St John's Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 1; // KK ?
	ctown.boarding.l1 = "Antigua_port"; // KK
	ctown.laigroup = "ENGLAND";
	ctown.economy = TOWN_ECONOMY_SURVIVING;
	AddTown(q, ctown);

	ctown.id = "Willemstad";
	ctown.island = "Curacao";
	ctown.position.x = 334.0;
	ctown.position.z = 310.0;
	ctown.monsterprob = 1.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 1600;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = HOLLAND;
	ctown.homeland = HOLLAND;
	ctown.store = WILLEMSTAD_STORE;
	ctown.gov = "Hans Kloss";
	ctown.officiant = "Willemstad_officiant";
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Willemstad Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 2; // KK
	ctown.boarding.l1 = "Willemstad_port";
	ctown.boarding.l2 = "Willemstad_town";
	ctown.boarding.l3 = "Willemstad_town_2";
	ctown.laigroup = "DOUWESEN";
	ctown.economy = TOWN_ECONOMY_PROSPERING;
	AddTown(q, ctown);

	ctown.id = "Eleuthera";
	ctown.island = "Eleuthera";
	ctown.position.x = 414.0;
	ctown.position.z = -790.0;
	ctown.monsterprob = 3.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 500;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = ENGLAND;
	ctown.homeland = ENGLAND;
	ctown.store = ELEUTHERA_STORE;
	ctown.gov = "Cole Arkwright";
	ctown.officiant = "Eleuthera_officiant";
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Eleuthera Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 1; // KK
	ctown.boarding.l1 = "Eleuthera_port";
	ctown.boarding.l2 = "EleutheraPlantation";
	ctown.laigroup = "ENGLAND";
	ctown.economy = TOWN_ECONOMY_SURVIVING;
	AddTown(q, ctown);

	// Philippe -->
	ctown.id = "Alice";
	ctown.island = "Eleuthera";
	ctown.position.x = 404.2; // eleuthera island pos, not antigua !!!
	ctown.position.z = -785.8;
	ctown.monsterprob = 1.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 1600;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = ENGLAND;
	ctown.homeland = ENGLAND;
	ctown.store = ALICE_STORE;
	ctown.officiant = "Alice_officiant";
	ctown.gov = "Michael Wainwright";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 2; // KK
	ctown.boarding.l1 = "Alice_Port";
	ctown.laigroup = "ENGLAND";
	ctown.economy = TOWN_ECONOMY_SURVIVING;
	AddTown(q, ctown);

	ctown.id = "Oranjestad";
	ctown.island = "Aruba";
	ctown.position.x = 775.0;
	ctown.position.z = -110.0;
	ctown.monsterprob = 1.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 1000;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = HOLLAND;
	ctown.homeland = HOLLAND;
	ctown.store = ORANJESTAD_STORE;
	ctown.gov = "Hendrick van der Kuylen";
	ctown.officiant = "Oranjestad_officiant";
	ctown.forts.Quantity = 0; // screwface
//	ctown.forts."0".fortchar = "Oranjestad Commander"; // screwface
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 1; // KK
	ctown.boarding.l1 = "Oranjestad_port";
	ctown.boarding.l2 = "Oranjestad_town";
	ctown.laigroup = "DOUWESEN";
	ctown.economy = TOWN_ECONOMY_SURVIVING;
	AddTown(q, ctown);

	ctown.id = "Khael Roa";
	ctown.island = "KhaelRoa";
	ctown.position.x = 828.444763;
	ctown.position.z = -491.020996;
	ctown.monsterprob = 1.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 0;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = PERSONAL_NATION; // PB
	ctown.homeland = PERSONAL_NATION; // PB
	ctown.forts.Quantity = 0;
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 0; // KK
	ctown.skiptrade = true; // PB: No quests to this place
	ctown.economy = TOWN_ECONOMY_SURVIVING;
	AddTown(q, ctown);

	ctown.id = "Cartagena";
	ctown.island = "Colombia";
	ctown.position.x = 785.0;
	ctown.position.z = 390.0;
	ctown.monsterprob = 1.0;
	if(first) ctown.captured = false;
	if(first) ctown.size = 2000;
	ctown.gold = sti(ctown.size) * TOWN_GOLD_SCALAR;
	if(first) ctown.nation = SPAIN;
	ctown.homeland = SPAIN;
	ctown.store = CARTAGENA_STORE;
	ctown.officiant = "Cartagena_officiant";
	ctown.gov = "Gregorio Montavez";
	ctown.forts.Quantity = 1;
	ctown.forts."0".fortchar = "Cartagena Commander";
	ctown.troops = sti(ctown.size) * 2 / 5;
	ctown.crew.quantity = sti(ctown.size)/8 + rand(sti(ctown.size)/4);
	ctown.crew.morale = MORALE_NORMAL - 20 + Rand(40);
	ctown.crew.data.year = GetDataYear();
	ctown.crew.data.month = GetDataMonth();
	ctown.crew.data.day = GetDataDay();
	ctown.shipberth = 2; // KK
	ctown.boarding.l1 = "Cartagena_Port";
	ctown.boarding.l2 = "Cartagena_town_01";
	ctown.boarding.l3 = "Cartagena_town_02";
	ctown.boarding.l4 = "Cartagena_Center";
	ctown.laigroup = "SPAIN";
	ctown.economy = TOWN_ECONOMY_WEALTHY;
	AddTown(q, ctown);

	TOWNS_QUANTITY = q;
}