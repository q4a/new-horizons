void ProcessDialogEvent()
{
	ref NPChar;
	aref Link, Diag;

	DeleteAttribute(&Dialog,"Links");
	int Shit, samount;
	int sum = 0;

	makeref(NPChar,CharacterRef);
	makearef(Link, Dialog.Links);
	makearef(Diag, NPChar.Dialog);

	ref PChar;
	string text;
	PChar = GetMainCharacter();
	int loc_id = FindLocation(PChar.location);
	string nationme, nationhim;

	switch(Dialog.CurrentNode)
	{
		case "exit":
			Diag.CurrentNode = Diag.TempNode;
			DialogExit();
		break;

		case "first time":
			Dialog.defAni = "dialog_stay1";
			Dialog.defCam = "1";
			Dialog.defSnd = "dialogs\0\017";
			Dialog.defLinkAni = "dialog_1";
			Dialog.defLinkCam = "1";
			Dialog.defLinkSnd = "dialogs\woman\024";
			Dialog.ani = "dialog_stay2";
			Dialog.cam = "1";
			Dialog.snd = "voice\PADI\PADI001";
			
			// ccc Dec 05 You are recognized for your pirating actions
			if(GetServedNation() == PIRATE && GetCurrentLocationNation() != PIRATE)	// PB: Link this to acting as a pirate
			{
				Dialog.Text = "If I were you, Captain " + GetMyFullName(PChar) + ", I'd return immediately to my ship and sail far away from these shores!";
				Link.l1 = "And why should I do that?";
				Link.l1.go = "why";
				switch(makeint(Npchar.nation))
				{
					case 0 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Eng_m_b_042.wav");}break;
					case 1 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Fre_m_c_046.wav");}break;
					case 2 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Spa_m_a_037.wav");}break;
					case 3 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Por_m_a_052.wav");}break;
					case 4 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Dut_m_a_042.wav");}break;
					case 5 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Por_m_a_038.wav");}break;
				}
				Diag.TempNode = "exit";
			}
			else
			{
				if (HaveLetterOfMarque(sti(Npchar.nation)))
				{
					text = "Welcome to our colony, Captain. What news from your recent journey?";
					text = text + " Have you captured contraband from our enemies recently?";
					text = text + " Of course, if you have recovered smuggled goods, our governor would be most pleased to learn of your efforts.";
					text = text + " What do you think of our proposition, Captain?";
					Dialog.Text = text;
					if(CheckAttribute(Pchar, "quest.Contraband.Active") && Pchar.quest.Contraband.Active == true)
					{
						Link.l2 = "Sorry, but I have other engagements to honour.";
						Link.l2.go = "exit";						
					}
					else
					{
						if(FindFirstContrabandGoods(PChar) != -1)
						{
							Link.l1 = "I have indeed recovered such goods. What do you propose?";
							Link.l1.go = "Transfer the goods, and your standing with our nation will be much improved.";
							Link.l2 = "Sorry but I'm not interested.";
							Link.l2.go = "exit";
						}
						else
						{
							Link.l1 = "Sorry but I haven't captured any contraband.";
							Link.l1.go = "exit";
						}
					}
					switch(makeint(Npchar.nation))
					{
						case 0 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Eng_m_b_080.wav");}break;
						case 1 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Fre_m_c_073.wav");}break;
						case 2 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Spa_m_b_004.wav");}break;
						case 3 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Por_m_a_062.wav");}break;
						case 4 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Dut_m_a_068.wav");}break;
						case 5 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Por_m_b_062.wav");}break;
					}
					Diag.TempNode = "first time";
				}
				else
				{
					if (frnd() < GetChanceDetectFalseFlag() && rand(1)==0)
					{
						int MyNation = PERSONAL_NATION;
						int MyFlag = GetCurrentFlag();
						if(GetRMRelation(PChar, sti(Npchar.nation)) <= REL_WAR)
						{
							if(Makeint(NPchar.nation) == PIRATE)
							{
								Dialog.Text = "You! You'll never leave this island alive!";
								Link.l1 = "We have been recognized!";
							}
							else
							{
								Dialog.Text = "I recognize you! You'll never leave this island alive! Guards!";
								Link.l1 = "We have been recognized!";
							}
							link.l1.go = "exit";
							switch(makeint(Npchar.nation))
							{
								case 0 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Eng_m_a_067.wav");}break;
								case 1 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Fre_m_c_065.wav");}break;
								case 2 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Spa_m_b_056.wav");}break;
								case 3 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Por_m_a_053.wav");}break;
								case 4 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Dut_m_a_058.wav");}break;
								case 5 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Por_m_a_054.wav");}break;
							}
							SetCoastalEnemy(Npchar.model, Npchar.sex, GetMyName(NPChar), Npchar.lastname);
							LAi_LocationFightDisable(&locations[FindLocation(Pchar.location)], false);
							Random_Raid("soldiers", 5, makeint(NPchar.nation), LAI_GROUP_ENEMY, LAI_GROUP_NEUTRAL, "");
							Diag.TempNode = "exit";
						}
						else
						{
							Mynation = GetServedNation();
							if(GetFlagRMRelation(sti(Npchar.nation)) <= REL_WAR && makeint(NPchar.nation)!=3)
							{
								switch(mynation)
								{
									case ENGLAND : nationme="english";break;
									case FRANCE : nationme="french";break;
									case SPAIN : nationme="spanish";break;
									case PIRATE : nationme="pirate";break;
									case HOLLAND : nationme="dutch";break;
									case PORTUGAL : nationme="portuguese";break;
									case PERSONAL_NATION : nationme="pirate";break;
								}
								LAi_LocationFightDisable(&locations[FindLocation(Pchar.location)], false);
								switch(makeint(Npchar.nation))
								{
									case 0 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Eng_m_a_010.wav");}nationhim="english";break;
									case 1 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Fre_m_a_010.wav");}nationhim="french";break;
									case 2 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Spa_m_b_029.wav");}nationhim="spanish";break;
									case 4 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Dut_m_a_008.wav");}nationhim="dutch";break;
									case 5 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Por_m_a_007.wav");}nationhim="portuguese";break;
								}
								Dialog.Text = "Captain "  + GetMyFullName(PChar) + "! You are " + nationme + ". I don't like " + nationme + " bastards! I'll wait for you at sea!";
								Link.l1 = "It will be your end.";
								Link.l1.go = "exit";
								Diag.TempNode = "exit";
								SetCoastalEnemy(Npchar.model, Npchar.sex, GetMyName(NPChar), Npchar.lastname);
							}
							else
							{
								if(makeint(NPchar.nation) != PIRATE)
								{
									text = "Captain " + GetMyFullName(PChar) + ". Our governor is perhaps ready to overlook some of your past actions against our nation.";
									text = text + " The flow of illegal contraband is a serious concern. I don't suppose you have recovered any such goods?";
									text = text + " Turning over such contraband to its proper use on behalf of the Crown would do much to repair your standing in our realm.";
									text = text + " Are you ready to make up for your past misdeeds and earn the trust of our governor?";
									Dialog.Text = text;
									if(CheckAttribute(Pchar, "quest.Contraband.Active") && Pchar.quest.Contraband.Active == true)
									{
										Link.l2 = "Sorry but I have other engagements to honour.";
										Link.l2.go = "exit";								
									}
									else
									{
										if(FindFirstContrabandGoods(PChar) != -1)
										{
											Link.l1 = "I have indeed recovered such goods. What do you propose?";
											Link.l1.go = "Price";
											Link.l2 = "Sorry but I'm not interested.";
											Link.l2.go = "exit";
										}
										else
										{
											Link.l1 = "I apologize, but I am not carrying any smuggled goods.";
											Link.l1.go = "exit";
										}
									}
									Diag.TempNode = "first time";
								}
								else
								{
									Dialog.Text = "Captain " + GetMyFullName(PChar) + "! What winds led you to this cutthroat island?";
									Link.l1 = "Some personal business.";
									Link.l1.go = "exit";
									Diag.TempNode = "first time";
								}
								switch(makeint(Npchar.nation))
								{
									case 0 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Eng_m_b_080.wav");}break;
									case 1 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Fre_m_c_073.wav");}break;
									case 2 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Spa_m_b_004.wav");}break;
									case 3 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Por_m_a_062.wav");}break;
									case 4 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Dut_m_a_068.wav");}break;
									case 5 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Por_m_b_062.wav");}break;
								}
							}
						}
					}
					else
					{
						MyFlag = GetCurrentFlag();
						if(GetFlagRMRelation(sti(Npchar.nation)) <= REL_WAR && rand(10)>8)
						{
							Dialog.Text = "You serve an enemy of my people. I will meet you at sea!";
							Link.l1 = "It will be your end.";
							Link.l1.go = "exit";
							switch(makeint(Npchar.nation))
							{
								case 0 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Eng_m_a_010.wav");}break;
								case 1 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Fre_m_a_010.wav");}break;
								case 2 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Spa_m_b_029.wav");}break;
								case 3 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Fre_m_b_038.wav");}break;
								case 4 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Dut_m_a_008.wav");}break;
								case 5 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Por_m_a_007.wav");}break;
							}
							SetCoastalEnemy(Npchar.model, Npchar.sex, GetMyName(NPChar), Npchar.lastname);
							Diag.TempNode = "exit";
						}
						else
						{
							if(rand(10)>8)
							{
								Dialog.Text = "Don't..disturb...me. I don't want to talk.";
								Link.l1 = "Keep sleeping then.";
								Link.l1.go = "exit";
								switch(makeint(Npchar.nation))
								{
									case 0 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Eng_m_a_010.wav");}break;
									case 1 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Fre_m_a_010.wav");}break;
									case 2 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Spa_m_b_029.wav");}break;
									case 3 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Fre_m_b_038.wav");}break;
									case 4 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Dut_m_a_008.wav");}break;
									case 5 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Por_m_a_007.wav");}break;
								}
								Diag.TempNode = "exit";
							}
							else
							{
								if(makeint(NPchar.nation) != PIRATE)
								{
									if(rand(10)>7)
									{
										text = "Ah, Captain. Our governor is currently seeking the aid of all honest captains in ending the threat smuggling poses to the proper flow of trade.";
										text = text + " Perhaps you have captured such contraband, and are willing to turn it over to the proper authorities.";
										text = text + " Our governor's influence is great indeed, and a good word from him could do a great deal to improve your standing in our realm.";
										text = text + " Turning over illegal goods would work to the benefit of both you and our great nation. What say you Captain?";
										Dialog.Text = text;
										if(CheckAttribute(Pchar, "quest.Contraband.Active") && Pchar.quest.Contraband.Active == true)
										{
											Link.l2 = "Sorry but I have other engagements to honour.";
											Link.l2.go = "exit";								
										}
										else
										{
											if(FindFirstContrabandGoods(PChar) != -1)
											{
												Link.l1 = "I have indeed managed to recover such goods. What do you propose?";
												Link.l1.go = "Price";
												Link.l2 = "Sorry but I'm not interested.";
												Link.l2.go = "exit";
											}
											else
											{
												Link.l1 = "I apologize, but I am not carrying any smuggled goods.";
												Link.l1.go = "exit";
											}
										}
										Diag.TempNode = "first time";
									}
									else	
									{
										Dialog.Text = "Yes? What do you want?";
										link.l1 = "It seems you are sitting at our table. As I see you are a fellow captain, I will refrain from cutting you down like a common knave. Meet me at sea!";
										link.l1.go = "defi";
										link.l2 = "Just enjoying the tavern. I wish you well, friend.";
										link.l2.go = "exit";
									}
								}
								else
								{
									Dialog.Text = "Good day, Captain ! What wind brought you to this cutthroat island?";
									Link.l1 = "Some personal buisness.";
									Link.l1.go = "exit";
									Diag.TempNode = "first time";
								}
								switch(makeint(Npchar.nation))
								{
									case 0 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Eng_m_b_080.wav");}break;
									case 1 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Fre_m_c_073.wav");}break;
									case 2 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Spa_m_b_004.wav");}break;
									case 3 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Por_m_a_062.wav");}break;
									case 4 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Dut_m_a_068.wav");}break;
									case 5 : if(Npchar.sex=="man"){PlaySound("VOICE\" + LanguageGetLanguage() + "\Por_m_b_062.wav");}break;
								}
							}
						}
					}
				}
			}
		break;


		case "why":
				Dialog.Text = "I will settle matters with you at sea. Gather your men, and prepare for the destruction of your ship and crew.";
				Link.l1 = "You will soon meet your end.";
				Link.l1.go = "exit";
				SetCoastalEnemy(Npchar.model, Npchar.sex, GetMyName(NPChar), Npchar.lastname);
				if(rand(5)==0){LAi_LocationFightDisable(&locations[FindLocation(Pchar.location)], false);Random_Raid("soldiers",5,makeint(NPchar.nation),LAI_GROUP_ENEMY,LAI_GROUP_NEUTRAL,"");}
		break;

		case "price":
				Diag.TempNode = "exit";
				//Levis: Changed it to only count the amount of goods instead of the price
				if(FindFirstContrabandGoods(Pchar) != -1) 
				{
					samount = GetSquadronGoods(Pchar,makeint(FindFirstContrabandGoods(Pchar)));
					sum = samount;
				 }
				shit = FindNextContrabandGoods(Pchar);
				if(shit != -1) 
				{
					samount = GetSquadronGoods(Pchar,makeint(shit));
					sum = sum + samount;
				}
				shit = FindNextContrabandGoods(Pchar);
				if(shit != -1) 
				{
					samount = GetSquadronGoods(Pchar,makeint(shit));
					sum = sum + samount;		
				}
				shit = FindNextContrabandGoods(Pchar);
				if(shit != -1) 
				{
					samount = GetSquadronGoods(Pchar,makeint(shit));
					sum = sum + samount;
				}
				Dialog.Text = "Transfer the goods, and your standing with our nation will be much improved.";
				Link.l1 = "Certainly, the proper regulation of trade is of the utmost importance. I am happy to do my part.";
				Link.l1.go = "accept";
				Link.l2 = "I apologize, but on second thought, I am not carrying any contraband. I respect the law far too much to carry such goods, truly.";
				Link.l2.go = "exit";
				Npchar.quest.contrabandsum = sum;
		break;

		case "accept":
				Dialog.Text = "Excelent! The governor will be most pleased. I shall send men to retrieve the goods. You have made a wise decision, Captain.";
				Link.l1 = "I am glad to be of help.";
				Link.l1.go = "exit";
				sum = stf(Npchar.quest.contrabandsum);
				PlayStereoSound("INTERFACE\took_item.wav");
				//AddMoneyToCharacter(pchar, sti(sum)); //Levis removed the money
				//AddMoneyToCharacter(Npchar, -sti(sum)); //Levis removed the money
				//float points = stf(sum/4000);
				//Levis new calculation for the points you receive:
				float currel = GetNationRelation2MainCharacter(sti(Npchar.nation));
				float points = sum / ((sqrt(abs(currel))+5)*5);
				ChangeRMRelation(pchar, sti(Npchar.nation), points); // PB: was UpdateRMRelation

				if(FindFirstContrabandGoods(Pchar) != -1) 
				{
					RemoveCharacterGoods(Pchar, makeint(FindFirstContrabandGoods(Pchar)), GetCargoGoods(Pchar, makeint(FindFirstContrabandGoods(Pchar))));
					if(GetCompanionIndex(Pchar, 1) != -1)
					{
						RemoveCharacterGoods(&Characters[getCompanionIndex(Pchar, 1)], makeint(FindFirstContrabandGoods(Pchar)), GetCargoGoods(&Characters[getCompanionIndex(Pchar, 1)], makeint(FindFirstContrabandGoods(Pchar))));
					}
					if(GetCompanionIndex(Pchar, 2) != -1)
					{
						RemoveCharacterGoods(&Characters[getCompanionIndex(Pchar, 2)], makeint(FindFirstContrabandGoods(Pchar)), GetCargoGoods(&Characters[getCompanionIndex(Pchar, 2)], makeint(FindFirstContrabandGoods(Pchar))));
					}
					if(GetCompanionIndex(Pchar, 3) != -1)
					{
						RemoveCharacterGoods(&Characters[getCompanionIndex(Pchar, 3)], makeint(FindFirstContrabandGoods(Pchar)), GetCargoGoods(&Characters[getCompanionIndex(Pchar, 3)], makeint(FindFirstContrabandGoods(Pchar))));
					}
				 }
				shit = FindNextContrabandGoods(Pchar);
				if(shit != -1) 
				{
					RemoveCharacterGoods(Pchar, makeint(shit), GetCargoGoods(Pchar, makeint(shit)));
					if(GetCompanionIndex(Pchar, 1) != -1)
					{
						RemoveCharacterGoods(&Characters[getCompanionIndex(Pchar, 1)], makeint(shit), GetCargoGoods(&Characters[getCompanionIndex(Pchar, 1)], makeint(shit)));
					}
					if(GetCompanionIndex(Pchar, 2) != -1)
					{
						RemoveCharacterGoods(&Characters[getCompanionIndex(Pchar, 2)], makeint(shit), GetCargoGoods(&Characters[getCompanionIndex(Pchar, 2)], makeint(shit)));
					}
					if(GetCompanionIndex(Pchar, 3) != -1)
					{
						RemoveCharacterGoods(&Characters[getCompanionIndex(Pchar, 3)], makeint(shit), GetCargoGoods(&Characters[getCompanionIndex(Pchar, 3)], makeint(shit)));
					}
				}
				shit = FindNextContrabandGoods(Pchar);
				if(shit != -1) 
				{
					RemoveCharacterGoods(Pchar, makeint(shit), GetCargoGoods(Pchar, makeint(shit)));
					if(GetCompanionIndex(Pchar, 1) != -1)
					{
						RemoveCharacterGoods(&Characters[getCompanionIndex(Pchar, 1)], makeint(shit), GetCargoGoods(&Characters[getCompanionIndex(Pchar, 1)], makeint(shit)));
					}
					if(GetCompanionIndex(Pchar, 2) != -1)
					{
						RemoveCharacterGoods(&Characters[getCompanionIndex(Pchar, 2)], makeint(shit), GetCargoGoods(&Characters[getCompanionIndex(Pchar, 2)], makeint(shit)));
					}
					if(GetCompanionIndex(Pchar, 3) != -1)
					{
						RemoveCharacterGoods(&Characters[getCompanionIndex(Pchar, 3)], makeint(shit), GetCargoGoods(&Characters[getCompanionIndex(Pchar, 3)], makeint(shit)));
					}
				}
				shit = FindNextContrabandGoods(Pchar);
				if(shit != -1) 
				{
					RemoveCharacterGoods(Pchar, makeint(shit), GetCargoGoods(Pchar, makeint(shit)));
					if(GetCompanionIndex(Pchar, 1) != -1)
					{
						RemoveCharacterGoods(&Characters[getCompanionIndex(Pchar, 1)], makeint(shit), GetCargoGoods(&Characters[getCompanionIndex(Pchar, 1)], makeint(shit)));
					}
					if(GetCompanionIndex(Pchar, 2) != -1)
					{
						RemoveCharacterGoods(&Characters[getCompanionIndex(Pchar, 2)], makeint(shit), GetCargoGoods(&Characters[getCompanionIndex(Pchar, 2)], makeint(shit)));
					}
					if(GetCompanionIndex(Pchar, 3) != -1)
					{
						RemoveCharacterGoods(&Characters[getCompanionIndex(Pchar, 3)], makeint(shit), GetCargoGoods(&Characters[getCompanionIndex(Pchar, 3)], makeint(shit)));
					}
				}
				Diag.TempNode = "exit";
		break;

		case "defi":
				Dialog.Text = "I am an honest captain and loyal to my country. Consider your actions carefully, rogue.";
				Link.l1 = "Your country is fit only for the service of dogs such as yourself. Your ship will be mine, and your governor will witness your failure.";
				Link.l1.go = "defi2";
				Link.l2 = "Ah, I believe the rum has gone to my head! Please forgive my ill-chosen words, Captain.";
				Link.l2.go = "exit";
		break;

		case "defi2":
				if(rand(2)==0)
				{
					Dialog.Text = "I serve my king through the strength of my cannons and crew. You will die for your insolence.";
					Link.l1 = "The dog bares its teeth. Soon, it will lie on its back.";
					Link.l1.go = "exit";
					SetCoastalEnemy(Npchar.model, Npchar.sex, GetMyName(NPChar), Npchar.lastname);
					Diag.TempNode = "exit";
				}
				else
				{
					Dialog.Text = "I'm the captain of a merchant vessel, not a warship! Someone, please, help!";
					Link.l1 = "Coward.";
					Link.l1.go = "exit";
					if(rand(5)==0){LAi_LocationFightDisable(&locations[FindLocation(Pchar.location)], false);Random_Raid("soldiers",5,makeint(NPchar.nation),LAI_GROUP_ENEMY,LAI_GROUP_NEUTRAL,"");}
					Diag.TempNode = "exit";
				}					
		break;


	}
}
