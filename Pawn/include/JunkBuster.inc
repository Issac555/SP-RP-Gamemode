/*
+---------------------------------------------------------------------------+
¦                        JunkBuster Anti-Cheat                              ¦
¦                                  by                                       ¦
¦                           Double-O-Seven                                  ¦
¦                                                                           ¦
¦ This is the JunkBuster Client include. Use it in all of your scripts!		¦
¦ IMPORTANT:                                                                ¦
¦   JunkBuster filterscripts must get loaded before all other scripts!      ¦
¦ Be careful: You must run the JunkBuster filterscript or none of the		¦
¦ functions below will work!                                                ¦
+---------------------------------------------------------------------------+
*/

#if defined _JB_included
	#endinput
#endif
#define _JB_included

#include <a_samp>

//==============================================================================

// For better compatibility for example with LuxAdmin.

#if !defined USE_NEW_JB_FUNCTIONS
	#define USE_NEW_JB_FUNCTIONS 	true // Set to false if you don't want to use them or if you are using LuxAdmin
#endif

//==============================================================================

#define PUBLIC:%0(%1) 	forward %0(%1); \
						public %0(%1)
						
// Doesn't work for functions with arrays as arguments or no arguments, also doesn't work for functions with default arguments.
// But it make some things easier.
#define EXTERN:%0<%1>(%2) \
	stock JBC_%0 (%2) \
	    return CallRemoteFunction ("JB_"#%0, #%1, %2)
	    
// Make the whole sh*t consistent.
#define EXTERN2:%0(%1) \
	stock JBC_%0(%1)

#if !defined isnull
	#define isnull(%1) \
		((!(%1[0])) || (((%1[0]) == '\1') && (!(%1[1]))))
#endif

/*
native GetPlayerFPS(playerid);
native GetPlayerSpeed(playerid,get3d=false);
native AntiBugKill(playerid);
native CheckText(playerid,text[]);
native GodModeCheck(playerid);
native AllowWeaponForPlayer(playerid,weaponid);
native ForbidWeaponForPlayer(playerid,weaponid,antibugkill);
native ResetForbiddenWeaponsForPlayer(playerid,antibugkill);
native IsForbiddenWeapon(weaponid);
native IsForbiddenWeaponForPlayer(playerid,weaponid);
native AddWeaponPickup(Float:x,Float:y,Float:z,weaponid,ammo,worldid);
native PlayerReportPlayer(playerid,reporterid,report[]);
native SetPlayerSpawnKillProtected(playerid,set);
native JunkBusterChrome(playerid,comment[]="No comment");
native SetPlayerMoney(playerid,money);
native IpBanCheck(playerid);
native BanIp(ipstring[]);
native UnbanIp(ipstring[]);
native AddNameToBlacklist(name[]);
native RemoveNameFromBlacklist(name[]);
native AddPlayerToBlacklist(playerid);
native IsPlayerOnBlacklist(playerid);
native AddNameToWhitelist(name[]);
native RemoveNameFromWhitelist(name[]);
native AddPlayerToWhitelist(playerid);
native IsPlayerOnWhitelist(playerid);
native TempBanCheck(playerid);
native TempBan(playerid,days,reason[]);
native DeleteTempBan(name[]);
native SetJBVar(var[],value);
native GetJBVar(var[]);
*/

//==============================================================================

/*
You have to add these callbacks yourself and you can do with what you want:
BUT: You don't have to use these callbacks at all... I just thought they can be helpful for whatever, I don't know.
*/

forward OnJunkBusterBan (playerid, reason []);
forward OnJunkBusterKick (playerid, reason []);
forward OnJunkBusterReport (playerid, reason [], details []);

//You SHOULD add this function to your adminscript etc. to guarantee admin immunity and correct working reports!
forward IsPlayerAdminCall (playerid);

/*
Put for example this into your gamemode (example for Godfather):

public IsPlayerAdminCall (playerid)
	return (PlayerInfo [playerid] [pAdmin] >=  1);

AGAIN: This is an example and may only work for the Godfather script.

You have to create a function which fits to your OWN gamemode!
*/

//==============================================================================

//Don't let noobs crash your server by abusing the % symbol in inputtext.
public OnDialogResponse (playerid, dialogid, response, listitem, inputtext [])
{
	new len = strlen (inputtext);
	for (new i = 0; i < len; ++i)
	 	if (inputtext [i] == '%')
	  		inputtext [i] = '#';

	if (!len)
		return CallLocalFunction ("JBC_OnDialogResponse", "iiiis", playerid, dialogid, response, listitem, "\1");
 	return CallLocalFunction ("JBC_OnDialogResponse", "iiiis", playerid, dialogid, response, listitem, inputtext);
}

//OnDialogResponse
#if defined _ALS_OnDialogResponse
	#undef OnDialogResponse
#else
	#define _ALS_OnDialogResponse
#endif
#define OnDialogResponse JBC_OnDialogResponse
forward JBC_OnDialogResponse (playerid, dialogid, response, listitem, inputtext []);

//==============================================================================

// EXISTING functions which JunkBuster MUST overwrite!

EXTERN:PutPlayerInVehicle <iii>(playerid, vehicleid, seatid);
EXTERN:GivePlayerMoney <ii>(playerid, amount);
EXTERN:ResetPlayerMoney <i>(playerid);
EXTERN:GetPlayerMoney <i>(playerid);
EXTERN:SetPlayerPos <ifff>(playerid, Float: x, Float: y, Float: z);
EXTERN:SetPlayerPosFindZ <ifff>(playerid, Float: x, Float: y, Float: z);
EXTERN:SetVehiclePos <ifff>(vehicleid, Float: x, Float: y, Float: z);
EXTERN:SetVehicleVelocity <ifff>(vehicleid, Float: x, Float: y, Float: z);
EXTERN:GivePlayerWeapon <iii>(playerid, weaponid, ammo);
EXTERN:ResetPlayerWeapons <i>(playerid);
EXTERN:SetPlayerHealth <df>(playerid, Float: health);
EXTERN:SetPlayerArmour <df>(playerid, Float: armour);
EXTERN:SetVehicleHealth <df>(vehicleid, Float: health);
EXTERN:TogglePlayerControllable <ii>(playerid, toggle);
EXTERN:TogglePlayerSpectating <ii>(playerid, toggle);
EXTERN:SetPlayerSpecialAction <ii>(playerid, actionid);
EXTERN:SetPlayerRaceCheckpoint <iifffffff>(playerid, type, Float: x, Float: y, Float: z, Float: nextx, Float: nexty, Float: nextz, Float: size);
EXTERN:AddPlayerClass <iffffiiiiii>(modelid, Float: spawn_x, Float: spawn_y, Float: spawn_z, Float: z_angle, weapon1, weapon1_ammo, weapon2, weapon2_ammo, weapon3, weapon3_ammo);
EXTERN:AddPlayerClassEx <iiffffiiiiii>(teamid, modelid, Float: spawn_x, Float: spawn_y, Float: spawn_z, Float: z_angle, weapon1, weapon1_ammo, weapon2, weapon2_ammo, weapon3, weapon3_ammo);
EXTERN:SetSpawnInfo <iiiffffiiiiii>(playerid, team, skin, Float: x, Float: y, Float: z, Float: rotation, weapon1, weapon1_ammo, weapon2, weapon2_ammo, weapon3, weapon3_ammo);
EXTERN:DestroyPickup <i>(pickupid);
EXTERN:RepairVehicle <i>(vehicleid);
EXTERN:CreateVehicle <iffffiii>(vehicletype, Float:x, Float: y, Float: z, Float: rotation, color1, color2, respawn_delay);
EXTERN:AddStaticVehicle <iffffii>(modelid, Float: spawn_x, Float: spawn_y, Float: spawn_z, Float: z_angle, color1, color2);
EXTERN:AddStaticVehicleEx <iffffiii>(modelid, Float: spawn_x, Float: spawn_y, Float: spawn_z, Float: z_angle, color1, color2, respawn_delay);
EXTERN:AddVehicleComponent <ii>(vehicleid, componentid);
EXTERN:RemoveVehicleComponent <ii>(vehicleid, componentid);

EXTERN2:AddStaticPickup (model, type, Float: x, Float: y, Float: z, virtualworld = 0)
	return CallRemoteFunction ("JB_AddStaticPickup", "iifffi", model, type, x, y, z, virtualworld);
	
EXTERN2:CreatePickup (model, type, Float: x, Float: y, Float: z, virtualworld = 0)
	return CallRemoteFunction ("JB_CreatePickup", "iifffi", model, type, x, y, z, virtualworld);

EXTERN2:UsePlayerPedAnims ()
{
	CallRemoteFunction ("OnUsePlayerPedAnims", "");
	return UsePlayerPedAnims ();
}

EXTERN2:SetPlayerName (playerid, name [])
{
	if (SetPlayerName (playerid, name))
	{
	    CallRemoteFunction ("OnSetPlayerName", "is", playerid, name);
	    return 1;
	}
	return 0;
}

//NEW functions given to you by JunkBuster!

#if USE_NEW_JB_FUNCTIONS == true

	EXTERN:GetPlayerFPS <i>(playerid);
	EXTERN:AntiBugKill <i>(playerid);//This basically respawns the player.
	EXTERN:GodModeCheck <i>(playerid);
	EXTERN:AllowWeaponForPlayer <ii>(playerid, weaponid);
	EXTERN:ForbidWeaponForPlayer <iii>(playerid, weaponid, antibugkill);
	EXTERN:IsForbiddenWeapon <i>(weaponid);
	EXTERN:IsForbiddenWeaponForPlayer <ii>(playerid, weaponid);
	EXTERN:SetPlayerSpawnKillProtected <ii>(playerid, set);
	EXTERN:SetPlayerMoney <ii>(playerid, money);

	EXTERN2:GetPlayerSpeed (playerid, get3d = false)
		return CallRemoteFunction ("JB_GetPlayerSpeed", "ii", playerid, get3d);

	EXTERN2:CheckText (playerid, text [])//return 1: something forbidden found, return 0: everything OK!
		return (!isnull (text) ? CallRemoteFunction ("CheckText", "is", playerid, text) : 0);

	EXTERN2:ResetFWeaponsForPlayer (playerid, antibugkill)
		return CallRemoteFunction ("ResetForbiddenWeaponsForPlayer", "ii", playerid, antibugkill);

	EXTERN2:AddWeaponPickup (Float: x, Float: y, Float: z, weaponid, ammo, worldid = 0)
		return CallRemoteFunction ("AddWeaponPickup", "fffiii", x, y, z, weaponid, ammo, worldid);

	EXTERN2:JunkBusterChrome (playerid, comment [] = "No comment")
		return CallRemoteFunction ("JunkBusterChrome", "is", playerid, isnull (comment) ? ("No comment") : comment);

	EXTERN2:SetJBVar (var [], value)
		return (!isnull (var) ? CallRemoteFunction ("SetJBVar", "si", var, value) : 0);

	EXTERN2:GetJBVar (var [])
		return (!isnull (var) ? CallRemoteFunction ("GetJBVar", "s", var) : -1);

	EXTERN2:IpBanCheck (playerid)
		return CallRemoteFunction ("IpBanCheck", "i", playerid);

	EXTERN2:BanIp (ipstring [])
		return (!isnull (ipstring) ? CallRemoteFunction ("BanIp", "s", ipstring) : 0);

	EXTERN2:UnbanIp (ipstring [])
		return (!isnull (ipstring) ? CallRemoteFunction ("UnbanIp", "s", ipstring) : 0);

	EXTERN2:AddNameToBlacklist (name [])
		return (!isnull (name) ? CallRemoteFunction ("AddNameToBlacklist", "s", name) : 0);

	EXTERN2:RemoveNameFromBlacklist (name [])
		return (!isnull (name) ? CallRemoteFunction ("RemoveNameFromBlacklist", "s", name) : 0);

	EXTERN2:AddPlayerToBlacklist (playerid)
		return CallRemoteFunction ("AddPlayerToBlacklist", "i", playerid);

	EXTERN2:IsPlayerOnBlacklist (playerid)
		return CallRemoteFunction ("IsPlayerOnBlacklist", "i", playerid);

	EXTERN2:AddNameToWhitelist (name [])
		return (!isnull (name) ? CallRemoteFunction ("AddNameToWhitelist", "s", name) : 0);

	EXTERN2:RemoveNameFromWhitelist (name [])
		return (!isnull (name) ? CallRemoteFunction ("RemoveNameFromWhitelist", "s", name) : 0);

	EXTERN2:AddPlayerToWhitelist (playerid)
		return CallRemoteFunction ("AddPlayerToWhitelist", "i", playerid);

	EXTERN2:IsPlayerOnWhitelist (playerid)
		return CallRemoteFunction ("IsPlayerOnWhitelist", "i", playerid);

	EXTERN2:TempBanCheck (playerid)
		return CallRemoteFunction ("TempBanCheck", "i", playerid);

	EXTERN2:TempBan (playerid, days, reason [])
		return CallRemoteFunction ("TempBan", "iis", playerid, days, isnull (reason) ? ("No reason") : reason);

	EXTERN2:DeleteTempBan (name [])
		return (!isnull (name) ? CallRemoteFunction ("DeleteTempBan", "s", name) : 0);

	/*
	Use PlayerReportPlayer (playerid, reporterid, report []) to let JunkBuster know
	that a player has reported another player.

	DESCRIPTION:
	- 'playerid' is the ID of the player who has been reported. Maybe a cheater? Let it JunkBuster know!
	- 'reporterid' is the ID of the player who has reported the other player.
	- 'report' is the report. If it contains 'god' or 'mod' JunkBuster will check the 'playerid' for godmode.

	IMPORTANT:
	JunkBuster searches for keywords "god" and "health". And if found the reported player will get checked for godmode.
	However JunkBuster will not react on every report. A player can't get spammed with GodModeCheck.
	Spamming GodModeCheck on a player can end up with a kick/ban even when the player is innoncent. (Tested)
	*/

	stock PlayerReportPlayer (playerid, reporterid, report [])
	{
		if (IsPlayerConnected (playerid) && IsPlayerConnected (reporterid) && !isnull (report))
			return CallRemoteFunction ("OnPlayerReport", "iis", playerid, reporterid, report);
		return 0;
	}
	
#endif

//==============================================================================
	
#if defined _ALS_PutPlayerInVehicle
	#undef PutPlayerInVehicle
#else
	#define _ALS_PutPlayerInVehicle
#endif
#define PutPlayerInVehicle JBC_PutPlayerInVehicle

#if defined _ALS_GivePlayerMoney
	#undef GivePlayerMoney
#else
	#define _ALS_GivePlayerMoney
#endif
#define GivePlayerMoney JBC_GivePlayerMoney

#if defined _ALS_ResetPlayerMoney
	#undef ResetPlayerMoney
#else
	#define _ALS_ResetPlayerMoney
#endif
#define ResetPlayerMoney JBC_ResetPlayerMoney

#if defined _ALS_GetPlayerMoney
	#undef GetPlayerMoney
#else
	#define _ALS_GetPlayerMoney
#endif
#define GetPlayerMoney JBC_GetPlayerMoney

#if defined _ALS_SetPlayerPos
	#undef SetPlayerPos
#else
	#define _ALS_SetPlayerPos
#endif
#define SetPlayerPos JBC_SetPlayerPos

#if defined _ALS_SetPlayerPosFindZ
	#undef SetPlayerPosFindZ
#else
	#define _ALS_SetPlayerPosFindZ
#endif
#define SetPlayerPosFindZ JBC_SetPlayerPosFindZ

#if defined _ALS_SetVehiclePos
	#undef SetVehiclePos
#else
	#define _ALS_SetVehiclePos
#endif
#define SetVehiclePos JBC_SetVehiclePos

#if defined _ALS_GivePlayerWeapon
	#undef GivePlayerWeapon
#else
	#define _ALS_GivePlayerWeapon
#endif
#define GivePlayerWeapon JBC_GivePlayerWeapon

#if defined _ALS_ResetPlayerWeapons
	#undef ResetPlayerWeapons
#else
	#define _ALS_ResetPlayerWeapons
#endif
#define ResetPlayerWeapons JBC_ResetPlayerWeapons

#if defined _ALS_SetPlayerHealth
	#undef SetPlayerHealth
#else
	#define _ALS_SetPlayerHealth
#endif
#define SetPlayerHealth JBC_SetPlayerHealth

#if defined _ALS_SetPlayerArmour
	#undef SetPlayerArmour
#else
	#define _ALS_SetPlayerArmour
#endif
#define SetPlayerArmour JBC_SetPlayerArmour

#if defined _ALS_SetVehicleHealth
	#undef SetVehicleHealth
#else
	#define _ALS_SetVehicleHealth
#endif
#define SetVehicleHealth JBC_SetVehicleHealth

#if defined _ALS_TogglePlayerControllable
	#undef TogglePlayerControllable
#else
	#define _ALS_TogglePlayerControllable
#endif
#define TogglePlayerControllable JBC_TogglePlayerControllable

#if defined _ALS_TogglePlayerSpectating
	#undef TogglePlayerSpectating
#else
	#define _ALS_TogglePlayerSpectating
#endif
#define TogglePlayerSpectating JBC_TogglePlayerSpectating

#if defined _ALS_SetVehicleVelocity
	#undef SetVehicleVelocity
#else
	#define _ALS_SetVehicleVelocity
#endif
#define SetVehicleVelocity JBC_SetVehicleVelocity

#if defined _ALS_SetPlayerSpecialAction
	#undef SetPlayerSpecialAction
#else
	#define _ALS_SetPlayerSpecialAction
#endif
#define SetPlayerSpecialAction JBC_SetPlayerSpecialAction

#if defined _ALS_SetPlayerRaceCheckpoint
	#undef SetPlayerRaceCheckpoint
#else
	#define _ALS_SetPlayerRaceCheckpoint
#endif
#define SetPlayerRaceCheckpoint JBC_SetPlayerRaceCheckpoint

#if defined _ALS_AddStaticPickup
	#undef AddStaticPickup
#else
	#define _ALS_AddStaticPickup
#endif
#define AddStaticPickup JBC_AddStaticPickup

#if defined _ALS_CreatePickup
	#undef CreatePickup
#else
	#define _ALS_CreatePickup
#endif
#define CreatePickup JBC_CreatePickup

#if defined _ALS_DestroyPickup
	#undef DestroyPickup
#else
	#define _ALS_DestroyPickup
#endif
#define DestroyPickup JBC_DestroyPickup

#if defined _ALS_AddPlayerClass
	#undef AddPlayerClass
#else
	#define _ALS_AddPlayerClass
#endif
#define AddPlayerClass JBC_AddPlayerClass

#if defined _ALS_AddPlayerClassEx
	#undef AddPlayerClassEx
#else
	#define _ALS_AddPlayerClassEx
#endif
#define AddPlayerClassEx JBC_AddPlayerClassEx

#if defined _ALS_SetSpawnInfo
	#undef SetSpawnInfo
#else
	#define _ALS_SetSpawnInfo
#endif
#define SetSpawnInfo JBC_SetSpawnInfo

#if defined _ALS_UsePlayerPedAnims
	#undef UsePlayerPedAnims
#else
	#define _ALS_UsePlayerPedAnims
#endif
#define UsePlayerPedAnims JBC_UsePlayerPedAnims

#if defined _ALS_SetPlayerName
	#undef SetPlayerName
#else
	#define _ALS_SetPlayerName
#endif
#define SetPlayerName JBC_SetPlayerName

#if defined _ALS_RepairVehicle
	#undef RepairVehicle
#else
	#define _ALS_RepairVehicle
#endif
#define RepairVehicle JBC_RepairVehicle

#if defined _ALS_CreateVehicle
	#undef CreateVehicle
#else
	#define _ALS_CreateVehicle
#endif
#define CreateVehicle JBC_CreateVehicle

#if defined _ALS_AddStaticVehicle
	#undef AddStaticVehicle
#else
	#define _ALS_AddStaticVehicle
#endif
#define AddStaticVehicle JBC_AddStaticVehicle

#if defined _ALS_AddStaticVehicleEx
	#undef AddStaticVehicleEx
#else
	#define _ALS_AddStaticVehicleEx
#endif
#define AddStaticVehicleEx JBC_AddStaticVehicleEx

#if defined _ALS_AddVehicleComponent
	#undef AddVehicleComponent
#else
	#define _ALS_AddVehicleComponent
#endif
#define AddVehicleComponent JBC_AddVehicleComponent

#if defined _ALS_RemoveVehicleComponent
	#undef RemoveVehicleComponent
#else
	#define _ALS_RemoveVehicleComponent
#endif
#define RemoveVehicleComponent JBC_RemoveVehicleComponent

#if USE_NEW_JB_FUNCTIONS == true

	#define GetPlayerFPS 					JBC_GetPlayerFPS
	#define GetPlayerSpeed 					JBC_GetPlayerSpeed
	#define AntiBugKill     				JBC_AntiBugKill
	#define CheckText     					JBC_CheckText
	#define GodModeCheck     				JBC_GodModeCheck
	#define AllowWeaponForPlayer 			JBC_AllowWeaponForPlayer
	#define ForbidWeaponForPlayer  			JBC_ForbidWeaponForPlayer
	#define ResetForbiddenWeaponsForPlayer 	JBC_ResetFWeaponsForPlayer
	#define IsForbiddenWeapon    			JBC_IsForbiddenWeapon
	#define IsForbiddenWeaponForPlayer  	JBC_IsForbiddenWeaponForPlayer
	#define AddWeaponPickup    				JBC_AddWeaponPickup
	#define SetPlayerSpawnKillProtected 	JBC_SetPlayerSpawnKillProtected
	#define JunkBusterChrome                JBC_Chrome
	#define SetJBVar                        JBC_SetJBVar
	#define GetJBVar                        JBC_GetJBVar
	#define SetPlayerMoney                  JBC_SetPlayerMoney
	#define IpBanCheck						JBC_IpBanCheck
	#define BanIp							JBC_BanIp
	#define UnbanIp							JBC_UnbanIp
	#define AddNameToBlacklist				JBC_AddNameToBlacklist
	#define RemoveNameFromBlacklist			JBC_RemoteNameFromBlacklist
	#define AddPlayerToBlacklist			JBC_AddNameToBlacklist
	#define IsPlayerOnBlacklist				JBC_IsPlayerOnBlacklist
	#define AddNameToWhitelist				JBC_AddNameToWhitelist
	#define RemoveNameFromWhitelist			JBC_RemoteNameFromWhitelist
	#define AddPlayerToWhitelist			JBC_AddNameToWhitelist
	#define IsPlayerOnWhitelist				JBC_IsPlayerOnWhitelist
	#define TempBanCheck					JBC_TempBanCheck
	#define TempBan							JBC_TempBan
	#define DeleteTempBan					JBC_DeleteTempBan
	
#endif
