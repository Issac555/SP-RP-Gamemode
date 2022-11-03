layerid, $YSI_BAL_HELP);
	else Text_SendFormat(playerid, "YSI_BANK_BALANCE", YSI_g_sMoney[playerid]);
	return 1;
}

/*-------------------------------------------------------------------------*//**
 * Command:
 *  withdraw
 * Parameters:
 *  <amount> - Amount to withdraw.
 * </returns>
 * <remarks>
 *  Calls Property_Bank with negative input amount.
 * </remarks>
 *//*------------------------------------------------------------------------**/

YCMD:withdraw(playerid, params[], help)
{
	if (help)
	{
		Text_Send(playerid, $YSI_WITH_HELP1);
		Text_Send(playerid, $YSI_WITH_HELP2);
		Text_Send(playerid, $YSI_WITH_HELP3);
		Text_SendFormat(playerid, "YSI_WITH_HELP4", "withdraw");
	}
	else
	{
		new
			bank = -strval(params);
		if (Property_Bank(playerid, bank)) Text_SendFormat(playerid, "YSI_WITHDREW", bank, YSI_g_sMoney[playerid]);
		else Text_Send(playerid, $YSI_BANK_INSUFFUCUENT);
	}
	return 1;
}

/*-------------------------------------------------------------------------*//**
 * Command:
 *  buy
 * Parameters:
 *  -
 * </returns>
 * <remarks>
 *  Allows you to purchase the property you are at.
 * </remarks>
 *//*------------------------------------------------------------------------**/

YCMD:buy(playerid, params[], help)
{
	P:2("ycmd_buy() start");
	if (help)
	{
		Text_Send(playerid, $YSI_BUY_HELP_1);
		Text_Send(playerid, $YSI_BUY_HELP_2);
		Text_Send(playerid, $YSI_BUY_HELP_3);
		Text_Send(playerid, $YSI_BUY_HELP_4);
	}
	else
	{
		P:3("ycmd_buy() Not help");
		new
			cpid,
			prop = NO_PROPERTY;
		if (IsPlayerInCheckpoint(playerid))
		{
			P:4("ycmd_buy() Checkpoint");
			cpid = Checkpoint_Get(playerid);
			if (cpid != NO_CHECKPOINT)
			{
				prop = YSI_g_sCheckpointPointers[cpid];
			}
		}
		#if defined _YSI_VISUAL_PICKUPS
		#pragma tabsize 4
		else if (YSI_g_sPickupTimer[playerid] != -1)
		{
				cpid = YSI_g_sPlayerPickup[playerid];
				if (cpid != NO_PICKUP)
				{
					prop = YSI_g_sPickupPointers[cpid];
				}
				P:4("ycmd_buy() Pickup %d", cpid);
		}
		#pragma tabsize 4
		#endif
		else
		{
			P:4("ycmd_buy() Not in a checkpoint");
			Text_Send(playerid, $YSI_PROP_CP);
			return 1;
		}
		P:4("ycmd_buy() Prop %d", prop);
		if (prop != NO_PROPERTY)
		{
			new
				e_PROP_FLAGS:flag = YSI_g_sProperties[prop][E_PROP_DATA_FLAGS];
			if (flag & e_PROP_FLAGS_TYPES == e_PROP_FLAGS_TYPE_PROP)
			{
				if (YSI_g_sPropCount[playerid] < YSI_g_sMaxPlayerProps)
				{
					new
						price = ((YSI_g_sProperties[prop][E_PROP_DATA_DATA_2] >>> 6) & 0x03FFF000) | ((YSI_g_sProperties[prop][E_PROP_DATA_DATA_1] >>> 20) & 0x00000FFF);
					if (GetPlayerMoney(playerid) >= price)
					{
						if (Property_GetOption(2, flag))
						{
							if (Bit_GetBit(YSI_g_sProperties[prop][E_PROP_DATA_PLAYERS], playerid))
							{
								Text_Send(playerid, $YSI_PROP_OWN);
								return 1;
							}
							Bit_Set(YSI_g_sProperties[prop][E_PROP_DATA_PLAYERS], playerid, 1, PLAYER_BIT_ARRAY);
						}
						else
						{
							new
								owner = _:YSI_g_sProperties[prop][E_PROP_DATA_PLAYERS][0];
							if (owner == playerid)
							{
								Text_Send(playerid, $YSI_PROP_OWN);
								return 1;
							}
							if (IsPlayerConnected(owner))
							{
								GivePlayerMoney(owner, price);
								Text_SendFormat(owner, "YSI_PROP_OUT", YSI_g_sProperties[prop][E_PROP_DATA_NAME], ReturnPlayerName(playerid), playerid);
							}
							YSI_g_sProperties[prop][E_PROP_DATA_PLAYERS][0] = Bit:playerid;
							if (Property_GetOption(1, flag))
							{
								#if defined _YSI_VISUAL_PICKUPS
									if (Property_GetOption(5, flag))
										Pickup_Show(cpid, 0);
									else
								#endif
										Checkpoint_SetVisible(cpid, 0);
							}
							else if (YSI_g_sRebuyDelay)
							{
								SetTimerEx("Property_ResetRebuy", YSI_g_sRebuyDelay, 0, "i", prop);
								#if defined _YSI_VISUAL_PICKUPS
									if (Property_GetOption(5, flag))
										Pickup_Show(cpid, 0);
									else
								#endif
										Checkpoint_SetVisible(cpid, 0);
							}
						}
						YSI_g_sPropCount[playerid]++;
						GivePlayerMoney(playerid, -price);
						Text_SendFormat(playerid, "YSI_PROP_BOUGHT", YSI_g_sProperties[prop][E_PROP_DATA_NAME], price);
						Text_SendToAllFormat("YSI_PROP_ANN", ReturnPlayerName(playerid), YSI_g_sProperties[prop][E_PROP_DATA_NAME]);
						if (Property_GetOption(4, flag))
						{
							price = (price * PROPERTY_INCREASE_PERCENT) / 100;
							YSI_g_sProperties[prop][E_PROP_DATA_DATA_1] = (YSI_g_sProperties[prop][E_PROP_DATA_DATA_1] & 0xFFFFF) | ((price & 0x00000FFF) << 20);
							YSI_g_sProperties[prop][E_PROP_DATA_DATA_2] = (YSI_g_sProperties[prop][E_PROP_DATA_DATA_2] & 0x3FFFF) | ((price & 0x03FFF000) << 6);
						}
						if (Property_GetOption(1, flag)) Text_SendFormat(playerid, "YSI_PROP_SELL", "sell", prop, (price * ((Property_GetOption(3, flag)) ? PROPERTY_SELL_PERCENT : 100)) / 100);
					}
					else Text_Send(playerid, $YSI_PROP_AFFORD);
				}
				else Text_Send(playerid, $YSI_PROP_MAX);
			}
			else if (flag & e_PROP_FLAGS_TYPES == e_PROP_FLAGS_TYPE_HOUS)
			{
				if (YSI_g_sHouseCount[playerid] < YSI_g_sMaxPlayerHouses)
				{
					new
						owner = _:YSI_g_sProperties[prop][E_PROP_DATA_PLAYERS][0];
					if (owner == INVALID_PLAYER_ID)
					{
						new
							price = YSI_g_sProperties[prop][E_PROP_DATA_NAME][6];
						if (GetPlayerMoney(playerid) >= price)
						{
							YSI_g_sProperties[prop][E_PROP_DATA_PLAYERS][0] = Bit:playerid;
							YSI_g_sHouseCount[playerid]++;
							GivePlayerMoney(playerid, -price);
							Text_SendFormat(playerid, "YSI_PROP_BOUGHT_HOUSE", price);
							Text_SendFormat(playerid, "YSI_PROP_SELL", "sell", prop, price);
						}
						else Text_Send(playerid, $YSI_PROP_AFFORD);
					}
					else if (owner == playerid) Text_Send(playerid, $YSI_PROP_YOURS);
					else Text_SendFormat(playerid, "YSI_PROP_HOUSE_OWNED", ReturnPlayerName(owner));
				}
				else Text_Send(playerid, $YSI_PROP_MAX_HOUSE);
			}
			else Text_Send(playerid, $YSI_PROP_NOT);
		}
		else Text_Send(playerid, $YSI_PROP_NOT);
	}
	return 1;
	#pragma unused params
}

