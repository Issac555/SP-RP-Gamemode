#include <YSI\y_hooks>


new WeaponNames[47][] = // As below
{
"Ninguna","Manopla","Palo de golf","Palo de acero","Cuchillo","Bate de beísbol","Pala","Palo de billar","Katana","Motosierra","Dildo morado","Dildo blanco","Dildo largo","Dildo plateado",
"Ramo de flores","Cane","Granada","Granada de gas","Cóctel molotov","Jetpack","Undefined","Undefined","Pistola 45mm","Pistola SD 45mm","Pistola Desert Eagle","Escopeta","Escopeta recortada","SPAS-12",
"Micro Uzi","MP5","AK-47","M4A1","TEC-9","Rifle","Sniper Rifle","Rocket Launcher","Heatseeker","Lanzallamas","Minigun","Carga de explosivos","Detonador","Spray","Extinguidor",
"Cámara","Nightvision", "Thermal Goggles","Paracaídas"
};

new Float:PlayerEventPos[MAX_PLAYERS][3];
new Interior[MAX_PLAYERS][2];
new OldSkin[MAX_PLAYERS];
// 0 x 1 y 2 z 3 vw 4 int

enum eventosData {
	Float:eventX,
	Float:eventY,
	Float:eventZ,
	Float:eventVida,
	Float:eventChaleco,
	eventInterior,
	eventoTipo,
	weapons[5],
	limiteEvento,
	bool:exclusivoVIP,
    bool:estadoEvento, // 1 Abierto, 2 Cerrado
	eventoTeams[2], // Por si hay TDM
	eventoTeamSkin[2],
    eventCount,
	Float:eventTeamsX[2],
	Float:eventTeamsY[2],
	Float:eventTeamsZ[2],
    eventInteriorTeam[2]
};
new EventInfo[eventosData];



stock IsNumeric(const string[])
{
	for (new i = 0, j = strlen(string); i < j; i++)
	{
		if (string[i] > '9' || string[i] < '0') return 0;
	}
	return true;
}


CMD:unirseevento(playerid, params[])
{
    if(EventInfo[estadoEvento])
    {
        if(EventInfo[exclusivoVIP] && !PI[playerid][pi_VIP]) return SendNotification(playerid, "Evento exclusivo para ~y~VIP");
        GetPlayerPos(playerid, PlayerEventPos[playerid][0], PlayerEventPos[playerid][1], PlayerEventPos[playerid][2]);
        Interior[playerid][0] = GetPlayerVirtualWorld(playerid);
        Interior[playerid][1] = GetPlayerInterior(playerid);
        OldSkin[playerid] = PI[playerid][pi_SKIN];

        for(new i = 0; i < 20; i++) // Guardas las armas del usuario
        {
            EVENT_PLAYER_WEAPON[playerid][i][player_weapon_VALID] = PLAYER_WEAPONS[playerid][i][player_weapon_VALID];
            EVENT_PLAYER_WEAPON[playerid][i][player_weapon_DB_ID] = PLAYER_WEAPONS[playerid][i][player_weapon_DB_ID];
            EVENT_PLAYER_WEAPON[playerid][i][player_weapon_ID] = PLAYER_WEAPONS[playerid][i][player_weapon_ID];
            EVENT_PLAYER_WEAPON[playerid][i][player_weapon_AMMO] = PLAYER_WEAPONS[playerid][i][player_weapon_AMMO];
        }
        ResetPlayerWeapons(playerid);
        if(EventInfo[eventoTipo] == 1)
        {
            SetPlayerPos(playerid, EventInfo[eventX], EventInfo[eventY], EventInfo[eventZ]);
            SetPlayerInterior(playerid, EventInfo[eventInterior]);
            SetPlayerVirtualWorld(playerid, 100);
            for(new i = 0; i < 5; i++)
            {
                GivePlayerWeapon(playerid, EventInfo[weapons][i], 500);
            }
            return true;
        }
        else JoinTeam(playerid);
    }
    else SendNotification(playerid, "El evento está ~r~cerrado");
    return true;
}



CMD:gevento(playerid, params[])
{
	if(PI[playerid][pi_ADMIN_LEVEL] < 5) return SendNotification(playerid, "No puedes usar esté comando");

    ShowDialogEditor(playerid);
    return true;
}

