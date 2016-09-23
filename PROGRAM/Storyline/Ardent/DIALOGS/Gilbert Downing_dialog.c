//#include "DIALOGS\Morgan Terror_Dialog.h"
void ProcessDialogEvent()
{
	ref NPChar;
	aref Link, Diag; //NextDiag;
	string gov_kid, merch_kid;
	DeleteAttribute(&Dialog,"Links");

	makeref(NPChar,CharacterRef);
	makearef(Link, Dialog.Links);
	makearef(Diag, NPChar.Dialog);

	ref PChar;
	PChar = GetMainCharacter();

	if (PChar.sex == "man")
	{
		gov_kid = "daughter";
		merch_kid = "son";
	}
	else
	{
		gov_kid = "son";
		merch_kid = "daughter";
	}

	DeleteQuestAttribute("ardent_kidnap.find_merchant");
	
	switch(Dialog.CurrentNode)
	{
		// -----------------------------------Диалог первый - первая встреча
		
		case "exit":
			Diag.CurrentNode = Diag.TempNode; //"First time";
			DialogExit();
		break;

	
		case "First time":
			Dialog.defAni = "dialog_stay1";
			Dialog.defCam = "1";
			Dialog.defSnd = "dialogs\0\017";
			Dialog.defLinkAni = "dialog_1";
			Dialog.defLinkCam = "1";
			Dialog.defLinkSnd = "dialogs\woman\024";
			Dialog.ani = "dialog_stay2";
			Dialog.cam = "1";
			Dialog.snd = "dialogs\0\009";

			dialog.text = DLG_TEXT[0] + GetMyLastName(characterFromID(PChar.quest.villain)) + DLG_TEXT[1];
			if(CheckAttribute(PChar,"quest.ardent_kidnap"))
			{
				link.l1 = DLG_TEXT[3];
				link.l1.go = "ask_kid";
			}
			if(checkquestattribute("abduction_status", "pirate_rescued") || checkquestattribute("abduction_status", "married_villain"))
			{
				link.l1 = DLG_TEXT[7] + GetMyFullName(characterFromID(PChar.quest.romance)) + ".";
				link.l1.go = "abduction_visit1_2";
			}
			link.l2 = DLG_TEXT[2];
			link.l2.go = "exit";
		break;

		case "ask_kid":
			dialog.text = DLG_TEXT[4] + merch_kid + ", " + GetMyFirstNames(characterFromID(PChar.quest.villain), false) + DLG_TEXT[5];
			link.l1 = DLG_TEXT[6];
			link.l1.go = "exit";
		break;

		case "abduction_visit1":
			dialog.text = DLG_TEXT[0] + GetMyLastName(characterFromID(PChar.quest.villain)) + DLG_TEXT[1];
			link.l1 = DLG_TEXT[7] + GetMyFullName(characterFromID(PChar.quest.romance)) + ".";
			link.l1.go = "abduction_visit1_2";
		break;

		case "abduction_visit1_2":
			if (PChar.sex == "man") Preprocessor_Add("pronoun", "she");
			else Preprocessor_Add("pronoun", "he");
			dialog.text = DLG_TEXT[8] + merch_kid + ", " + GetMyFirstNames(characterFromID(PChar.quest.villain), false) + ".";
			link.l1 = DLG_TEXT[9] + GetMyFirstNames(characterFromID(PChar.quest.romance), false) + DLG_TEXT[10];
			link.l1.go = "abduction_visit1_3";
		break;

		case "abduction_visit1_3":
			dialog.text = DLG_TEXT[11];
			switch(PChar.quest.revenge_type)
			{
				case "san_juan":
					link.l1 = DLG_TEXT[12] + GetMyFirstNames(characterFromID(PChar.quest.romance), false) + DLG_TEXT[13];
				break;

				case "officer":
					if (PChar.sex == "man") Preprocessor_Add("pronoun", "she");
					else Preprocessor_Add("pronoun", "he");
					link.l1 = DLG_TEXT[37] + GetMySimpleName(characterFromID(PChar.quest.romance)) + DLG_TEXT[38] + GetMyFirstNames(characterFromID(PChar.quest.romance), false) + DLG_TEXT[13];
				break;
			}
			link.l1.go = "abduction_visit1_4";
		break;

		case "abduction_visit1_4":
			dialog.text = DLG_TEXT[14];
			link.l1 = DLG_TEXT[15];
			Diag.TempNode = "hostile";
			AddDialogExitQuest("abduction_port_royale_witness");
			link.l1.go = "exit";
		break;

		case "hostile":
			dialog.text = DLG_TEXT[16];
			link.l1 = DLG_TEXT[17];
			link.l1.go = "exit";
		break;

		case "abduction_where_did_you_come_from":
			dialog.text = DLG_TEXT[18];
			link.l1 = DLG_TEXT[19];
			link.l1.go = "abduction_where_did_you_come_from2";
		break;

		case "abduction_where_did_you_come_from2":
			dialog.text = DLG_TEXT[20];
			link.l1 = DLG_TEXT[21] + GetMyFirstNames(characterFromID(PChar.quest.villain), false) + DLG_TEXT[22] + GetMyFullName(characterFromID(PChar.quest.romance)) + DLG_TEXT[23];
			link.l1.go = "abduction_where_did_you_come_from3";
		break;

		case "abduction_where_did_you_come_from3":
			dialog.text = DLG_TEXT[24] + GetMyFirstNames(characterFromID(PChar.quest.romance), false) + DLG_TEXT[25] + GetMyFirstNames(characterFromID(PChar.quest.villain), false) + ".";
			if (PChar.sex == "man") Preprocessor_Add("pronoun", "she");
			else Preprocessor_Add("pronoun", "he");
			link.l1 = DLG_TEXT[26];
			link.l1.go = "abduction_where_did_you_come_from4";
		break;

		case "abduction_where_did_you_come_from4":
			dialog.text = DLG_TEXT[27];
			link.l1 = DLG_TEXT[28];
			Diag.TempNode = "hostile";
			GiveItem2Character(PChar, "lockpick");
			AddDialogExitQuest("abduction_got_lockpick");
			PlayStereoSound("INTERFACE\important_item.wav");
			logit("You have been given a lockpick.");
			link.l1.go = "exit";
		break;

		case "abduction_romance_released":
			dialog.text = DLG_TEXT[29];
			Preprocessor_Add("kid", merch_kid);
			link.l1 = DLG_TEXT[30] + GetMyFullName(characterFromID(PChar.quest.romance)) + DLG_TEXT[31];
			AddDialogExitQuest("abduction_romance_confronts_merchant");
			link.l1.go = "exit";
		break;

		case "abduction_merchant_refuses_to_betray":
			if (PChar.sex == "man")
			{
				Preprocessor_Add("pronoun", "his");
				Preprocessor_Add("pronoun2", "him");
			}
			else
			{
				Preprocessor_Add("pronoun", "her");
				Preprocessor_Add("pronoun2", "her");
			}
			dialog.text = DLG_TEXT[32] + GetMyFirstNames(characterFromID(PChar.quest.villain), false) + DLG_TEXT[33] + GetMyFirstNames(characterFromID(PChar.quest.villain), false) + DLG_TEXT[34];
			link.l1 = DLG_TEXT[35] + GetMyFirstNames(characterFromID(PChar.quest.villain), false) + DLG_TEXT[36];
			link.l1.go = "exit";
		break;

		case "kidnap_rescue_buy_wine":
			Preprocessor_Add("kid", merch_kid);
			dialog.text = DLG_TEXT[0] + GetMyLastName(characterFromID(PChar.quest.villain)) + DLG_TEXT[1];
			link.l1 = DLG_TEXT[39] + GetMyFullName(characterFromID(PChar.quest.romance)) + DLG_TEXT[40];
			link.l1.go = "kidnap_rescue_wine_gone";
		break;

		case "kidnap_rescue_wine_gone":
			PChar.quest.ardent_kidnap.status = "no_wine";
			if (PChar.sex == "man") Preprocessor_Add("pronoun", "his");
			else Preprocessor_Add("pronoun", "her");
			dialog.text = DLG_TEXT[41] + GetMyFirstNames(characterFromID(PChar.quest.villain), false) + DLG_TEXT[42];
			link.l1 = DLG_TEXT[43];
			AddDialogExitQuest("kidnap_rescue_setup_witness");
			link.l1.go = "exit";
		break;
	}
}