/*-------------------------------------------------------------------------*//**
 * <param name="prop">Property to make available.</param>
 * <remarks>
 *  Makes a property available for purchase after a delay.
 * </remarks>
 *//*------------------------------------------------------------------------**/

public Property_ResetRebuy(prop)
{
	if (Property_IsActive(prop))
	{
		new
			e_PROP_FLAGS:flag = YSI_g_sProperties[prop][E_PROP_DATA_FLAGS];
		if ((flag & e_PROP_FLAGS_TYPES) == e_PROP_FLAGS_TYPE_PROP)
		{
			#pragma tabsize 4
			#if defined _YSI_VISUAL_PICKUPS
				if (Property_GetOption(5, flag))
					Pickup_Show(_:(flag & e_PROP_FLAGS_LINK), 1);
				else
			#endif
					Checkpoint_SetVisible(_:(flag & e_PROP_FLAGS_LINK), 1);
			#pragma tabsize 4
		}
	}
}

/*-------------------------------------------------------------------------*//**
 * <remarks>
 *  Does the main processing for the library.  Removes or kills people in areas
 *  they shouldn't be and gives out money to people who earnt it.
 * </remarks>
 *//*------------------------------------------------------------------------**/

ptask Property_Loop[500](i)
{
	static
		Float:s_fLastGoodPos[MAX_PLAYERS][3];//,
	//	sLastTick = 0;
	//new
	//	currentTick = GetTickCount(),
	//	elapse = currentTick - sLastTick;
	/*for (new i = 0; i < MAX_PROPERTIES; i++)
	{
		new
			flags = YSI_g_sProperties[i][E_PROP_DATA_FLAGS];
		if (flags & _:e_PROP_FLAGS_ACTIVE)
		{
			switch (flags & _:e_PROP_FLAGS_TYPES)
			{
				case e_PROP_FLAGS_TYPE_MONP, e_PROP_FLAGS_TYPE_MONA:
				{
					new
						time = YSI_g_sProperties[i][E_PROP_DATA_DATA_2];
					if (!time) time = YSI_g_sProperties[i][E_PROP_DATA_NAME][0];
					time -= elapse;
					if (time < 0) time = 0;
					YSI_g_sProperties[i][E_PROP_DATA_DATA_2] = time;
				}
				case e_PROP_FLAGS_TYPE_PROP:
				{
					new
						time = YSI_g_sProperties[i][E_PROP_DATA_NAME][MAX_PROP_NAME - 1];
					if (!time) time = YSI_g_sProperties[i][E_PROP_DATA_DATA_1] & 0x000FFFFF;
					time -= elapse;
					if (time <= 0) time = 0;
					YSI_g_sProperties[i][E_PROP_DATA_NAME][MAX_PROP_NAME - 1] = time;
				}
			}
		}
	}
	foreach (Player, i)
	{*/
	P:3("Property_Loop() foreach start");
	new
		money,
		bad;
	for (new j = 0; j < GROUP_PROPERTY_BITS; j++)
	{
		new
			props = _:YSI_g_sPlayerProperties[i][j],
			slot = 1,
			bit;
		while (props)
		{
			if (props & slot)
			{
				new
					prop = (j * 32) + bit,
					flags = YSI_g_sProperties[prop][E_PROP_DATA_FLAGS];
				if (flags & _:e_PROP_FLAGS_ACTIVE)
				{
					switch (flags & _:e_PROP_FLAGS_TYPES)
					{
						case e_PROP_FLAGS_TYPE_MONP, e_PROP_FLAGS_TYPE_MONA:
							if (!YSI_g_sProperties[prop][E_PROP_DATA_DATA_2]) GivePlayerMoney(i, YSI_g_sProperties[prop][E_PROP_DATA_DATA_1]);
						case e_PROP_FLAGS_TYPE_PROP:
						{
							if (((Property_GetOption(2, flags)) ? (_:Bit_GetBit(YSI_g_sProperties[prop][E_PROP_DATA_PLAYERS], i)) : (_:(YSI_g_sProperties[prop][E_PROP_DATA_PLAYERS][0] == Bit:i))) && !YSI_g_sProperties[prop][E_PROP_DATA_NAME][MAX_PROP_NAME - 1]) money += YSI_g_sProperties[prop][E_PROP_DATA_DATA_2] & 0x3FFFF;
						}
						case e_PROP_FLAGS_TYPE_RSRC:
						{
							if (Property_GetOption(1, flags))
							{
								SetPlayerPos(i, s_fLastGoodPos[i][0], s_fLastGoodPos[i][1], s_fLastGoodPos[i][2]);
								bad = 1;
							}
							else
							{
								new Float:health;
								GetPlayerHealth(i, health);
								SetPlayerHealth(i, health - YSI_g_sProperties[prop][E_PROP_DATA_DATA_2]);
							}
						}
					}
				}
				props ^= slot;
			}
			slot <<= 1;
			bit++;
		}
	}
	if (money)
	{
		Text_SendFormat(i, "YSI_PROP_EARNT", money);
		GivePlayerMoney(i, money);
	}
	if (!bad) GetPlayerPos(i, s_fLastGoodPos[i][0], s_fLastGoodPos[i][1], s_fLastGoodPos[i][2]);
	P:3("Property_Loop() foreach end");
	//}
	//sLastTick = currentTick;
}

