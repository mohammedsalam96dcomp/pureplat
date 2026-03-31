TwinleafTownPlayersHouse_1F_MapScripts::
# 2 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 3, TwinleafTownPlayersHouse_1F_ON_FRAME
	.2byte 0


TwinleafTownPlayersHouse_1F_ON_FRAME::
# 8 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lockall
# 10 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_0
# 11 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement LOCALID_MOM
# 12 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_ExclamationMark
# 13 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_1
# 14 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 15 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 16 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 17 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 48
# 18 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_2
# 19 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement LOCALID_MOM
# 21 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 22 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_1F_ON_FRAME_Text_0
# 27 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 29 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_3
# 30 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement LOCALID_MOM
# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 10
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	releaseall
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 4
	return


# 10 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_0:
# 10 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 13 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_1:
# 13 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_down
	step_end

# 18 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_2:
# 18 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 18 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 18 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 18 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 18 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 18 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 29 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_3:
# 29 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 29 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 29 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 29 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 29 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 29 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 29 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

TwinleafTownPlayersHouse_1F_ON_FRAME_Text_0:
# 22 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "Barry already left.\p"
	.string "I don't know what it was about, but\n"
	.string "he sure was in a hurry!$"
