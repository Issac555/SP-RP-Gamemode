#include <YSI-Includes\YSI\y_hooks>

new
    bool:pTaximeterShown[MAX_PLAYERS],
	Text:TaximeterTd,
    PlayerText:pTaximeterTd[MAX_PLAYERS];

hook OnScriptInit()
{
	TaximeterTd = TextDrawCreate(68.389480, 274.584259, "Taximetro");
	TextDrawLetterSize(TaximeterTd, 0.198535, 1.150833);
	TextDrawTextSize(TaximeterTd, 0.000000, 81.000000);
	TextDrawAlignment(TaximeterTd, 2);
	TextDrawColor(TaximeterTd, -1);
	TextDrawUseBox(TaximeterTd, 1);
	TextDrawBoxColor(TaximeterTd, 255);
	TextDrawSetShadow(TaximeterTd, 0);
	TextDrawBackgroundColor(TaximeterTd, 255);
	TextDrawFont(TaximeterTd, 1);
	TextDrawSetProportional(TaximeterTd, 1);
}

hook OnPlayerConnect(playerid) {
	pTaximeterTd[playerid] = CreatePlayerTextDraw(playerid, 68.389480, 289.685180, "_");
	PlayerTextDrawLetterSize(playerid, pTaximeterTd[playerid], 0.198535, 1.150833);
	PlayerTextDrawTextSize(playerid, pTaximeterTd[playerid], 0.000000, 81.000000);
	PlayerTextDrawAlignment(playerid, pTaximeterTd[playerid], 2);
	PlayerTextDrawColor(playerid, pTaximeterTd[playerid], -1);
	PlayerTextDrawUseBox(playerid, pTaximeterTd[playerid], 1);
	PlayerTextDrawBoxColor(playerid, pTaximeterTd[playerid], 144);
	PlayerTextDrawSetShadow(playerid, pTaximeterTd[playerid], 0);
	PlayerTextDrawSetOutline(playerid, pTaximeterTd[playerid], 1);
	PlayerTextDrawBackgroundColor(playerid, pTaximeterTd[playerid], 144);
	PlayerTextDrawFont(playerid, pTaximeterTd[playerid], 1);
	PlayerTextDrawSetProportional(playerid, pTaximeterTd[playerid], 1);
}

hook OnPlayerDisconnect(playerid, reason) {
    pTaximeterShown[playerid] = false;
	PlayerTextDrawDestroy(playerid, pTaximeterTd[playerid]);

}

ResetVehicleTaxiMeter(vehicleid)
{
	KillTimer(TAXI_METER_VEHICLE[vehicleid][veh_taxi_meter_TIMER]);
	TAXI_METER_VEHICLE[vehicleid][veh_taxi_meter_ENABLED] = false;
	TAXI_METER_VEHICLE[vehicleid][veh_taxi_meter_PAYMENT] = 0;
	TAXI_METER_VEHICLE[vehicleid][veh_taxi_meter_OLD_X] = 0.0;
	TAXI_METER_VEHICLE[vehicleid][veh_taxi_meter_OLD_Y] = 0.0;
	TAXI_METER_VEHICLE[vehicleid][veh_taxi_meter_OLD_Z] = 0.0;
	TAXI_METER_VEHICLE[vehicleid][veh_taxi_meter_DISTANCE] = 0.0;
	return 1;
}

ShowPlayerTaxiMeter(playerid)
{
	UpdatePlayerTaxiMeterTextdraws(playerid);
    if(!pTaximeterShown[playerid]) {
        PlayerTextDrawShow(playerid, pTaximeterTd[playerid]);
		TextDrawShowForPlayer(playerid,TaximeterTd);
        pTaximeterShown[playerid] = true;
    }
	PLAYER_TEMP[playerid][pt_TAXI_METER_ENABLED] = true;
	return 1;
}