/*-------------------------------------------------------------------------*//**
 * <param name="flags">Property data to check.</param>
 * <param name="playerid">Player to check for.</param>
 *//*------------------------------------------------------------------------**/

P:D(bool:Property_IsPlayerProperty(e_PROP_FLAGS:flags,playerid));
#define Property_IsPlayerProperty(%1,%2) \
	((%1) & e_PROP_FLAGS_ACTIVE && (%1) & e_PROP_FLAGS_TYPES == e_PROP_FLAGS_TYPE_PROP && Checkpoint_HasPlayerNoWorld(_:((%1) & e_PROP_FLAGS_LINK), (%2)))

/*-------------------------------------------------------------------------*//**
 * <param name="playerid">Player to count for.</param>
 * <remarks>
 *  Gets the number of properties this player could theoretically own.
 * </remarks>
 *//*------------------------------------------------------------------------**/

stock Property_GetPlayerPropCount(playerid)
{
	new
		count;
	for (new i = 0; i < MAX_PROPERTIES; i++)
	{
		new
			e_PROP_FLAGS:flags = YSI_g_sProperties[i][E_PROP_DATA_FLAGS];
		if (Property_IsPlayerProperty(flags, playerid)) count++;
	}
	return count;
}

/*-------------------------------------------------------------------------*//**
 * <param name="playerid">Player to get properties of.</param>
 * <param name="properties">Array to return properties in.</param>
 * <remarks>
 *  Gets the properties currently owned by this player.
 * </remarks>
 *//*------------------------------------------------------------------------**/

stock Property_GetPropertyBits(playerid, Bit:properties[])
{
	if (playerid < 0 || playerid >= MAX_PLAYERS) return 0;
	for (new i = 0; i < MAX_PROPERTIES; i++)
	{
		new
			e_PROP_FLAGS:flags = YSI_g_sProperties[i][E_PROP_DATA_FLAGS];
		if (flags & e_PROP_FLAGS_ACTIVE && flags & e_PROP_FLAGS_TYPES == e_PROP_FLAGS_TYPE_PROP && ((Property_GetOption(2, flags)) ? (_:Bit_GetBit(YSI_g_sProperties[i][E_PROP_DATA_PLAYERS], playerid)) : (_:(_:YSI_g_sProperties[i][E_PROP_DATA_PLAYERS][0] == playerid)))) Bit_Set(properties, i, 1, GROUP_PROPERTY_BITS);
	}
	return 1;
}

/*-------------------------------------------------------------------------*//**
 * Command:
 *  properties
 * Parameters:
 *  <page> - Page of properties to view (optional).
 * </returns>
 * <remarks>
 *  Lista all properties available to a player and who owns them.
 * </remarks>
 *//*------------------------------------------------------------------------**/

YCMD:properties(playerid, params[], help)
{
	if (help)
	{
		Text_Send(playerid, $YSI_LIST_HELP_1);
		Text_Send(playerid, $YSI_LIST_HELP_2);
		Text_Send(playerid, $YSI_LIST_HELP_3);
		return 1;
	}
	new
		props = Property_GetPlayerPropCount(playerid),
		pages = (props + 7) / 8,
		page = strval(params);
	if (props > 8)
	{
		if (page)
		{
			if (page <= pages)
			{
				for (new i = 0, j = 0, k = (page - 1) * 8, n = k + 8; i < MAX_PROPERTIES && j < n; i++)
				{
					new
						e_PROP_FLAGS:flags = YSI_g_sProperties[i][E_PROP_DATA_FLAGS];
					if (Property_IsPlayerProperty(flags, playerid))
					{
						if (j >= k)
						{
							if (Property_GetOption(2, flags)) Text_SendFormat(playerid, "YSI_LIST_MULTI", YSI_g_sProperties[i][E_PROP_DATA_NAME], Bit_GetCount(YSI_g_sProperties[i][E_PROP_DATA_PLAYERS], PLAYER_BIT_ARRAY));
							else Text_SendFormat(playerid, "YSI_LIST_FORM", YSI_g_sProperties[i][E_PROP_DATA_NAME], ReturnPlayerName(_:YSI_g_sProperties[i][E_PROP_DATA_PLAYERS][0]));
						}
						j++;
					}
				}
			}
			else Text_SendFormat(playerid, "YSI_LIST_PAGES", "properties", pages);
		}
		else
		{
			Text_Send(playerid, $YSI_LIST_MORE);
			Text_SendFormat(playerid, "YSI_LIST_PAGES", "properties", pages);
		}
	}
	else if (props)
	{
		for (new j = 0, i = 0; i < props && j < MAX_PROPERTIES; j++)
		{
			new
				e_PROP_FLAGS:flags = YSI_g_sProperties[j][E_PROP_DATA_FLAGS];
			if (Property_IsPlayerProperty(flags, playerid))
			{
				if (Property_GetOption(2, flags)) Text_SendFormat(playerid, "YSI_LIST_MULTI", YSI_g_sProperties[j][E_PROP_DATA_NAME], Bit_GetCount(YSI_g_sProperties[j][E_PROP_DATA_PLAYERS], PLAYER_BIT_ARRAY));
				else Text_SendFormat(playerid, "YSI_LIST_FORM", YSI_g_sProperties[j][E_PROP_DATA_NAME], ReturnPlayerName(_:YSI_g_sProperties[j][E_PROP_DATA_PLAYERS][0]));
				i++;
			}
		}
	}
	else Text_Send(playerid, $YSI_LIST_NONE);
	return 1;
}

