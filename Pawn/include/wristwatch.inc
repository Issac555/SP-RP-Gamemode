#if defined _Wristwatch_included
    #endinput
#endif
#define _Wristwatch_included

static watch[MAX_PLAYERS], used[MAX_PLAYERS char];

stock ShowPlayerTime(playerid, hour, minute, second=-1, day=-1, month=-1, year=-1)
{
    if(used{playerid}) return 0;
    if(IsPlayerInAnyVehicle(playerid)) return 0;

    if(hour < 0 || hour > 23 || minute < 0 || minute > 59) return 0;
    if(second != -1 && second < 0 || second > 59) return 0;

    if(day != -1 && day < 1 || day > 31) return 0;
    if(month != -1 && month < 1 || month > 12) return 0;
    if(year != -1 && year < 1) return 0;

    used{playerid} = true;
    ApplyAnimation(playerid, "COP_AMBIENT", "Coplook_watch", 2.1, false, 0, 0, 0, 2000, 1);
    return SetTimerEx("WRSTWTCH_ShowWatch", 300, false, "iiiiiii", playerid, hour, minute, second, day, month, year);
}

static stock CorrectTime(hour, minute, second, day, month, year)
{
    new result[24], h[4], m[3], s[4], D[4], M[3], Y[6];

    if(hour < 10) format(h, sizeof(h), "0%i:", hour);
    else format(h, sizeof(h), "%i:", hour);

    if(minute < 10) format(m, sizeof(m), "0%i", minute);
    else format(m, sizeof(m), "%i", minute);

    if(second > -1)
    {
        if(second < 10) format(s, sizeof(s), ":0%i", second);
        else format(s, sizeof(s), ":%i", second);
    }
    else s[0] = EOS;

    if(day > -1 && month > -1)
    {
        if(day < 10) format(D, sizeof(D), "0%i.", day);
        else format(D, sizeof(D), "%i.", day);

        if(month < 10) format(M, sizeof(M), "0%i", month);
        else format(M, sizeof(M), "%i", month);

        if(year > -1)
        {
            if(year > 1000) format(Y, sizeof(Y), ".%i", year);
            else if(year < 10) format(Y, sizeof(Y), ".0%i", year);
            else if(year < 100) format(Y, sizeof(Y), ".00%i", year);
            else if(year < 1000) format(Y, sizeof(Y), ".000%i", year);
        }
        else Y[0] = EOS;
    }
    else if(year > -1)
    {
        if(year >= 1000) format(Y, sizeof(Y), "%i", year);
        else if(year < 10) format(Y, sizeof(Y), "0%i", year);
        else if(year < 100) format(Y, sizeof(Y), "00%i", year);
        else if(year < 1000) format(Y, sizeof(Y), "000%i", year);

        D[0] = EOS;
        M[0] = EOS;
    }
    else D[0] = EOS, M[0] = EOS, Y[0] = EOS;

    if(D[0] != EOS && M[0] != EOS) 
    {
        if(Y[0] != EOS) format(result, sizeof(result), "%s%s%s\nЧЧЧ\n%s%s%s", h, m, s, D, M, Y);
        else format(result, sizeof(result), "%s%s%s\nЧЧЧ\n%s%s", h, m, s, D, M);
    }
    else if(Y[0] != EOS) format(result, sizeof(result), "%s%s%s\nЧЧЧ\n%s", h, m, s, Y);
    else format(result, sizeof(result), "%s%s%s", h, m, s);

    return result;
}

forward WRSTWTCH_ShowWatch(playerid, hour, minute, second, day, month, year);
public WRSTWTCH_ShowWatch(playerid, hour, minute, second, day, month, year)
{
    static time[24];

    format(time, sizeof(time), "%s", CorrectTime(hour, minute, second, day, month, year));

    watch[playerid] = CreateObject(19477, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
    SetObjectMaterialText(watch[playerid], time, 0, 130, "Arial", 20, true, -1, 0, 1);

    if(strlen(time) > 9) AttachObjectToPlayer(watch[playerid], playerid, -0.174, 0.451, 0.460, 0.0, -32.7, -80.8);
    else AttachObjectToPlayer(watch[playerid], playerid, -0.174, 0.421, 0.360, 0.0, -32.7, -80.8);

    //ƒинамические объекты возможно использовать, только если применить плагин от YSF.
    //watch[playerid] = CreateDynamicObject(19477, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1, -1, playerid, 300.0);
    //SetDynamicObjectMaterialText(watch[playerid], 0, CorrectTime(hour, minute, second, day, month, year), 130, "Arial", 20, 1, -1, 0, 1);

    //if(strlen(time) > 9) AttachDynamicObjectToPlayer(watch[playerid], playerid, -0.174, 0.451, 0.460, 0.0, -32.7, -80.8);
    //else AttachDynamicObjectToPlayer(watch[playerid], playerid, -0.174, 0.421, 0.360, 0.0, -32.7, -80.8);

    return SetTimerEx("WRSTWTCH_HideWatch", 1600, false, "i", playerid);
}

forward WRSTWTCH_HideWatch(playerid);
public WRSTWTCH_HideWatch(playerid)
{
    used{playerid} = false;
    return DestroyObject(watch[playerid]);
}

public OnPlayerConnect(playerid)
{
    ApplyAnimation(playerid, "COP_AMBIENT", "null", 4.1, false, 0, 0, 0, 0, 0);

    #if defined WRSTWTCH_OnPlayerConnect
        return WRSTWTCH_OnPlayerConnect(playerid);
    #else
        return 1;
    #endif
}

#if defined _ALS_OnPlayerConnect
    #undef OnPlayerConnect
#else
    #define _ALS_OnPlayerConnect
#endif
#define OnPlayerConnect WRSTWTCH_OnPlayerConnect
#if defined WRSTWTCH_OnPlayerConnect
forward WRSTWTCH_OnPlayerConnect(playerid);
#endif

public OnPlayerDisconnect(playerid, reason)
{
    if(used{playerid})
    {
        used{playerid} = false;
        DestroyObject(watch[playerid]);
    }

    #if defined WRSTWTCH_OnPlayerDisconnect
        return WRSTWTCH_OnPlayerDisconnect(playerid, reason);
    #else
        return 1;
    #endif
}

#if defined _ALS_OnPlayerDisconnect
    #undef OnPlayerDisconnect
#else
    #define _ALS_OnPlayerDisconnect
#endif
#define OnPlayerDisconnect WRSTWTCH_OnPlayerDisconnect
#if defined WRSTWTCH_OnPlayerDisconnect
forward WRSTWTCH_OnPlayerDisconnect(playerid, reason);
#endif

public OnPlayerDeath(playerid, killerid, reason)
{
    if(used{playerid})
    {
        used{playerid} = false;
        DestroyObject(watch[playerid]);
    }

    #if defined WRSTWTCH_OnPlayerDeath
        return WRSTWTCH_OnPlayerDeath(playerid, killerid, reason);
    #else
        return 1;
    #endif
}

#if defined _ALS_OnPlayerDeath
    #undef OnPlayerDeath
#else
    #define _ALS_OnPlayerDeath
#endif
#define OnPlayerDeath WRSTWTCH_OnPlayerDeath
#if defined WRSTWTCH_OnPlayerDeath
forward WRSTWTCH_OnPlayerDeath(playerid, killerid, reason);
#endif