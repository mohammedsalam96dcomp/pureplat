TwinleafTownPlayersHouse_2F_MapScripts::
# 4 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 8 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 1, TV
	.2byte 0

TwinleafTownPlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 9 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 0, GameStart
	.2byte 0


TV::
# 21 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	lock
# 22 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	msgbox TV_Text_0
# 28 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	release
# 29 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 2
	return


GameStart::
# 34 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GameStart_Movement_0
# 41 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 1
	return


# 34 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
GameStart_Movement_0:
# 34 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	face_up
	step_end

TV_Text_0:
# 22 "data/maps/TwinleafTownPlayersHouse_2F/scripts.pory"
	.string "That concludes our special program,\n"
	.string "'Lets ask Prof. Rowan!'\p"
	.string "Brought to you by Jubilife TV on\n"
	.string "Nationwide Net!\p"
	.string "See you next week, same time\n"
	.string "same channel.$"
