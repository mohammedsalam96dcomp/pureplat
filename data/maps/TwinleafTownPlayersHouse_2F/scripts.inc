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
	setspeaker SP_NAME_BARRY
# 79 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_0
# 80 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 82 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_3
# 85 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_4
# 90 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_5
# 95 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_6
TwinleafTownPlayersHouse_2F_EnterBarry_1:
# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 103 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 104 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_1
# 113 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 115 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 116 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 117 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 118 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 119 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 120 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 122 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 123 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_9
# 128 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_10
# 133 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_11
# 138 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_12
TwinleafTownPlayersHouse_2F_EnterBarry_7:
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 146 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 147 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_2
# 150 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 152 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 153 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 154 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 155 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_3
# 158 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 160 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 161 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_15
# 163 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_16
# 165 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_17
# 167 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_18
TwinleafTownPlayersHouse_2F_EnterBarry_13:
# 170 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 172 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setspeaker SP_NAME_BARRY
# 173 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_4
# 179 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 181 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 182 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_21
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_22
# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_23
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_24
TwinleafTownPlayersHouse_2F_EnterBarry_19:
# 195 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 196 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_22
# 197 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 198 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_EXIT
# 199 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	removeobject LOCALID_RIVAL
# 200 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 201 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	delay 40
# 202 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 3
# 203 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	fadedefaultbgm
# 204 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return

TwinleafTownPlayersHouse_2F_EnterBarry_3:
# 84 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_4:
# 86 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2
# 87 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 89 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_5:
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5
# 92 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 93 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 94 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_6:
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6
# 97 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 98 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 99 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_9:
# 124 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7
# 125 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 126 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 127 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_10:
# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_10
# 130 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 131 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_11:
# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_12
# 135 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 136 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 137 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_12:
# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_13
# 140 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 141 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 142 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_15:
# 162 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_14
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_16:
# 164 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_15
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_17:
# 166 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_16
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_18:
# 168 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_17
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_21:
# 183 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_18
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_22:
# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_19
# 187 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_23:
# 189 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_20
# 190 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_24:
# 192 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_21
# 193 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19


TwinleafTownPlayersHouse_2F_TVGift::
# 208 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 209 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_TVGift_Text_0
# 210 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_ItsAWii::
# 214 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 215 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_ItsAWii_Text_0
# 217 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_OpenMenu::
# 221 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 222 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_OpenMenu_Text_0
# 224 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_CheckPC::
# 228 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 229 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_CheckPC_Text_0
# 235 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
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

# 84 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1:
# 84 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 84 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 84 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 84 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 86 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2:
# 86 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 86 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 86 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3:
# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 89 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4:
# 89 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5:
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6:
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 124 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7:
# 124 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 124 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 124 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 124 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 124 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 126 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8:
# 126 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_left
	step_end

# 127 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9:
# 127 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 127 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_10:
# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11:
# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_12:
# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 134 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_13:
# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 139 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 162 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_14:
# 162 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 162 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 162 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 162 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 164 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_15:
# 164 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 164 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 166 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_16:
# 166 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 166 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 166 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 166 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 168 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_17:
# 168 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 168 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 168 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 183 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_18:
# 183 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 183 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 183 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 183 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_19:
# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 189 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_20:
# 189 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 189 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 189 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 189 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 189 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 189 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 192 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_21:
# 192 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 192 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 192 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 192 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 192 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 192 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 196 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_22:
# 196 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 196 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 196 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
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
# 79 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "There you are!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_1:
# 104 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Did you just see the TV? Sure you did!\p"
	.string "Prof. Rowan's that really important\n"
	.string "guy who studies Pokemon, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of Pokemon.\p"
	.string "So if we ask him, I bet he'd give us\n"
	.string "some Pokemon!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_2:
# 147 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, hey!\n"
	.string "Is this a new PC?!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_3:
# 155 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Uh...\n"
	.string "Where was I?$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_4:
# 173 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, right, right! We're going to go see\n"
	.string "Prof. Rowan and get some Pokemon.\p"
	.string "I'll be waiting outside.\p"
	.string "OK, {PLAYER}? If you're late, I'm\n"
	.string "fining you ¥10 million!$"

TwinleafTownPlayersHouse_2F_TVGift_Text_0:
# 209 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Mom bought this TV as a gift.$"

TwinleafTownPlayersHouse_2F_ItsAWii_Text_0:
# 215 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "It's a Wii!\n"
	.string "Its controlled by a Wii Remote!$"

TwinleafTownPlayersHouse_2F_OpenMenu_Text_0:
# 222 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "The START Button\n"
	.string "opens the menu!$"

TwinleafTownPlayersHouse_2F_CheckPC_Text_0:
# 229 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "{PLAYER} checked the PC.\p"
	.string "Pokemon Basics...\p"
	.string "People live alongisde Pokemon in\n"
	.string "this world.\p"
	.string "The people that battle Pokemon are\n"
	.string "called Pokemon Trainers.$"
