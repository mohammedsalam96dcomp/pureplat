TwinleafTownPlayersHouse_2F_MapScripts::
# 5 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 1, TwinleafTownPlayersHouse_2F_ON_FRAME
	.2byte 0

TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 0, TwinleafTownPlayersHouse_2F_ON_WARP
	.2byte 0


TwinleafTownPlayersHouse_2F_ON_FRAME::
# 15 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lock
# 16 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_ON_FRAME_Text_0
# 24 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	release
# 25 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 2
	return


TwinleafTownPlayersHouse_2F_ON_WARP::
# 29 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_ON_WARP_Movement_0
# 30 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 1
	return


TwinleafTownPlayersHouse_2F_EnterBarryRight::
# 35 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 36 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 37 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 38 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryUp::
# 42 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 43 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 44 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 45 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryDown::
# 49 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 50 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 51 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 52 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryLeft::
# 56 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 57 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 3
# 58 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 59 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarry::
# 63 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 64 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 65 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	addobject 1
# 67 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_EXIT
# 68 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_0
# 69 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 70 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 71 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playbgm MUS_GSC_ROUTE38, 0
# 72 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 73 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 74 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 75 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 76 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	delay 48
# 77 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 78 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_0
# 79 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 81 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 82 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_3
# 84 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_4
# 89 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_5
# 94 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_6
TwinleafTownPlayersHouse_2F_EnterBarry_1:
# 100 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 102 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_1
# 112 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 114 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 115 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 116 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 117 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 118 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 119 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 121 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 122 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_9
# 127 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_10
# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_11
# 137 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_12
TwinleafTownPlayersHouse_2F_EnterBarry_7:
# 143 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 145 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_2
# 149 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 152 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 153 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 154 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_3
# 157 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 159 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 160 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_15
# 162 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_16
# 164 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_17
# 166 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_18
TwinleafTownPlayersHouse_2F_EnterBarry_13:
# 169 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 171 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 172 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_4
# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 181 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_21
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_22
# 187 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_23
# 190 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_24
TwinleafTownPlayersHouse_2F_EnterBarry_19:
# 194 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 195 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_22
# 196 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 197 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_EXIT
# 198 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	removeobject 1
# 199 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 200 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	delay 40
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 3
# 202 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	fadedefaultbgm
# 203 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return

TwinleafTownPlayersHouse_2F_EnterBarry_3:
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_4:
# 85 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2
# 86 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 87 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_5:
# 90 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 92 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 93 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_6:
# 95 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 97 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 98 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_9:
# 123 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7
# 124 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 125 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 126 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_10:
# 128 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_10
# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 130 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 131 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_11:
# 133 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_12
# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 135 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 136 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_12:
# 138 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_13
# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 140 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_15:
# 161 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_14
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_16:
# 163 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_15
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_17:
# 165 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_16
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_18:
# 167 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_17
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_21:
# 182 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_18
# 183 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_22:
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_19
# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_23:
# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_20
# 189 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_24:
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_21
# 192 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19


TwinleafTownPlayersHouse_2F_TVGift::
# 207 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 208 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_TVGift_Text_0
# 209 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_ItsAWii::
# 213 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 214 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_ItsAWii_Text_0
# 216 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_OpenMenu::
# 220 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 221 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_OpenMenu_Text_0
# 223 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_CheckPC::
# 227 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 228 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_CheckPC_Text_0
# 234 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


# 29 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_ON_WARP_Movement_0:
# 29 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 68 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_0:
# 68 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_fast_left
	step_end

# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1:
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 85 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2:
# 85 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 85 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 85 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 87 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3:
# 87 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4:
# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 90 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5:
# 90 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 90 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 90 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 90 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 90 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 95 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6:
# 95 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 95 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 95 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 95 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 95 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 123 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7:
# 123 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 123 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 123 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 123 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 123 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 125 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8:
# 125 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_left
	step_end

# 126 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9:
# 126 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 126 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 128 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_10:
# 128 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 128 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 128 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 128 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 131 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11:
# 131 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 131 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 133 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_12:
# 133 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 133 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 133 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 133 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 138 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_13:
# 138 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 138 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 138 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 161 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_14:
# 161 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 161 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 161 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 161 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 163 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_15:
# 163 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 163 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 165 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_16:
# 165 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 165 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 165 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 165 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 167 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_17:
# 167 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 167 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 167 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 182 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_18:
# 182 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 182 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 182 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 182 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_19:
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_20:
# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_21:
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 195 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_22:
# 195 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 195 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 195 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_slow_stairs_right
	step_end

TwinleafTownPlayersHouse_2F_ON_FRAME_Text_0:
# 16 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "That concludes our special program,\n"
	.string "'Lets ask Prof. Rowan!'\p"
	.string "Brought to you by Jubilife TV on\n"
	.string "Nationwide Net!\p"
	.string "See you next week, same time\n"
	.string "same channel.$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_0:
# 78 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "There you are!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_1:
# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Did you just see the TV? Sure you did!\p"
	.string "Prof. Rowan's that really important\n"
	.string "guy who studies Pokémon, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of Pokémon.\p"
	.string "So if we ask him, I bet he'd give us\n"
	.string "some Pokémon!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_2:
# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, hey!\n"
	.string "Is this a new PC?!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_3:
# 154 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Uh. . .\n"
	.string "Where was I?$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_4:
# 172 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, right, right! We're going to go see\n"
	.string "Prof. Rowan and get some Pokémon.\p"
	.string "I'll be waiting outside.\p"
	.string "OK, {PLAYER}? If you're late, I'm\n"
	.string "fining you ¥10 million!$"

TwinleafTownPlayersHouse_2F_TVGift_Text_0:
# 208 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Mom bought this TV as a gift.$"

TwinleafTownPlayersHouse_2F_ItsAWii_Text_0:
# 214 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "It's a Wii!\n"
	.string "Its controlled by a Wii Remote!$"

TwinleafTownPlayersHouse_2F_OpenMenu_Text_0:
# 221 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "The START Button\n"
	.string "opens the menu!$"

TwinleafTownPlayersHouse_2F_CheckPC_Text_0:
# 228 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "{PLAYER} checked the PC.\p"
	.string "Pokémon Basics...\p"
	.string "People live alongisde Pokémon in\n"
	.string "this world.\p"
	.string "The people that battle Pokémon are\n"
	.string "called Pokémon Trainers.$"
