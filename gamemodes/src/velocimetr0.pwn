#include <a_samp>
#include <zcmd>

new Text:PublicTD[2];
new PlayerText:PlayerTD[MAX_PLAYERS][2];

public OnFilterScriptInit()
{
	PublicTD[0] = TextDrawCreate(221.000000, 384.000000, "i");
	TextDrawFont(PublicTD[0], 2);
	TextDrawLetterSize(PublicTD[0], 15.595792, 2.999994);
	TextDrawTextSize(PublicTD[0], 400.000000, 17.000000);
	TextDrawSetOutline(PublicTD[0], 0);
	TextDrawSetShadow(PublicTD[0], 0);
	TextDrawAlignment(PublicTD[0], 1);
	TextDrawColor(PublicTD[0], 852308531);
	TextDrawBackgroundColor(PublicTD[0], 255);
	TextDrawBoxColor(PublicTD[0], 50);
	TextDrawUseBox(PublicTD[0], 0);
	TextDrawSetProportional(PublicTD[0], 1);
	TextDrawSetSelectable(PublicTD[0], 0);

	PublicTD[1] = TextDrawCreate(221.000000, 402.000000, "i");
	TextDrawFont(PublicTD[1], 2);
	TextDrawLetterSize(PublicTD[1], 15.595792, 2.999994);
	TextDrawTextSize(PublicTD[1], 400.000000, 17.000000);
	TextDrawSetOutline(PublicTD[1], 0);
	TextDrawSetShadow(PublicTD[1], 0);
	TextDrawAlignment(PublicTD[1], 1);
	TextDrawColor(PublicTD[1], 852308531);
	TextDrawBackgroundColor(PublicTD[1], 255);
	TextDrawBoxColor(PublicTD[1], 50);
	TextDrawUseBox(PublicTD[1], 0);
	TextDrawSetProportional(PublicTD[1], 1);
	TextDrawSetSelectable(PublicTD[1], 0);

	return 1;
}

public OnFilterScriptExit()
{
	TextDrawDestroy(PublicTD[0]);
	TextDrawDestroy(PublicTD[1]);
	return 1;
}

public OnPlayerConnect(playerid)
{
	PlayerTD[playerid][0] = CreatePlayerTextDraw(playerid, 316.000000, 392.000000, "KM/H: 211");
	PlayerTextDrawFont(playerid, PlayerTD[playerid][0], 1);
	PlayerTextDrawLetterSize(playerid, PlayerTD[playerid][0], 0.375000, 1.600000);
	PlayerTextDrawTextSize(playerid, PlayerTD[playerid][0], 12.500000, 88.500000);
	PlayerTextDrawSetOutline(playerid, PlayerTD[playerid][0], 1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[playerid][0], 0);
	PlayerTextDrawAlignment(playerid, PlayerTD[playerid][0], 2);
	PlayerTextDrawColor(playerid, PlayerTD[playerid][0], -1);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[playerid][0], 255);
	PlayerTextDrawBoxColor(playerid, PlayerTD[playerid][0], 50);
	PlayerTextDrawUseBox(playerid, PlayerTD[playerid][0], 0);
	PlayerTextDrawSetProportional(playerid, PlayerTD[playerid][0], 1);
	PlayerTextDrawSetSelectable(playerid, PlayerTD[playerid][0], 0);

	PlayerTD[playerid][1] = CreatePlayerTextDraw(playerid, 316.000000, 410.000000, "GAS: 120");
	PlayerTextDrawFont(playerid, PlayerTD[playerid][1], 1);
	PlayerTextDrawLetterSize(playerid, PlayerTD[playerid][1], 0.375000, 1.600000);
	PlayerTextDrawTextSize(playerid, PlayerTD[playerid][1], 12.500000, 88.500000);
	PlayerTextDrawSetOutline(playerid, PlayerTD[playerid][1], 1);
	PlayerTextDrawSetShadow(playerid, PlayerTD[playerid][1], 0);
	PlayerTextDrawAlignment(playerid, PlayerTD[playerid][1], 2);
	PlayerTextDrawColor(playerid, PlayerTD[playerid][1], -1);
	PlayerTextDrawBackgroundColor(playerid, PlayerTD[playerid][1], 255);
	PlayerTextDrawBoxColor(playerid, PlayerTD[playerid][1], 50);
	PlayerTextDrawUseBox(playerid, PlayerTD[playerid][1], 0);
	PlayerTextDrawSetProportional(playerid, PlayerTD[playerid][1], 1);
	PlayerTextDrawSetSelectable(playerid, PlayerTD[playerid][1], 0);

	return 1;
}

public OnPlayerDisconnect(playerid, reason)
{
	PlayerTextDrawDestroy(playerid, PlayerTD[playerid][0]);
	PlayerTextDrawDestroy(playerid, PlayerTD[playerid][1]);
	return 1;
}

CMD:velocimetro(playerid)
{
	TextDrawShowForPlayer(playerid, PublicTD[0]);
	TextDrawShowForPlayer(playerid, PublicTD[1]);
	PlayerTextDrawShow(playerid, PlayerTD[playerid][0]);
	PlayerTextDrawShow(playerid, PlayerTD[playerid][1]);
	return 1;
}