/*-------------------------------------------------------------------------*//**
 * <param name="property">Property to get link of.</param>
 * <remarks>
 *  Returns a reference to the area or checkpoint used by this property or
 *  NO_PROPERTY on fail.
 * </remarks>
 *//*------------------------------------------------------------------------**/

stock Property_GetLink(property)
{
	if (Property_IsActive(property)) return _:(YSI_g_sProperties[property][E_PROP_DATA_FLAGS] & e_PROP_FLAGS_LINK);
	return NO_PROPERTY;
}

/*-------------------------------------------------------------------------*//**
 * Command:
 *  enter
 * Parameters:
 *  -
 * </returns>
 * <remarks>
 *  Allows you to enter a house you own.
 * </remarks>
 *//*------------------------------------------------------------------------**/

YCMD:enter(playerid, params[], help)
{
	P:2("ycmd_enter() start");
	if (help)
	{
		Text_Send(playerid, $YSI_ENTER_HELP_1);
		Text_Send(playerid, $YSI_ENTER_HELP_2);
	}
	else
	{
		P:3("ycmd_enter() Not help");
		new
			cpid,
			prop = NO_PROPERTY;
		if (IsPlayerInCheckpoint(playerid))
		{
			P:4("ycmd_enter() Checkpoint");
			cpid = Checkpoint_Get(playerid);
			if (cpid != NO_CHECKPOINT)
			{
				prop = YSI_g_sCheckpointPointers[cpid];
			}
		}
		#if defined _YSI_VISUAL_PICKUPS
			#pragma tabsize 4
			else if (YSI_g_sPickupTimer[playerid] != -1)
			{
				cpid = YSI_g_sPlayerPickup[playerid];
				if (cpid != NO_PICKUP)
				{
					prop = YSI_g_sPickupPointers[cpid];
				}
				P:4("ycmd_enter() Pickup %d", cpid);
			}
		#endif
		#pragma tabsize 4
		P:4("ycmd_enter() Prop %d", prop);
		if (prop != NO_PROPERTY)
		{
			new
				e_PROP_FLAGS:flag = YSI_g_sProperties[prop][E_PROP_DATA_FLAGS];
			if (flag & e_PROP_FLAGS_TYPES == e_PROP_FLAGS_TYPE_HOUS)
			{
				if (_:YSI_g_sProperties[prop][E_PROP_DATA_PLAYERS][0] == playerid)
				{
					SetPlayerInterior(playerid, YSI_g_sProperties[prop][E_PROP_DATA_DATA_1]);
					SetPlayerVirtualWorld(playerid, YSI_g_sProperties[prop][E_PROP_DATA_DATA_2]);
					SetPlayerPos(playerid, Float:YSI_g_sProperties[prop][E_PROP_DATA_NAME][3], Float:YSI_g_sProperties[prop][E_PROP_DATA_NAME][4], Float:YSI_g_sProperties[prop][E_PROP_DATA_NAME][5]);
					YSI_g_sCurrentHouse[playerid] = prop;
				}
				else Text_Send(playerid, $YSI_ENTER_NOT_YOURS);
			}
			else Text_Send(playerid, $YSI_ENTER_NO_HOUSE);
		}
		else Text_Send(playerid, $YSI_ENTER_NO_HOUSE);
	}
	return 1;
	#pragma unused params
}

/*-------------------------------------------------------------------------*//**
 * Command:
 *  exit
 * Parameters:
 *  -
 * </returns>
 * <remarks>
 *  Allows you to exit a house you own.
 * </remarks>
 *//*------------------------------------------------------------------------**/

YCMD:exit(playerid, params[], help)
{
	P:2("ycmd_enter() start");
	if (help)
	{
		Text_Send(playerid, $YSI_EXIT_HELP_1);
	}
	else
	{
		new
			prop = YSI_g_sCurrentHouse[playerid];
		if (prop != -1)
		{
			if (IsPlayerInRangeOfPoint(playerid, 3.0, Float:YSI_g_sProperties[prop][E_PROP_DATA_NAME][3], Float:YSI_g_sProperties[prop][E_PROP_DATA_NAME][4], Float:YSI_g_sProperties[prop][E_PROP_DATA_NAME][5]))
			{
				YSI_g_sCurrentHouse[playerid] = -1;
				SetPlayerInterior(playerid, 0);
				SetPlayerVirtualWorld(playerid, 0);
				SetPlayerPos(playerid, Float:YSI_g_sProperties[prop][E_PROP_DATA_NAME][0], Float:YSI_g_sProperties[prop][E_PROP_DATA_NAME][1], Float:YSI_g_sProperties[prop][E_PROP_DATA_NAME][2]);
			}
			else Text_Send(playerid, $YSI_EXIT_NEAR);
		}
		else Text_Send(playerid, $YSI_EXIT_NOT_IN);
	}
	return 1;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         2195, 300},
    {FURNITURE_TYPE_DECORATION, 950, 300},
    {FURNITURE_TYPE_DECORATION, 946, 300},
    {FURNITURE_TYPE_DECORATION, 948, 300},
    {FURNITURE_TYPE_DECORATION, 1361, 300},
    {FURNITURE_TYPE_DECORATION, 19473, 600}
};

new Float:FurnitureShopBuyPos[3] = {1975.910766, -1779.846435, 1249.219482};

new
    PlayerText:pFurnitureShopTd[MAX_PLAYERS][10] = {{PlayerText:INVALID_TEXT_DRAW, ...}, ...},
    bool:pFurnitureShopOpened[MAX_PLAYERS],
    pFurnitureShopCurrentType[MAX_PLAYERS],
    pFurnitureShopCurrentModel[MAX_PLAYERS],
    pFurnitureShopPickup[MAX_PLAYERS] = {INVALID_STREAMER_ID, ...}
;

