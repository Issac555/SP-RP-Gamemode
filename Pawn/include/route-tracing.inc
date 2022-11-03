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
#define GPS_COLOR 0x8A44E4FF

new const ColorsRutePlayerGPS[] = {
	0x8A44E4FF, // Morado
	0xDA1515FF // Rojo
};

#define GPS_UPDATE_TIME 1100


#if !defined GPS_MODE_1 && !defined GPS_MODE_2 && !defined GPS_MODE_ALL
 	#error "GPS_MODE is not defined"
#endif

#if defined GPS_MODE_ALL
 	#define GPS_MODE_1
 	#define GPS_MODE_2
#endif

#define MAX_DOTS 100

#include <GPS> 

#include <YSI_Coding\y_hooks>

/* --------------------------------------------------------------------- */
#if __Pawn != 0x030A
    #define INITIALIZE_WITH_FOR // Fix problem for native-compiler users.
#endif

new static 
	bool:playerHasGPSActive[MAX_PLAYERS],
	PlayerColorGPS[MAX_PLAYERS],
	PlayerGPSTimer[MAX_PLAYERS],
	Float:PlayerGPS_PointX[MAX_PLAYERS],
	Float:PlayerGPS_PointY[MAX_PLAYERS],
	Float:PlayerGPS_PointZ[MAX_PLAYERS],

#if defined INITIALIZE_WITH_FOR
	Routes[MAX_PLAYERS][MAX_DOTS] = {-1, ...};
#else
	Routes[MAX_PLAYERS][MAX_DOTS];
#endif

/* --------------------- */

#if defined INITIALIZE_WITH_FOR
hook OnPlayerConnect(playerid)
{
	for(new i; i < MAX_DOTS; i++)
	{
		Routes[playerid][i] = -1;	
	}
	return Y_HOOKS_CONTINUE_RETURN_1;
}
#endif

forward OnPathFound(Path:pathid, playerid);


stock Float:GDBP(Float:X, Float:Y, Float:Z, Float: PointX, Float: PointY, Float: PointZ) return floatsqroot(floatadd(floatadd(floatpower(floatsub(X, PointX), 2.0), floatpower(floatsub(Y, PointY), 2.0)), floatpower(floatsub(Z, PointZ), 2.0)));
/*stock Float:GDBP(Float:X, Float:Y, Float:Z, Float:PointX, Float:PointY, Float:PointZ) return  VectorSize(X-PointX, Y-PointY, Z-PointZ);*/

/* --------------------------------------------------------------------- */


hook OnPlayerDisconnect(playerid, reason)
{
	if(playerHasGPSActive[playerid]) 
	{
		ForcePlayerEndLastRoute(playerid);
	}
	return Y_HOOKS_CONTINUE_RETURN_1;
}

/*#if defined GPS_MODE_1
hook OnPlayerClickMap(playerid, Float:fX, Float:fY, Float:fZ)
{
	StartPlayerPath(playerid, fX, fY, fZ);
	return Y_HOOKS_CONTINUE_RETURN_1;
}
#endif*/

/* --------------------------------------------------------------------- */

forward AssignatePlayerPath(playerid, Float:X, Float:Y, Float:Z);
public AssignatePlayerPath(playerid, Float:X, Float:Y, Float:Z)
{
	new Float:x, Float:y, Float:z, MapNode:start, MapNode:target;
    GetPlayerPos(playerid, x, y, z);

	if((GDBP(X, Y, 0.0, x, y, 0.0) <= 7.5))
	{
		ForcePlayerEndLastRoute(playerid);
		return 1;
	}

    if (GetClosestMapNodeToPoint(x, y, z, start) != 0) return print("Error Code 1.");
    if (GetClosestMapNodeToPoint(X, Y, Z, target)) return print("Error: Code 2");

    if (FindPathThreaded(start, target, "OnPathFound", "i", playerid)) 
    {
    	SendClientMessage(playerid, -1, "Error: Code 4.");
    	return 1;
    }

    return 1;
}

public OnPathFound(Path:pathid, playerid)
{
    if(!IsValidPath(pathid)) return SendClientMessage(playerid, -1, "Error: Code 5.");

	DestroyRoutes(playerid);

	new size, Float:length;
	GetPathSize(pathid, size);
	GetPathLength(pathid, length);

	if(size == 1)
	{
		ForcePlayerEndLastRoute(playerid);
		return /*SendClientMessage(playerid, -1, "Has llegado a tu destino.");*/ 1;
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
		if(i == index) CreateMapRoute(playerid, lastx, lasty, X, Y, ColorsRutePlayerGPS[ PlayerColorGPS[playerid] ]);
		lastx = X+0.5;
		lasty = Y+0.5;
	}
    return 1;
}

