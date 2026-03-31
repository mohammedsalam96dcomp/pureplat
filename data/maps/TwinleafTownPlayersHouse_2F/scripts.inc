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


TwinleafTownPlayersHouse_2F_EnterBarry::
# 31 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lockall
# 32 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 33 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 35 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_RG_DOOR
# 36 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_0
# 37 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 38 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 39 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 40 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 41 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 42 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_0
# 43 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 44 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1
# 45 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 46 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_1
# 55 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 57 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 58 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 59 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement 0
# 60 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitse
# 61 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 62 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 64 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2
# 65 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 66 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3
# 67 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4
# 68 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 69 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_2
# 72 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 74 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5
# 75 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 76 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_3
# 79 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 81 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6
# 82 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_2F_EnterBarry_Text_4
# 89 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	closemessage
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7
# 92 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 93 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5
# 94 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8
# 95 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	waitmovement LOCALID_RIVAL
# 96 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	playse SE_RG_DOOR
# 98 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	removeobject LOCALID_RIVAL
# 99 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 100 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 3
# 101 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	releaseall
	return


# 26 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_ON_WARP_Movement_0:
# 26 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 36 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_0:
# 36 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_fast_left
	step_end

# 44 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_1:
# 44 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 44 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 44 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 44 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 64 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_2:
# 64 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 64 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 64 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 64 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
	step_end

# 66 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_3:
# 66 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_left
	step_end

# 67 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_4:
# 67 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 67 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_left
# 67 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 74 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_5:
# 74 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 81 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_6:
# 81 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 81 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_down
# 81 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 81 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
	step_end

# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_7:
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 91 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 94 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
TwinleafTownPlayersHouse_2F_EnterBarry_Movement_8:
# 94 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 94 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	walk_right
# 94 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
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
# 42 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "There you are!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_1:
# 46 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}!\n"
	.string "Did you just see the TV? Sure you did!\p"
	.string "Prof. Rowan's that really important\n"
	.string "guy who studies Pokemon, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of Pokemon.\p"
	.string "So if we ask him, I bet he'd give us\n"
	.string "some Pokemon!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_2:
# 69 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, hey!\n"
	.string "Is this a new PC?!$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_3:
# 76 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Uh...\n"
	.string "Where was I?$"

TwinleafTownPlayersHouse_2F_EnterBarry_Text_4:
# 83 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "Oh, right, right! We're going to go see\n"
	.string "Prof. Rowan and get some Pokemon.\p"
	.string "I'll be waiting outside.\p"
	.string "OK, {PLAYER}? If you're late, I'm\n"
	.string "fining you ¥10 million!$"
