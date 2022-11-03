// Creado por Jass.
// Created by Jass.

#include <YSI\y_hooks>
#include <float2>

static enum e_EO_PLAYER_TEMP
{
    pt_EDIT_OBJECT_ATTCH,	
	pt_EDIT_OB_TYPE,
	pt_EDIT_OB_CORD,
	Float: pt_EDIT_OB_ANGLE,
	pt_EDIT_OBJECT_TYPE,
	pt_EDIT_OBJECT_SUBTYPE
};

static enum e_EO_DIALOG
{
    DIALOG_CHANGE_V_EDITOB = 32730
};

static stock eo_PLAYER_TEMP[MAX_PLAYERS][e_EO_PLAYER_TEMP];

static enum e_EO_P_TEXTDRAW
{
	PlayerText:ptextdraw_EditObject[2]
};

static stock PlayerEditObjectTextdraw[MAX_PLAYERS][e_EO_P_TEXTDRAW];

static enum e_EO_TEXTDRAW
{
	Text:textdraw_ExitSelection[2],
	Text:textdraw_EditObject[29],
	Text:textdraw_SaveSelection[2],
	Text:textdraw_ChangeSelection[2]
}

static stock EditObjectTextdraw[e_EO_TEXTDRAW];

static stock PLAYER_EOBJ_MODELID[MAX_PLAYERS][2] = {{-1, -1}, ...};
static stock Float: PLAYER_EOBJ_INFO[MAX_PLAYERS][6][3];
static stock Float: PLAYER_EOBJ_INFO_U[MAX_PLAYERS][3][3];
static stock PLAYER_EOBJ_COLOR[MAX_PLAYERS][2];