CMD:salirevento(playerid, params[])
{
	if(PLAYER_TEMP[playerid][pt_InEvent])
    {
        SalirEvento(playerid);
        return true;
    }
    else SendNotification(playerid, "No estàs en ningun evento");
    return true;
}

forward SalirEvento(playerid);
public SalirEvento(playerid)
{
    ResetPlayerWeapons(playerid);
    for(new i = 0; i < 20; i++) // Guardas las armas del usuario
    {
        PLAYER_WEAPONS[playerid][i][player_weapon_VALID] = EVENT_PLAYER_WEAPON[playerid][i][player_weapon_VALID];
        PLAYER_WEAPONS[playerid][i][player_weapon_DB_ID] = EVENT_PLAYER_WEAPON[playerid][i][player_weapon_DB_ID];
        PLAYER_WEAPONS[playerid][i][player_weapon_ID] = EVENT_PLAYER_WEAPON[playerid][i][player_weapon_ID];
        PLAYER_WEAPONS[playerid][i][player_weapon_AMMO] = EVENT_PLAYER_WEAPON[playerid][i][player_weapon_AMMO];
    }
    SetPlayerColor(playerid, PLAYER_COLOR);
    SetPlayerPos(playerid, PlayerEventPos[playerid][0], PlayerEventPos[playerid][1], PlayerEventPos[playerid][2]);
    //SetPlayerVirtualWorld(Interior[playerid][0]);
    //SetPlayerInterior(Interior[playerid][1]);
    SetPlayerSkin(playerid, OldSkin[playerid]);
    if(EventInfo[eventoTipo] == 2) {
        EventInfo[eventoTeams][PLAYER_TEMP[playerid][pt_CURRENT_TEAM] - 1]--;
    }
    return true;
}

hook OnPlayerSpawn(playerid)
{
    if(PLAYER_TEMP[playerid][pt_InEvent])
    {
        SalirEvento(playerid);
        return Y_HOOKS_BREAK_RETURN_1;
    }
    return Y_HOOKS_CONTINUE_RETURN_1;
}

forward StartEvento(playerid);
public StartEvento(playerid)
{
    switch(EventInfo[eventoTipo])
    {
        case 0:
        {
            SendNotification(playerid, "No puedes iniciar un evento sin formato");
            return false;
        }
        case 1:
        {
            if(EventInfo[eventVida] == 0.0) return SendNotification(playerid, "No puedes iniciar un evento con vida en 0.0");
            if(EventInfo[eventX] == 0.0) return SendNotification(playerid, "No puedes iniciar un evento sin posición establecida");

            for(new i = 0; i < 5; i++)
            {
                GivePlayerWeapon(playerid, EventInfo[weapons][i], 500);
            }
            SetPlayerHealthEx(playerid, EventInfo[eventVida]);
            SetPlayerArmourEx(playerid, EventInfo[eventChaleco]);
            TogglePlayerControllableEx(playerid, true);

        }
        case 2:
        {
            if(EventInfo[eventVida] == 0.0) return SendNotification(playerid, "No puedes iniciar un evento con vida en 0.0");
            if(EventInfo[eventTeamsX][0] == 0.0 || EventInfo[eventTeamsX][1] == 0.0) return SendNotification(playerid, "Configura la posición de los equipos");
            for(new i = 0; i < 5; i++)
            {
                GivePlayerWeapon(playerid, EventInfo[weapons][i], 500);
            }
            SetPlayerHealthEx(playerid, EventInfo[eventVida]);
            SetPlayerArmourEx(playerid, EventInfo[eventChaleco]);
            TogglePlayerControllableEx(playerid, true);
        }
    }
    return true;
}