ForcePlayerEndLastRoute(playerid)
{
	PlayerGPS_PointX[playerid] = 0.0;
	PlayerGPS_PointY[playerid] = 0.0;
	PlayerGPS_PointZ[playerid] = 0.0;

	KillTimer(PlayerGPSTimer[playerid]);
	playerHasGPSActive[playerid] = false;
	DestroyRoutes(playerid);
}

StartPlayerPath(playerid, Float:X, Float:Y, Float:Z)
{
	//ForcePlayerEndLastRoute(playerid);
	playerHasGPSActive[playerid] = true;

	PlayerGPS_PointX[playerid] = X;
	PlayerGPS_PointY[playerid] = Y;
	PlayerGPS_PointZ[playerid] = Z;

	if(GetPlayerState(playerid) == PLAYER_STATE_DRIVER)
	{
		AssignatePlayerPath(playerid, X, Y, Z);
		PlayerGPSTimer[playerid] = SetTimerEx("AssignatePlayerPath", GPS_UPDATE_TIME, true, "ifff", playerid, X, Y, Z);
	}
}

IsPlayerGPSIsActive(playerid)
{
	return playerHasGPSActive[playerid];
}

RestorePlayerGPSRoutes(playerid)
{
	KillTimer(PlayerGPSTimer[playerid]);
	AssignatePlayerPath(playerid, PlayerGPS_PointX[playerid], PlayerGPS_PointY[playerid], PlayerGPS_PointZ[playerid]);
	//PlayerGPSTimer[playerid] = repeat AssignatePlayerPath(playerid, PlayerGPS_PointX[playerid], PlayerGPS_PointY[playerid], PlayerGPS_PointZ[playerid]);
	PlayerGPSTimer[playerid] = SetTimerEx("AssignatePlayerPath", GPS_UPDATE_TIME, true, "ifff", playerid, PlayerGPS_PointX[playerid], PlayerGPS_PointY[playerid], PlayerGPS_PointZ[playerid]);
	return 1;
}

CreateMapRoute(playerid, Float:X1, Float:Y1, Float:X2, Float:Y2, color)
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

		Routes[playerid][slot] = CreatePlayerGangZone(playerid, x-(Dis / 2)-5, y-(Dis / 2)-5, x+(Dis / 2)+5, y+(Dis / 2)+5);
		PlayerGangZoneShow(playerid, Routes[playerid][slot], color);
	}
}

DestroyRoutes(playerid)
{
	for(new x; x < MAX_DOTS; x++)
	{
		if(Routes[playerid][x] != -1)
		{
		    PlayerGangZoneDestroy(playerid, Routes[playerid][x]);
		    Routes[playerid][x] = -1;
		}
	}
}

HideGPSRoutes(playerid)
{
	if(playerHasGPSActive[playerid] == true)
	{

		KillTimer(PlayerGPSTimer[playerid]);

		DestroyRoutes(playerid);
	}
	return 1;
}


#if defined GPS_MODE_2
	stock GPS_SetPlayerCheckpoint(playerid, Float:x, Float:y, Float:z)
	{
	   	ForcePlayerEndLastRoute(playerid);
	   	StartPlayerPath(playerid, x, y, z);
	    return 1;
	}
	stock SetPlayerCheckpointGPS(playerid, Float:x,Float:y, Float:z, color = 0, bool:force = false)
	{
		if(force == true)
		{
			if(playerHasGPSActive[playerid] == true) return 0; 
		}

		ForcePlayerEndLastRoute(playerid);
		StartPlayerPath(playerid, x,y,z);
		PlayerColorGPS[playerid] = color;

		return 1;
	}
	stock GPS_DestroyPlayerCP(playerid)
	{
		ForcePlayerEndLastRoute(playerid);
		return 1;
	}
#endif


	/*#if defined _ALS_SetPlayerCheckpoint
	    #undef SetPlayerCheckpoint
	#else
	    #define _ALS_SetPlayerCheckpoint
	#endif
	
	#define SetPlayerCheckpoint GPS_SetPlayerCheckpoint
#endif*/