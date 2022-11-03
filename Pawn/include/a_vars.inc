////////////////////////////////////////////////////////////////////////////////

/*=====================	Vars Per Player Script =================================

		* Reemplacement of Pvars (These are most fasters)
		* You dont need reset var per var, only "ResetVars(playerid)"

	
	CREDITS: Spell      <leandro.barbero@hotmail.com>

==============================================================================*/

#define VarsPerPlayer:              			enum VarsPerPlayer_ENUM

// ---------------------------

#define end_VarsPerPlayer                       new \
													_PlayerVarInfo[MAX_PLAYERS][VarsPerPlayer_ENUM],\
													_VarDefaultValue[VarsPerPlayer_ENUM]

/*------------------------------------------------------------------------------
	Function:
		SetVarInt
	Params:
		playerid
		varname - Name declared in "VarsPerPlayer".
		value - Integrer
	Return:
		-
	Notes:
		Reemplacement of "SetPVarInt".
		
native SetVarInt(playerid, varname, value);
*-----------------------------------------------------------------------------*/

#define SetVarInt(%0,%1,%2) \
				(_PlayerVarInfo[%0][%1] = %2)
				
/*------------------------------------------------------------------------------
	Function:
		SetVarFloat
	Params:
		playerid
		varname - Name declared in "VarsPerPlayer".
		value - Float
	Return:
		-
	Notes:
		Reemplacement of "SetPVarFloat"

native SetVarFloat(playerid, varname, Float:value);
*-----------------------------------------------------------------------------*/

#define SetVarFloat(%0,%1,%2) \
				(_PlayerVarInfo[%0][%1] = %2)

/*------------------------------------------------------------------------------
	Function:
		SetVarString
	Params:
		playerid
		varname - Name declared in "VarsPerPlayer".
		string_value[] - String value
	Return:
		-
	Notes:
		Reemplacement of "SetPVarString"

native SetVarString(playerid, varname, string_value[]);
*-----------------------------------------------------------------------------*/

#define SetVarString(%0,%1,%2) \
				(strmid(_PlayerVarInfo[%0][%1],%2,0,strlen(%2), strlen(%2)+1))

/*------------------------------------------------------------------------------
	Function:
		SetVarIndex
	Params:
		playerid
		varname - Name declared in "VarsPerPlayer".
		varindex - The index of the varname
		value
	Return:
		-
	Notes:
		If you have created a variable whit cells, and that's not a string, use it to put a value.

native SetVarIndex(playerid, varname, varindex, value);
*-----------------------------------------------------------------------------*/

#define SetVarIndex(%0,%1,%2,%3) \
				(_PlayerVarInfo[%0][%1][%2] = %3)


/*------------------------------------------------------------------------------
	Function:
		GetVar
	Params:
		playerid
		varname - Name declared in "VarsPerPlayer".
	Return:
		The value of the PlayerVar "varname"
	Notes:
		Float, integrer, or string

native GetVar(playerid, varname);
*-----------------------------------------------------------------------------*/

#define GetVar(%0,%1) \
				(_PlayerVarInfo[%0][%1])

/*------------------------------------------------------------------------------
	Function:
		GetVarIndex
	Params:
		playerid
		varname - Name declared in "VarsPerPlayer".
		varindex -  The index of the varname
	Return:
		The value of the PlayerVar "varname" index "varindex"
	Notes:
		-

native GetVarIndex(playerid, varname, varindex);
*-----------------------------------------------------------------------------*/

#define GetVarIndex(%0,%1,%2) \
				(_PlayerVarInfo[%0][%1][%2])

/*------------------------------------------------------------------------------
	Function:
		ResetVars
	Params:
		playerid
	Return:
		-
	Notes:
		Reset all vars to their default value (0, if you dont set it whit "SetVarDefaultValue...")
		Useful in OnPlayerConnect/OnPlayerDisconnect

native ResetVars(playerid);
*-----------------------------------------------------------------------------*/

#define ResetVars(%0) \
		for(new Reset@VPP; VarsPerPlayer_ENUM:Reset@VPP < VarsPerPlayer_ENUM; ++VarsPerPlayer_ENUM:Reset@VPP) \
	        (_PlayerVarInfo[%0][VarsPerPlayer_ENUM:Reset@VPP] = _VarDefaultValue[VarsPerPlayer_ENUM:Reset@VPP])

/*------------------------------------------------------------------------------
	Function:
		SetVarDefaultValueInt
	Params:
		varname
		default_value
	Return:
		-
	Notes:
		Set a default value for any playervar, useful in OnGameModeInit, for example:

		----------------------------
		public OnGameModeInit()
		{
		    SetVarDefaultValueInt( VarNameInt, 5 );
		    return 1;
		}
		----------------------------

native SetVarDefaultValueInt(playerid, default_value);
*-----------------------------------------------------------------------------*/

#define SetVarDefaultValueInt(%0,%1) \
			for(new LoopP@VPP; VarsPerPlayer_ENUM:LoopP@VPP < VarsPerPlayer_ENUM; ++VarsPerPlayer_ENUM:LoopP@VPP)\
				(_VarDefaultValue[%0] = %1)

/*------------------------------------------------------------------------------
	Function:
		SetVarDefaultValueFloat
	Params:
		varname
		default_value
	Return:
		-
	Notes:
		Set a default value for playervar (FloatVar)

native SetVarDefaultValueFloat(playerid, Float:default_value);
*-----------------------------------------------------------------------------*/

#define SetVarDefaultValueFloat(%0,%1) \
			for(new LoopP@VPP; VarsPerPlayer_ENUM:LoopP@VPP < VarsPerPlayer_ENUM; ++VarsPerPlayer_ENUM:LoopP@VPP)\
				(_VarDefaultValue[%0] = %1)
		    	

/*------------------------------------------------------------------------------
	Function:
		SetVarDefaultValueString
	Params:
		varname
		default_value
	Return:
		-
	Notes:
		Set a default value for playervar (string)

native SetVarDefaultValueString(playerid, default_value[]);
*-----------------------------------------------------------------------------*/

#define SetVarDefaultValueString(%0,%1) \
			for(new LoopP@VPP; VarsPerPlayer_ENUM:LoopP@VPP < VarsPerPlayer_ENUM; ++VarsPerPlayer_ENUM:LoopP@VPP)\
				(strmid(_VarDefaultValue[%0],%1,0,strlen(%1),strlen(%1)+1))

/*==============================================================================
				END OF SCRIPT: VARS PER PLAYER
==============================================================================*/
