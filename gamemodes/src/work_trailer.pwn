
#include <a_samp>
#include <core>
#include <float>
#include <discord-connector>

forward OnPostPlayerStat(playerid);
forward DCC_OnMessageReactionAdd(DCC_Message:message, DCC_User:reaction_user, DCC_Emoji:emoji);


new 
	DCC_Message:StatMessage = DCC_Message:0,
    StatTarget;

public DCC_OnMessageReactionAdd(DCC_Message:message, DCC_User:reaction_user, DCC_Emoji:emoji)
{
    new DCC_Channel:channel, bool:bot;
    DCC_GetMessageChannel(message, channel);

    if(!DCC_IsUserBot(reaction_user, bot))
        return 1;
    if(bot)
        return 1;

    if(StatMessage == message && _:StatMessage != 0)
    {
        new emoji_name[DCC_EMOJI_NAME_SIZE];
        DCC_GetEmojiName(emoji, emoji_name);
        new name[MAX_PLAYER_NAME];
        GetPlayerName(StatTarget, name, MAX_PLAYER_NAME);

        new DCC_Embed:embed = DCC_CreateEmbed();
        if(!strcmp("??", emoji_name))
        {
            Kick(StatTarget);
            DCC_SetEmbedTitle(embed, "KICKED! ??");
            DCC_SetEmbedColor(embed, 0xFF0000);
            new str[144];
            format(str, sizeof str, "Player %s (%d) has been kicked from the server!", name, StatTarget);
            DCC_SetEmbedDescription(embed, str);
            DCC_EditMessage(message, "", embed);
        }
        else if(!strcmp("??", emoji_name))
        {
            Ban(StatTarget);
            DCC_SetEmbedTitle(embed, "BANNED! ??");
            DCC_SetEmbedColor(embed, 0xFF0000);
            new str[144];
            format(str, sizeof str, "Player %s (%d) has been kicked from the server!", name, StatTarget);
            DCC_SetEmbedDescription(embed, str);
            DCC_EditMessage(message, "", embed);
        }
        else
        {
            DCC_DeleteEmbed(embed);
        }
        DCC_DeleteInternalMessage(StatMessage); // We no longer need the stored message.
        StatMessage = DCC_Message:0;
    }
    return 1;
}


public DCC_OnMessageCreate(DCC_Message:message)
{
    new content[DCC_ID_SIZE], DCC_Channel:channel, DCC_User:author;
    DCC_GetMessageContent(message, content);
    DCC_GetMessageChannel(message, channel);
    DCC_GetMessageAuthor(message, author);

    new bool:is_bot;
	if (!DCC_IsUserBot(author, is_bot))
		return 0; //invalid user

	if(is_bot)
		return 0;

	new command_name[25], params[150];
    if(sscanf(content, "s[25]S()[150]", command_name, params))
    {
		return 0;
    }
    if(!strcmp(command_name, "!player", true))
    {
		new target;
        if(sscanf(params, "u", target))
        {
			//SendErrorEmbedMessage(channel, "Command argument error!\n**!player [playerid/name]**");
			return 1;
        }
        else if(target == INVALID_PLAYER_ID)
        {
            //SendErrorEmbedMessage(channel, "Player is not connected!");
			//return 1;
        }

        new name[MAX_PLAYER_NAME], skin_image[200], Float:health, Float:armour, weapon_name[30], str[50];
        GetPlayerName(target, name, MAX_PLAYER_NAME);
        GetPlayerHealth(target, health);
        GetPlayerArmour(target, armour);
        GetWeaponName(GetPlayerWeapon(target), weapon_name, 30);
        if(!strlen(weapon_name))
        {
			format(weapon_name, sizeof weapon_name, "Fists");
        }

        format(skin_image, sizeof skin_image, "http://weedarr.wdfiles.com/local--files/skinlistc/%d.png", GetPlayerSkin(target));

        new DCC_Embed:embed = DCC_CreateEmbed();
        format(str, sizeof str, "%s's stats.", name);
        DCC_SetEmbedTitle(embed, str);
        DCC_SetEmbedThumbnail(embed, skin_image);

        format(str, sizeof str, "%0.1f", health);
        DCC_AddEmbedField(embed, "Health", str, true);

        format(str, sizeof str, "%0.1f", armour);
        DCC_AddEmbedField(embed, "Armour", str, true);

        DCC_AddEmbedField(embed, "Weapon", weapon_name, true);

		DCC_SendChannelEmbedMessage(channel, embed, "", "OnPostPlayerStat", "i", target);
	}
    return 1;
}

public OnPostPlayerStat(playerid)
{
	new DCC_Message:message = DCC_GetCreatedMessage();
    if(StatMessage != DCC_Message:0 )
    {
        DCC_DeleteInternalMessage(StatMessage);
    }
	StatMessage = message;
    StatTarget = playerid;
    DCC_CreateReaction(message, DCC_CreateEmoji("??"));
    DCC_CreateReaction(message, DCC_CreateEmoji("??"));   
	return 1; // return 0 will delete message's ID internally
}