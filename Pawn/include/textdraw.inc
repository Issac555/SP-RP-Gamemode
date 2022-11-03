/*  textdraw.inc
 *
 *  (c) Copyright 2020, Heaven.
 *
*/

// **********************************************

#if defined _textdraw_included
	#endinput
#endif
#define _textdraw_included

#if !defined _samp_included
	#error "You'll need to include the a_samp.inc include file before the textdraw.inc file!"
#endif

// **********************************************

#define TEXTDRAW_TYPE_BOX	0
#define TEXTDRAW_TYPE_MSG	1

// **********************************************

static PlayerText:textdraw[MAX_PLAYERS][2];

// **********************************************

stock ShowTextDrawMessage(playerid, string[], type  = TEXTDRAW_TYPE_MSG, time = 3000)
{
	PlayerTextDrawSetString(playerid, textdraw[playerid][type], string);
	PlayerTextDrawShow(playerid, textdraw[playerid][type]);
		
	if(time > 3000) SetTimerEx("timerHideTextDrawMessage", time, false, "d", playerid);
	return 1;
}

stock HideTextDrawMessage(playerid)
{
	for(new i; i < 2; i++) PlayerTextDrawHide(playerid, textdraw[playerid][i]);
	return 1;
}

// **********************************************

public OnPlayerConnect(playerid)
{
	textdraw[playerid][0] = CreatePlayerTextDraw(playerid, 14.500016, 123.214759, "Shooting whilst you are crouching improves your accurary.");
	PlayerTextDrawLetterSize(playerid, textdraw[playerid][0], 0.288666, 1.521185);
	PlayerTextDrawTextSize(playerid, textdraw[playerid][0], 123.479888, 0.000000);
	PlayerTextDrawAlignment(playerid, textdraw[playerid][0], 1);
	PlayerTextDrawColor(playerid, textdraw[playerid][0], -1061109505);
	PlayerTextDrawUseBox(playerid, textdraw[playerid][0], 1);
	PlayerTextDrawBoxColor(playerid, textdraw[playerid][0], 200);
	PlayerTextDrawSetShadow(playerid, textdraw[playerid][0], 0);
	PlayerTextDrawBackgroundColor(playerid, textdraw[playerid][0], 255);
	PlayerTextDrawFont(playerid, textdraw[playerid][0], 1);
	PlayerTextDrawSetProportional(playerid, textdraw[playerid][0], 1);

	textdraw[playerid][1] = CreatePlayerTextDraw(playerid, 320.833282, 337.032623, "Use some cover, they're blasting like fools in this motherfucker!");
	PlayerTextDrawLetterSize(playerid, textdraw[playerid][1], 0.288666, 1.521185);
	PlayerTextDrawTextSize(playerid, textdraw[playerid][1], 0.000000, 236.000000);
	PlayerTextDrawAlignment(playerid, textdraw[playerid][1], 2);
	PlayerTextDrawColor(playerid, textdraw[playerid][1], -1052689);
	PlayerTextDrawSetShadow(playerid, textdraw[playerid][1], 1);
	PlayerTextDrawBackgroundColor(playerid, textdraw[playerid][1], 255);
	PlayerTextDrawFont(playerid, textdraw[playerid][1], 1);
	PlayerTextDrawSetProportional(playerid, textdraw[playerid][1], 1);

	CallLocalFunction("textdraw_OnPlayerConnect", "d", playerid);
	return 1;
}

#if defined _ALS_OnPlayerConnect
	#undef OnPlayerConnect
#else
	#define _ALS_OnPlayerConnect
#endif
#define OnPlayerConnect textdraw_OnPlayerConnect

forward textdraw_OnPlayerConnect(playerid);

forward timerHideTextDrawMessage(playerid);
public timerHideTextDrawMessage(playerid) return HideTextDrawMessage(playerid);