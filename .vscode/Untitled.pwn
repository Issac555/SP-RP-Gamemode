// This is a comment
// uncomment the line below if you want to write a filterscript
//#define FILTERSCRIPT

#include <a_samp>
#include <streamer>
#include <zcmd>

#if defined FILTERSCRPT
#endif
#define playerid
#define pickupid

public OnFilterScriptInit()
{


//Defines de jugadores
new
bool:EsTransportista[MAX_PLAYERS],
bool:PuedeTrabajar[MAX_PLAYERS],
bool: EstaTransportando[MAX_PLAYERS],
TimerTrabajo[MAX_PLAYERS],
PlayerText:PuntosDeTrabajoRestantes
;
//Defines globales
new
PickupTrabajo,
Text3D:LabelTrabajo,
MapIconTrabajo,
VehTrabajo[6]
;

#define PuntoSalida 2378.0359,-2010.5350,13.6474
#define PuntoNumero2 2290.6370,-2016.1879,13.6368
#define PuntoNumero3 2222.8154,-1909.2045,13.3612
#define PuntoNumero4 2131.6599,-1913.8917,13.3828
#define PuntoNumero5 1839.9698,-1853.7123,13.3897
#define PuntoNumero6 1934.2621,-1782.4257,13.3828
#define PuntoNumero7 2096.1968,-1819.0680,13.3828
#define PuntoNumero8 2238.1130,-1929.9736,12.7424
#define PuntoNumero9 2333.8982,-1918.1638,13.1107
#define PuntoLlegada 2470.0779,-2075.2764,13.5469
#define PuntoComienzo 2430.0142, -2107.9358, 12.8206
#define TIEMPO_TRABAJO 15 //minutos

public OnFilterScriptInit();
{
PickupTrabajo = CreateDynamicPickup(1239, 1, PuntoComienzo, -1, -1, -1, 50.0);
LabelTrabajo = CreateDynamic3DTextLabel("Trabajo de transportista\n{FFFFFF}parate aquí para obtener el trabajo.", 0x0000FFFF, PuntoComienzo, 50.0);
MapIconTrabajo = CreateDynamicMapIcon(PuntoComienzo, 51, -1, 0, 0, -1, 150.0, MAPICON_LOCAL);

VehTrabajo[0] = AddStaticVehicleEx(414, 2445.5820, -2117.5535, 13.5583, 0.0000, 3, 3, -1);
VehTrabajo[1] = AddStaticVehicleEx(414, 2450.5820, -2117.5535, 13.5583, 0.0000, 3, 3, -1);
VehTrabajo[2] = AddStaticVehicleEx(414, 2455.5820, -2117.5535, 13.5583, 0.0000, 3, 3, -1);
VehTrabajo[3] = AddStaticVehicleEx(414, 2465.5820, -2117.5535, 13.5583, 0.0000, 3, 3, -1);
VehTrabajo[4] = AddStaticVehicleEx(414, 2470.5820, -2117.5535, 13.5583, 0.0000, 3, 3, -1);
VehTrabajo[5] = AddStaticVehicleEx(414, 2475.5820, -2117.5535, 13.5583, 0.0000, 3, 3, -1);
return 1;
}
public OnFilterScriptExit()
{
DestroyDynamic3DTextLabel(LabelTrabajo);
DestroyDynamicPickup(PickupTrabajo);
DestroyDynamicMapIcon(MapIconTrabajo);
for(new veh = 0; veh < 6; veh++){DestroyVehicle(VehTrabajo[veh]);}
return 1;
}
public OnPlayerPickUpDynamicPickup(playerid, pickupid)
{
if(pickupid == (PickupTrabajo);
{
if(PuedeTrabajar[playerid] == true)
{
if(EsTransportista[playerid] == false && EstaTransportando[playerid] == false)
{
SetPVarInt(playerid, "Skin_Anterior", GetPlayerSkin(playerid));
SetPlayerSkin(playerid, 250);
EsTransportista[playerid]= true;
EstaTransportando[playerid] = false;
SendClientMessage(playerid, 0x0000FFFF, "Enhorabuena, ahora eres transportista, para empezar a trabajar subete a un camión y usa /trabajar");
}else return GameTextForPlayer(playerid, "~w~Ya eres tranportista, para dejar el trabajo usa ~r~/tsalir.", 4000, 3);
}else return GameTextForPlayer(playerid, "~r~Aún no puedes trabajar.", 4000, 3);
}
return 1;
}
public OnPlayerConnect(playerid)
{
EsTransportista[playerid] = false;
EstaTransportando[playerid] = false;
PuedeTrabajar[playerid] = true;
KillTimer(TimerTrabajo[playerid]);
//
PuntosDeTrabajoRestantes = CreatePlayerTextDraw(playerid,488.000000, 118.000000, "~n~~n~~n~~g~~h~Puntos de trabajo restantes: ~w~10");
PlayerTextDrawBackgroundColor(playerid,PuntosDeTrabajoRestantes, 255);
PlayerTextDrawFont(playerid,PuntosDeTrabajoRestantes, 2);
PlayerTextDrawLetterSize(playerid,PuntosDeTrabajoRestantes, 0.200000, 0.799998);
PlayerTextDrawColor(playerid,PuntosDeTrabajoRestantes, -1);
PlayerTextDrawSetOutline(playerid,PuntosDeTrabajoRestantes, 0);
PlayerTextDrawSetProportional(playerid,PuntosDeTrabajoRestantes, 1);
PlayerTextDrawSetShadow(playerid,PuntosDeTrabajoRestantes, 1);
PlayerTextDrawSetSelectable(playerid,PuntosDeTrabajoRestantes, 0);
return 1;
}
public OnPlayerDisconnect(playerid, reason)
{
EsTransportista[playerid] = false;
EstaTransportando[playerid] = false;
PuedeTrabajar[playerid] = false;
KillTimer(TimerTrabajo[playerid]);
PlayerTextDrawDestroy(playerid,PuntosDeTrabajoRestantes);
return 1;
}
CMD:tsalir(playerid)
{
if(EsTransportista[playerid] == false) return SendClientMessage(playerid, 0xFF0000FF, "No eres transportista.");
EsTransportista[playerid] = false;
EstaTransportando[playerid] = false;

DisablePlayerCheckpoint(playerid);
SetPlayerSkin(playerid, GetPVarInt(playerid, "Skin_Anterior"));
DeletePVar(playerid, "Skin_Anterior");

PuedeTrabajar[playerid] = false;
TimerTrabajo[playerid] = SetTimerEx("Puede_Trabajar", TIEMPO_TRABAJO*60000, false, "i", playerid);
SendClientMessage(playerid, 0x0000FFFF, "Has dejado el trabajo de transportista, ahora debes esperar "#TIEMPO_TRABAJO" minutos para serlo nuevamente.");
PlayerTextDrawHide(playerid,PuntosDeTrabajoRestantes);
return 1;
}

CMD:trabajar(playerid)
{
if(EstaTransportando[playerid] == true) return SendClientMessage(playerid, 0xFF0000FF, "Estás tranportando la mercancia, debes terminar el trabajo.");
if(EsTransportista[playerid] == false) return SendClientMessage(playerid,0xFF0000FF,"No eres transportista, para serlo ve al punto señalado en el mapa con un camión.");
if(!IsPlayerInVehicle(playerid, EsVehDeTrabajo(GetPlayerVehicleID(playerid)))) return SendClientMessage(playerid,0xFF0000FF,"Debe estar en un auto para usar este comando.");

SetPlayerCheckpoint(playerid, PuntoSalida, 3.0);
GameTextForPlayer(playerid, "~g~Usted empez¦ el trabajo, buena suerte!", 3000, 3);
EstaTransportando[playerid] = true;
PlayerTextDrawSetString(playerid,PuntosDeTrabajoRestantes,"~n~~n~~n~~g~~h~Puntos de trabajo restantes: ~w~10");
PlayerTextDrawShow(playerid,PuntosDeTrabajoRestantes);
return 1;
}

public OnPlayerDeath(playerid, killerid, reason)
{
if(EsTransportista[playerid] == true)
{
EsTransportista[playerid] = false;
EstaTransportando[playerid] = false;

DisablePlayerCheckpoint(playerid);
SetPlayerSkin(playerid, GetPVarInt(playerid, "Skin_Anterior"));
DeletePVar(playerid, "Skin_Anterior");

PuedeTrabajar[playerid] = false;
TimerTrabajo[playerid] = SetTimerEx("Puede_Trabajar", TIEMPO_TRABAJO*60000, false, "i", playerid);
SendClientMessage(playerid, 0x0000FFFF, "Tu trabajo ha sido cancelado y debes esperar "#TIEMPO_TRABAJO" minutos para volver a trabajar");
}
return 1;
}
public OnPlayerEnterCheckpoint(playerid)
{
if(EsTransportista[playerid] == true && EsVehDeTrabajo(GetPlayerVehicleID(playerid)))
{
if(IsPlayerInRangeOfPoint(playerid, 7.0,PuntoSalida))
{
TogglePlayerControllable(playerid, false);
SetTimerEx("DescongelarTrabajo", 3500, false, "i", playerid);
GameTextForPlayer(playerid, "~w~Bajando productos, espera unos ~r~segundos", 3500, 3);
SetPlayerCheckpoint(playerid, PuntoNumero2, 7.0);
PlayerTextDrawSetString(playerid,PuntosDeTrabajoRestantes,"~n~~n~~n~~g~~h~Puntos de trabajo restantes: ~w~9");
}
if(IsPlayerInRangeOfPoint(playerid, 7.0,PuntoNumero2))
{
TogglePlayerControllable(playerid, false);
SetTimerEx("DescongelarTrabajo", 3500, false, "i", playerid);
GameTextForPlayer(playerid, "~w~Bajando productos, espera unos ~r~segundos", 3500, 3);
SetPlayerCheckpoint(playerid, PuntoNumero3, 7.0);
PlayerTextDrawSetString(playerid,PuntosDeTrabajoRestantes,"~n~~n~~n~~g~~h~Puntos de trabajo restantes: ~w~8");
}
if(IsPlayerInRangeOfPoint(playerid, 7.0,PuntoNumero3))
{
TogglePlayerControllable(playerid, false);
SetTimerEx("DescongelarTrabajo", 3500, false, "i", playerid);
GameTextForPlayer(playerid, "~w~Bajando productos, espera unos ~r~segundos", 3500, 3);
SetPlayerCheckpoint(playerid, PuntoNumero4, 7.0);
PlayerTextDrawSetString(playerid,PuntosDeTrabajoRestantes,"~n~~n~~n~~g~~h~Puntos de trabajo restantes: ~w~7");
}
if(IsPlayerInRangeOfPoint(playerid, 7.0,PuntoNumero4))
{
TogglePlayerControllable(playerid, false);
SetTimerEx("DescongelarTrabajo", 3500, false, "i", playerid);
GameTextForPlayer(playerid, "~w~Bajando productos, espera unos ~r~segundos", 3500, 3);
SetPlayerCheckpoint(playerid, PuntoNumero5, 7.0);
PlayerTextDrawSetString(playerid,PuntosDeTrabajoRestantes,"~n~~n~~n~~g~~h~Puntos de trabajo restantes: ~w~6");
}
if(IsPlayerInRangeOfPoint(playerid, 7.0,PuntoNumero5))
{
TogglePlayerControllable(playerid, false);
SetTimerEx("DescongelarTrabajo", 3500, false, "i", playerid);
GameTextForPlayer(playerid, "~w~Bajando productos, espera unos ~r~segundos", 3500, 3);
SetPlayerCheckpoint(playerid, PuntoNumero6, 7.0);
PlayerTextDrawSetString(playerid,PuntosDeTrabajoRestantes,"~n~~n~~n~~g~~h~Puntos de trabajo restantes: ~w~5");
}
if(IsPlayerInRangeOfPoint(playerid, 7.0,PuntoNumero6))
{
TogglePlayerControllable(playerid, false);
SetTimerEx("DescongelarTrabajo", 3500, false, "i", playerid);
GameTextForPlayer(playerid, "~w~Bajando productos, espera unos ~r~segundos", 3500, 3);
SetPlayerCheckpoint(playerid, PuntoNumero7, 7.0);
PlayerTextDrawSetString(playerid,PuntosDeTrabajoRestantes,"~n~~n~~n~~g~~h~Puntos de trabajo restantes: ~w~4");
}
if(IsPlayerInRangeOfPoint(playerid, 7.0,PuntoNumero7))
{
TogglePlayerControllable(playerid, false);
SetTimerEx("DescongelarTrabajo", 3500, false, "i", playerid);
GameTextForPlayer(playerid, "~w~Bajando productos, espera unos ~r~segundos", 3500, 3);
SetPlayerCheckpoint(playerid, PuntoNumero8, 7.0);
PlayerTextDrawSetString(playerid,PuntosDeTrabajoRestantes,"~n~~n~~n~~g~~h~Puntos de trabajo restantes: ~w~3");
}
if(IsPlayerInRangeOfPoint(playerid, 7.0,PuntoNumero8))
{
TogglePlayerControllable(playerid, false);
SetTimerEx("DescongelarTrabajo", 3500, false, "i", playerid);
GameTextForPlayer(playerid, "~w~Bajando productos, espera unos ~r~segundos", 3500, 3);
SetPlayerCheckpoint(playerid, PuntoNumero9, 7.0);
PlayerTextDrawSetString(playerid,PuntosDeTrabajoRestantes,"~n~~n~~n~~g~~h~Puntos de trabajo restantes: ~w~2");
}
if(IsPlayerInRangeOfPoint(playerid, 7.0,PuntoNumero9))
{
TogglePlayerControllable(playerid, false);
SetTimerEx("DescongelarTrabajo", 3500, false, "i", playerid);
GameTextForPlayer(playerid, "~w~Bajando productos, espera unos ~r~segundos", 3500, 3);
SetPlayerCheckpoint(playerid, PuntoLlegada, 7.0);
PlayerTextDrawSetString(playerid,PuntosDeTrabajoRestantes,"~n~~n~~n~~g~~h~Puntos de trabajo restantes: ~w~1");
}
if(IsPlayerInRangeOfPoint(playerid, 7.0,PuntoLlegada))
{
DisablePlayerCheckpoint(playerid);
GameTextForPlayer(playerid, "~g~Usted complet¦ el trabajo, bien hecho!", 3000, 3);
SetVehicleToRespawn(GetPlayerVehicleID(playerid));
EsTransportista[playerid] = false;
EstaTransportando[playerid] = false;
PuedeTrabajar[playerid] = false;
TimerTrabajo[playerid] = SetTimerEx("Puede_Trabajar", TIEMPO_TRABAJO*60000, false, "i", playerid);
SetPlayerSkin(playerid, GetPVarInt(playerid, "Skin_Anterior"));
DeletePVar(playerid, "Skin_Anterior");
PlayerTextDrawHide(playerid,PuntosDeTrabajoRestantes);
}
}
return 1;
}
public OnPlayerStateChange(playerid, newstate, oldstate)
{
if(newstate == PLAYER_STATE_DRIVER )
{
if(EsVehDeTrabajo(GetPlayerVehicleID(playerid)))
{
if(EsTransportista[playerid] == false)
{
RemovePlayerFromVehicle(playerid);
GameTextForPlayer(playerid, "~w~Debes ser ~r~transportista ~w~para usar estos autos", 3500, 3);
}else cmd_trabajar(playerid);
}
}
return 1;
}
forward Puede_Trabajar(playerid);
public Puede_Trabajar(playerid)
{
if(IsPlayerConnected(playerid))
{
KillTimer(TimerTrabajo[playerid]);
PuedeTrabajar[playerid] = true;
SendClientMessage(playerid, 0x0000FFFF, "Ya puedes trabajar de transportista.");
}
return 1;
}
forward DescongelarTrabajo(playerid);
public DescongelarTrabajo(playerid) return TogglePlayerControllable(playerid, true);

stock EsVehDeTrabajo(vehicleid)
{
for(new i = 0; i<6; i++)
{
if(vehicleid == VehTrabajo[i])
{
return true;
}