hook OnGameModeInit()
{
    EditObjectTextdraw[textdraw_ExitSelection][0] = TextDrawCreate(543.000000, 341.822296, "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_ExitSelection][0], 0.000000, 5.500000);
	TextDrawTextSize(EditObjectTextdraw[textdraw_ExitSelection][0], 593.000000, 0.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_ExitSelection][0], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_ExitSelection][0], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_ExitSelection][0], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_ExitSelection][0], 255);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_ExitSelection][0], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_ExitSelection][0], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_ExitSelection][0], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_ExitSelection][0], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_ExitSelection][0], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_ExitSelection][0], 0);

	/*EditObjectTextdraw[textdraw_ExitSelection][1] = TextDrawCreate(567.500000, 343.688934, "X");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_ExitSelection][1], 0.962999, 4.984891);
	TextDrawTextSize(EditObjectTextdraw[textdraw_ExitSelection][1], 0.000000, 46.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_ExitSelection][1], 2);
	TextDrawColor(EditObjectTextdraw[textdraw_ExitSelection][1], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_ExitSelection][1], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_ExitSelection][1], 1010580735);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_ExitSelection][1], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_ExitSelection][1], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_ExitSelection][1], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_ExitSelection][1], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_ExitSelection][1], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_ExitSelection][1], 0);
	TextDrawSetSelectable(EditObjectTextdraw[textdraw_ExitSelection][1], true);*/

	EditObjectTextdraw[textdraw_ExitSelection][1] = TextDrawCreate(563.500000, 360.488983, "X");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_ExitSelection][1], 0.400000, 1.600000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_ExitSelection][1], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_ExitSelection][1], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_ExitSelection][1], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_ExitSelection][1], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_ExitSelection][1], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_ExitSelection][1], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_ExitSelection][1], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_ExitSelection][1], 0);
	TextDrawSetSelectable(EditObjectTextdraw[textdraw_ExitSelection][1], true);

	EditObjectTextdraw[textdraw_SaveSelection][0] = TextDrawCreate(433.000000, 341.822296, "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_SaveSelection][0], 0.000000, 5.500000);
	TextDrawTextSize(EditObjectTextdraw[textdraw_SaveSelection][0], 500.000000, 0.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_SaveSelection][0], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_SaveSelection][0], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_SaveSelection][0], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_SaveSelection][0], 255);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_SaveSelection][0], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_SaveSelection][0], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_SaveSelection][0], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_SaveSelection][0], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_SaveSelection][0], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_SaveSelection][0], 0);

	EditObjectTextdraw[textdraw_SaveSelection][1] = TextDrawCreate(440.000000, 360.488983, "Guardar");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_SaveSelection][1], 0.400000, 1.600000);
	TextDrawTextSize(EditObjectTextdraw[textdraw_SaveSelection][1], 490.00000 + 10.0, 12.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_SaveSelection][1], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_SaveSelection][1], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_SaveSelection][1], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_SaveSelection][1], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_SaveSelection][1], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_SaveSelection][1], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_SaveSelection][1], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_SaveSelection][1], 0);
	TextDrawSetSelectable(EditObjectTextdraw[textdraw_SaveSelection][1], true);

	EditObjectTextdraw[textdraw_ChangeSelection][0] = TextDrawCreate(433.000000, 400.000000, "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_ChangeSelection][0], 0.000000, 5.500000);
	TextDrawTextSize(EditObjectTextdraw[textdraw_ChangeSelection][0], 593.000000, 0.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_ChangeSelection][0], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_ChangeSelection][0], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_ChangeSelection][0], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_ChangeSelection][0], 255);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_ChangeSelection][0], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_ChangeSelection][0], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_ChangeSelection][0], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_ChangeSelection][0], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_ChangeSelection][0], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_ChangeSelection][0], 0);

	EditObjectTextdraw[textdraw_ChangeSelection][1] = TextDrawCreate(440.000000, 400.000000 + 18.000000, "Cambiar_vista");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_ChangeSelection][1], 0.400000, 1.600000);
	TextDrawTextSize(EditObjectTextdraw[textdraw_ChangeSelection][1], 440.000000 + 50.0, 12.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_ChangeSelection][1], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_ChangeSelection][1], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_ChangeSelection][1], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_ChangeSelection][1], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_ChangeSelection][1], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_ChangeSelection][1], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_ChangeSelection][1], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_ChangeSelection][1], 0);
	TextDrawSetSelectable(EditObjectTextdraw[textdraw_ChangeSelection][1], true);

	//====================================

	EditObjectTextdraw[textdraw_EditObject][0] = TextDrawCreate(509.400024, 90.177917 + 20.0, "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][0], 0.000000, 7.221992);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][0], 0.000000, 242.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][0], 2);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][0], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_EditObject][0], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_EditObject][0], 673720575);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][0], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][0], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][0], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][0], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][0], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][0], 0);

	EditObjectTextdraw[textdraw_EditObject][1] = TextDrawCreate(393.299743, 103.366630 + 20.0, "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][1], 0.000000, 4.999997);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][1], 446.799743, 0.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][1], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][1], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_EditObject][1], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_EditObject][1], 150);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][1], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][1], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][1], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][1], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][1], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][1], 0);

	EditObjectTextdraw[textdraw_EditObject][2] = TextDrawCreate(409.500000, 109.111068 + 20.0, "X");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][2], 0.752999, 3.385778);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][2], (409.500000 + 22.0), 30.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][2], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][2], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][2], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][2], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][2], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][2], 2);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][2], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][2], 0);
	TextDrawSetSelectable(EditObjectTextdraw[textdraw_EditObject][2], true);

	EditObjectTextdraw[textdraw_EditObject][3] = TextDrawCreate(461.403900, 103.366630 + 20.0, "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][3], 0.000000, 4.999997);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][3], 514.903015, 0.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][3], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][3], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_EditObject][3], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_EditObject][3], 150);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][3], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][3], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][3], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][3], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][3], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][3], 0);

	EditObjectTextdraw[textdraw_EditObject][4] = TextDrawCreate(478.104187, 109.111068 + 20.0, "Y");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][4], 0.752999, 3.385778);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][4], (478.104187 + 22.0), 30.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][4], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][4], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][4], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][4], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][4], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][4], 2);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][4], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][4], 0);
	TextDrawSetSelectable(EditObjectTextdraw[textdraw_EditObject][4], true);

	EditObjectTextdraw[textdraw_EditObject][5] = TextDrawCreate(528.802856, 103.366630 + 20.0, "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][5], 0.000000, 4.999997);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][5], 582.286560, 0.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][5], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][5], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_EditObject][5], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_EditObject][5], 150);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][5], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][5], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][5], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][5], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][5], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][5], 0);

	EditObjectTextdraw[textdraw_EditObject][6] = TextDrawCreate(546.404113, 109.622131 + 20.0, "Z");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][6], 0.752999, 3.385778);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][6], (546.404113 + 22.0), 30.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][6], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][6], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][6], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][6], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][6], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][6], 2);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][6], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][6], 0);
	TextDrawSetSelectable(EditObjectTextdraw[textdraw_EditObject][6], true);

	EditObjectTextdraw[textdraw_EditObject][7] = TextDrawCreate(622.301147, 89.255584 + 20.0, "Posicion");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][7], 0.282000, 1.214221);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][7], 3);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][7], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][7], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][7], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][7], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][7], 2);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][7], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][7], 0);

	EditObjectTextdraw[textdraw_EditObject][8] = TextDrawCreate(509.400024, 90.177917 + (94.0 * 1.0), "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][8], 0.000000, 7.221992);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][8], 0.000000, 242.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][8], 2);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][8], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_EditObject][8], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_EditObject][8], 673720575);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][8], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][8], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][8], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][8], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][8], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][8], 0);

	EditObjectTextdraw[textdraw_EditObject][9] = TextDrawCreate(393.299743, 103.366630 + (94.0 * 1.0), "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][9], 0.000000, 4.999997);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][9], 446.799743, 0.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][9], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][9], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_EditObject][9], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_EditObject][9], 150);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][9], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][9], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][9], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][9], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][9], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][9], 0);

	EditObjectTextdraw[textdraw_EditObject][10] = TextDrawCreate(409.500000, 109.111068 + (94.0 * 1.0), "X");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][10], 0.752999, 3.385778);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][10], (409.500000 + 22.0), 30.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][10], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][10], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][10], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][10], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][10], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][10], 2);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][10], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][10], 0);
	TextDrawSetSelectable(EditObjectTextdraw[textdraw_EditObject][10], true);

	EditObjectTextdraw[textdraw_EditObject][11] = TextDrawCreate(461.403900, 103.366630 + (94.0 * 1.0), "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][11], 0.000000, 4.999997);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][11], 514.903015, 0.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][11], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][11], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_EditObject][11], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_EditObject][11], 150);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][11], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][11], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][11], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][11], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][11], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][11], 0);

	EditObjectTextdraw[textdraw_EditObject][12] = TextDrawCreate(478.104187, 109.111068 + (94.0 * 1.0), "Y");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][12], 0.752999, 3.385778);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][12], (478.104187 + 22.0), 30.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][12], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][12], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][12], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][12], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][12], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][12], 2);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][12], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][12], 0);
	TextDrawSetSelectable(EditObjectTextdraw[textdraw_EditObject][12], true);

	EditObjectTextdraw[textdraw_EditObject][13] = TextDrawCreate(528.802856, 103.366630 + (94.0 * 1.0), "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][13], 0.000000, 4.999997);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][13], 582.286560, 0.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][13], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][13], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_EditObject][13], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_EditObject][13], 150);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][13], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][13], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][13], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][13], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][13], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][13], 0);

	EditObjectTextdraw[textdraw_EditObject][14] = TextDrawCreate(546.404113, 109.622131 + (94.0 * 1.0), "Z");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][14], 0.752999, 3.385778);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][14], (546.404113 + 22.0), 30.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][14], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][14], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][14], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][14], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][14], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][14], 2);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][14], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][14], 0);
	TextDrawSetSelectable(EditObjectTextdraw[textdraw_EditObject][14], true);

	EditObjectTextdraw[textdraw_EditObject][15] = TextDrawCreate(622.301147, 89.255584 + (94.0 * 1.0), "Rotacion");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][15], 0.282000, 1.214221);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][15], 3);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][15], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][15], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][15], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][15], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][15], 2);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][15], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][15], 0);

	EditObjectTextdraw[textdraw_EditObject][16] = TextDrawCreate(509.400024, 90.177917 + (84.0 * 2.0), "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][16], 0.000000, 7.221992);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][16], 0.000000, 242.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][16], 2);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][16], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_EditObject][16], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_EditObject][16], 673720575);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][16], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][16], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][16], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][16], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][16], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][16], 0);

	EditObjectTextdraw[textdraw_EditObject][17] = TextDrawCreate(393.299743, 103.366630 + (84.0 * 2.0), "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][17], 0.000000, 4.999997);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][17], 446.799743, 0.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][17], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][17], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_EditObject][17], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_EditObject][17], 150);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][17], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][17], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][17], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][17], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][17], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][17], 0);

	EditObjectTextdraw[textdraw_EditObject][18] = TextDrawCreate(409.500000, 109.111068 + (84.0 * 2.0), "X");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][18], 0.752999, 3.385778);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][18], (409.500000 + 22.0), 30.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][18], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][18], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][18], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][18], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][18], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][18], 2);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][18], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][18], 0);
	TextDrawSetSelectable(EditObjectTextdraw[textdraw_EditObject][18], true);

	EditObjectTextdraw[textdraw_EditObject][19] = TextDrawCreate(461.403900, 103.366630 + (84.0 * 2.0), "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][19], 0.000000, 4.999997);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][19], 514.903015, 0.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][19], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][19], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_EditObject][19], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_EditObject][19], 150);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][19], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][19], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][19], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][19], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][19], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][19], 0);

	EditObjectTextdraw[textdraw_EditObject][20] = TextDrawCreate(478.104187, 109.111068 + (84.0 * 2.0), "Y");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][20], 0.752999, 3.385778);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][20], (478.104187 + 22.0), 30.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][20], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][20], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][20], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][20], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][20], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][20], 2);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][20], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][20], 0);
	TextDrawSetSelectable(EditObjectTextdraw[textdraw_EditObject][20], true);

	EditObjectTextdraw[textdraw_EditObject][21] = TextDrawCreate(528.802856, 103.366630 + (84.0 * 2.0), "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][21], 0.000000, 4.999997);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][21], 582.286560, 0.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][21], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][21], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_EditObject][21], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_EditObject][21], 150);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][21], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][21], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][21], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][21], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][21], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][21], 0);

	EditObjectTextdraw[textdraw_EditObject][22] = TextDrawCreate(546.404113, 109.622131 + (84.0 * 2.0), "Z");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][22], 0.752999, 3.385778);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][22], (546.404113 + 22.0), 30.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][22], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][22], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][22], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][22], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][22], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][22], 2);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][22], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][22], 0);
	TextDrawSetSelectable(EditObjectTextdraw[textdraw_EditObject][22], true);

	EditObjectTextdraw[textdraw_EditObject][23] = TextDrawCreate(622.301147, 89.255584 + (84.0 * 2.0), "Escala");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][23], 0.282000, 1.214221);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][23], 3);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][23], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][23], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][23], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][23], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][23], 2);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][23], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][23], 0);

	EditObjectTextdraw[textdraw_EditObject][24] = TextDrawCreate(2.399955, 193.111114, "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][24], 0.000000, 7.149992);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][24], 228.000000, 0.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][24], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][24], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_EditObject][24], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_EditObject][24], 673720575);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][24], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][24], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][24], 1010580735);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][24], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][24], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][24], 0);

	EditObjectTextdraw[textdraw_EditObject][25] = TextDrawCreate(5.500000, 199.333343, "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][25], 0.000000, 5.750000);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][25], 67.000000, 0.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][25], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][25], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_EditObject][25], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_EditObject][25], 155);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][25], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][25], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][25], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][25], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][25], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][25], 0);

	EditObjectTextdraw[textdraw_EditObject][26] = TextDrawCreate(160.800323, 199.288970, "box");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][26], 0.000000, 5.850001);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][26], 224.350906, 0.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][26], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][26], -1);
	TextDrawUseBox(EditObjectTextdraw[textdraw_EditObject][26], 1);
	TextDrawBoxColor(EditObjectTextdraw[textdraw_EditObject][26], 155);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][26], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][26], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][26], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][26], 1);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][26], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][26], 0);

	EditObjectTextdraw[textdraw_EditObject][27] = TextDrawCreate(22.500000, 207.422210, "+");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][27], 0.902499, 3.572444);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][27], (22.500000 + 22.0), 30.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][27], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][27], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][27], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][27], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][27], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][27], 2);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][27], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][27], 0);
	TextDrawSetSelectable(EditObjectTextdraw[textdraw_EditObject][27], true);

	EditObjectTextdraw[textdraw_EditObject][28] = TextDrawCreate(188.200317, 207.622222, "-");
	TextDrawLetterSize(EditObjectTextdraw[textdraw_EditObject][28], 0.902499, 3.572444);
	TextDrawTextSize(EditObjectTextdraw[textdraw_EditObject][28], (188.200317 + 22.0), 30.000000);
	TextDrawAlignment(EditObjectTextdraw[textdraw_EditObject][28], 1);
	TextDrawColor(EditObjectTextdraw[textdraw_EditObject][28], -1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][28], 0);
	TextDrawSetOutline(EditObjectTextdraw[textdraw_EditObject][28], 0);
	TextDrawBackgroundColor(EditObjectTextdraw[textdraw_EditObject][28], 255);
	TextDrawFont(EditObjectTextdraw[textdraw_EditObject][28], 2);
	TextDrawSetProportional(EditObjectTextdraw[textdraw_EditObject][28], 1);
	TextDrawSetShadow(EditObjectTextdraw[textdraw_EditObject][28], 0);
	TextDrawSetSelectable(EditObjectTextdraw[textdraw_EditObject][28], true);

    return Y_HOOKS_CONTINUE_RETURN_1;
}

