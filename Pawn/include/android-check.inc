#if defined _inc_android_check
	#endinput
#endif
#define _inc_android_check

/*
									IsPlayerUsingAndroid
	Original version by Fairuz-Afdhal: https://github.com/Fairuz-Afdhal/IsPlayerUsingAndroid
*/

#include <a_samp>
#include <Pawn.RakNet>

#if !defined SendClientCheck
	native SendClientCheck(playerid, type, arg, offset, size);
#endif

new bool:g_rgbIsPlayerUsingAndroid[MAX_PLAYERS] = {true, ...};

public OnPlayerConnect(playerid)
{
	g_rgbIsPlayerUsingAndroid[playerid] = true; // Reset previous state
	
	SendClientCheck(playerid, 0x48, 0, 0, 2);
	
	#if defined ANDROID_OnPlayerConnect
		return ANDROID_OnPlayerConnect(playerid);
	#else
		return 1;
	#endif
}

public OnIncomingRPC(playerid, rpcid, BitStream:bs)
{
	if(rpcid == 0x67) // RPC_ClientCheck
	{
		new type;
		BS_ReadValue(bs,
			PR_UINT8, type
		);

		if(type == 0x48)
		{
			g_rgbIsPlayerUsingAndroid[playerid] = false;
		}
	}

	#if defined ANDROID_OnIncomingRPC
		return ANDROID_OnIncomingRPC(playerid, rpcid, bs);
	#else
		return 1;
	#endif
}

// - Functions (kind of)
#define IsPlayerAndroid(%0)		g_rgbIsPlayerUsingAndroid[%0]
#define IsPlayerUsingAndroid(%0) 	IsPlayerAndroid(%0)

// - Hooks

#if defined _ALS_OnPlayerConnect
	#undef OnPlayerConnect
#else
	#define _ALS_OnPlayerConnect
#endif
#define OnPlayerConnect ANDROID_OnPlayerConnect
#if defined ANDROID_OnPlayerConnect
	forward ANDROID_OnPlayerConnect(playerid);
#endif


#if defined _ALS_OnIncomingRPC
	#undef OnIncomingRPC
#else
	#define _ALS_OnIncomingRPC
#endif
#define OnIncomingRPC ANDROID_OnIncomingRPC
#if defined ANDROID_OnIncomingRPC
	forward ANDROID_OnIncomingRPC(playerid, rpcid, BitStream:bs);
#endif
