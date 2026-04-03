TwinleafTownPlayersHouse_2F_MapScripts::
# 11 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 15 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 1, TwinleafTownPlayersHouse_2F_ON_FRAME
	.2byte 0

TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 16 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 0, TwinleafTownPlayersHouse_2F_ON_WARP
	.2byte 0


TwinleafTownPlayersHouse_2F_ON_FRAME::
# 21 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lock
# 22 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_ON_FRAME_Text_0
# 30 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	release
# 31 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 2
	return


TwinleafTownPlayersHouse_2F_ON_WARP::
# 35 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_ON_WARP_Movement_0
# 36 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 1
	return


TwinleafTownPlayersHouse_2F_EnterBarryRight::
# 41 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 42 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 43 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 44 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryUp::
# 48 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 49 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 50 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 51 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryDown::
# 55 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 56 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 57 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 58 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryLeft::
# 62 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 63 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 3
# 64 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 65 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarry::
# 69 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 70 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 71 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	addobject 1
# 73 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_EXIT
# 74 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_0
# 75 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 76 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 77 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playbgm MUS_GSC_ROUTE38, 0
# 78 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 79 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 80 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 81 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 82 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	delay 48
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 84 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_0
# 85 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 87 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_3
# 90 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_4
# 95 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_5
# 100 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_6
TwinleafTownPlayersHouse_2F_EnterBarry_1:
# 106 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 109 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_1
# 118 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 120 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 121 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 122 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 123 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 124 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 125 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 127 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 128 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_9
# 133 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_10
# 138 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_11
# 143 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_12
TwinleafTownPlayersHouse_2F_EnterBarry_7:
# 149 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 152 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_2
# 155 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 157 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 158 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 159 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 160 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_3
# 163 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 165 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 166 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_15
# 168 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_16
# 170 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_17
# 172 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_18
TwinleafTownPlayersHouse_2F_EnterBarry_13:
# 175 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 177 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_4
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 187 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_21
# 190 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_22
# 193 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_23
# 196 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_24
TwinleafTownPlayersHouse_2F_EnterBarry_19:
# 200 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_22
# 202 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 203 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_EXIT
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	removeobject 1
# 205 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 206 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	delay 40
# 207 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 3
# 208 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	fadedefaultbgm
# 209 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return

TwinleafTownPlayersHouse_2F_EnterBarry_3:
# 89 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_4:
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2
# 92 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 93 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 94 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_5:
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5
# 97 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 98 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 99 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_6:
# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6
# 102 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 104 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_9:
# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7
# 130 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 131 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_10:
# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_10
# 135 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 136 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 137 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_11:
# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_12
# 140 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 142 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_12:
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_13
# 145 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 147 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_15:
# 167 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_14
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_16:
# 169 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_15
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_17:
# 171 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_16
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_18:
# 173 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_17
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_21:
# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_18
# 189 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_22:
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_19
# 192 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_23:
# 194 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_20
# 195 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_24:
# 197 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_21
# 198 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19


TwinleafTownPlayersHouse_2F_TVGift::
# 213 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 214 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_TVGift_Text_0
# 215 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_ItsAWii::
# 219 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 220 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_ItsAWii_Text_0
# 222 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_OpenMenu::
# 226 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 227 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_OpenMenu_Text_0
# 229 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_CheckPC::
# 233 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 234 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_CheckPC_Text_0
# 240 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


# 35 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_ON_WARP_Movement_0:
# 35 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 74 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_0:
# 74 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_fast_left
	step_end

# 89 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1:
# 89 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 89 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 89 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 89 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2:
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 93 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3:
# 93 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 94 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4:
# 94 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5:
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6:
# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7:
# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 131 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8:
# 131 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_left
	step_end

# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9:
# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_10:
# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 137 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11:
# 137 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 137 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_12:
# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_13:
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 167 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_14:
# 167 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 167 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 167 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 167 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 169 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_15:
# 169 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 169 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 171 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_16:
# 171 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 171 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 171 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 171 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 173 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_17:
# 173 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 173 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 173 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_18:
# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_19:
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 194 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_20:
# 194 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 194 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 194 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 194 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 194 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 194 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 197 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_21:
# 197 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 197 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 197 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 197 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 197 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 197 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_22:
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_slow_stairs_right
	step_end

TwinleafTownPlayersHouse_2F_ON_FRAME_Text_0:
# 22 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "That concludes our special program,\n"
	.string "'Lets ask Prof. Rowan!'\p"
	.string "Brought to you by Jubilife TV on\n"
	.string "Nationwide Net!\p"
	.string "See you next week, same time\n"
	.string "same channel.$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_0:
# 84 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "There you are!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_1:
# 109 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Did you just see the TV? Sure you did!\p"
	.string "Prof. Rowan's that really important\n"
	.string "guy who studies Pokémon, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of Pokémon.\p"
	.string "So if we ask him, I bet he'd give us\n"
	.string "some Pokémon!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_2:
# 152 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, hey!\n"
	.string "Is this a new PC?!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_3:
# 160 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Uh. . .\n"
	.string "Where was I?$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_4:
# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, right, right! We're going to go see\n"
	.string "Prof. Rowan and get some Pokémon.\p"
	.string "I'll be waiting outside.\p"
	.string "OK, {PLAYER}? If you're late, I'm\n"
	.string "fining you ¥10 million!$"

TwinleafTownPlayersHouse_2F_TVGift_Text_0:
# 214 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Mom bought this TV as a gift.$"

TwinleafTownPlayersHouse_2F_ItsAWii_Text_0:
# 220 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "It's a Wii!\n"
	.string "Its controlled by a Wii Remote!$"

TwinleafTownPlayersHouse_2F_OpenMenu_Text_0:
# 227 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "The START Button\n"
	.string "opens the menu!$"

TwinleafTownPlayersHouse_2F_CheckPC_Text_0:
# 234 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "{PLAYER} checked the PC.\p"
	.string "Pokémon Basics...\p"
	.string "People live alongisde Pokémon in\n"
	.string "this world.\p"
	.string "The people that battle Pokémon are\n"
	.string "called Pokémon Trainers.$"