hook OnPlayerConnect(playerid)
{
    PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][0] = CreatePlayerTextDraw(playerid, 120.699897, 209.921722, "1000.0");
	PlayerTextDrawLetterSize(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][0], 0.544000, 2.290668);
	PlayerTextDrawTextSize(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][0], 120.699897 + (60.0), 10.0);
	PlayerTextDrawAlignment(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][0], 2);
	PlayerTextDrawColor(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][0], -1);
	PlayerTextDrawSetShadow(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][0], 0);
	PlayerTextDrawSetOutline(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][0], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][0], 255);
	PlayerTextDrawFont(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][0], 2);
	PlayerTextDrawSetProportional(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][0], 1);
	PlayerTextDrawSetShadow(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][0], 0);
	PlayerTextDrawSetSelectable(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][0], true);

	PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][1] = CreatePlayerTextDraw(playerid, 120.499900, 227.722808, "Posicion_x");
	PlayerTextDrawLetterSize(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][1], 0.231998, 1.083554);
	PlayerTextDrawAlignment(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][1], 2);
	PlayerTextDrawColor(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][1], -1);
	PlayerTextDrawSetShadow(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][1], 0);
	PlayerTextDrawSetOutline(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][1], 0);
	PlayerTextDrawBackgroundColor(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][1], 255);
	PlayerTextDrawFont(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][1], 2);
	PlayerTextDrawSetProportional(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][1], 1);
	PlayerTextDrawSetShadow(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][1], 0);
    
    return Y_HOOKS_CONTINUE_RETURN_1;
}

