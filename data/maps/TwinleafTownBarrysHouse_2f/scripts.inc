TwinleafTownBarrysHouse_2F_MapScripts::
# 9 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownBarrysHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TwinleafTownBarrysHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	map_script_2 VAR_TWINLEAF_BARRY_STATE, 2, TwinleafTownBarrysHouse_2F_ON_FRAME
	.2byte 0


TwinleafTownBarrysHouse_2F_ON_FRAME::
# 15 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	lock
# 17 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	setspeaker SP_NAME_BARRY
# 18 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	msgbox TwinleafTownBarrysHouse_2F_ON_FRAME_Text_0
# 20 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	closemessage
# 22 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	applymovement 1, TwinleafTownBarrysHouse_2F_ON_FRAME_Movement_0
# 23 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	waitmovement 0
# 24 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 25 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	playse SE_PIN
# 26 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	waitmovement 0
# 27 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	waitse
# 28 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	delay 48
# 29 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	playbgm MUS_GSC_ROUTE38, 0
# 30 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	setspeaker SP_NAME_BARRY
# 31 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	msgbox TwinleafTownBarrysHouse_2F_ON_FRAME_Text_1
# 34 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	closemessage
# 36 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	applymovement 1, TwinleafTownBarrysHouse_2F_ON_FRAME_Movement_1
# 37 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	waitmovement 0
# 38 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownBarrysHouse_2F_ON_FRAME_Movement_2
# 39 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	applymovement 1, TwinleafTownBarrysHouse_2F_ON_FRAME_Movement_3
# 40 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	waitmovement 0
# 41 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	playse SE_EXIT
# 42 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	fadedefaultbgm
# 44 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	setflag FLAG_HIDE_BARRY_ROOM_BARRY
# 45 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	removeobject 1
# 47 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	setvar VAR_TWINLEAF_BARRY_STATE, 3
# 48 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	setvar VAR_ROUTE201_STATE, 1
# 49 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 4
# 50 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	release
	return


TwinleafTownBarrysHouse_2F_EventScript_Wii::
# 54 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	lock
# 55 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	msgbox TwinleafTownBarrysHouse_2F_EventScript_Wii_Text_0
# 57 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	release
	return


TwinleafTownBarrysHouse_2F_EventScript_PC::
# 61 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	lock
# 62 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	msgbox TwinleafTownBarrysHouse_2F_EventScript_PC_Text_0
# 68 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	release
	return


# 22 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
TwinleafTownBarrysHouse_2F_ON_FRAME_Movement_0:
# 22 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	face_left
	step_end

# 36 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
TwinleafTownBarrysHouse_2F_ON_FRAME_Movement_1:
# 36 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_fast_left
# 36 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_fast_left
# 36 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_fast_left
# 36 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_fast_left
# 36 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_fast_up
	step_end

# 38 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
TwinleafTownBarrysHouse_2F_ON_FRAME_Movement_2:
# 38 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_down
# 38 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	face_up
	step_end

# 39 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
TwinleafTownBarrysHouse_2F_ON_FRAME_Movement_3:
# 39 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_fast_left
# 39 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_fast_left
# 39 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	walk_slow_stairs_left
	step_end

TwinleafTownBarrysHouse_2F_ON_FRAME_Text_0:
# 18 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	.string ". . .I'd better take\n"
	.string "my Bag and Journal, too. . .$"

TwinleafTownBarrysHouse_2F_ON_FRAME_Text_1:
# 31 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	.string "Oh, hey, {PLAYER}!\p"
	.string "I'll be waiting on the road!\n"
	.string "It's a ¥10 million fine if you're late!$"

TwinleafTownBarrysHouse_2F_EventScript_Wii_Text_0:
# 55 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	.string "It's a wii!\n"
	.string "It's controlled by a Wii Remote!$"

TwinleafTownBarrysHouse_2F_EventScript_PC_Text_0:
# 62 "data/maps/TwinleafTownBarrysHouse_2f/scripts.pory"
	.string "{PLAYER} checked the PC screen.\p"
	.string "Adventure Rule No. 1\n"
	.string "The START Button opens the menu!\p"
	.string "Adventure Rule No. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "There is nothing else on here. . .$"