UpdatePlayerTaxiMeterTextdraws(playerid)
{
	new td_str[128], vehicleid = GetPlayerVehicleID(playerid);
	if(vehicleid == INVALID_VEHICLE_ID) return 0;
	
	format(td_str, sizeof td_str, "Tarifa:_~g~%d$/Km~n~~w~Recorrido:_~r~~g~%.1fKm~n~~w~A_pagar:_~y~%s$", TAXI_METER_VEHICLE[vehicleid][veh_taxi_meter_PRICE],TAXI_METER_VEHICLE[vehicleid][veh_taxi_meter_DISTANCE],number_format_thousand(TAXI_METER_VEHICLE[vehicleid][veh_taxi_meter_PAYMENT]));
	PlayerTextDrawSetString(playerid, pTaximeterTd[playerid], td_str);
	return 1;
}

forward UpdateVehicleTaximeter(taxi, driver, passenger);
public UpdateVehicleTaximeter(taxi, driver, passenger)
{
	new driver_vehicle = GetPlayerVehicleID(driver), passenger_vehicle = GetPlayerVehicleID(passenger);
	
	if(!IsPlayerConnected(driver))
	{
		SendClientMessageEx(passenger, -1, ""YELLOW"El taxi te costó %s$.", number_format_thousand(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT]));		
		GivePlayerCash(passenger, -TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT], true, true);
		
		ResetVehicleTaxiMeter(taxi);
		HidePlayerTaxiMeter(passenger);
		return 1;
	}
	if(!IsPlayerConnected(passenger))
	{		
		new work_extra_payment;
		if(work_info[WORK_TAXI][work_info_EXTRA_PAY] > 0 && work_info[WORK_TAXI][work_info_EXTRA_PAY_EXP] > 0)
		{
			work_extra_payment = (work_info[WORK_TAXI][work_info_EXTRA_PAY] * floatround(floatdiv(PLAYER_WORKS[ driver ][WORK_TAXI][pwork_LEVEL], work_info[WORK_TAXI][work_info_EXTRA_PAY_EXP])));
			if(work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT] != 0) if(work_extra_payment > work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT]) work_extra_payment = work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT];
		
			if(PI[driver][pi_VIP]) work_extra_payment += SU_WORK_EXTRA_PAY;
		}
		PLAYER_WORKS[driver][WORK_TAXI][pwork_LEVEL] ++;
		
		SendClientMessageEx(driver, -1, ""YELLOW"Has ganado %s$ con este viaje.", number_format_thousand(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT] + work_extra_payment));
		GivePlayerCash(driver, TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT] + work_extra_payment, true, false);
		
		ResetVehicleTaxiMeter(taxi);
		UpdatePlayerTaxiMeterTextdraws(driver);
		
		new new_passenger = GetVehicleFirstPassenger(taxi);
		if(new_passenger != INVALID_PLAYER_ID)
		{
			ShowPlayerTaxiMeter(new_passenger);
			if(PLAYER_TEMP[new_passenger][pt_WANT_TAXI])
			{
				PLAYER_TEMP[new_passenger][pt_WANT_TAXI] = false;
				DisablePlayerTaxiMark(new_passenger);
			}
			
			TAXI_METER_VEHICLE[taxi][veh_taxi_meter_ENABLED] = true;
			GetVehiclePos(taxi, TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_X], TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_Y], TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_Z]);
			KillTimer(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_TIMER]);
			TAXI_METER_VEHICLE[taxi][veh_taxi_meter_TIMER] = SetTimerEx("UpdateVehicleTaximeter", 4000, true, "iii", taxi, GLOBAL_VEHICLES[taxi][gb_vehicle_DRIVER], new_passenger);
		}
		return 1;
	}
	
	if(driver_vehicle != taxi)
	{
		new work_extra_payment;
		if(work_info[WORK_TAXI][work_info_EXTRA_PAY] > 0 && work_info[WORK_TAXI][work_info_EXTRA_PAY_EXP] > 0)
		{
			work_extra_payment = (work_info[WORK_TAXI][work_info_EXTRA_PAY] * floatround(floatdiv(PLAYER_WORKS[ driver ][WORK_TAXI][pwork_LEVEL], work_info[WORK_TAXI][work_info_EXTRA_PAY_EXP])));
			if(work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT] != 0) if(work_extra_payment > work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT]) work_extra_payment = work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT];
		
			if(PI[driver][pi_VIP]) work_extra_payment += SU_WORK_EXTRA_PAY;
		}
		PLAYER_WORKS[driver][WORK_TAXI][pwork_LEVEL] ++;
		
		SendClientMessageEx(driver, -1, ""YELLOW"Has ganado %s$ con este viaje.", number_format_thousand(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT] + work_extra_payment));
		SendClientMessageEx(passenger, -1, ""YELLOW"El taxi te costó %s$.", number_format_thousand(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT]));
		
		GivePlayerCash(driver, TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT] + work_extra_payment, true, false);
		GivePlayerCash(passenger, -TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT], true, true);
		
		ResetVehicleTaxiMeter(taxi);
		HidePlayerTaxiMeter(driver);
		HidePlayerTaxiMeter(passenger);
		return 1;
	}
	if(passenger_vehicle != taxi)
	{
		new work_extra_payment;
		if(work_info[WORK_TAXI][work_info_EXTRA_PAY] > 0 && work_info[WORK_TAXI][work_info_EXTRA_PAY_EXP] > 0)
		{
			work_extra_payment = (work_info[WORK_TAXI][work_info_EXTRA_PAY] * floatround(floatdiv(PLAYER_WORKS[ driver ][WORK_TAXI][pwork_LEVEL], work_info[WORK_TAXI][work_info_EXTRA_PAY_EXP])));
			if(work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT] != 0) if(work_extra_payment > work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT]) work_extra_payment = work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT];
			
			if(PI[driver][pi_VIP]) work_extra_payment += SU_WORK_EXTRA_PAY;
		}
		PLAYER_WORKS[driver][WORK_TAXI][pwork_LEVEL] ++;
		
		SendClientMessageEx(driver, -1, ""YELLOW"Has ganado %s$ con este viaje.", number_format_thousand(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT] + work_extra_payment));
		SendClientMessageEx(passenger, -1, ""YELLOW"El taxi te costó %s$.", number_format_thousand(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT]));
		
		GivePlayerCash(driver, TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT] + work_extra_payment, true, false);
		GivePlayerCash(passenger, -TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT], true, true);
		
		ResetVehicleTaxiMeter(taxi);
		HidePlayerTaxiMeter(passenger);
		UpdatePlayerTaxiMeterTextdraws(driver);
		
		new new_passenger = GetVehicleFirstPassenger(taxi);
		if(new_passenger != INVALID_PLAYER_ID)
		{
			ShowPlayerTaxiMeter(new_passenger);
			if(PLAYER_TEMP[new_passenger][pt_WANT_TAXI])
			{
				PLAYER_TEMP[new_passenger][pt_WANT_TAXI] = false;
				DisablePlayerTaxiMark(new_passenger);
			}
			
			TAXI_METER_VEHICLE[taxi][veh_taxi_meter_ENABLED] = true;
			GetVehiclePos(taxi, TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_X], TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_Y], TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_Z]);
			KillTimer(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_TIMER]);
			TAXI_METER_VEHICLE[taxi][veh_taxi_meter_TIMER] = SetTimerEx("UpdateVehicleTaximeter", 4000, true, "iii", taxi, GLOBAL_VEHICLES[taxi][gb_vehicle_DRIVER], new_passenger);
		}
		return 1;
	}
	
	if(GetPlayerState(driver) != PLAYER_STATE_DRIVER)
	{
		new work_extra_payment;
		if(work_info[WORK_TAXI][work_info_EXTRA_PAY] > 0 && work_info[WORK_TAXI][work_info_EXTRA_PAY_EXP] > 0)
		{
			work_extra_payment = (work_info[WORK_TAXI][work_info_EXTRA_PAY] * floatround(floatdiv(PLAYER_WORKS[ driver ][WORK_TAXI][pwork_LEVEL], work_info[WORK_TAXI][work_info_EXTRA_PAY_EXP])));
			if(work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT] != 0) if(work_extra_payment > work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT]) work_extra_payment = work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT];
			
			if(PI[driver][pi_VIP]) work_extra_payment += SU_WORK_EXTRA_PAY;
		}
		PLAYER_WORKS[driver][WORK_TAXI][pwork_LEVEL] ++;
		
		SendClientMessageEx(driver, -1, ""YELLOW"Has ganado %s$ con este viaje.", number_format_thousand(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT] + work_extra_payment));
		SendClientMessageEx(passenger, -1, ""YELLOW"El taxi te costó %s$.", number_format_thousand(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT]));
		
		GivePlayerCash(driver, TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT] + work_extra_payment, true, false);
		GivePlayerCash(passenger, -TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT], true, true);
		
		ResetVehicleTaxiMeter(taxi);
		HidePlayerTaxiMeter(driver);
		HidePlayerTaxiMeter(passenger);
		return 1;
	}
	if(GetPlayerState(passenger) != PLAYER_STATE_PASSENGER)
	{
		new work_extra_payment;
		if(work_info[WORK_TAXI][work_info_EXTRA_PAY] > 0 && work_info[WORK_TAXI][work_info_EXTRA_PAY_EXP] > 0)
		{
			work_extra_payment = (work_info[WORK_TAXI][work_info_EXTRA_PAY] * floatround(floatdiv(PLAYER_WORKS[ driver ][WORK_TAXI][pwork_LEVEL], work_info[WORK_TAXI][work_info_EXTRA_PAY_EXP])));
			if(work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT] != 0) if(work_extra_payment > work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT]) work_extra_payment = work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT];
		
			if(PI[driver][pi_VIP]) work_extra_payment += SU_WORK_EXTRA_PAY;
		}
		PLAYER_WORKS[driver][WORK_TAXI][pwork_LEVEL] ++;
		
		SendClientMessageEx(driver, -1, ""YELLOW"Has ganado %s$ con este viaje.", number_format_thousand(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT] + work_extra_payment));
		SendClientMessageEx(passenger, -1, ""YELLOW"El taxi te costó %s$.", number_format_thousand(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT]));
		
		GivePlayerCash(driver, TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT] + work_extra_payment, true, false);
		GivePlayerCash(passenger, -TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT], true, true);
		
		ResetVehicleTaxiMeter(taxi);
		HidePlayerTaxiMeter(passenger);
		UpdatePlayerTaxiMeterTextdraws(driver);
		
		new new_passenger = GetVehicleFirstPassenger(taxi);
		if(new_passenger != INVALID_PLAYER_ID)
		{
			ShowPlayerTaxiMeter(new_passenger);
			if(PLAYER_TEMP[new_passenger][pt_WANT_TAXI])
			{
				PLAYER_TEMP[new_passenger][pt_WANT_TAXI] = false;
				DisablePlayerTaxiMark(new_passenger);
			}
			
			TAXI_METER_VEHICLE[taxi][veh_taxi_meter_ENABLED] = true;
			GetVehiclePos(taxi, TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_X], TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_Y], TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_Z]);
			KillTimer(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_TIMER]);
			TAXI_METER_VEHICLE[taxi][veh_taxi_meter_TIMER] = SetTimerEx("UpdateVehicleTaximeter", 4000, true, "iii", taxi, GLOBAL_VEHICLES[taxi][gb_vehicle_DRIVER], new_passenger);
		}
		return 1;
	}

	if(PI[passenger][pi_CASH] < TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT])
	{
		new work_extra_payment;
		if(work_info[WORK_TAXI][work_info_EXTRA_PAY] > 0 && work_info[WORK_TAXI][work_info_EXTRA_PAY_EXP] > 0)
		{
			work_extra_payment = (work_info[WORK_TAXI][work_info_EXTRA_PAY] * floatround(floatdiv(PLAYER_WORKS[ driver ][WORK_TAXI][pwork_LEVEL], work_info[WORK_TAXI][work_info_EXTRA_PAY_EXP])));
			if(work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT] != 0) if(work_extra_payment > work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT]) work_extra_payment = work_info[WORK_TAXI][work_info_EXTRA_PAY_LIMIT];
		
			if(PI[driver][pi_VIP]) work_extra_payment += SU_WORK_EXTRA_PAY;
		}
		PLAYER_WORKS[driver][WORK_TAXI][pwork_LEVEL] ++;
		
		SendClientMessageEx(driver, -1, ""YELLOW"Has ganado %s$ con este viaje.", number_format_thousand(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT] + work_extra_payment));
		SendClientMessage(driver, -1, ""YELLOW"El pasajero no tiene suficiente dinero para seguir pagando el viaje.");
		GivePlayerCash(driver, TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT] + work_extra_payment, true, false);
		
		SendClientMessageEx(passenger, -1, ""YELLOW"El taxi te costó %s$.", number_format_thousand(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT]));
		SendClientMessage(passenger, -1, ""YELLOW"No tienes suficiente dinero para seguir pagando el viaje.");
		GivePlayerCash(passenger, -TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT], true, true);
		if(PI[passenger][pi_CASH] < 0) SetPlayerCash(passenger, 0);
		
		ResetVehicleTaxiMeter(taxi);
		HidePlayerTaxiMeter(passenger);
		UpdatePlayerTaxiMeterTextdraws(driver);
		
		RemovePlayerFromVehicle(passenger);
		
		new new_passenger = GetVehicleFirstPassenger(taxi);
		if(new_passenger != INVALID_PLAYER_ID && new_passenger != passenger)
		{
			ShowPlayerTaxiMeter(new_passenger);
			if(PLAYER_TEMP[new_passenger][pt_WANT_TAXI])
			{
				PLAYER_TEMP[new_passenger][pt_WANT_TAXI] = false;
				DisablePlayerTaxiMark(new_passenger);
			}
			
			TAXI_METER_VEHICLE[taxi][veh_taxi_meter_ENABLED] = true;
			GetVehiclePos(taxi, TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_X], TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_Y], TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_Z]);
			KillTimer(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_TIMER]);
			TAXI_METER_VEHICLE[taxi][veh_taxi_meter_TIMER] = SetTimerEx("UpdateVehicleTaximeter", 4000, true, "iii", taxi, GLOBAL_VEHICLES[taxi][gb_vehicle_DRIVER], new_passenger);
		}
		return 1;
	}
	
	new Float:distance = GetVehicleDistanceFromPoint(taxi, TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_X], TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_Y], TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_Z]) * 0.01;

	TAXI_METER_VEHICLE[taxi][veh_taxi_meter_DISTANCE] += distance;
	TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PAYMENT] = TAXI_METER_VEHICLE[taxi][veh_taxi_meter_PRICE] * floatround(TAXI_METER_VEHICLE[taxi][veh_taxi_meter_DISTANCE], floatround_round);
	
	GetVehiclePos(taxi, TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_X], TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_Y], TAXI_METER_VEHICLE[taxi][veh_taxi_meter_OLD_Z]);
	
	UpdatePlayerTaxiMeterTextdraws(driver);
	UpdatePlayerTaxiMeterTextdraws(passenger);
	return 1;
}

HidePlayerTaxiMeter(playerid)
{
    pTaximeterShown[playerid] = false;
    for(new i = 0; i < sizeof pTaximeterTd[]; i ++) {
        PlayerTextDrawHide(playerid, pTaximeterTd[playerid]);
		TextDrawHideForPlayer(playerid, TaximeterTd);
    }
	PLAYER_TEMP[playerid][pt_TAXI_METER_ENABLED] = false;
	return 1;
}