hook OnPlayerClickPlayerTD(playerid, PlayerText:playertextid)
{
	if(eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_ATTCH] > 0)
	{
		if(playertextid == PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][0])
		{
			eo_ShowDialog(playerid, DIALOG_CHANGE_V_EDITOB);
			return 1;
		}
		//return 1;
	}

    return Y_HOOKS_CONTINUE_RETURN_1;
}

hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
    switch(dialogid)
    {
        case DIALOG_CHANGE_V_EDITOB:
		{
			if(response)
			{
				if(eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_ATTCH] > 0)
				{
					new type = eo_PLAYER_TEMP[playerid][pt_EDIT_OB_TYPE], cord = eo_PLAYER_TEMP[playerid][pt_EDIT_OB_CORD];

					if(type >= 0 && type <= 2 && cord >= 0 && cord <= 3)
					{
						new Float: value = 0.0;

						if(!sscanf(inputtext, "f", value))
						{
							PLAYER_EOBJ_INFO_U[playerid][type][cord] = value;
						}
						else eo_ShowDialog(playerid, DIALOG_CHANGE_V_EDITOB);
					}
				}	
			}
			return 1;
		}
    }
    return Y_HOOKS_CONTINUE_RETURN_1;
}

hook OnPlayerClickTextDraw(playerid, Text:clickedid)
{
    if(clickedid == Text:INVALID_TEXT_DRAW || clickedid == EditObjectTextdraw[textdraw_ExitSelection][1])
    {
		if(clickedid == EditObjectTextdraw[textdraw_ExitSelection][1])
			eo_CancelSelectTD(playerid);
		else
			eo_CancelSelectTD(playerid, true);

		if(eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_ATTCH] > 0)
		{
			SetCameraBehindPlayer(playerid);
			ToggleEditObject(playerid, false);
			SendEditAOBResponse(playerid, 0);

			return Y_HOOKS_CONTINUE_RETURN_1;
		}
    }

    if(eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_ATTCH] > 0)
	{
		new const list_actions[][] = {{2, 4, 6}, {10, 12, 14}, {18, 20, 22}};
		//new const Float: angle_actions[][] = {{90.0, 0.0, 90.0}, {90.0, 0.0, 90.0}, {90.0, 0.0, 90.0}};
		new type = -1, cord = -1;

		for(new i; i < sizeof(list_actions); i++)
		{
			for(new j; j < sizeof(list_actions[]); j++)
			{
				if(clickedid == EditObjectTextdraw[textdraw_EditObject][list_actions[i][j]])
				{
					cord = j;
					break;
				}
			}

			if(cord != -1)
			{
				type = i;
				break;
			}
		}

		if(type != -1 && cord != -1)
		{
			eo_PLAYER_TEMP[playerid][pt_EDIT_OB_TYPE] = type;
			eo_PLAYER_TEMP[playerid][pt_EDIT_OB_CORD] = cord;
			//ChangeCameraToPlayer(playerid, angle_actions[type][cord], GetZoneToBodyPart(PLAYER_EOBJ_MODELID[playerid][1]));
			UpdateEditObjectProp(playerid);
			return 1;
		}

		new Float: rest = 0.1;

		if(eo_PLAYER_TEMP[playerid][pt_EDIT_OB_TYPE] >= 0 && eo_PLAYER_TEMP[playerid][pt_EDIT_OB_TYPE] <= 2 && eo_PLAYER_TEMP[playerid][pt_EDIT_OB_CORD] >= 0 && eo_PLAYER_TEMP[playerid][pt_EDIT_OB_CORD] <= 2)
			rest = PLAYER_EOBJ_INFO_U[playerid][eo_PLAYER_TEMP[playerid][pt_EDIT_OB_TYPE]][eo_PLAYER_TEMP[playerid][pt_EDIT_OB_CORD]];

		if(clickedid == EditObjectTextdraw[textdraw_ChangeSelection][1])
		{
			eo_PLAYER_TEMP[playerid][pt_EDIT_OB_ANGLE] += 90.0;
			eo_PLAYER_TEMP[playerid][pt_EDIT_OB_ANGLE] = (eo_PLAYER_TEMP[playerid][pt_EDIT_OB_ANGLE] % 360.0);

			ChangeCameraToPlayer(
				playerid, eo_PLAYER_TEMP[playerid][pt_EDIT_OB_ANGLE], GetZoneToBodyPart(PLAYER_EOBJ_MODELID[playerid][1]),
				eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_TYPE], eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_SUBTYPE], (eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_ATTCH] - 1)
			);

			return 1;
		}

		if(clickedid == EditObjectTextdraw[textdraw_SaveSelection][1])
		{
			SetCameraBehindPlayer(playerid);
			CancelSelectTextDrawEx(playerid);
			ToggleEditObject(playerid, false);
			SendEditAOBResponse(playerid, 1);
			return 1;
		}

		if(clickedid == EditObjectTextdraw[textdraw_EditObject][27]) // sumar
		{
			GiveEditObjectProp(playerid, rest);
			UpdateEditObjectProp(playerid);
			return 1;
		}
		else if(clickedid == EditObjectTextdraw[textdraw_EditObject][28]) // restar
		{
			GiveEditObjectProp(playerid, -rest);
			UpdateEditObjectProp(playerid);
			return 1;
		}

		//return 1;
	}

    return Y_HOOKS_CONTINUE_RETURN_1;
}

static stock eo_ShowDialog(playerid, dialogid)
{
    switch(dialogid)
    {
        case DIALOG_CHANGE_V_EDITOB:
        {
            if(eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_ATTCH] > 0)
			{
				new type = eo_PLAYER_TEMP[playerid][pt_EDIT_OB_TYPE], cord = eo_PLAYER_TEMP[playerid][pt_EDIT_OB_CORD];

				if(type >= 0 && type <= 2 && cord >= 0 && cord <= 3)
				{
					new string[30];
					format(string, sizeof(string), "Valor actual del offset: %0.2f", PLAYER_EOBJ_INFO_U[playerid][type][cord]);

					ShowPlayerDialog(playerid, dialogid, DIALOG_STYLE_INPUT, "Selecciona el offset.", string, ">>", "-");
				}
			}
        }
    }
    return 1;
}