forward JoinTeam(playerid);
public JoinTeam(playerid)
{
    if(EventInfo[eventoTeams][0] == 0)
    {
        EventInfo[eventoTeams][0]++;
        PLAYER_TEMP[playerid][pt_CURRENT_TEAM] = 1; // 1 - 1 = 0
        SetPlayerPos(playerid, EventInfo[eventTeamsX][0], EventInfo[eventTeamsY][0], EventInfo[eventTeamsZ][0]);
        SetPlayerInterior(playerid, EventInfo[eventInteriorTeam]);
        SetPlayerColor(playerid, 0xFF0000FF); // Color rojos
        if(EventInfo[eventoTeamSkin][0] != -1) SetPlayerSkin(playerid, EventInfo[eventoTeamSkin][0]);
        for(new i = 0; i < 5; i++)
        {
                GivePlayerWeapon(playerid, EventInfo[weapons][i], 500);
        }
        return true;
    }

    if(EventInfo[eventoTeams][1] == 0)
    {
        EventInfo[eventoTeams][1]++;
        PLAYER_TEMP[playerid][pt_CURRENT_TEAM] = 2; // 1 - 1 = 0
        SetPlayerPos(playerid, EventInfo[eventTeamsX][1], EventInfo[eventTeamsY][1], EventInfo[eventTeamsZ][1]);
        SetPlayerInterior(playerid, EventInfo[eventInteriorTeam]);
        SetPlayerColor(playerid, 0x2D89FFFF); // Color azul
        if(EventInfo[eventoTeamSkin][1] != -1) SetPlayerSkin(playerid, EventInfo[eventoTeamSkin][1]);
        for(new i = 0; i < 5; i++)
        {
                GivePlayerWeapon(playerid, EventInfo[weapons][i], 500);
        }
        return true;
    }

    if(EventInfo[eventoTeams][0] == EventInfo[eventoTeams][1])
    {
        EventInfo[eventoTeams][0]++;
        PLAYER_TEMP[playerid][pt_CURRENT_TEAM] = 1; // 1 - 1 = 0
        SetPlayerPos(playerid, EventInfo[eventTeamsX][0], EventInfo[eventTeamsY][0], EventInfo[eventTeamsZ][0]);
        SetPlayerInterior(playerid, EventInfo[eventInteriorTeam]);
        SetPlayerColor(playerid, 0xFF0000FF); // Color rojos
        if(EventInfo[eventoTeamSkin][0] != -1)SetPlayerSkin(playerid, EventInfo[eventoTeamSkin][0]);
        for(new i = 0; i < 5; i++)
        {
                GivePlayerWeapon(playerid, EventInfo[weapons][i], 500);
        }
        return true;
    }

    if(EventInfo[eventoTeams][0] < EventInfo[eventoTeams][1])
    {
        EventInfo[eventoTeams][0]++;
        PLAYER_TEMP[playerid][pt_CURRENT_TEAM] = 1; // 1 - 1 = 0
        SetPlayerPos(playerid, EventInfo[eventTeamsX][0], EventInfo[eventTeamsY][0], EventInfo[eventTeamsZ][0]);
        SetPlayerInterior(playerid, EventInfo[eventInteriorTeam]);
        SetPlayerColor(playerid, 0xFF0000FF); // Color rojos
        if(EventInfo[eventoTeamSkin][0] != -1)SetPlayerSkin(playerid, EventInfo[eventoTeamSkin][0]);
        for(new i = 0; i < 5; i++)
        {
                GivePlayerWeapon(playerid, EventInfo[weapons][i], 500);
        }
        return true;
    }

    if(EventInfo[eventoTeams][1] < EventInfo[eventoTeams][0])
    {
        EventInfo[eventoTeams][1]++;
        PLAYER_TEMP[playerid][pt_CURRENT_TEAM] = 2; // 1 - 1 = 0
        SetPlayerPos(playerid, EventInfo[eventTeamsX][1], EventInfo[eventTeamsY][1], EventInfo[eventTeamsZ][1]);
        SetPlayerInterior(playerid, EventInfo[eventInteriorTeam]);
        SetPlayerColor(playerid, 0x2D89FFFF); // Color azul
        if(EventInfo[eventoTeamSkin][1] != -1) SetPlayerSkin(playerid, EventInfo[eventoTeamSkin][1]);
		for(new i = 0; i < 5; i++)
        {
                GivePlayerWeapon(playerid, EventInfo[weapons][i], 500);
        }
        return true;
    }
    return true;
}

