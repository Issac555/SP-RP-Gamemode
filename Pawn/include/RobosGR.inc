#include <a_samp>

#if defined _RobosGR_included
	#endinput
#endif
#define _RobosGR_included
#pragma library RobosGR

#define Index       (0)

/*
native ArtRobado(playerid);
native DejarRobo(playerid);
native RobarTVVieja(playerid);
native RobarTVBuena(playerid);
native RobarCaja(playerid);
native RobarPC(playerid);
native RobarVideoVieja(playerid);
native RobarVideoBuena(playerid);
native RobarPlayVieja(playerid);
native RobarPlayBuena(playerid);
*/


#define TVBuena 	(1518)
#define TVVieja 	(1429)
#define VideoVieja 	(1790)
#define VideoBuena 	(1788)
#define PlayBuena 	(2028)
#define PlayVieja 	(1719)

#define TVPobre 	(1429)
#define TVCheta 	(1518)
#define VideoPobre 	(1790)
#define VideoCheta 	(1788)
#define PlayPobre 	(1719)
#define PlayCheta 	(2028)
#define Misterio 	(2912)
#define Caja 		(2912)
#define PC 			(2190)


new ArticuloRobado[MAX_PLAYERS];
new TimerRoboGR[MAX_PLAYERS];
stock ArtRobado(playerid)
{
    return ArticuloRobado[playerid];
}

stock DejarRobo(playerid)
{
    ApplyAnimation(playerid,"CARRY","putdwn",1,0,0,0,0,0);
    SetTimerEx("DejarRoboGR",1000,0,"d",playerid);
    return KillTimer(TimerRoboGR[playerid]);
}

forward DejarRoboGR(playerid);
public DejarRoboGR(playerid)
{
	return RemovePlayerAttachedObject(playerid,Index);
}

forward RoboGR(playerid);
public RoboGR(playerid)
{
    ApplyAnimation(playerid,"CARRY","crry_prtial",10,7,5,1,1,1);
    return 1;
}

stock RobarTVVieja(playerid)
{
    KillTimer(TimerRoboGR[playerid]);
    TimerRoboGR[playerid] = SetTimerEx("RoboGR",1000,1,"d",playerid);
    ApplyAnimation(playerid,"CARRY","liftup",1,0,0,0,0,0);
    ArticuloRobado[playerid] = TVPobre;
	return SetPlayerAttachedObject(playerid, Index, 1429, 5, -0.045800, 0.189297, 0.213481, 276.266876, 0.722662, 119.390830, 0.825105, 0.976897, 0.840149 ); // DYN_TV - teleghetto
}
stock RobarTVBuena(playerid)
{
    KillTimer(TimerRoboGR[playerid]);
    TimerRoboGR[playerid] = SetTimerEx("RoboGR",1000,1,"d",playerid);
    ApplyAnimation(playerid,"CARRY","liftup",1,0,0,0,0,0);
    ArticuloRobado[playerid] = TVCheta;
	return SetPlayerAttachedObject(playerid, Index, 1518, 5, -0.035699, 0.228443, 0.209540, 278.555969, 357.488067, 106.670646, 0.932163, 0.899836, 0.902104 ); // DYN_TV_2 - telecheta
}
stock RobarCaja(playerid)
{
    KillTimer(TimerRoboGR[playerid]);
    TimerRoboGR[playerid] = SetTimerEx("RoboGR",1000,1,"d",playerid);
    ApplyAnimation(playerid,"CARRY","liftup",1,0,0,0,0,0);
    ArticuloRobado[playerid] = Misterio;
	return SetPlayerAttachedObject(playerid, Index, 2912, 5, -0.143977, 0.171898, -0.158107, 8.848129, 16.818716, 3.184455, 0.555940, 0.397590, 1.000000 ); // temp_crate1 - ??
}
stock RobarPC(playerid)
{
    KillTimer(TimerRoboGR[playerid]);
    TimerRoboGR[playerid] = SetTimerEx("RoboGR",1000,1,"d",playerid);
    ApplyAnimation(playerid,"CARRY","liftup",1,0,0,0,0,0);
    ArticuloRobado[playerid] = PC;
	return SetPlayerAttachedObject(playerid, Index, 2190, 5, -0.358281, -0.002825, 0.023657, 285.520538, 355.671569, 107.623764, 1.000000, 1.000000, 1.000000 ); // PC_1 - PC
}

stock RobarVideoVieja(playerid)
{
    KillTimer(TimerRoboGR[playerid]);
    TimerRoboGR[playerid] = SetTimerEx("RoboGR",1000,1,"d",playerid);
    ApplyAnimation(playerid,"CARRY","liftup",1,0,0,0,0,0);
    ArticuloRobado[playerid] = VideoPobre;
	return SetPlayerAttachedObject(playerid, Index, 1788, 5, 0.004669, 0.026491, 0.180251, 283.267181, 347.590423, 108.920188, 1.000000, 1.000000, 1.000000 ); // SWANK_VIDEO_1 - videoghetto
}
stock RobarVideoBuena(playerid)
{
    KillTimer(TimerRoboGR[playerid]);
    TimerRoboGR[playerid] = SetTimerEx("RoboGR",1000,1,"d",playerid);
    ApplyAnimation(playerid,"CARRY","liftup",1,0,0,0,0,0);
    ArticuloRobado[playerid] = VideoCheta;
	return SetPlayerAttachedObject(playerid, Index, 1790, 5, 0.036196, 0.060064, 0.137536, 281.493682, 354.646545, 110.527542, 1.000000, 1.000000, 1.000000 ); // SWANK_VIDEO_3 - videocheta
}
stock RobarPlayVieja(playerid)
{
    KillTimer(TimerRoboGR[playerid]);
    TimerRoboGR[playerid] = SetTimerEx("RoboGR",1000,1,"d",playerid);
    ApplyAnimation(playerid,"CARRY","liftup",1,0,0,0,0,0);
    ArticuloRobado[playerid] = PlayPobre;
	return SetPlayerAttachedObject(playerid, Index, 1719, 5, 0.006234, 0.035772, 0.196366, 279.749847, 352.300628, 102.611846, 1.000000, 1.000000, 1.000000 ); // LOW_CONSOLE - playghetto
}
stock RobarPlayBuena(playerid)
{
    KillTimer(TimerRoboGR[playerid]);
    TimerRoboGR[playerid] = SetTimerEx("RoboGR",1000,1,"d",playerid);
    ApplyAnimation(playerid,"CARRY","liftup",1,0,0,0,0,0);
    ArticuloRobado[playerid] = PlayCheta;
	return SetPlayerAttachedObject(playerid, Index, 2028, 5, -0.025814, 0.044218, 0.205650, 283.869171, 351.121704, 2.281757, 1.000000, 1.000000, 1.000000 ); // SWANK_CONSOLE - playcheta
}