static stock ToggleEditObject(playerid, bool: show, max = 3)
{
	if(show)
	{
		for(new i; i < (max * 8); i++)
			TextDrawShowForPlayer(playerid, EditObjectTextdraw[textdraw_EditObject][i]);

		for(new i = (3 * 8); i < sizeof(EditObjectTextdraw[textdraw_EditObject]); i++)
			TextDrawShowForPlayer(playerid, EditObjectTextdraw[textdraw_EditObject][i]);

		for(new i; i < 2; i++)
		{
			PlayerTextDrawShow(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][i]);
			TextDrawShowForPlayer(playerid, EditObjectTextdraw[textdraw_SaveSelection][i]);
			TextDrawShowForPlayer(playerid, EditObjectTextdraw[textdraw_ChangeSelection][i]);
		}
	}
	else
	{
		for(new i; i < sizeof(EditObjectTextdraw[textdraw_EditObject]); i++)
			TextDrawHideForPlayer(playerid, EditObjectTextdraw[textdraw_EditObject][i]);
		
		for(new i; i < 2; i++)
		{
			PlayerTextDrawHide(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][i]);
			TextDrawHideForPlayer(playerid, EditObjectTextdraw[textdraw_SaveSelection][i]);
			TextDrawHideForPlayer(playerid, EditObjectTextdraw[textdraw_ChangeSelection][i]);
		}
	}
	return 1;
}

static stock GetZoneToBodyPart(body)
{
	switch(body)
	{
		case 1, 3, 4, 5, 6, 13, 14: return 1;
		case 2, 15, 16, 17, 18: return 0;
		case 7, 8, 9, 10, 11, 12: return 2;
	}

	return 0;
}

static stock ChangeCameraToPlayer(playerid, Float: angle = 90.0, zone = 0, type = 0, subtype = 0, id = -1)
{
	new Float: Pos[3], Float: zoom = 3.0, Float: gPos[3], Float: subAngle;

	switch(type)
	{
		case 0: // Attached
		{
			GetPlayerPos(playerid, Pos[0], Pos[1], Pos[2]);
			GetPlayerFacingAngle(playerid, subAngle);
		}

		case 1: // Object
		{
			if(id == -1) return 0;

			if(subtype)
			{
				GetDynamicObjectPos(id, Pos[0], Pos[1], Pos[2]);
			}
			else
			{
				GetObjectPos(id, Pos[0], Pos[1], Pos[2]);
			}
		}

		case 2: // Player Object
		{
			if(id == -1) return 0;
			GetPlayerObjectPos(playerid, id, Pos[0], Pos[1], Pos[2]);
		}
	}

	gPos = Pos;

	subAngle = ((360.00000 - (subAngle % 360.00000)) + angle) % 360.00000;

	switch(zone)
	{
		case 0:
		{
			Pos[2] += 1.0;
			gPos[2] += 0.5;
			zoom = 2.0;
		}
		//case 1:
		//{
			//gPos[2] -= 2.0;
		//}
		case 2:
		{
			gPos[2] -= 1.0;
		}
	}
	
	Pos[0] += (zoom * floatsin(subAngle, degrees));
	Pos[1] += (zoom * floatcos(subAngle, degrees));

	SetPlayerCameraPos(playerid, Pos[0], Pos[1], Pos[2]);
	SetPlayerCameraLookAt(playerid, gPos[0], gPos[1], gPos[2]);

	return 1;
}