void:ShowDialogEditor(playerid)
{
    new formatDialog[128], dialog[1024], text[25];
    strcat(dialog, "Opción\tValor\n");

    if(EventInfo[estadoEvento]) text = "{07A515}Abierto";
    else text = "{EF4703}Cerrado";

    format(formatDialog,sizeof(formatDialog), "Estado del evento\t%s\n", text);
    strcat(dialog, formatDialog);

    switch(EventInfo[eventoTipo])
    {
        case 0: text = "Ninguno";
        case 1: text = "DM";
        case 2: text = "TDM";
        default: text = "Desconocido";
    }

    format(formatDialog,sizeof(formatDialog), "Tipo de evento\t{666666}%s\n", text);
    strcat(dialog, formatDialog);

    if(EventInfo[limiteEvento] == 0) text = "Ninguno";
    else format(text, sizeof(text), "%d", EventInfo[limiteEvento]);

    format(formatDialog, sizeof(formatDialog), "Limite del evento\t{666666}%s\n", text);
    strcat(dialog, formatDialog);

    if(EventInfo[exclusivoVIP]) text = "{07A515}Habilitado";
    else text = "{EF4703}Deshabilitado";

    format(formatDialog,sizeof(formatDialog), "Exclusivo VIP\t%s\n", text);
    strcat(dialog, formatDialog);

    format(formatDialog,sizeof(formatDialog), "Vida del evento\t{666666}%f\n", EventInfo[eventVida]);
    strcat(dialog, formatDialog);

    format(formatDialog,sizeof(formatDialog), "Chaleco del evento\t{666666}%f\n", EventInfo[eventChaleco]);
    strcat(dialog, formatDialog);

    strcat(dialog, "Seleccionar armas\n");

    switch(EventInfo[eventoTipo])
    {
        case 0: strcat(dialog, "{666666}Define un modo de juego primero\n");
        case 1:
        {
            if(EventInfo[eventX] == 0.0) text = "{EF4703}No definido";
            else text = "{07A515}Definido";
            format(formatDialog, sizeof(formatDialog), "Posición\t%s\n", text);
            strcat(dialog, formatDialog);
        }
        case 2: strcat(dialog, "{666666}Opciones de equipo\n");
    }
    strcat(dialog,"Iniciar evento");

    ShowPlayerDialog(playerid, DIALOG_ADMIN_EVENT_MENU, DIALOG_STYLE_TABLIST_HEADERS, "Gestor de eventos", dialog, "Aceptar", "Cancelar");
}

void:ShowWeaponDialog(playerid)
{
    new string[128], dialog[500];
    for(new i = 0; i < 5; i ++)
    {
        format(string, sizeof(string), "[%d] %s\n", i + 1, WeaponNames[EventInfo[weapons][i]]);
        strcat(dialog, string);
    }
    ShowPlayerDialog(playerid, DIALOG_ADMIN_EVENT_WEAPONS, DIALOG_STYLE_LIST, "Seleccion de armas", dialog, "Aceptar", "Cancelar");
}

void:ShowEditTeam(playerid)
{
    new string[128], dialog[500], text[50];
    strcat(dialog, "Opción\tValor\n");

    if(EventInfo[eventTeamsX][0] == 0.0) text = "{EF4703}No definido";
    else text = "{07A515}Definido";

    format(string, sizeof(string), "Posición equipo 1\t%s\n", text);
    strcat(dialog, string);

    if(EventInfo[eventTeamsX][1] == 0.0) text = "{EF4703}No definido";
    else text = "{07A515}Definido";

    format(string, sizeof(string), "Posición equipo 2\t%s\n", text);
    strcat(dialog, string);

    if(EventInfo[eventoTeamSkin][0] == -1) text = "Ninguno";
    else format(text, sizeof(text), "%d", EventInfo[eventoTeamSkin][0] );

    format(string, sizeof(string), "Skin equipo 1\t%s\n", text);
    strcat(dialog, string);

    if(EventInfo[eventoTeamSkin][1] == -1) text = "Ninguno";
    else format(text, sizeof(text), "%d", EventInfo[eventoTeamSkin][1] );

    format(string, sizeof(string), "Skin equipo 2\t%s\n", text);
    strcat(dialog, string);

    ShowPlayerDialog(playerid, DIALOG_ADMIN_TEAM_EVENT, DIALOG_STYLE_TABLIST_HEADERS, "Modificar equipos", dialog, "Aceptar", "Cancelar");
}

hook OnScriptInit()
{
    EventInfo[eventoTeamSkin][0] = -1;
    EventInfo[eventoTeamSkin][1] = -1;
}

hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
    switch(dialogid)
    {
        case DIALOG_ADMIN_EVENT_MENU:
        {
            if(response)
            {
                switch(listitem)
                {
                    case 0:
                    {
                        EventInfo[estadoEvento] = !EventInfo[estadoEvento];
                        ShowDialogEditor(playerid);
                        return true;
                    }
                    case 1:
                    {
                        if(EventInfo[eventoTipo] == 2) EventInfo[eventoTipo] = 0;
                        else  EventInfo[eventoTipo]++;
                        ShowDialogEditor(playerid);
                        return true;
                    }
                    case 2:
                    {
                        ShowPlayerDialog(playerid, DIALOG_ADMIN_INPUT_PLAYER, DIALOG_STYLE_INPUT, "Ingresa el limite de usuarios", "Si deseas deshabilitar el limite, coloca 0 ", "Aceptar", "Cancelar");
                        return true;
                    }
                    case 3:
                    {
                        EventInfo[exclusivoVIP] = !EventInfo[exclusivoVIP];
                        ShowDialogEditor(playerid);
                        return true;
                    }
                    case 4:
                    {
                        ShowPlayerDialog(playerid, DIALOG_ADMIN_INPUT_LIFE, DIALOG_STYLE_INPUT, "Vida del evento", "Ingresa la vida", "Aceptar", "Cancelar");
                        return true;
                    }
                    case 5:
                    {
                        ShowPlayerDialog(playerid, DIALOG_ADMIN_INPUT_ARMOUR, DIALOG_STYLE_INPUT, "Chaleco del evento", "Ingresa la chaleco", "Aceptar", "Cancelar");
                        return true;
                    }
                    case 6:
                    {
                        ShowWeaponDialog(playerid);
                        return true;
                    }
                    case 7:
                    {
                        switch(EventInfo[eventoTipo])
                        {
                            case 0:
                            {
                                ShowDialogEditor(playerid);
                                return true;
                            }
                            case 1:
                            {
                                GetPlayerPos(playerid, EventInfo[eventX], EventInfo[eventY], EventInfo[eventZ]);
                                EventInfo[eventInterior] = GetPlayerInterior(playerid);
                                ShowDialogEditor(playerid);
                                return true;
                            }
                            case 2:
                            {
                                ShowEditTeam(playerid);
                                return true;
                            }
                        }
                    }
                    case 8:
                    {
                        StartEvento(playerid);
                        return true;
                    }
                }
            }
        }//
        case DIALOG_ADMIN_TEAM_EVENT:
        {
            if(response)
            {
                switch(listitem)
                {
                    case 0:
                    {
                        GetPlayerPos(playerid, EventInfo[eventTeamsX][0], EventInfo[eventTeamsY][0], EventInfo[eventTeamsZ][0]);
                        EventInfo[eventInteriorTeam] = GetPlayerInterior(playerid);
                        ShowEditTeam(playerid);
                        return true;
                    }
                    case 1:
                    {
                        GetPlayerPos(playerid, EventInfo[eventTeamsX][1], EventInfo[eventTeamsY][1], EventInfo[eventTeamsZ][1]);
                        EventInfo[eventInteriorTeam] = GetPlayerInterior(playerid);
                        ShowEditTeam(playerid);
                        return true;
                    }
                    case 2:
                    {

                        ShowPlayerDialog(playerid, DIALOG_ADMIN_EDIT_SKIN_1, DIALOG_STYLE_INPUT, "Skin - Equipo", "Ingresa la ID de algúna skin o usa -1 para deshabilitar", "Aceptar", "Cancelar");
                        return true;
                    }
                    case 3:
                    {
                        ShowPlayerDialog(playerid, DIALOG_ADMIN_EDIT_SKIN_2, DIALOG_STYLE_INPUT, "Skin - Equipo", "Ingresa la ID de algúna skin o usa -1 para deshabilitar", "Aceptar", "Cancelar");
                        return true;
                    }
                }
            }
            else ShowDialogEditor(playerid);
        }
        case DIALOG_ADMIN_EDIT_SKIN_1:
        {
            if(response)
            {
                if(!IsNumeric(inputtext)) {
                    SendNotification(playerid, "Tiene que ser un número entero");
                    ShowEditTeam(playerid);
                    return false;
                }
                EventInfo[eventoTeamSkin][0] = strval(inputtext);
                ShowEditTeam(playerid);
                return true;
            }
            else ShowEditTeam(playerid);
        }
        case DIALOG_ADMIN_EDIT_SKIN_2:
        {
            if(response)
            {
                if(!IsNumeric(inputtext))
                {
                    SendNotification(playerid, "Tiene que ser un número entero");
                    ShowEditTeam(playerid);
                    return false;
                }
                EventInfo[eventoTeamSkin][1] = strval(inputtext);
                ShowEditTeam(playerid);
                return true;
            }
            else ShowEditTeam(playerid);
        }
        case DIALOG_ADMIN_EVENT_WEAPONS:
        {
            if(response)
            {
                SetPVarInt(playerid, "Event:Editor:Listitem", listitem);
                ShowPlayerDialog(playerid, DIALOG_ADMIN_INPUT_WEAPON, DIALOG_STYLE_INPUT, "Ingresar arma", "Ingresa la ID del arma", "Aceptar", "Cancelar");
                return true;
            }
            else ShowDialogEditor(playerid);
        }
        case DIALOG_ADMIN_INPUT_WEAPON:
        {
            if(response)
            {
                if(!IsNumeric(inputtext))
                {
                    SendNotification(playerid, "Tiene que ser un número entero");
                    ShowWeaponDialog(playerid);
                    return false;
                }
                new selecteditem = GetPVarInt(playerid, "Event:Editor:Listitem");
                EventInfo[weapons][selecteditem] = strval(inputtext);
                ShowWeaponDialog(playerid);
                return true;
            }
            else ShowWeaponDialog(playerid);
        }
        case DIALOG_ADMIN_INPUT_PLAYER:
        {
            if(response)
            {
                EventInfo[limiteEvento] = strval(inputtext);
                ShowDialogEditor(playerid);
                return true;
            }
            else ShowDialogEditor(playerid);
        }
        case DIALOG_ADMIN_INPUT_LIFE:
        {
            if(response)
            {
                EventInfo[eventVida] = strval(inputtext);
                ShowDialogEditor(playerid);
                return true;
            }
            else ShowDialogEditor(playerid);
        }
        case DIALOG_ADMIN_INPUT_ARMOUR:
        {
            if(response)
            {
                EventInfo[eventChaleco] = strval(inputtext);
                ShowDialogEditor(playerid);
                return true;
            }
            else ShowDialogEditor(playerid);
        }
    }
    return Y_HOOKS_CONTINUE_RETURN_1;
}



