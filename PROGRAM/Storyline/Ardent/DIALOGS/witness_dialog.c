//#include "DIALOGS\Morgan Terror_Dialog.h"
void ProcessDialogEvent()
{
	ref NPChar;
	aref Link, Diag; //NextDiag;

	DeleteAttribute(&Dialog,"Links");

	makeref(NPChar,CharacterRef);
	makearef(Link, Dialog.Links);
	makearef(Diag, NPChar.Dialog);

	ref PChar;
	PChar = GetMainCharacter();
	
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

			dialog.text = DLG_TEXT[0];
			link.l1 = DLG_TEXT[1];
			link.l1.go = "exit";
		break;

		case "saw_sanjuan_abduction":
			if (PChar.sex == "man") Preprocessor_Add("person", "woman");
			else Preprocessor_Add("person", "man");
			dialog.text = DLG_TEXT[2];
			link.l1 = DLG_TEXT[3];
			link.l1.go = "saw_sanjuan_abduction2";
		break;

		case "saw_sanjuan_abduction2":
			if (PChar.sex == "man")
			{
				Preprocessor_Add("pronoun", "She");
				Preprocessor_Add("pronoun2", "her");
			}
			else
			{
				Preprocessor_Add("pronoun", "He");
				Preprocessor_Add("pronoun2", "him");
			}
			dialog.text = DLG_TEXT[4];
			link.l1 = DLG_TEXT[5];
			link.l1.go = "saw_sanjuan_abduction3";
		break;

		case "saw_sanjuan_abduction3":
			dialog.text = DLG_TEXT[6];
			link.l1 = DLG_TEXT[7];
			link.l1.go = "exit";
		break;

		case "port_royale_dungeon":
			Preprocessor_Add("merchant", GetMyLastName(characterfromID("Gilbert Downing")));
			dialog.text = DLG_TEXT[8];
			link.l1 = DLG_TEXT[9];
			link.l1.go = "port_royale_dungeon2";
		break;

		case "port_royale_dungeon2":
			dialog.text = DLG_TEXT[10];
			link.l1 = DLG_TEXT[11];
			link.l1.go = "port_royale_dungeon3";
		break;

		case "port_royale_dungeon3":
			dialog.text = DLG_TEXT[12];
			link.l1 = DLG_TEXT[13];
			if (CheckQuestAttribute("ardent_kidnap.status", "no_wine")) link.l1.go = "port_royale_dungeon4a";
			else link.l1.go = "port_royale_dungeon4";
		break;

		case "port_royale_dungeon4":
			Preprocessor_AddQuestData("villain", GetMySimpleName(characterfromID(PChar.quest.villain)));
			Preprocessor_AddQuestData("romance", GetMySimpleName(characterfromID(PChar.quest.romance)));
			AddQuestRecord("Abduction", 16);
			Preprocessor_Remove("romance");
			Preprocessor_Remove("villain");
			if (PChar.sex == "man") Preprocessor_Add("person", "woman");
			else Preprocessor_Add("person", "man");
			dialog.text = DLG_TEXT[14];
			link.l1 = DLG_TEXT[15];
			link.l1.go = "exit";
		break;

		case "port_royale_dungeon4a":
			dialog.text = DLG_TEXT[20];
			link.l1 = DLG_TEXT[21];
			link.l1.go = "exit";
		break;

		case "abduction_tavern":
			if (PChar.sex == "man") Preprocessor_Add("person", "woman");
			else Preprocessor_Add("person", "man");
			dialog.text = DLG_TEXT[16];
			link.l1 = DLG_TEXT[17];
			link.l1.go = "abduction_tavern2";
		break;

		case "abduction_tavern2":
			if (PChar.sex == "man")
			{
				Preprocessor_Add("pronoun", "her");
				Preprocessor_Add("pronoun2", "she");
			}
			else
			{
				Preprocessor_Add("pronoun", "him");
				Preprocessor_Add("pronoun2", "he");
			}
			dialog.text = DLG_TEXT[18];
			link.l1 = DLG_TEXT[19];
			AddDialogExitQuest("abduction_officer_tavern_reset");
			link.l1.go = "exit";
		break;

			
	}
}