static stock SendEditAOBResponse(playerid, response)
{
	if(eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_ATTCH] > 0)
	{
		TogglePlayerControllable(playerid, true);

		switch(eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_TYPE])
		{
			case 0:
			{
				if(response != EDIT_RESPONSE_UPDATE)
				{
					CallLocalFunction(
						"OnPlayerEditAttachedObject", "iiiiifffffffff",
						playerid, response, (eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_ATTCH]-1), PLAYER_EOBJ_MODELID[playerid][0], PLAYER_EOBJ_MODELID[playerid][1],
						PLAYER_EOBJ_INFO[playerid][0][0], PLAYER_EOBJ_INFO[playerid][0][1], PLAYER_EOBJ_INFO[playerid][0][2],
						PLAYER_EOBJ_INFO[playerid][1][0], PLAYER_EOBJ_INFO[playerid][1][1], PLAYER_EOBJ_INFO[playerid][1][2],
						PLAYER_EOBJ_INFO[playerid][2][0], PLAYER_EOBJ_INFO[playerid][2][1], PLAYER_EOBJ_INFO[playerid][2][2]
					);
				}
			}
			case 1:
			{
				if(eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_SUBTYPE])
				{
					CallLocalFunction(
						"OnPlayerEditDynamicObject", "iiiffffff",
						playerid, (eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_ATTCH] - 1), response,
						//(PLAYER_EOBJ_INFO[playerid][0][0] - PLAYER_EOBJ_INFO[playerid][3][0]), (PLAYER_EOBJ_INFO[playerid][0][1] - PLAYER_EOBJ_INFO[playerid][3][1]), (PLAYER_EOBJ_INFO[playerid][0][2] - PLAYER_EOBJ_INFO[playerid][3][2]),
						//(PLAYER_EOBJ_INFO[playerid][1][0] - PLAYER_EOBJ_INFO[playerid][4][0]), (PLAYER_EOBJ_INFO[playerid][1][1] - PLAYER_EOBJ_INFO[playerid][4][1]), (PLAYER_EOBJ_INFO[playerid][1][2] - PLAYER_EOBJ_INFO[playerid][4][2])
						(PLAYER_EOBJ_INFO[playerid][0][0]), (PLAYER_EOBJ_INFO[playerid][0][1]), (PLAYER_EOBJ_INFO[playerid][0][2]),
						(PLAYER_EOBJ_INFO[playerid][1][0]), (PLAYER_EOBJ_INFO[playerid][1][1]), (PLAYER_EOBJ_INFO[playerid][1][2])
					);
				}
				else
				{
					CallLocalFunction(
						"OnPlayerEditObject", "iiiiffffff",
						playerid, 0, (eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_ATTCH] - 1), response,
						//(PLAYER_EOBJ_INFO[playerid][0][0] - PLAYER_EOBJ_INFO[playerid][3][0]), (PLAYER_EOBJ_INFO[playerid][0][1] - PLAYER_EOBJ_INFO[playerid][3][1]), (PLAYER_EOBJ_INFO[playerid][0][2] - PLAYER_EOBJ_INFO[playerid][3][2]),
						//(PLAYER_EOBJ_INFO[playerid][1][0] - PLAYER_EOBJ_INFO[playerid][4][0]), (PLAYER_EOBJ_INFO[playerid][1][1] - PLAYER_EOBJ_INFO[playerid][4][1]), (PLAYER_EOBJ_INFO[playerid][1][2] - PLAYER_EOBJ_INFO[playerid][4][2])
						(PLAYER_EOBJ_INFO[playerid][0][0]), (PLAYER_EOBJ_INFO[playerid][0][1]), (PLAYER_EOBJ_INFO[playerid][0][2]),
						(PLAYER_EOBJ_INFO[playerid][1][0]), (PLAYER_EOBJ_INFO[playerid][1][1]), (PLAYER_EOBJ_INFO[playerid][1][2])
					);
				}
			}
			case 2:
			{
				CallLocalFunction(
					"OnPlayerEditObject", "iiiiffffff",
					playerid, 1, (eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_ATTCH] - 1), response,
					//(PLAYER_EOBJ_INFO[playerid][0][0] - PLAYER_EOBJ_INFO[playerid][3][0]), (PLAYER_EOBJ_INFO[playerid][0][1] - PLAYER_EOBJ_INFO[playerid][3][1]), (PLAYER_EOBJ_INFO[playerid][0][2] - PLAYER_EOBJ_INFO[playerid][3][2]),
					//(PLAYER_EOBJ_INFO[playerid][1][0] - PLAYER_EOBJ_INFO[playerid][4][0]), (PLAYER_EOBJ_INFO[playerid][1][1] - PLAYER_EOBJ_INFO[playerid][4][1]), (PLAYER_EOBJ_INFO[playerid][1][2] - PLAYER_EOBJ_INFO[playerid][4][2])
					(PLAYER_EOBJ_INFO[playerid][0][0]), (PLAYER_EOBJ_INFO[playerid][0][1]), (PLAYER_EOBJ_INFO[playerid][0][2]),
					(PLAYER_EOBJ_INFO[playerid][1][0]), (PLAYER_EOBJ_INFO[playerid][1][1]), (PLAYER_EOBJ_INFO[playerid][1][2])
				);
			}
		}

		if(response != EDIT_RESPONSE_UPDATE)
		{
			eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_ATTCH] = 0;
			eo_PLAYER_TEMP[playerid][pt_EDIT_OB_TYPE] = 0;
			eo_PLAYER_TEMP[playerid][pt_EDIT_OB_CORD] = 0;
			eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_TYPE] = 0;
			eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_SUBTYPE] = 0;
			PLAYER_EOBJ_MODELID[playerid][0] = 0;
			PLAYER_EOBJ_MODELID[playerid][1] = 0;
			PLAYER_EOBJ_INFO[playerid][0][0] = 0.0; PLAYER_EOBJ_INFO[playerid][0][1] = 0.0; PLAYER_EOBJ_INFO[playerid][0][2] = 0.0;
			PLAYER_EOBJ_INFO[playerid][1][0] = 0.0; PLAYER_EOBJ_INFO[playerid][1][1] = 0.0; PLAYER_EOBJ_INFO[playerid][1][2] = 0.0;
			PLAYER_EOBJ_INFO[playerid][2][0] = 0.0; PLAYER_EOBJ_INFO[playerid][2][1] = 0.0; PLAYER_EOBJ_INFO[playerid][2][2] = 0.0;
			//PLAYER_EOBJ_INFO[playerid][3][0] = 0.0; PLAYER_EOBJ_INFO[playerid][3][1] = 0.0; PLAYER_EOBJ_INFO[playerid][3][2] = 0.0;
			//PLAYER_EOBJ_INFO[playerid][4][0] = 0.0; PLAYER_EOBJ_INFO[playerid][4][1] = 0.0; PLAYER_EOBJ_INFO[playerid][4][2] = 0.0;
			//PLAYER_EOBJ_INFO[playerid][5][0] = 0.0; PLAYER_EOBJ_INFO[playerid][5][1] = 0.0; PLAYER_EOBJ_INFO[playerid][5][2] = 0.0;
			PLAYER_EOBJ_COLOR[playerid][0] = 0; 	PLAYER_EOBJ_COLOR[playerid][1] = 0;
		}
	}
	return 1;
}

static stock UpdateEditObjectProp(playerid)
{
	new type = eo_PLAYER_TEMP[playerid][pt_EDIT_OB_TYPE], cord = eo_PLAYER_TEMP[playerid][pt_EDIT_OB_CORD];

	if(type >= 0 && type <= 2 && cord >= 0 && cord <= 2)
	{
		new Float: value = PLAYER_EOBJ_INFO[playerid][type][cord], string[40], szType[10], szCord[2];

		switch(type)
		{
			case 0: szType = "Posicion";
			case 1: szType = "Rotacion";
			case 2: szType = "Escala";
		}

		switch(cord)
		{
			case 0: szCord = "X";
			case 1: szCord = "Y";
			case 2: szCord = "Z";
		}

		format(string, sizeof(string), "%0.2f", value);
		PlayerTextDrawSetString(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][0], string);

		format(string, sizeof(string), "%s - %s", szType, szCord);
		PlayerTextDrawSetString(playerid, PlayerEditObjectTextdraw[playerid][ptextdraw_EditObject][1], string);
	}
	return 1;
}

