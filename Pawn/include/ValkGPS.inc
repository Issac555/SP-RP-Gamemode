/* 
 *      ValkGPS
 *
 *	Modos de uso del GPS:
 *	GPS_MODE_1: Al marcar una ubicacion en el mapa, el GPS creara un checkpoint y se le marcara al jugador el camino.
 *	GPS_MODE_2: Se hookeara la funcion SetPlayerCheckpoint y al crear un checkpoint, automaticamente se le marcara el camino.
 *	GPS_MODE_ALL: GPS_MODE_1 + GPS_MODE_2
 *	Version: 1.0
 *
 *	Creditos:
 *	Gamer_Z, #Fede
 */

#if defined include_valk_gps
	#endinput
#endif

#define include_valk_gps

/* Parametros configurables */
#define GPS_COLOR 0xF85B5BFF
#define GPS_UPDATE_TIME 500


#if !defined GPS_MODE_1 && !defined GPS_MODE_2 && !defined GPS_MODE_ALL
 	#error "GPS_MODE is not defined"
#endif

#if defined GPS_MODE_ALL
 	#define GPS_MODE_1
 	#define GPS_MODE_2
#endif

#define MAX_DOTS 50

#include <GPS> 

#include <YSI_Coding\y_timers>
#include <YSI_Coding\y_hooks>

/* --------------------------------------------------------------------- */

new static 
	bool:playerHasGPSActive[MAX_PLAYERS],
	Timer:PlayerGPSTimer[MAX_PLAYERS],
	Routes[MAX_PLAYERS][MAX_DOTS] = {-1, ...};

forward OnPathFound(Path:pathid, playerid);


stock Float:GDBP(Float:X, Float:Y, Float:Z, Float: PointX, Float: PointY, Float: PointZ) return floatsqroot(floatadd(floatadd(floatpower(floatsub(X, PointX), 2.0), floatpower(floatsub(Y, PointY), 2.0)), floatpower(floatsub(Z, PointZ), 2.0)));

/* --------------------------------------------------------------------- */

hook OnPlayerEnterCheckpoint(playerid)
{
	if(playerHasGPSActive[playerid])
	{
		SendClientMessage(playerid, -1, "¡Llegaste a tu destino!");
		stop PlayerGPSTimer[playerid];
		playerHasGPSActive[playerid] = false;
		DisablePlayerCheckpoint(playerid);
	}
	return Y_HOOKS_CONTINUE_RETURN_1;
}

hook OnPlayerDisconnect(playerid, reason)
{
	if(playerHasGPSActive[playerid]) 
	{
		ForcePlayerEndLastRoute(playerid);
	}
	return Y_HOOKS_CONTINUE_RETURN_1;
}

#if defined GPS_MODE_1

hook OnPlayerClickMap(playerid, Float:fX, Float:fY, Float:fZ)
{
	StartPlayerPath(playerid, fX, fY, fZ);
	return Y_HOOKS_CONTINUE_RETURN_1;
}

#endif

/* --------------------------------------------------------------------- */

timer AssignatePlayerPath[GPS_UPDATE_TIME](playerid, Float:X, Float:Y, Float:Z)
{
	new Float:x, Float:y, Float:z, MapNode:start, MapNode:target;
    GetPlayerPos(playerid, x, y, z);
    
	if((GDBP(X, Y, 0.0, x, y, 0.0) <= 7.5))
	{
		SendClientMessage(playerid, -1, "Has llegado a tu destino!");
		ForcePlayerEndLastRoute(playerid);
		return 1;
	}
    
    if (GetClosestMapNodeToPoint(x, y, z, start) != 0) return print("Algo salio mal. (1)");
    if (GetClosestMapNodeToPoint(X, Y, Z, target)) return print("Algo salio mal. (2)");

    if (FindPathThreaded(start, target, "OnPathFound", "i", playerid)) 
    {
    	SendClientMessage(playerid, -1, "Hubo un error al iniciar la ruta.");
    	return 1;
    }

    return 1;
}