hook OnScriptInit() {
    CreateDynamic3DTextLabel("Usa {"#PRIMARY_COLOR"}/muebles {FFFFFF}para comprar muebles.", 0xFFFFFFFF, FurnitureShopBuyPos[0], FurnitureShopBuyPos[1], FurnitureShopBuyPos[2], 10.0, .testlos = true, .worldid = 0);
}

hook OnPlayerDisconnect(playerid, reason) {
    DestroyPlayerFurnitureShop(playerid);
}

hook OnPlayerStateChange(playerid, newstate, oldstate)
{
	if(newstate == PLAYER_STATE_SPECTATING || newstate == PLAYER_STATE_WASTED) {
        if(pFurnitureShopOpened[playerid]) {
		    CancelSelectTextDrawEx(playerid);
        }
	}
	return 1;
}

hook OnPlayerClickTextDraw(playerid, Text:clickedid) {
    if(clickedid == Text:INVALID_TEXT_DRAW && pFurnitureShopOpened[playerid]) {
        DestroyPlayerFurnitureShop(playerid);
    }
}

hook OnPlayerClickPlayerTD(playerid, PlayerText:playertextid) {
    if(pFurnitureShopOpened[playerid]) {
        if(playertextid == pFurnitureShopTd[playerid][3]) { //<< CAT
            pFurnitureShopCurrentType[playerid] --;
            if(pFurnitureShopCurrentType[playerid] < 0) pFurnitureShopCurrentType[playerid] = sizeof(FurnitureTypesInfo) - 1;
            pFurnitureShopCurrentModel[playerid] = 0;
            UpdatePlayerFurnitureShop(playerid);
            return Y_HOOKS_BREAK_RETURN_1;
        }
        else if(playertextid == pFurnitureShopTd[playerid][4]) { //>> CAT
            pFurnitureShopCurrentType[playerid] ++;
            if(pFurnitureShopCurrentType[playerid] > sizeof(FurnitureTypesInfo) - 1) pFurnitureShopCurrentType[playerid] = 0;
            pFurnitureShopCurrentModel[playerid] = 0;
            UpdatePlayerFurnitureShop(playerid);
            return Y_HOOKS_BREAK_RETURN_1;
        }
        else if(playertextid == pFurnitureShopTd[playerid][6]) { //<< MUEBLE
            pFurnitureShopCurrentModel[playerid] --;
            if(pFurnitureShopCurrentModel[playerid] < 0) pFurnitureShopCurrentModel[playerid] = CountFurnitureObjectsInfoType(pFurnitureShopCurrentType[playerid]) - 1;
            UpdatePlayerFurnitureShop(playerid, false);
            return Y_HOOKS_BREAK_RETURN_1;
        }
        else if(playertextid == pFurnitureShopTd[playerid][7]) { //>> MUEBLE
            pFurnitureShopCurrentModel[playerid] ++;
            if(pFurnitureShopCurrentModel[playerid] > CountFurnitureObjectsInfoType(pFurnitureShopCurrentType[playerid]) - 1) pFurnitureShopCurrentModel[playerid] = 0;
            UpdatePlayerFurnitureShop(playerid, false);
            return Y_HOOKS_BREAK_RETURN_1;
        }
        else if(playertextid == pFurnitureShopTd[playerid][9]) { //COMPRAR
            new dialog_body[(MAX_SU_PROPERTIES * 128) + 1], count = 0;
            dialog_body = "Propiedad\tMuebles\n";
            for(new i = 0; i < sizeof PROPERTY_INFO; i ++) {
                if(PROPERTY_INFO[i][property_SOLD] && PROPERTY_INFO[i][property_OWNER_ID] == PI[playerid][pi_ID]) {
                    new string[64];
                    format(string, sizeof string, "%d. %s [ID: %d]\t%d/%d muebles\n", count + 1, PROPERTY_INFO[i][property_NAME], PROPERTY_INFO[i][property_ID], CountPropertyObjects(PROPERTY_INFO[i][property_ID]), PI[playerid][pi_VIP] ? MAX_SU_PROPERTY_OBJECTS : MAX_NU_PROPERTY_OBJECTS);
                    strcat(dialog_body, string);

                    PLAYER_TEMP[playerid][pt_PLAYER_GPS_SELECTED_PROPERTY][count] = i;
                    count ++;
                }
            }

            if(count == 0) return SendNotification(playerid, "No tienes ninguna propiedad.");

            for(new i = 0; i < sizeof pFurnitureShopTd[]; i ++) {
                PlayerTextDrawHide(playerid, pFurnitureShopTd[playerid][i]);
            }

            PLAYER_TEMP[playerid][pt_DIALOG_RESPONDED] = false;
            PLAYER_TEMP[playerid][pt_DIALOG_ID] = DIALOG_FSHOP_SELECT_PROPERTY;
            ShowPlayerDialog(playerid, DIALOG_FSHOP_SELECT_PROPERTY, DIALOG_STYLE_TABLIST_HEADERS, "Selecciona la propiedad", dialog_body, "Comprar", "Cerrar");
            SendNotification(playerid, "Selecciona la propiedad donde quieres que entregemos el mueble.");
            return Y_HOOKS_BREAK_RETURN_1;
        }
    }
    return Y_HOOKS_CONTINUE_RETURN_1;
}

hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[]) {
    if(dialogid == DIALOG_FSHOP_SELECT_PROPERTY) {
        if(response) {
            new property_index = PLAYER_TEMP[playerid][pt_PLAYER_GPS_SELECTED_PROPERTY][listitem];
            new limit = PI[playerid][pi_VIP] ? MAX_SU_PROPERTY_OBJECTS : MAX_NU_PROPERTY_OBJECTS;
            if(CountPropertyObjects(PROPERTY_INFO[property_index][property_ID]) >= limit) SendNotification(playerid, "No puedes añadir más muebles a esta propiedad.");
            else {
                new objectIndex = GetCurrentFurnitureObjectIndex(playerid);
                if(GivePlayerCash(playerid, -FurnitureObjectsInfo[objectIndex][foi_PRICE], true, true)) {
                    RegisterPropertyObject(property_index, PROPERTY_INFO[property_index][property_ID], FurnitureObjectsInfo[objectIndex][foi_MODELID]);
                    SendNotification(playerid, "~g~¡El mueble será entregado en tu propiedad! ~w~Puedes seguir comprando o presionar ~y~'ESC' ~w~para salir.");
                }
                else SendNotification(playerid, "No tienes suficiente dinero para comprar este mueble.");
            }
        }
        for(new i = 0; i < sizeof pFurnitureShopTd[]; i ++) {
            PlayerTextDrawShow(playerid, pFurnitureShopTd[playerid][i]);
        }
        return Y_HOOKS_BREAK_RETURN_1;
    }
    return Y_HOOKS_CONTINUE_RETURN_1;
}