static stock GiveEditObjectProp(playerid, Float: value)
{
	new index = eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_ATTCH]-1;

	new const Float: max_dist = 10.0;

	if(index != -1)
	{
		new type = eo_PLAYER_TEMP[playerid][pt_EDIT_OB_TYPE], cord = eo_PLAYER_TEMP[playerid][pt_EDIT_OB_CORD];

		if(type >= 0 && type <= 2 && cord >= 0 && cord <= 2)
		{
			new Float: temp_vPos[3], bool: valid_pass = true;

			temp_vPos = PLAYER_EOBJ_INFO[playerid][type];
			temp_vPos[cord] += value;

			if(type == 0)
			{
				new Float: dist_ac = floatsqroot( (floatpower((temp_vPos[0] - PLAYER_EOBJ_INFO[playerid][3][0]), 2.0)) + (floatpower((temp_vPos[1] - PLAYER_EOBJ_INFO[playerid][3][1]), 2.0)) + (floatpower((temp_vPos[2] - PLAYER_EOBJ_INFO[playerid][3][2]), 2.0)));
				valid_pass = ( dist_ac <= max_dist );
			}

			if(valid_pass)
			{
				PLAYER_EOBJ_INFO[playerid][type] = temp_vPos;
			}
		}

		switch(eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_TYPE])
		{
			case 0: // attach
			{
				new modelid = PLAYER_EOBJ_MODELID[playerid][0];

				if(modelid != 0)
				{
					new bone = PLAYER_EOBJ_MODELID[playerid][1];

					RemovePlayerAttachedObject(playerid, index);
					SetPlayerAttachedObject(
						playerid, index,
						modelid, bone,
						PLAYER_EOBJ_INFO[playerid][0][0], PLAYER_EOBJ_INFO[playerid][0][1], PLAYER_EOBJ_INFO[playerid][0][2],
						PLAYER_EOBJ_INFO[playerid][1][0], PLAYER_EOBJ_INFO[playerid][1][1], PLAYER_EOBJ_INFO[playerid][1][2],
						PLAYER_EOBJ_INFO[playerid][2][0], PLAYER_EOBJ_INFO[playerid][2][1], PLAYER_EOBJ_INFO[playerid][2][2],
						PLAYER_EOBJ_COLOR[playerid][0], PLAYER_EOBJ_COLOR[playerid][1]
					);

					SendEditAOBResponse(playerid, 2);
				}
			}

			case 1: // object
			{
				if(eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_SUBTYPE])
				{
					SetDynamicObjectPos(index, PLAYER_EOBJ_INFO[playerid][0][0], PLAYER_EOBJ_INFO[playerid][0][1], PLAYER_EOBJ_INFO[playerid][0][2]);
					SetDynamicObjectRot(index, PLAYER_EOBJ_INFO[playerid][1][0], PLAYER_EOBJ_INFO[playerid][1][1], PLAYER_EOBJ_INFO[playerid][1][2]);
				}
				else
				{
					SetObjectPos(index, PLAYER_EOBJ_INFO[playerid][0][0], PLAYER_EOBJ_INFO[playerid][0][1], PLAYER_EOBJ_INFO[playerid][0][2]);
					SetObjectRot(index, PLAYER_EOBJ_INFO[playerid][1][0], PLAYER_EOBJ_INFO[playerid][1][1], PLAYER_EOBJ_INFO[playerid][1][2]);
				}

				ChangeCameraToPlayer(playerid, eo_PLAYER_TEMP[playerid][pt_EDIT_OB_ANGLE], .type = 1, .subtype = 1, .id = index);
				SendEditAOBResponse(playerid, 2);
			}

			case 2: // player object
			{
				SetPlayerObjectPos(playerid, index, PLAYER_EOBJ_INFO[playerid][0][0], PLAYER_EOBJ_INFO[playerid][0][1], PLAYER_EOBJ_INFO[playerid][0][2]);
				SetPlayerObjectRot(playerid, index, PLAYER_EOBJ_INFO[playerid][1][0], PLAYER_EOBJ_INFO[playerid][1][1], PLAYER_EOBJ_INFO[playerid][1][2]);

				ChangeCameraToPlayer(playerid, eo_PLAYER_TEMP[playerid][pt_EDIT_OB_ANGLE], .type = 2, .id = index);
				SendEditAOBResponse(playerid, 2);
			}
		}
	}
	return 1;
}

stock eo_EditDynamicObject(playerid, objectid)
{
	eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_TYPE] = 1;
	eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_SUBTYPE] = 1;
	TogglePlayerControllable(playerid, false);

	ToggleEditObject(playerid, true, 2);
	eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_ATTCH] = objectid + 1;
	GetDynamicObjectPos(objectid, PLAYER_EOBJ_INFO[playerid][0][0], PLAYER_EOBJ_INFO[playerid][0][1], PLAYER_EOBJ_INFO[playerid][0][2]);
	GetDynamicObjectRot(objectid, PLAYER_EOBJ_INFO[playerid][1][0], PLAYER_EOBJ_INFO[playerid][1][1], PLAYER_EOBJ_INFO[playerid][1][2]);

	PLAYER_EOBJ_INFO_U[playerid][0][0] = 0.1; PLAYER_EOBJ_INFO_U[playerid][0][1] = 0.1; PLAYER_EOBJ_INFO_U[playerid][0][2] = 0.1;
	PLAYER_EOBJ_INFO_U[playerid][1][0] = 10.0; PLAYER_EOBJ_INFO_U[playerid][1][1] = 10.0; PLAYER_EOBJ_INFO_U[playerid][1][2] = 10.0;

	PLAYER_EOBJ_INFO[playerid][3] = PLAYER_EOBJ_INFO[playerid][0];
	PLAYER_EOBJ_INFO[playerid][4] = PLAYER_EOBJ_INFO[playerid][1];
	PLAYER_EOBJ_INFO[playerid][5] = PLAYER_EOBJ_INFO[playerid][2];

	eo_PLAYER_TEMP[playerid][pt_EDIT_OB_ANGLE] = 0.0;

	ChangeCameraToPlayer(playerid, eo_PLAYER_TEMP[playerid][pt_EDIT_OB_ANGLE], .type = 1, .subtype = 1, .id = objectid);

	UpdateEditObjectProp(playerid);

	SelectTextDrawEx(playerid, 0xFF00EEFF);
	return 1;
}

stock eo_EditPlayerObject(playerid, objectid)
{
	eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_TYPE] = 2;
	TogglePlayerControllable(playerid, false);
	ToggleEditObject(playerid, true, 2);
	eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_ATTCH] = objectid + 1;
	GetPlayerObjectPos(playerid, objectid, PLAYER_EOBJ_INFO[playerid][0][0], PLAYER_EOBJ_INFO[playerid][0][1], PLAYER_EOBJ_INFO[playerid][0][2]);
	GetPlayerObjectRot(playerid, objectid, PLAYER_EOBJ_INFO[playerid][1][0], PLAYER_EOBJ_INFO[playerid][1][1], PLAYER_EOBJ_INFO[playerid][1][2]);

	PLAYER_EOBJ_INFO_U[playerid][0][0] = 0.1; PLAYER_EOBJ_INFO_U[playerid][0][1] = 0.1; PLAYER_EOBJ_INFO_U[playerid][0][2] = 0.1;
	PLAYER_EOBJ_INFO_U[playerid][1][0] = 10.0; PLAYER_EOBJ_INFO_U[playerid][1][1] = 10.0; PLAYER_EOBJ_INFO_U[playerid][1][2] = 10.0;

	PLAYER_EOBJ_INFO[playerid][3] = PLAYER_EOBJ_INFO[playerid][0];
	PLAYER_EOBJ_INFO[playerid][4] = PLAYER_EOBJ_INFO[playerid][1];
	PLAYER_EOBJ_INFO[playerid][5] = PLAYER_EOBJ_INFO[playerid][2];

	eo_PLAYER_TEMP[playerid][pt_EDIT_OB_ANGLE] = 0.0;

	ChangeCameraToPlayer(playerid, eo_PLAYER_TEMP[playerid][pt_EDIT_OB_ANGLE], .type = 2, .id = objectid);

	UpdateEditObjectProp(playerid);

	SelectTextDrawEx(playerid, 0xFF00EEFF);
	return 1;
}

