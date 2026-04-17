TwinleafTownPlayersHouse_2F_MapScripts::
# 25 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwinleafTownPlayersHouse_2F_OnTransition
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


TwinleafTownPlayersHouse_2F_OnTransition::
# 29 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setrespawn HEAL_LOCATION_TWINLEAF_TOWN
	return


TwinleafTownPlayersHouse_2F_ON_FRAME::
# 33 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lock
# 34 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_ON_FRAME_Text_0
# 42 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	release
# 43 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 1
# 44 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_NEW_GAME_START, 2
	return


TwinleafTownPlayersHouse_2F_ON_WARP::
# 48 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_ON_WARP_Movement_0
# 49 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_NEW_GAME_START, 1
	return


TwinleafTownPlayersHouse_2F_EnterBarryRight::
# 54 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 55 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 56 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 57 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryUp::
# 61 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 62 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 63 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 64 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryDown::
# 68 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 69 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 70 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 71 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryLeft::
# 75 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 76 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 3
# 77 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 78 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarry::
# 82 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 84 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	addobject 1
# 86 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_EXIT
# 87 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_0
# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 89 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 90 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 92 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 93 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 94 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	delay 48
# 95 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playbgm MUS_GSC_ROUTE38, 0
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 97 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_0
# 98 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 100 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_3
# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_4
# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_5
# 113 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_6
TwinleafTownPlayersHouse_2F_EnterBarry_1:
# 119 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 121 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 122 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_1
# 131 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 133 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 135 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 136 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 137 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 138 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 140 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_9
# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_10
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_11
# 156 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_12
TwinleafTownPlayersHouse_2F_EnterBarry_7:
# 162 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 164 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 165 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_2
# 168 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 170 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 171 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 172 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 173 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_3
# 176 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 179 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_15
# 181 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_16
# 183 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_17
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_18
TwinleafTownPlayersHouse_2F_EnterBarry_13:
# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 190 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_4
# 197 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 199 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 200 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_21
# 203 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_22
# 206 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_23
# 209 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_24
TwinleafTownPlayersHouse_2F_EnterBarry_19:
# 213 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 214 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_22
# 215 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 216 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_EXIT
# 217 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	removeobject 1
# 218 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 219 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	delay 40
# 220 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 2
# 221 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	fadedefaultbgm
# 222 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return

TwinleafTownPlayersHouse_2F_EnterBarry_3:
# 102 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_4:
# 104 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2
# 105 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 106 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 107 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_5:
# 109 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5
# 110 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 111 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 112 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_6:
# 114 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6
# 115 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 116 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 117 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_9:
# 142 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7
# 143 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 145 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_10:
# 147 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_10
# 148 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 149 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 150 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_11:
# 152 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_12
# 153 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 154 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 155 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_12:
# 157 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_13
# 158 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 159 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 160 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_15:
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_14
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_16:
# 182 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_15
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_17:
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_16
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_18:
# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_17
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_21:
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_18
# 202 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_22:
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_19
# 205 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_23:
# 207 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_20
# 208 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_24:
# 210 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_21
# 211 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19


TwinleafTownPlayersHouse_2F_TVGift::
# 226 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 227 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_TVGift_Text_0
# 228 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_ItsAWii::
# 232 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 233 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_ItsAWii_Text_0
# 235 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_OpenMenu::
# 239 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 240 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_OpenMenu_Text_0
# 242 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_CheckPC::
# 246 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 247 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_CheckPC_Text_0
# 253 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


# 48 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_ON_WARP_Movement_0:
# 48 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 87 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_0:
# 87 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_fast_left
	step_end

# 102 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1:
# 102 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 102 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 102 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 102 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 104 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2:
# 104 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 104 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 104 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 106 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3:
# 106 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 107 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4:
# 107 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 109 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5:
# 109 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 109 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 109 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 109 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 109 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 114 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6:
# 114 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 114 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 114 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 114 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 114 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 142 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7:
# 142 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 142 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 142 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 142 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 142 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8:
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_left
	step_end

# 145 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9:
# 145 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 145 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 147 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_10:
# 147 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 147 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 147 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 147 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 150 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11:
# 150 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 150 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 152 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_12:
# 152 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 152 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 152 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 152 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 157 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_13:
# 157 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 157 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 157 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_14:
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 182 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_15:
# 182 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 182 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_16:
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_17:
# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_18:
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_19:
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 207 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_20:
# 207 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 207 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 207 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 207 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 207 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 207 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 210 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_21:
# 210 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 210 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 210 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 210 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 210 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 210 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 214 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_22:
# 214 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 214 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 214 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_slow_stairs_right
	step_end

TwinleafTownPlayersHouse_2F_ON_FRAME_Text_0:
# 34 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "That concludes our special program,\n"
	.string "'Lets ask Prof. Rowan!'\p"
	.string "Brought to you by Jubilife TV on\n"
	.string "Nationwide Net!\p"
	.string "See you next week, same time\n"
	.string "same channel.$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_0:
# 97 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "There you are!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_1:
# 122 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Did you just see the TV? Sure you did!\p"
	.string "Prof. Rowan's that really important\n"
	.string "guy who studies Pokémon, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of Pokémon.\p"
	.string "So if we ask him, I bet he'd give us\n"
	.string "some Pokémon!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_2:
# 165 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, hey!\n"
	.string "Is this a new PC?!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_3:
# 173 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Uh. . .\n"
	.string "Where was I?$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_4:
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, right, right! We're going to go see\n"
	.string "Prof. Rowan and get some Pokémon.\p"
	.string "I'll be waiting outside.\p"
	.string "OK, {PLAYER}? If you're late, I'm\n"
	.string "fining you ¥10 million!$"

TwinleafTownPlayersHouse_2F_TVGift_Text_0:
# 227 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Mom bought this TV as a gift.$"

TwinleafTownPlayersHouse_2F_ItsAWii_Text_0:
# 233 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "It's a Wii!\n"
	.string "Its controlled by a Wii Remote!$"

TwinleafTownPlayersHouse_2F_OpenMenu_Text_0:
# 240 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "The START Button\n"
	.string "opens the menu!$"

TwinleafTownPlayersHouse_2F_CheckPC_Text_0:
# 247 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "{PLAYER} checked the PC.\p"
	.string "Pokémon Basics...\p"
	.string "People live alongisde Pokémon in\n"
	.string "this world.\p"
	.string "The people that battle Pokémon are\n"
	.string "called Pokémon Trainers.$"
