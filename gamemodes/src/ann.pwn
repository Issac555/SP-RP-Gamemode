#include <YSI-Includes\YSI\y_hooks>

#define TD_ANNOUNCE_LETTER_X 0.221000
#define TD_ANNOUNCE_LETTER_Y 1.199998

new colors [][] = {
{0xFF9D00FF},
{0x00CBFFFF},
{0x7ADA02FF},
{0xBB7CDAFF},
{0xFFFE00FF},
{0xFFFFFEFF},
{0x93A19BFF}
};

enum AnnounceTD
{
    Use,
    Line,
    Text[800],
    Text:TextDraw,
    Float:MinPosY,
    Float:MaxPosY,
    Hide,
	Color,
    Timer
}
new TextDrawsAnnounce[5][AnnounceTD],
    counter_ann;

forward TimerHideAnnounce();
public TimerHideAnnounce()
{
    for(new cycle; cycle < 5; cycle++)
    {
        if(TextDrawsAnnounce[cycle][Hide] == -1)
        {
            TextDrawsAnnounce[cycle][Use] = 0;
            if(TextDrawsAnnounce[cycle][TextDraw] != Text:-1)
            {
				TextDrawDestroy(TextDrawsAnnounce[cycle][TextDraw]);
                TextDrawsAnnounce[cycle][Line] = 0;
                TextDrawsAnnounce[cycle][Text][0] = EOS;
                TextDrawsAnnounce[cycle][MinPosY] = 0;
                TextDrawsAnnounce[cycle][MaxPosY] = 0;
                TextDrawsAnnounce[cycle][TextDraw] = Text:-1;
            }
            TextDrawsAnnounce[cycle][Hide] = -1;
            UpdateAnnounce();

            return 1;
        }
    }
    return 0;
}

forward SendAnnounce(const reason[]); 
public SendAnnounce(const reason[])
{
    for(new cycle; cycle < 5; cycle++)
    {
        if(!TextDrawsAnnounce[cycle][Use])
        {
            TextDrawsAnnounce[cycle][Text][0] = EOS;

            strcat(TextDrawsAnnounce[cycle][Text], reason, 800);
            FixTextDrawString(TextDrawsAnnounce[cycle][Text]);

            TextDrawsAnnounce[cycle][Use] = 1;

            MinPosYAnnounce(cycle);
            MaxPosYAnnounce(cycle);

            TextDrawsAnnounce[cycle][Hide] = -1;

			TextDrawsAnnounce[cycle][Color] = random(sizeof(colors));
            CreateAnnTD(cycle);

            SetTimer("TimerHideAnnounce", 10000, false);

            return 1;
        }
    }
    return -1;
}

forward SendAnnounce_Manual(const reason[]); 
public SendAnnounce_Manual(const reason[])
{
    for(new cycle; cycle < 5; cycle++)
    {
        if(!TextDrawsAnnounce[cycle][Use])
        {
            TextDrawsAnnounce[cycle][Text][0] = EOS;

            strcat(TextDrawsAnnounce[cycle][Text], reason, 800);
            FixTextDrawString(TextDrawsAnnounce[cycle][Text]);
 
            TextDrawsAnnounce[cycle][Use] = 1;

            MinPosYAnnounce(cycle);
            MaxPosYAnnounce(cycle);

            CreateAnnTD(cycle);

            for(new i; i < 5; i++)
            {
                if(usedatd(counter_ann))
                {
                    if(counter_ann == 5 - 1) counter_ann = 0;
                    else counter_ann++;
                }
                else break;
            }

            new AnnTD = counter_ann;

            TextDrawsAnnounce[cycle][Hide] = AnnTD;

            if(counter_ann == 5 - 1) counter_ann = 0;
            else counter_ann++;

            return AnnTD;
        }
    }
    return -1;
}

stock usedatd(id)
{
    for(new cycle; cycle < 5; cycle++)
    {
        if(TextDrawsAnnounce[cycle][Hide] == id) return 1;
    }
    return 0;
}

stock UpdateAnnounce()
{
    for(new cycle = 0; cycle < 5; cycle ++)
    {
        if(!TextDrawsAnnounce[cycle][Use])
        {
            if(cycle != 5 - 1)
            {
                if(TextDrawsAnnounce[cycle + 1][Use])
                {
                    TextDrawsAnnounce[cycle][Use] = TextDrawsAnnounce[cycle + 1][Use];
                    TextDrawsAnnounce[cycle][Line] = TextDrawsAnnounce[cycle + 1][Line];
                    strcat(TextDrawsAnnounce[cycle][Text], TextDrawsAnnounce[cycle + 1][Text], 800);
                    TextDrawsAnnounce[cycle][TextDraw] = TextDrawsAnnounce[cycle + 1][TextDraw];
                    TextDrawsAnnounce[cycle][Hide] = TextDrawsAnnounce[cycle + 1][Hide];
					TextDrawsAnnounce[cycle][Color] = TextDrawsAnnounce[cycle + 1][Color];

                    TextDrawsAnnounce[cycle + 1][Use] = 0;
                    TextDrawsAnnounce[cycle + 1][Line] = 0;
                    TextDrawsAnnounce[cycle + 1][Text][0] = EOS;
                    TextDrawsAnnounce[cycle + 1][TextDraw] = Text:-1;
                    TextDrawsAnnounce[cycle + 1][MinPosY] = 0;
                    TextDrawsAnnounce[cycle + 1][MaxPosY] = 0;
                    TextDrawsAnnounce[cycle + 1][Hide] = -1;

                    MinPosYAnnounce(cycle);
                    MaxPosYAnnounce(cycle);
                }
            }
        }
        else if(TextDrawsAnnounce[cycle][Use])
        {
            if(cycle != 0)
            {
                if(!TextDrawsAnnounce[cycle - 1][Use])
                {
                    TextDrawsAnnounce[cycle - 1][Use] = TextDrawsAnnounce[cycle][Use];
                    TextDrawsAnnounce[cycle - 1][Line] = TextDrawsAnnounce[cycle][Line];
                    strcat(TextDrawsAnnounce[cycle - 1][Text], TextDrawsAnnounce[cycle][Text], 800);
                    TextDrawsAnnounce[cycle - 1][TextDraw] = TextDrawsAnnounce[cycle][TextDraw];
                    TextDrawsAnnounce[cycle - 1][Hide] = TextDrawsAnnounce[cycle][Hide];
					TextDrawsAnnounce[cycle - 1][Color] = TextDrawsAnnounce[cycle][Color];

                    TextDrawsAnnounce[cycle][Use] = 0;
                    TextDrawsAnnounce[cycle][Line] = 0;
                    TextDrawsAnnounce[cycle][Text][0] = EOS;
                    TextDrawsAnnounce[cycle][TextDraw] = Text:-1;
                    TextDrawsAnnounce[cycle][MinPosY] = 0;
                    TextDrawsAnnounce[cycle][MaxPosY] = 0;
                    TextDrawsAnnounce[cycle][Hide] = -1;

                    MinPosYAnnounce(cycle - 1);
                    MaxPosYAnnounce(cycle - 1);
                }
            }
        }
        CreateAnnTD(cycle);
    }
    return 1;
}