stock eo_EditAttachedObject(playerid, index)
{
	eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_TYPE] = 0;
	TogglePlayerControllable(playerid, false);

	eo_PLAYER_TEMP[playerid][pt_EDIT_OBJECT_ATTCH] = index + 1;
	ToggleEditObject(playerid, true);
	GetPlayerAttachedObject(
		playerid, index,
		PLAYER_EOBJ_MODELID[playerid][0],
		PLAYER_EOBJ_MODELID[playerid][1], 
		PLAYER_EOBJ_INFO[playerid][0][0], PLAYER_EOBJ_INFO[playerid][0][1], PLAYER_EOBJ_INFO[playerid][0][2],
		PLAYER_EOBJ_INFO[playerid][1][0], PLAYER_EOBJ_INFO[playerid][1][1], PLAYER_EOBJ_INFO[playerid][1][2],
		PLAYER_EOBJ_INFO[playerid][2][0], PLAYER_EOBJ_INFO[playerid][2][1], PLAYER_EOBJ_INFO[playerid][2][2],
		PLAYER_EOBJ_COLOR[playerid][0], PLAYER_EOBJ_COLOR[playerid][1]
	);

	ChangeCameraToPlayer(playerid, 0.0, GetZoneToBodyPart(PLAYER_EOBJ_MODELID[playerid][1]));

	PLAYER_EOBJ_INFO_U[playerid][0][0] = 0.01; PLAYER_EOBJ_INFO_U[playerid][1][0] = 10.0; PLAYER_EOBJ_INFO_U[playerid][2][0] = 0.01;
	PLAYER_EOBJ_INFO_U[playerid][0][1] = 0.01; PLAYER_EOBJ_INFO_U[playerid][1][1] = 10.0; PLAYER_EOBJ_INFO_U[playerid][2][1] = 0.01;
	PLAYER_EOBJ_INFO_U[playerid][0][2] = 0.01; PLAYER_EOBJ_INFO_U[playerid][1][2] = 10.0; PLAYER_EOBJ_INFO_U[playerid][2][2] = 0.01;

	PLAYER_EOBJ_INFO[playerid][3] = PLAYER_EOBJ_INFO[playerid][0];
	PLAYER_EOBJ_INFO[playerid][4] = PLAYER_EOBJ_INFO[playerid][1];
	PLAYER_EOBJ_INFO[playerid][5] = PLAYER_EOBJ_INFO[playerid][2];

	UpdateEditObjectProp(playerid);

	SelectTextDrawEx(playerid, 0xFF00EEFF);
	return 1;
}

stock eo_SelectTD(playerid, color)
{
	TextDrawShowForPlayer(playerid, EditObjectTextdraw[textdraw_ExitSelection][0]);
	TextDrawShowForPlayer(playerid, EditObjectTextdraw[textdraw_ExitSelection][1]);

	return SelectTextDraw(playerid, color);
}

stock eo_CancelSelectTD(playerid, bool: cancel = false)
{
	TextDrawHideForPlayer(playerid, EditObjectTextdraw[textdraw_ExitSelection][0]);
	TextDrawHideForPlayer(playerid, EditObjectTextdraw[textdraw_ExitSelection][1]);

	if(!cancel)
		return CancelSelectTextDraw(playerid);
    return 1;
}

// Incompatabilidad con el Move.

stock eo_MoveDynamicObject(&objectid, Float:x, Float:y, Float:z, Float:speed, Float:rx = -1000.0, Float:ry = -1000.0, Float:rz = -1000.0)
{
	#pragma unused speed

	new modelid, vw, interior, playerid;
	modelid = Streamer_GetIntData(STREAMER_TYPE_OBJECT, objectid, E_STREAMER_MODEL_ID);
	vw = Streamer_GetIntData(STREAMER_TYPE_OBJECT, objectid, E_STREAMER_WORLD_ID);
	interior = Streamer_GetIntData(STREAMER_TYPE_OBJECT, objectid, E_STREAMER_INTERIOR_ID);
	playerid = Streamer_GetIntData(STREAMER_TYPE_OBJECT, objectid, E_STREAMER_PLAYER_ID);
	
	DestroyDynamicObject(objectid);
	objectid = CreateDynamicObject(modelid, x, y, z, rx, ry, rz, vw, interior, playerid);
	return 1;
}

// Adherencias

#if defined _ALS_SelectTextDraw
    #undef SelectTextDraw
#else
    #define _ALS_SelectTextDraw
#endif
#define SelectTextDraw eo_SelectTD

#if defined _ALS_CancelSelectTextDraw
    #undef CancelSelectTextDraw
#else
    #define _ALS_CancelSelectTextDraw
#endif
#define CancelSelectTextDraw eo_CancelSelectTD

#if defined _ALS_EditAttachedObject
    #undef EditAttachedObject
#else
    #define _ALS_EditAttachedObject
#endif
#define EditAttachedObject eo_EditAttachedObject

#if defined _ALS_EditPlayerObject
    #undef EditPlayerObject
#else
    #define _ALS_EditPlayerObject
#endif
#define EditPlayerObject eo_EditPlayerObject

#if defined _ALS_EditDynamicObject
    #undef EditDynamicObject
#else
    #define _ALS_EditDynamicObject
#endif
#define EditDynamicObject eo_EditDynamicObject

#if defined _ALS_MoveDynamicObject
    #undef MoveDynamicObject
#else
    #define _ALS_MoveDynamicObject
#endif
#define MoveDynamicObject eo_MoveDynamicObject
