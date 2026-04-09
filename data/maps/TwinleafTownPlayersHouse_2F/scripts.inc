TwinleafTownPlayersHouse_2F_MapScripts::
# 17 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 21 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 18 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script_2 VAR_NEW_GAME_START, 1, TwinleafTownPlayersHouse_2F_ON_FRAME
	.2byte 0

TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 22 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script_2 VAR_NEW_GAME_START, 0, TwinleafTownPlayersHouse_2F_ON_WARP
	.2byte 0


TwinleafTownPlayersHouse_2F_ON_FRAME::
# 27 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lock
# 28 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_ON_FRAME_Text_0
# 36 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	release
# 37 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 1
# 38 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_NEW_GAME_START, 2
	return


TwinleafTownPlayersHouse_2F_ON_WARP::
# 42 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_ON_WARP_Movement_0
# 43 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_NEW_GAME_START, 1
	return


TwinleafTownPlayersHouse_2F_EnterBarryRight::
# 48 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 49 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 50 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 51 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryUp::
# 55 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 56 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 57 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 58 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryDown::
# 62 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 63 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 64 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 65 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryLeft::
# 69 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 70 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 3
# 71 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 72 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarry::
# 76 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 77 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 78 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	addobject 1
# 80 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_EXIT
# 81 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_0
# 82 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 84 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 85 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 86 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 87 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	delay 48
# 89 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playbgm MUS_GSC_ROUTE38, 0
# 90 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_0
# 92 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 94 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 95 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_3
# 97 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_4
# 102 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_5
# 107 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_6
TwinleafTownPlayersHouse_2F_EnterBarry_1:
# 113 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 115 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 116 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_1
# 125 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 127 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 128 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 130 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 131 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 135 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_9
# 140 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_10
# 145 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_11
# 150 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_12
TwinleafTownPlayersHouse_2F_EnterBarry_7:
# 156 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 158 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 159 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_2
# 162 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 164 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 165 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 166 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 167 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_3
# 170 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 172 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 173 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_15
# 175 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_16
# 177 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_17
# 179 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_18
TwinleafTownPlayersHouse_2F_EnterBarry_13:
# 182 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_4
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 193 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 194 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_21
# 197 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_22
# 200 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_23
# 203 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_24
TwinleafTownPlayersHouse_2F_EnterBarry_19:
# 207 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 208 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_22
# 209 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 210 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_EXIT
# 211 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	removeobject 1
# 212 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 213 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	delay 40
# 214 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 2
# 215 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	fadedefaultbgm
# 216 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return

TwinleafTownPlayersHouse_2F_EnterBarry_3:
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_4:
# 98 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2
# 99 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 100 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_5:
# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5
# 104 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 105 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 106 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_6:
# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6
# 109 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 110 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 111 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_9:
# 136 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7
# 137 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 138 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_10:
# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_10
# 142 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 143 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_11:
# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_12
# 147 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 148 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 149 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_12:
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_13
# 152 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 153 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 154 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_15:
# 174 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_14
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_16:
# 176 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_15
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_17:
# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_16
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_18:
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_17
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_21:
# 195 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_18
# 196 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_22:
# 198 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_19
# 199 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_23:
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_20
# 202 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_24:
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_21
# 205 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19


TwinleafTownPlayersHouse_2F_TVGift::
# 220 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 221 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_TVGift_Text_0
# 222 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_ItsAWii::
# 226 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 227 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_ItsAWii_Text_0
# 229 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_OpenMenu::
# 233 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 234 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_OpenMenu_Text_0
# 236 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_CheckPC::
# 240 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 241 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_CheckPC_Text_0
# 247 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


# 42 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_ON_WARP_Movement_0:
# 42 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 81 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_0:
# 81 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_fast_left
	step_end

# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1:
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 98 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2:
# 98 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 98 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 98 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 100 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3:
# 100 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4:
# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5:
# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6:
# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 136 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7:
# 136 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 136 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 136 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 136 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 136 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 138 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8:
# 138 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_left
	step_end

# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9:
# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_10:
# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11:
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_12:
# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_13:
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 174 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_14:
# 174 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 174 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 174 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 174 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 176 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_15:
# 176 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 176 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_16:
# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_17:
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 195 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_18:
# 195 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 195 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 195 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 195 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 198 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_19:
# 198 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 198 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 198 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 198 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 198 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 198 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_20:
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_21:
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 208 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_22:
# 208 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 208 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 208 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_slow_stairs_right
	step_end

TwinleafTownPlayersHouse_2F_ON_FRAME_Text_0:
# 28 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "That concludes our special program,\n"
	.string "'Lets ask Prof. Rowan!'\p"
	.string "Brought to you by Jubilife TV on\n"
	.string "Nationwide Net!\p"
	.string "See you next week, same time\n"
	.string "same channel.$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_0:
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "There you are!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_1:
# 116 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Did you just see the TV? Sure you did!\p"
	.string "Prof. Rowan's that really important\n"
	.string "guy who studies Pokémon, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of Pokémon.\p"
	.string "So if we ask him, I bet he'd give us\n"
	.string "some Pokémon!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_2:
# 159 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, hey!\n"
	.string "Is this a new PC?!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_3:
# 167 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Uh. . .\n"
	.string "Where was I?$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_4:
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, right, right! We're going to go see\n"
	.string "Prof. Rowan and get some Pokémon.\p"
	.string "I'll be waiting outside.\p"
	.string "OK, {PLAYER}? If you're late, I'm\n"
	.string "fining you ¥10 million!$"

TwinleafTownPlayersHouse_2F_TVGift_Text_0:
# 221 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Mom bought this TV as a gift.$"

TwinleafTownPlayersHouse_2F_ItsAWii_Text_0:
# 227 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "It's a Wii!\n"
	.string "Its controlled by a Wii Remote!$"

TwinleafTownPlayersHouse_2F_OpenMenu_Text_0:
# 234 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "The START Button\n"
	.string "opens the menu!$"

TwinleafTownPlayersHouse_2F_CheckPC_Text_0:
# 241 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "{PLAYER} checked the PC.\p"
	.string "Pokémon Basics...\p"
	.string "People live alongisde Pokémon in\n"
	.string "this world.\p"
	.string "The people that battle Pokémon are\n"
	.string "called Pokémon Trainers.$"
