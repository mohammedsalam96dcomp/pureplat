TwinleafTownPlayersHouse_2F_MapScripts::
# 2 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 6 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 1, TwinleafTownPlayersHouse_2F_ON_FRAME
	.2byte 0

TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 0, TwinleafTownPlayersHouse_2F_ON_WARP
	.2byte 0


TwinleafTownPlayersHouse_2F_ON_FRAME::
# 12 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lock
# 13 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_ON_FRAME_Text_0
# 21 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	release
# 22 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 2
	return


TwinleafTownPlayersHouse_2F_ON_WARP::
# 26 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_ON_WARP_Movement_0
# 27 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 1
	return


TwinleafTownPlayersHouse_2F_EnterBarryRight::
# 32 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 33 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 34 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 35 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryUp::
# 39 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 40 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 41 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 42 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryDown::
# 46 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 47 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 48 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 49 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarryLeft::
# 53 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 54 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TEMP_1, 3
# 55 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	goto TwinleafTownPlayersHouse_2F_EnterBarry
# 56 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_2F_EnterBarry::
# 60 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 61 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 62 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 64 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_RG_DOOR
# 65 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_0
# 66 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 67 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 68 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 69 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 70 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 71 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_0
# 72 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 74 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 75 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_3
# 77 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_4
# 82 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_5
# 87 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_6
TwinleafTownPlayersHouse_2F_EnterBarry_1:
# 93 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 95 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_1
# 104 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 106 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 107 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 108 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 109 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 110 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 111 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 113 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 114 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_9
# 119 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_10
# 124 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_11
# 129 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_12
TwinleafTownPlayersHouse_2F_EnterBarry_7:
# 135 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 137 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_2
# 140 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 142 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 143 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_3
# 147 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 149 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 150 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_15
# 152 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_16
# 154 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_17
# 156 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_18
TwinleafTownPlayersHouse_2F_EnterBarry_13:
# 159 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 161 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_4
# 167 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 169 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	switch VAR_TEMP_1
# 170 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 0, TwinleafTownPlayersHouse_2F_EnterBarry_21
# 173 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 1, TwinleafTownPlayersHouse_2F_EnterBarry_22
# 176 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 2, TwinleafTownPlayersHouse_2F_EnterBarry_23
# 179 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	case 3, TwinleafTownPlayersHouse_2F_EnterBarry_24
TwinleafTownPlayersHouse_2F_EnterBarry_19:
# 183 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_22
# 185 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 186 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_RG_DOOR
# 188 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	removeobject LOCALID_RIVAL
# 189 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 190 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 3
# 191 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return

TwinleafTownPlayersHouse_2F_EnterBarry_3:
# 76 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_4:
# 78 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2
# 79 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 80 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 81 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_5:
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5
# 84 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 85 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 86 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_6:
# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6
# 89 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 90 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
	goto TwinleafTownPlayersHouse_2F_EnterBarry_1

TwinleafTownPlayersHouse_2F_EnterBarry_9:
# 115 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7
# 116 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 117 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 118 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_10:
# 120 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_10
# 121 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 122 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 123 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_11:
# 125 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_12
# 126 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 127 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 128 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_12:
# 130 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_13
# 131 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 132 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 133 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9
	goto TwinleafTownPlayersHouse_2F_EnterBarry_7

TwinleafTownPlayersHouse_2F_EnterBarry_15:
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_14
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_16:
# 153 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_15
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_17:
# 155 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_16
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_18:
# 157 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_17
	goto TwinleafTownPlayersHouse_2F_EnterBarry_13

TwinleafTownPlayersHouse_2F_EnterBarry_21:
# 171 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_18
# 172 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_22:
# 174 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_19
# 175 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_23:
# 177 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_20
# 178 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19

TwinleafTownPlayersHouse_2F_EnterBarry_24:
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_21
# 181 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
	goto TwinleafTownPlayersHouse_2F_EnterBarry_19


# 26 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_ON_WARP_Movement_0:
# 26 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 65 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_0:
# 65 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_fast_left
	step_end

# 76 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1:
# 76 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 76 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 76 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 76 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 78 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2:
# 78 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 78 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 78 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 80 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3:
# 80 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 81 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4:
# 81 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5:
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6:
# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 88 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 115 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7:
# 115 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 115 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 115 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 115 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 115 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 117 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8:
# 117 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_left
	step_end

# 118 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_9:
# 118 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 118 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 120 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_10:
# 120 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 120 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 120 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 120 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 123 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_11:
# 123 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 123 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 125 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_12:
# 125 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 125 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 125 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 125 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 130 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_13:
# 130 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 130 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 130 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_14:
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 151 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 153 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_15:
# 153 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 153 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 155 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_16:
# 155 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 155 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 155 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 155 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 157 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_17:
# 157 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 157 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 157 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 171 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_18:
# 171 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 171 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 171 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 171 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 174 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_19:
# 174 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 174 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 174 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 174 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 174 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 174 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 177 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_20:
# 177 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 177 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 177 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 177 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 177 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 177 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_21:
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 180 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_22:
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 184 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

TwinleafTownPlayersHouse_2F_ON_FRAME_Text_0:
# 13 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "That concludes our special program,\n"
	.string "'Lets ask Prof. Rowan!'\p"
	.string "Brought to you by Jubilife TV on\n"
	.string "Nationwide Net!\p"
	.string "See you next week, same time\n"
	.string "same channel.$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_0:
# 71 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "There you are!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_1:
# 95 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Did you just see the TV? Sure you did!\p"
	.string "Prof. Rowan's that really important\n"
	.string "guy who studies Pokemon, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of Pokemon.\p"
	.string "So if we ask him, I bet he'd give us\n"
	.string "some Pokemon!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_2:
# 137 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, hey!\n"
	.string "Is this a new PC?!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_3:
# 144 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Uh...\n"
	.string "Where was I?$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_4:
# 161 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, right, right! We're going to go see\n"
	.string "Prof. Rowan and get some Pokemon.\p"
	.string "I'll be waiting outside.\p"
	.string "OK, {PLAYER}? If you're late, I'm\n"
	.string "fining you ¥10 million!$"
