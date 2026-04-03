TwinleafTownBarrysHouse_2f_MapScripts::
# 5 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownBarrysHouse_2f_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TwinleafTownBarrysHouse_2f_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 5, TwinleafTownBarrysHouse_2F_ON_FRAME
	.2byte 0


TwinleafTownBarrysHouse_2F_ON_FRAME::
# 11 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	lock
# 13 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	setspeaker SP_NAME_BARRY
# 14 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	msgbox TwinleafTownBarrysHouse_2F_ON_FRAME_Text_0
# 16 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	closemessage
# 18 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	applymovement 1, TwinleafTownBarrysHouse_2F_ON_FRAME_Movement_0
# 19 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	waitmovement 0
# 20 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 21 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	playse SE_PIN
# 22 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	waitmovement 0
# 23 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	waitse
# 24 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	delay 48
# 26 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	setspeaker SP_NAME_BARRY
# 27 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	msgbox TwinleafTownBarrysHouse_2F_ON_FRAME_Text_1
# 30 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	closemessage
# 32 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	applymovement 1, TwinleafTownBarrysHouse_2F_ON_FRAME_Movement_1
# 33 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	waitmovement 0
# 34 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownBarrysHouse_2F_ON_FRAME_Movement_2
# 35 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	applymovement 1, TwinleafTownBarrysHouse_2F_ON_FRAME_Movement_3
# 36 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	waitmovement 0
# 38 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	setflag FLAG_HIDE_BARRY_ROOM_BARRY
# 39 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	removeobject 1
# 41 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 6
# 42 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	release
	return


# 18 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
TwinleafTownBarrysHouse_2F_ON_FRAME_Movement_0:
# 18 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	face_left
	step_end

# 32 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
TwinleafTownBarrysHouse_2F_ON_FRAME_Movement_1:
# 32 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_fast_left
# 32 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_fast_left
# 32 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_fast_left
# 32 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_fast_left
# 32 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_fast_up
	step_end

# 34 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
TwinleafTownBarrysHouse_2F_ON_FRAME_Movement_2:
# 34 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_down
# 34 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	face_up
	step_end

# 35 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
TwinleafTownBarrysHouse_2F_ON_FRAME_Movement_3:
# 35 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_fast_left
# 35 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_fast_left
# 35 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_slow_stairs_left
	step_end

TwinleafTownBarrysHouse_2F_ON_FRAME_Text_0:
# 14 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	.string ". . .I'd better take\n"
	.string "my Bag and Journal, too. . .$"

TwinleafTownBarrysHouse_2F_ON_FRAME_Text_1:
# 27 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	.string "Oh, hey, {PLAYER}!\p"
	.string "I'll be waiting on the road!\n"
	.string "It's a ¥10 million fine if you're late!$"
