TwinleafTownPlayersHouse_2F_MapScripts::
# 4 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 8 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 1, TwinleafTownPlayersHouse_2F_ON_FRAME
	.2byte 0

TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 9 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 0, TwinleafTownPlayersHouse_2F_ON_WARP
	.2byte 0


TwinleafTownPlayersHouse_2F_ON_FRAME::
# 14 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lock
# 15 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_ON_FRAME_Text_0
# 23 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	release
# 24 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 2
	return


TwinleafTownPlayersHouse_2F_ON_WARP::
# 28 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_ON_WARP_Movement_0
# 29 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 1
	return


TwinleafTownPlayersHouse_2F_EnterBarryRight::
# 34 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 35 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 36 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 37 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryUp::
# 41 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 42 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 43 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 44 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryDown::
# 48 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 49 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 50 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 51 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryLeft::
# 55 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 56 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 3
# 57 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 58 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarry::
# 62 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 63 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 64 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 66 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_EXIT
# 67 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_0
# 68 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 69 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 70 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playbgm MUS_GSC_ROUTE38, 0
# 71 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 72 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 73 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 74 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 75 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	delay 48
# 76 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 77 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
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
	waitmovement LOCALID_RIVAL
# 102 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_1
# 111 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 113 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 114 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 115 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 116 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 117 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 118 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 120 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 121 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_9
# 126 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_10
# 131 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_11
# 136 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_12
TwinleafTownPlayersHouse_2F_EnterBarry_7:
# 142 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_2
# 147 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 149 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 150 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_3
# 154 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 156 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 157 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_15
# 159 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_16
# 161 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_17
# 163 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_18
TwinleafTownPlayersHouse_2F_EnterBarry_13:
# 166 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 168 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_4
# 174 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 176 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 177 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_21
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_22
# 183 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_23
# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_24
TwinleafTownPlayersHouse_2F_EnterBarry_19:
# 190 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_22
# 192 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 193 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_EXIT
# 194 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	removeobject LOCALID_RIVAL
# 195 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 196 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	delay 40
# 197 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 3
# 198 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	fadedefaultbgm
# 199 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return

TwinleafTownPlayersHouse_2F_EnterBarry_3:
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_4:
# 85 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2
# 86 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 87 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_5:
# 90 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 92 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 93 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_6:
# 95 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 97 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 98 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_9:
# 122 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7
# 123 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 124 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 125 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_10:
# 127 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_10
# 128 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 130 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_11:
# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_12
# 133 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 135 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_12:
# 137 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_13
# 138 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 140 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_15:
# 158 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_14
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_16:
# 160 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_15
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_17:
# 162 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_16
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_18:
# 164 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_17
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_21:
# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_18
# 179 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_22:
# 181 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_19
# 182 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_23:
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_20
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_24:
# 187 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_21
# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19


TwinleafTownPlayersHouse_2F_TVGift::
# 203 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_TVGift_Text_0
# 205 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_ItsAWii::
# 209 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 210 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_ItsAWii_Text_0
# 212 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_OpenMenu::
# 216 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 217 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_OpenMenu_Text_0
# 219 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_CheckPC::
# 223 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 224 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_CheckPC_Text_0
# 230 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


# 28 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_ON_WARP_Movement_0:
# 28 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 67 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_0:
# 67 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
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

# 122 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7:
# 122 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 122 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 122 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 122 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 122 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 124 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8:
# 124 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_left
	step_end

# 125 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9:
# 125 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 125 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 127 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_10:
# 127 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 127 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 127 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 127 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 130 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11:
# 130 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 130 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_12:
# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 137 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_13:
# 137 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 137 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 137 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 158 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_14:
# 158 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 158 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 158 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 158 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 160 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_15:
# 160 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 160 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 162 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_16:
# 162 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 162 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 162 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 162 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 164 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_17:
# 164 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 164 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 164 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_18:
# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 181 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_19:
# 181 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 181 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 181 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 181 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 181 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 181 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_20:
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 187 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_21:
# 187 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 187 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 187 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 187 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 187 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 187 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_22:
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_slow_stairs_right
	step_end

TwinleafTownPlayersHouse_2F_ON_FRAME_Text_0:
# 15 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
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
# 102 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Did you just see the TV? Sure you did!\p"
	.string "Prof. Rowan's that really important\n"
	.string "guy who studies Pokemon, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of Pokemon.\p"
	.string "So if we ask him, I bet he'd give us\n"
	.string "some Pokemon!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_2:
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, hey!\n"
	.string "Is this a new PC?!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_3:
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Uh...\n"
	.string "Where was I?$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_4:
# 168 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, right, right! We're going to go see\n"
	.string "Prof. Rowan and get some Pokemon.\p"
	.string "I'll be waiting outside.\p"
	.string "OK, {PLAYER}? If you're late, I'm\n"
	.string "fining you ¥10 million!$"

TwinleafTownPlayersHouse_2F_TVGift_Text_0:
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Mom bought this TV as a gift.$"

TwinleafTownPlayersHouse_2F_ItsAWii_Text_0:
# 210 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "It's a Wii!\n"
	.string "Its controlled by a Wii Remote!$"

TwinleafTownPlayersHouse_2F_OpenMenu_Text_0:
# 217 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "The START Button\n"
	.string "opens the menu!$"

TwinleafTownPlayersHouse_2F_CheckPC_Text_0:
# 224 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "{PLAYER} checked the PC.\p"
	.string "Pokemon Basics...\p"
	.string "People live alongisde Pokemon in\n"
	.string "this world.\p"
	.string "The people that battle Pokemon are\n"
	.string "called Pokemon Trainers.$"