stock MinPosYAnnounce(AnnTD)
{
    if(AnnTD == 0)
    {
        TextDrawsAnnounce[AnnTD][MinPosY] = 363.0;
    }
    else
    {
        TextDrawsAnnounce[AnnTD][MinPosY] = TextDrawsAnnounce[AnnTD - 1][MaxPosY] + 13;
    }
    return 1;
}

stock MaxPosYAnnounce(AnnTD)
{
    TextDrawsAnnounce[AnnTD][MaxPosY] = TextDrawsAnnounce[AnnTD][MinPosY] + (TD_ANNOUNCE_LETTER_Y * 2) + 2 + (TD_ANNOUNCE_LETTER_Y * 5.75 * TextDrawsAnnounce[AnnTD][Line]) + ((TextDrawsAnnounce[AnnTD][Line] - 1) * ((TD_ANNOUNCE_LETTER_Y * 2) + 2 + TD_ANNOUNCE_LETTER_Y)) + TD_ANNOUNCE_LETTER_Y + 3;
    return 1;
}

stock CreateAnnTD(AnnTD)
{
    if(TextDrawsAnnounce[AnnTD][Use] == 1)
    {
        if(TextDrawsAnnounce[AnnTD][TextDraw] != Text:-1)
        {
			TextDrawDestroy(TextDrawsAnnounce[AnnTD][TextDraw]);
        }
		
		TextDrawsAnnounce[AnnTD][TextDraw] = TextDrawCreate(154.953781, TextDrawsAnnounce[AnnTD][MinPosY], TextDrawsAnnounce[AnnTD][Text]);
		TextDrawLetterSize(TextDrawsAnnounce[AnnTD][TextDraw], TD_ANNOUNCE_LETTER_X, TD_ANNOUNCE_LETTER_Y);
		TextDrawAlignment(TextDrawsAnnounce[AnnTD][TextDraw], 1);
		TextDrawColor(TextDrawsAnnounce[AnnTD][TextDraw], colors[TextDrawsAnnounce[AnnTD][Color]][0]);
		TextDrawSetShadow(TextDrawsAnnounce[AnnTD][TextDraw], 0);
		TextDrawSetOutline(TextDrawsAnnounce[AnnTD][TextDraw], 1);
		TextDrawBackgroundColor(TextDrawsAnnounce[AnnTD][TextDraw], 80);
		TextDrawFont(TextDrawsAnnounce[AnnTD][TextDraw], 1);
		TextDrawSetProportional(TextDrawsAnnounce[AnnTD][TextDraw], 1);
		TextDrawSetShadow(TextDrawsAnnounce[AnnTD][TextDraw], 0);
		TextDrawShowForAll(TextDrawsAnnounce[AnnTD][TextDraw]);
    }
    return 1;
}

hook OnGameModeInit()
{
	for(new AnnTD = 0; AnnTD < 5; AnnTD++)
	{
		TextDrawsAnnounce[AnnTD][TextDraw] = Text:-1;
		TextDrawsAnnounce[AnnTD][Hide] = -1;
		TextDrawsAnnounce[AnnTD][Timer] = -1;
	}
    return 1;
}

SendFormatAnnounce(const text[], {Float, _}:...)
{
	static
	    args,
	    str[192];

	if ((args = numargs()) <= 2)
	{
	    SendAnnounce(text);
	}
	else
	{
		while (--args >= 2)
		{
			#emit LCTRL 5
			#emit LOAD.alt args
			#emit SHL.C.alt 2
			#emit ADD.C 12
			#emit ADD
			#emit LOAD.I
			#emit PUSH.pri
		}
		#emit PUSH.S text
		#emit PUSH.C 192
		#emit PUSH.C str
		#emit LOAD.S.pri 8
		#emit CONST.alt 4
		#emit ADD
		#emit PUSH.pri
		#emit SYSREQ.C format
		#emit LCTRL 5
		#emit SCTRL 4

		SendAnnounce(str);

		#emit RETN
	}
	return 1;
}