public OnPathFound(Path:pathid, playerid)
{
    if(!IsValidPath(pathid)) return SendClientMessage(playerid, -1, "Hubo un error al calcular la ruta!");

	DestroyRoutes(playerid);

	new size, Float:length;
	GetPathSize(pathid, size);
	GetPathLength(pathid, length);

	if(size == 1)
	{
		ForcePlayerEndLastRoute(playerid);
		return SendClientMessage(playerid, -1, "Has llegado a tu destino.");
	}

	new MapNode:nodeid, index, Float:lastx, Float:lasty,Float:lastz;
	GetPlayerPos(playerid, lastx, lasty, lastz);
	GetClosestMapNodeToPoint(lastx, lasty, lastz, nodeid);
	GetMapNodePos(nodeid, lastx, lasty, lastz);

	new _max = MAX_DOTS;
	if(MAX_DOTS > size) _max = size;

	new Float:X,Float:Y,Float:Z;
	
	for(new i = 0; i < _max; i++)
	{
		GetPathNode(pathid, i, nodeid);
		GetPathNodeIndex(pathid, nodeid, index);
		GetMapNodePos(nodeid, X, Y, Z);
		if(i == index) CreateMapRoute(playerid, lastx, lasty, X, Y, GPS_COLOR);
		lastx = X+0.5;
		lasty = Y+0.5;
	}
    return 1;
}

void:ForcePlayerEndLastRoute(playerid)
{
	stop PlayerGPSTimer[playerid];
	playerHasGPSActive[playerid] = false;
	DestroyRoutes(playerid);
	DisablePlayerCheckpoint(playerid);
}

void:StartPlayerPath(playerid, Float:X, Float:Y, Float:Z)
{
	ForcePlayerEndLastRoute(playerid);
	playerHasGPSActive[playerid] = true;
	SetPlayerCheckpoint(playerid, X, Y, Z, 2.5);
	AssignatePlayerPath(playerid, X, Y, Z);
	PlayerGPSTimer[playerid] = repeat AssignatePlayerPath(playerid, X, Y, Z);
}

void:CreateMapRoute(playerid, Float:X1, Float:Y1, Float:X2, Float:Y2, color)
{
	new Float:Dis = 12.5;
	new Float:TotalDis = GDBP(X1, Y1, 0.0, X2, Y2, 0.0);
	new Points = floatround(TotalDis / Dis);

	for(new i = 1; i <= Points; i++)
	{
		new Float:x, Float:y;
		if(i != 0)
		{
			x = X1 + (((X2 - X1) / Points)*i);
			y = Y1 + (((Y2 - Y1) / Points)*i);
		}
		else
		{
			x = X1;
			y = Y1;
		}

		new slot = 0;
		while(slot <= MAX_DOTS)
		{
			if(slot == MAX_DOTS)
			{
				slot = -1;
				break;
			}

			if(Routes[playerid][slot] == -1)
			{
				break;
			}
			slot++;
		}
		if(slot == -1) return;

		Routes[playerid][slot] = GangZoneCreate(x-(Dis / 2)-5, y-(Dis / 2)-5, x+(Dis / 2)+5, y+(Dis / 2)+5);
		GangZoneShowForPlayer(playerid, Routes[playerid][slot], color);
	}
}

void:DestroyRoutes(playerid)
{
	for(new x; x < MAX_DOTS; x++)
	{
		if(Routes[playerid][x] != -1)
		{
		    GangZoneDestroy(Routes[playerid][x]);
		    Routes[playerid][x] = -1;
		}
	}
}

#if defined GPS_MODE_2
	stock GPS_SetPlayerCheckpoint(playerid, Float:x, Float:y, Float:z, Float:size)
	{
	   	ForcePlayerEndLastRoute(playerid);
	   	StartPlayerPath(playerid, x, y, z);
	   	SetPlayerCheckpoint(playerid, x, y, z, size);
	   	SendClientMessage(playerid, -1, "Un nuevo lugar fue marcado en tu minimapa.");
	    return 1;
	}

	
	#if defined _ALS_SetPlayerCheckpoint
	    #undef SetPlayerCheckpoint
	#else
	    #define _ALS_SetPlayerCheckpoint
	#endif
	
	#define SetPlayerCheckpoint GPS_SetPlayerCheckpoint
#endif