DestroyPlayerFurnitureShop(playerid) {
    for(new i = 0; i < sizeof pFurnitureShopTd[]; i ++) {
        if(pFurnitureShopTd[playerid][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, pFurnitureShopTd[playerid][i]);
            pFurnitureShopTd[playerid][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }

    if(pFurnitureShopPickup[playerid] != INVALID_STREAMER_ID) {
        DestroyDynamicPickup(pFurnitureShopPickup[playerid]);
        pFurnitureShopPickup[playerid] = INVALID_STREAMER_ID;
    }

    pFurnitureShopOpened[playerid] = false;
    pFurnitureShopCurrentType[playerid] = 0;
    pFurnitureShopCurrentModel[playerid] = 0;
    SetPlayerVirtualWorld(playerid, 0);
    SetCameraBehindPlayer(playerid);
}

UpdatePlayerFurnitureShop(playerid, bool:camera = true) {
    if(camera)
    InterpolatePCameraToFurType(playerid);

    new string[128];
    format(string, sizeof string, "Categoría_(%d/%d)", pFurnitureShopCurrentType[playerid] + 1, sizeof(FurnitureTypesInfo));
    FixTextDrawString(string);
    PlayerTextDrawSetString(playerid, pFurnitureShopTd[playerid][1], string);
    
    format(string, sizeof string, "%s", FurnitureTypesInfo[pFurnitureShopCurrentType[playerid]][fti_NAME]);
    FixTextDrawString(string);
    PlayerTextDrawSetString(playerid, pFurnitureShopTd[playerid][2], string);

    if(pFurnitureShopPickup[playerid] != INVALID_STREAMER_ID) {
        DestroyDynamicPickup(pFurnitureShopPickup[playerid]);
        pFurnitureShopPickup[playerid] = INVALID_STREAMER_ID;
    }
    
    new objectIndex = GetCurrentFurnitureObjectIndex(playerid);
    if(objectIndex != -1) {
        format(string, sizeof string, "Mueble_(%d/%d)", pFurnitureShopCurrentModel[playerid] + 1, CountFurnitureObjectsInfoType(pFurnitureShopCurrentType[playerid]));
        FixTextDrawString(string);
        PlayerTextDrawSetString(playerid, pFurnitureShopTd[playerid][5], string);
    
        format(string, sizeof string, "%s$", number_format_thousand(FurnitureObjectsInfo[objectIndex][foi_PRICE]));
        FixTextDrawString(string);
        PlayerTextDrawSetString(playerid, pFurnitureShopTd[playerid][8], string);
        
        PlayerTextDrawShow(playerid, pFurnitureShopTd[playerid][6]);
        PlayerTextDrawShow(playerid, pFurnitureShopTd[playerid][7]);

        PlayerTextDrawColor(playerid, pFurnitureShopTd[playerid][9], -1);
        PlayerTextDrawBoxColor(playerid, pFurnitureShopTd[playerid][9], -2139062017);
        PlayerTextDrawSetSelectable(playerid, pFurnitureShopTd[playerid][9], true);
        PlayerTextDrawShow(playerid, pFurnitureShopTd[playerid][9]);

        new Float:fPX, Float:fPY, Float:fPZ, Float:fVX, Float:fVY, Float:fVZ, Float:pos[3];
        fPX = FurnitureTypesInfo[ pFurnitureShopCurrentType[playerid] ][fti_CAM_X];
        fPY = FurnitureTypesInfo[ pFurnitureShopCurrentType[playerid] ][fti_CAM_Y];
        fPZ = FurnitureTypesInfo[ pFurnitureShopCurrentType[playerid] ][fti_CAM_Z];
        fVX = FurnitureTypesInfo[ pFurnitureShopCurrentType[playerid] ][fti_CAM_LOOK_AT_X] - fPX;
        fVY = FurnitureTypesInfo[ pFurnitureShopCurrentType[playerid] ][fti_CAM_LOOK_AT_Y] - fPY;
        fVZ = FurnitureTypesInfo[ pFurnitureShopCurrentType[playerid] ][fti_CAM_LOOK_AT_Z] - fPZ;
 
        pos[0] = fPX + floatmul(fVX, FURNITURE_CAMERA_OBJECT_SCALE);
        pos[1] = fPY + floatmul(fVY, FURNITURE_CAMERA_OBJECT_SCALE);
        pos[2] = fPZ + floatmul(fVZ, FURNITURE_CAMERA_OBJECT_SCALE);

        pFurnitureShopPickup[playerid] = CreateDynamicPickup(
            FurnitureObjectsInfo[objectIndex][foi_MODELID],
            1,
            pos[0],
            pos[1],
            pos[2],
            GetPlayerVirtualWorld(playerid),
            -1,
            playerid
        );
    }
    else {
        format(string, sizeof string, "Mueble");
        FixTextDrawString(string);
        PlayerTextDrawSetString(playerid, pFurnitureShopTd[playerid][5], string);
    
        format(string, sizeof string, "categoría_vacía");
        FixTextDrawString(string);
        PlayerTextDrawSetString(playerid, pFurnitureShopTd[playerid][8], string);

        PlayerTextDrawHide(playerid, pFurnitureShopTd[playerid][6]);
        PlayerTextDrawHide(playerid, pFurnitureShopTd[playerid][7]);

        PlayerTextDrawColor(playerid, pFurnitureShopTd[playerid][9], -186);
        PlayerTextDrawBoxColor(playerid, pFurnitureShopTd[playerid][9], -2139062202);
        PlayerTextDrawSetSelectable(playerid, pFurnitureShopTd[playerid][9], false);
        PlayerTextDrawShow(playerid, pFurnitureShopTd[playerid][9]);
    }
    
    Streamer_Update(playerid, STREAMER_TYPE_PICKUP);
}

CreatePFurnitureShopTextDraws(playerid) {
    pFurnitureShopTd[playerid][0] = CreatePlayerTextDraw(playerid, 247.000000, 313.000000, "LD_SPAC:white");
    PlayerTextDrawTextSize(playerid, pFurnitureShopTd[playerid][0], 146.000000, 100.000000);
    PlayerTextDrawAlignment(playerid, pFurnitureShopTd[playerid][0], 1);
    PlayerTextDrawColor(playerid, pFurnitureShopTd[playerid][0], 170);
    PlayerTextDrawSetShadow(playerid, pFurnitureShopTd[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, pFurnitureShopTd[playerid][0], 255);
    PlayerTextDrawFont(playerid, pFurnitureShopTd[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, pFurnitureShopTd[playerid][0], 0);

    pFurnitureShopTd[playerid][1] = CreatePlayerTextDraw(playerid, 320.000000, 320.000000, "Cat_(0/0)");
    PlayerTextDrawLetterSize(playerid, pFurnitureShopTd[playerid][1], 0.301250, 1.416444);
    PlayerTextDrawTextSize(playerid, pFurnitureShopTd[playerid][1], 0.000000, 10.000000);
    PlayerTextDrawAlignment(playerid, pFurnitureShopTd[playerid][1], 2);
    PlayerTextDrawColor(playerid, pFurnitureShopTd[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, pFurnitureShopTd[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, pFurnitureShopTd[playerid][1], 1);
    PlayerTextDrawBackgroundColor(playerid, pFurnitureShopTd[playerid][1], 255);
    PlayerTextDrawFont(playerid, pFurnitureShopTd[playerid][1], 1);
    PlayerTextDrawSetProportional(playerid, pFurnitureShopTd[playerid][1], 1);

    pFurnitureShopTd[playerid][2] = CreatePlayerTextDraw(playerid, 320.000000, 335.000000, "---");
    PlayerTextDrawLetterSize(playerid, pFurnitureShopTd[playerid][2], 0.208999, 1.291999);
    PlayerTextDrawAlignment(playerid, pFurnitureShopTd[playerid][2], 2);
    PlayerTextDrawColor(playerid, pFurnitureShopTd[playerid][2], -1378294017);
    PlayerTextDrawSetShadow(playerid, pFurnitureShopTd[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, pFurnitureShopTd[playerid][2], 1);
    PlayerTextDrawBackgroundColor(playerid, pFurnitureShopTd[playerid][2], 255);
    PlayerTextDrawFont(playerid, pFurnitureShopTd[playerid][2], 2);
    PlayerTextDrawSetProportional(playerid, pFurnitureShopTd[playerid][2], 1);

    pFurnitureShopTd[playerid][3] = CreatePlayerTextDraw(playerid, 265.000000, 319.000000, "~<~");
    PlayerTextDrawLetterSize(playerid, pFurnitureShopTd[playerid][3], 0.400000, 1.600000);
    PlayerTextDrawTextSize(playerid, pFurnitureShopTd[playerid][3], 16.000000, 20.000000);
    PlayerTextDrawAlignment(playerid, pFurnitureShopTd[playerid][3], 2);
    PlayerTextDrawColor(playerid, pFurnitureShopTd[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, pFurnitureShopTd[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, pFurnitureShopTd[playerid][3], 255);
    PlayerTextDrawFont(playerid, pFurnitureShopTd[playerid][3], 1);
    PlayerTextDrawSetProportional(playerid, pFurnitureShopTd[playerid][3], 1);
    PlayerTextDrawSetSelectable(playerid, pFurnitureShopTd[playerid][3], true);

    pFurnitureShopTd[playerid][4] = CreatePlayerTextDraw(playerid, 365.000000, 319.000000, "~>~");
    PlayerTextDrawLetterSize(playerid, pFurnitureShopTd[playerid][4], 0.400000, 1.600000);
    PlayerTextDrawTextSize(playerid, pFurnitureShopTd[playerid][4], 16.000000, 20.000000);
    PlayerTextDrawAlignment(playerid, pFurnitureShopTd[playerid][4], 2);
    PlayerTextDrawColor(playerid, pFurnitureShopTd[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, pFurnitureShopTd[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, pFurnitureShopTd[playerid][4], 255);
    PlayerTextDrawFont(playerid, pFurnitureShopTd[playerid][4], 1);
    PlayerTextDrawSetProportional(playerid, pFurnitureShopTd[playerid][4], 1);
    PlayerTextDrawSetSelectable(playerid, pFurnitureShopTd[playerid][4], true);

    pFurnitureShopTd[playerid][5] = CreatePlayerTextDraw(playerid, 320.000000, 355.000000, "Mueble_(0/0)");
    PlayerTextDrawLetterSize(playerid, pFurnitureShopTd[playerid][5], 0.301250, 1.416444);
    PlayerTextDrawTextSize(playerid, pFurnitureShopTd[playerid][5], 0.000000, 10.000000);
    PlayerTextDrawAlignment(playerid, pFurnitureShopTd[playerid][5], 2);
    PlayerTextDrawColor(playerid, pFurnitureShopTd[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, pFurnitureShopTd[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, pFurnitureShopTd[playerid][5], 1);
    PlayerTextDrawBackgroundColor(playerid, pFurnitureShopTd[playerid][5], 255);
    PlayerTextDrawFont(playerid, pFurnitureShopTd[playerid][5], 1);
    PlayerTextDrawSetProportional(playerid, pFurnitureShopTd[playerid][5], 1);

    pFurnitureShopTd[playerid][6] = CreatePlayerTextDraw(playerid, 265.000000, 354.000000, "~<~");
    PlayerTextDrawLetterSize(playerid, pFurnitureShopTd[playerid][6], 0.400000, 1.600000);
    PlayerTextDrawTextSize(playerid, pFurnitureShopTd[playerid][6], 16.000000, 20.000000);
    PlayerTextDrawAlignment(playerid, pFurnitureShopTd[playerid][6], 2);
    PlayerTextDrawColor(playerid, pFurnitureShopTd[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, pFurnitureShopTd[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, pFurnitureShopTd[playerid][6], 255);
    PlayerTextDrawFont(playerid, pFurnitureShopTd[playerid][6], 1);
    PlayerTextDrawSetProportional(playerid, pFurnitureShopTd[playerid][6], 1);
    PlayerTextDrawSetSelectable(playerid, pFurnitureShopTd[playerid][6], true);

    pFurnitureShopTd[playerid][7] = CreatePlayerTextDraw(playerid, 365.000000, 354.000000, "~>~");
    PlayerTextDrawLetterSize(playerid, pFurnitureShopTd[playerid][7], 0.400000, 1.600000);
    PlayerTextDrawTextSize(playerid, pFurnitureShopTd[playerid][7], 16.000000, 20.000000);
    PlayerTextDrawAlignment(playerid, pFurnitureShopTd[playerid][7], 2);
    PlayerTextDrawColor(playerid, pFurnitureShopTd[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, pFurnitureShopTd[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, pFurnitureShopTd[playerid][7], 255);
    PlayerTextDrawFont(playerid, pFurnitureShopTd[playerid][7], 1);
    PlayerTextDrawSetProportional(playerid, pFurnitureShopTd[playerid][7], 1);
    PlayerTextDrawSetSelectable(playerid, pFurnitureShopTd[playerid][7], true);

    pFurnitureShopTd[playerid][8] = CreatePlayerTextDraw(playerid, 320.000000, 369.000000, "0$");
    PlayerTextDrawLetterSize(playerid, pFurnitureShopTd[playerid][8], 0.208998, 1.291998);
    PlayerTextDrawAlignment(playerid, pFurnitureShopTd[playerid][8], 2);
    PlayerTextDrawColor(playerid, pFurnitureShopTd[playerid][8], -1378294017);
    PlayerTextDrawSetShadow(playerid, pFurnitureShopTd[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, pFurnitureShopTd[playerid][8], 1);
    PlayerTextDrawBackgroundColor(playerid, pFurnitureShopTd[playerid][8], 255);
    PlayerTextDrawFont(playerid, pFurnitureShopTd[playerid][8], 2);
    PlayerTextDrawSetProportional(playerid, pFurnitureShopTd[playerid][8], 1);

    pFurnitureShopTd[playerid][9] = CreatePlayerTextDraw(playerid, 320.000000, 390.000000, "Comprar");
    PlayerTextDrawLetterSize(playerid, pFurnitureShopTd[playerid][9], 0.208999, 1.291999);
    PlayerTextDrawTextSize(playerid, pFurnitureShopTd[playerid][9], 12.91999, 56.000000);
    PlayerTextDrawAlignment(playerid, pFurnitureShopTd[playerid][9], 2);
    PlayerTextDrawColor(playerid, pFurnitureShopTd[playerid][9], -1);
    PlayerTextDrawUseBox(playerid, pFurnitureShopTd[playerid][9], 1);
    PlayerTextDrawBoxColor(playerid, pFurnitureShopTd[playerid][9], -2139062017);
    PlayerTextDrawSetShadow(playerid, pFurnitureShopTd[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, pFurnitureShopTd[playerid][9], 1);
    PlayerTextDrawBackgroundColor(playerid, pFurnitureShopTd[playerid][9], 255);
    PlayerTextDrawFont(playerid, pFurnitureShopTd[playerid][9], 2);
    PlayerTextDrawSetProportional(playerid, pFurnitureShopTd[playerid][9], 1);
    PlayerTextDrawSetSelectable(playerid, pFurnitureShopTd[playerid][9], true);
}

CreatePlayerFurnitureShop(playerid) {
    DestroyPlayerFurnitureShop(playerid);
    CreatePFurnitureShopTextDraws(playerid);
    SetPlayerVirtualWorld(playerid, playerid + MAX_PLAYERS);
    for(new i = 0; i < sizeof pFurnitureShopTd[]; i ++) {
        if(pFurnitureShopTd[playerid][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawShow(playerid, pFurnitureShopTd[playerid][i]);
        }
    }
    SelectTextDrawEx(playerid, -1);

    pFurnitureShopOpened[playerid] = true;
    UpdatePlayerFurnitureShop(playerid);
    Streamer_Update(playerid, STREAMER_TYPE_OBJECT);
}

CountFurnitureObjectsInfoType(type) {
    new count = 0;
    for(new i = 0; i < sizeof FurnitureObjectsInfo; i ++) {
        if(_:FurnitureObjectsInfo[i][foi_TYPE] == type) {
            count ++;
        }
    }
    return count;
}

GetCurrentFurnitureObjectIndex(playerid) {
    new count;
    for(new i = 0; i < sizeof FurnitureObjectsInfo; i ++) {
        if(_:FurnitureObjectsInfo[i][foi_TYPE] == pFurnitureShopCurrentType[playerid]) {
            if(count == pFurnitureShopCurrentModel[playerid]){
                return i;
            }
            count ++;
        }
    }
    return -1;
}

InterpolatePCameraToFurType(playerid) {
    new type = pFurnitureShopCurrentType[playerid];

    /*new Float:p[6]
    GetPlayerCameraPos(playerid, p[0], p[1], p[2]);
    GetPlayerCameraLookAt(playerid, p[3], p[4], p[5]);
    InterpolateCameraPos(playerid, p[0], p[1], p[2], FurnitureTypesInfo[type][fti_CAM_X], FurnitureTypesInfo[type][fti_CAM_Y], FurnitureTypesInfo[type][fti_CAM_Z], FURNITURE_CAMERA_MOVE_TIME);
    InterpolateCameraLookAt(playerid, p[3], p[4], p[5], FurnitureTypesInfo[type][fti_CAM_LOOK_AT_X], FurnitureTypesInfo[type][fti_CAM_LOOK_AT_Y], FurnitureTypesInfo[type][fti_CAM_LOOK_AT_Z], FURNITURE_CAMERA_MOVE_TIME);*/

    SetPlayerCameraPos(playerid, FurnitureTypesInfo[type][fti_CAM_X], FurnitureTypesInfo[type][fti_CAM_Y], FurnitureTypesInfo[type][fti_CAM_Z]);
    SetPlayerCameraLookAt(playerid, FurnitureTypesInfo[type][fti_CAM_LOOK_AT_X], FurnitureTypesInfo[type][fti_CAM_LOOK_AT_Y], FurnitureTypesInfo[type][fti_CAM_LOOK_AT_Z]);
}

CMD:muebles(playerid, params[]) {
    if(!IsPlayerInRangeOfPoint(playerid, 1.0, FurnitureShopBuyPos[0], FurnitureShopBuyPos[1], FurnitureShopBuyPos[2])) return SendNotification(playerid, "No estás en el lugar adecuado.");
    if(pFurnitureShopOpened[playerid]) return SendNotification(playerid, "Ya estás viendo los muebles.");

    CreatePlayerFurnitureShop(playerid);
    return 1;
}

GetPObjectModelPrice(modelid) {
    for(new i = 0; i < sizeof FurnitureObjectsInfo; i ++) {
        if(FurnitureObjectsInfo[i][foi_MODELID] == modelid) {
            return FurnitureObjectsInfo[i][foi_PRICE];
        }
    }
    return 750;
}