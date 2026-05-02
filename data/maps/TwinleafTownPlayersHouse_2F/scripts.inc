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
# 40 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	release
# 41 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 1
# 42 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_NEW_GAME_START, 2
# 43 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	fadedefaultbgm
	return


TwinleafTownPlayersHouse_2F_ON_WARP::
# 47 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_ON_WARP_Movement_0
# 48 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_NEW_GAME_START, 1
	return


TwinleafTownPlayersHouse_2F_EnterBarryRight::
# 53 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 54 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 55 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 56 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryUp::
# 60 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 61 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 62 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 63 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryDown::
# 67 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 68 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 69 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 70 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryLeft::
# 74 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 75 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 3
# 76 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 77 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarry::
# 81 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 82 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	addobject 1
# 85 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_EXIT
# 86 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_0
# 87 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 89 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 90 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 92 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 93 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	delay 48
# 94 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playbgm MUS_DP_RIVAL, 0
# 95 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_0
# 97 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 99 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 100 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_3
# 102 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_4
# 107 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_5
# 112 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_6
TwinleafTownPlayersHouse_2F_EnterBarry_1:
# 118 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 120 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 121 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_1
# 130 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 133 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 135 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 136 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, Common_Movement_Delay48
# 137 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 140 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_9
# 145 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_10
# 150 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_11
# 155 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_12
TwinleafTownPlayersHouse_2F_EnterBarry_7:
# 161 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 163 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 164 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_2
# 167 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 169 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 170 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 171 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 172 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_3
# 175 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 177 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_15
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_16
# 182 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_17
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_18
TwinleafTownPlayersHouse_2F_EnterBarry_13:
# 187 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 189 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 190 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_4
# 196 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 198 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 199 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_21
# 202 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_22
# 205 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_23
# 208 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_24
TwinleafTownPlayersHouse_2F_EnterBarry_19:
# 212 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 213 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_22
# 214 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 215 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_EXIT
# 216 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	removeobject 1
# 217 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 218 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	delay 40
# 219 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 2
# 220 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	fadedefaultbgm
# 221 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return

TwinleafTownPlayersHouse_2F_EnterBarry_3:
# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_4:
# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2
# 104 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 105 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 106 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_5:
# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5
# 109 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 110 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 111 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_6:
# 113 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6
# 114 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 115 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 116 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_9:
# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7
# 142 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 143 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_10:
# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_10
# 147 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 148 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 149 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_11:
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_12
# 152 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 153 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 154 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_12:
# 156 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_13
# 157 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
# 158 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 159 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_15:
# 179 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_14
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_16:
# 181 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_15
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_17:
# 183 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_16
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_18:
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_17
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_21:
# 200 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_18
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_22:
# 203 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_19
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_23:
# 206 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_20
# 207 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_24:
# 209 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_21
# 210 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19


TwinleafTownPlayersHouse_2F_TVGift::
# 225 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 226 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_TVGift_Text_0
# 227 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_ItsAWii::
# 231 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 232 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_ItsAWii_Text_0
# 234 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_OpenMenu::
# 238 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 239 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_OpenMenu_Text_0
# 241 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_CheckPC::
# 245 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 246 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_CheckPC_Text_0
# 252 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


# 47 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_ON_WARP_Movement_0:
# 47 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 86 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_0:
# 86 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_fast_left
	step_end

# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1:
# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2:
# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 105 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3:
# 105 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 106 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4:
# 106 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5:
# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 113 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6:
# 113 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 113 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 113 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 113 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 113 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7:
# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 143 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8:
# 143 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_left
	step_end

# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9:
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_10:
# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 149 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11:
# 149 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 149 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_12:
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 156 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_13:
# 156 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 156 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 156 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 179 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_14:
# 179 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 179 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 179 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 179 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 181 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_15:
# 181 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 181 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 183 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_16:
# 183 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 183 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 183 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 183 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_17:
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 200 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_18:
# 200 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 200 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 200 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 200 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 203 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_19:
# 203 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 203 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 203 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 203 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 203 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 203 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 206 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_20:
# 206 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 206 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 206 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 206 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 206 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 206 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 209 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_21:
# 209 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 209 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 209 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 209 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 209 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 209 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 213 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_22:
# 213 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 213 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 213 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_slow_stairs_right
	step_end

TwinleafTownPlayersHouse_2F_ON_FRAME_Text_0:
# 34 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "That concludes our special program,\n"
	.string "“Lets ask Prof. Rowan!”\p"
	.string "Brought to you by Jubilife TV on\n"
	.string "Nationwide Net!\p"
	.string "See you next week, same time\n"
	.string "same channel.$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_0:
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "There you are!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_1:
# 121 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Did you just see the TV? Sure you did!\p"
	.string "Prof. Rowan's that really important\n"
	.string "guy who studies Pokémon, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of Pokémon.\p"
	.string "So if we ask him, I bet he'd give us\n"
	.string "some Pokémon!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_2:
# 164 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, hey!\n"
	.string "Is this a new PC?!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_3:
# 172 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Uh. . .\n"
	.string "Where was I?$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_4:
# 190 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, right, right! We're going to go see\n"
	.string "Prof. Rowan and get some Pokémon.\p"
	.string "I'll be waiting outside.\p"
	.string "OK, {PLAYER}? If you're late, I'm\n"
	.string "fining you ¥10 million!$"

TwinleafTownPlayersHouse_2F_TVGift_Text_0:
# 226 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Mom bought this TV as a gift.$"

TwinleafTownPlayersHouse_2F_ItsAWii_Text_0:
# 232 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "It's a Wii!\n"
	.string "Its controlled by a Wii Remote!$"

TwinleafTownPlayersHouse_2F_OpenMenu_Text_0:
# 239 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "The START Button\n"
	.string "opens the menu!$"

TwinleafTownPlayersHouse_2F_CheckPC_Text_0:
# 246 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "{PLAYER} checked the PC.\p"
	.string "Pokémon Basics...\p"
	.string "People live alongisde Pokémon in\n"
	.string "this world.\p"
	.string "The people that battle Pokémon are\n"
	.string "called Pokémon Trainers.$"
