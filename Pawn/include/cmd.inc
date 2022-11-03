/*******************************************
 *                                         *
 *   @Author:      ZeeX                    *
 *   @Version:     0.3.1                   *
 *   @Released:    31/10/2009              *
 *   @Editado:  Edinson_Walker 27/11/2014  *
 *                                         *
 *******************************************/

#if defined _gcmd_included
	#endinput
#endif
#define _gcmd_included

#define MAX_FUNC_NAME (32)

#define COMMAND:%1(%2)          \
			forward cmd_%1(%2); \
			public cmd_%1(%2)

#define GCMD:%1(%2) \
			COMMAND:%1(%2)

#define command(%1,%2,%3) \
			COMMAND:%1(%2, %3)

#define gcmd(%1,%2,%3) \
			COMMAND:%1(%2, %3)

#if !defined isnull
	#define isnull(%1) \
				((!(%1[0])) || (((%1[0]) == '\1') && (!(%1[1]))))
#endif


forward OnPlayerCommandReceived(playerid, cmdtext[]);
forward OnPlayerCommandPerformed(playerid, cmdtext[], success);


static
	bool:gcmd_g_HasOPCS = false,
	bool:gcmd_g_HasOPCE = false;

#if defined FILTERSCRIPT

public OnFilterScriptInit()
{
	gcmd_g_HasOPCS = funcidx("OnPlayerCommandReceived") != -1;
	gcmd_g_HasOPCE = funcidx("OnPlayerCommandPerformed") != -1;
    return CallLocalFunction("gcmd_OnFilterScriptInit", "");
}

#if defined _ALS_OnFilterScriptInit
    #undef OnFilterScriptInit
#else
    #define _ALS_OnFilterScriptInit
#endif
#define OnFilterScriptInit gcmd_OnFilterScriptInit
forward gcmd_OnFilterScriptInit();

#else /*not a filterscript*/

public OnGameModeInit()
{
	gcmd_g_HasOPCS = funcidx("OnPlayerCommandReceived") != -1;
	gcmd_g_HasOPCE = funcidx("OnPlayerCommandPerformed") != -1;
	if (funcidx("gcmd_OnGameModeInit") != -1)
	{
		return CallLocalFunction("gcmd_OnGameModeInit", "");
	}
	return 1;
}

#if defined _ALS_OnGameModeInit
    #undef OnGameModeInit
#else
    #define _ALS_OnGameModeInit
#endif
#define OnGameModeInit gcmd_OnGameModeInit
forward gcmd_OnGameModeInit();

#endif /*if defined FILTERSCRIPT*/

public OnPlayerCommandText(playerid, cmdtext[])
{
    if (gcmd_g_HasOPCS && !CallLocalFunction("OnPlayerCommandReceived", "is", playerid, cmdtext))
    {
        return 1;
    }
    new
        pos,
        funcname[MAX_FUNC_NAME];
    while (cmdtext[++pos] > ' ')
	{
		funcname[pos-1] = tolower(cmdtext[pos]);
	}
	format(funcname, sizeof(funcname), "cmd_%s", funcname);
    while (cmdtext[pos] == ' ') pos++;
	if (!cmdtext[pos])
	{
		if (gcmd_g_HasOPCE)
		{
			return CallLocalFunction("OnPlayerCommandPerformed", "isi", playerid, cmdtext, CallLocalFunction(funcname, "is", playerid, "\1"));
		}
		return CallLocalFunction(funcname, "is", playerid, "\1");
	}
	if (gcmd_g_HasOPCE)
	{
		return CallLocalFunction("OnPlayerCommandPerformed", "isi", playerid, cmdtext, CallLocalFunction(funcname, "is", playerid, cmdtext[pos]));
	}
	return CallLocalFunction(funcname, "is", playerid, cmdtext[pos]);
}

#if defined _ALS_OnPlayerCommandText
    #undef OnPlayerCommandText
#else
    #define _ALS_OnPlayerCommandText
#endif
#define OnPlayerCommandText gcmd_OnPlayerCommandText
forward gcmd_OnPlayerCommandText(playerid, cmdtext[]);