hook OnPlayerDeath(playerid, killerid, reason)
{
    /*if(PLAYER_TEMP[playerid][pt_InEvent])
    {
        SalirEvento(playerid);
        return Y_HOOKS_BREAK_RETURN_1;
    }*/
    if(PLAYER_TEMP[playerid][pt_InEvent])
	{
	 	if(EventInfo[eventoTipo] == 1)
	 	{
	 	    DisablePlayerInjuredMark(playerid);
	 	    PI[playerid][pi_STATE] = ROLEPLAY_STATE_NORMAL;
			//SetSpawnInfo(playerid,  NO_TEAM, PI[playerid][pi_SKIN], PLAYER_TEMP[playerid][pt_EVENT_POS][0], PLAYER_TEMP[playerid][pt_EVENT_POS][1], PLAYER_TEMP[playerid][pt_EVENT_POS][2], 0.0, 0, 0, 0, 0, 0, 0);
	 		//SetSpawnInfo(playerid,  NO_TEAM, PI[playerid][pi_SKIN], EventInfo[eventX], EventInfo[eventY], EventInfo[eventZ], 0.0, 0, 0, 0, 0, 0, 0);
	 		SetPlayerPos(playerid, EventInfo[eventX], EventInfo[eventY], EventInfo[eventZ]);
			SetPlayerInterior(playerid, EventInfo[eventInterior]);
			SetPlayerVirtualWorld(playerid, 100);
			PI[playerid][pi_STATE] = ROLEPLAY_STATE_EVENT;
			PLAYER_TEMP[playerid][pt_GAME_STATE] = GAME_STATE_NORMAL;
			return true;
		}
		else
		{
		    PI[playerid][pi_STATE] = ROLEPLAY_STATE_NORMAL;
		    PI[playerid][pi_STATE] = ROLEPLAY_STATE_EVENT;
			PLAYER_TEMP[playerid][pt_GAME_STATE] = GAME_STATE_NORMAL;
		    JoinTeam(playerid);
			return true;
		}
	}
    return Y_HOOKS_CONTINUE_RETURN_1;
}

hook OnPlayerDisconnect(playerid, reason) {
    if(PLAYER_TEMP[playerid][pt_InEvent])
    {
        EventInfo[eventCount]--;
    }
    return Y_HOOKS_CONTINUE_RETURN_1;
}

/**
if(eventoTipo == 1)
    {
        if(EventInfo[eventX] == 0.0) text = "{EF4703}No definido";
        else text = "{07A515} Definida";
    }
    strcat(dialog, "Posicion\t%s", text);
 */
