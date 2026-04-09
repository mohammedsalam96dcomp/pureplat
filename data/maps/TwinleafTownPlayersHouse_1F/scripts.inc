TwinleafTownPlayersHouse_1F_MapScripts::
# 12 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 17 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_TOWN_STATE, 2, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT
# 14 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_TOWN_STATE, 6, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON
	.2byte 0

TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 18 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_TOWN_STATE, 5, TwinleafTownPlayersHouse_1F_ON_WARP
	.2byte 0


TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT::
# 23 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lockall
# 25 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_0
# 26 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 27 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 28 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1
# 29 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 30 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 32 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 48
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_2
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 36 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 37 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Text_0
# 42 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 44 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_3
# 45 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 46 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 10
# 48 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 1
# 49 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 3
# 51 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON::
# 56 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 58 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_0
# 59 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 30
# 61 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_1
# 62 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_2
# 63 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 65 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_3
# 66 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_4
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_5
# 70 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 71 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 73 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Text_0
# 103 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 105 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 7
# 106 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 107 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 4
# 108 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_ROUTE201_STATE, 2
# 110 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTownPlayersHouse_1F_ON_WARP::
# 114 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setobjectxy 1, 1, 3
# 115 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 117 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 6
# 118 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_EventScript_Mom::
# 123 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 125 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_2
# 127 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 1
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_3
# 129 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 2
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_4
# 131 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 3
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_5
# 133 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 4
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_6
TwinleafTown_PlayersHouse1F_EventScript_Mom_1:
# 137 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return

TwinleafTown_PlayersHouse1F_EventScript_Mom_2:
# 126 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_RunningShoes
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_3:
# 128 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_HowImpatient
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_4:
# 130 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_ByeBye
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_5:
# 132 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_BarryWaiting
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_6:
# 134 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_Heal
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1


TwinleafTown_PlayersHouse1F_HowImpatient::
# 141 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 142 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 144 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 145 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_HowImpatient_Text_0
# 150 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 151 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Cooking::
# 155 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 156 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Cooking_Text_0
# 159 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 160 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Dessert::
# 164 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 165 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Dessert_Text_0
# 168 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 169 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Spotless::
# 173 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 174 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Spotless_Text_0
# 177 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 178 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ContestDigest::
# 182 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 183 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ContestDigest_Text_0
# 190 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 191 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_EventScript_ExitHouse::
# 195 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 197 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 198 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 199 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 200 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_0
# 201 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 202 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 204 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 205 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0
# 213 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 215 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_BARRY_STATE, 1
# 216 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 2
# 218 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ByeBye::
# 222 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 223 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 225 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 226 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ByeBye_Text_0
# 229 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 230 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
# 231 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 3
	return


TwinleafTown_PlayersHouse1F_BarryWaiting::
# 235 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 236 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 238 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 239 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_BarryWaiting_Text_0
# 242 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 243 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_RunningShoes::
# 247 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 248 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 250 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 251 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_RunningShoes_Text_0
# 259 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 261 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Heal::
# 265 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 266 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 268 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 269 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Heal_Text_0
# 272 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 274 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	return


# 25 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_0:
# 25 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 28 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1:
# 28 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_down
	step_end

# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_2:
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 44 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_3:
# 44 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 44 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 44 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 44 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 44 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 44 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 44 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 58 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_0:
# 58 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 58 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_up
	step_end

# 61 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_1:
# 61 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 62 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_2:
# 62 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_right
	step_end

# 65 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_3:
# 65 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 65 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 65 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 65 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_4:
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_left
	step_end

# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_5:
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 197 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0:
# 197 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_down
	step_end

TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Text_0:
# 37 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "Barry already left.\p"
	.string "I don't know what it was about, but\n"
	.string "he sure was in a hurry!$"

TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Text_0:
# 73 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}What's the matter, dear?\p"
	.string ". . .\p"
	.string "Wow.\n"
	.string "That's what happened to you?\p"
	.string "You and Barry are lucky to have\n"
	.string "met Prof. Rowan.\p"
	.string "Imagine if you didn't. . .\p"
	.string "I wouldn't like to think what the wild\n"
	.string "Pokémon might have done to you two.\p"
	.string "{PLAYER}, go see Prof. Rowan, and\n"
	.string "thank him properly for your Pokémon.\p"
	.string "His lab is in Sandgem Town, isn't it?\p"
	.string "Now that you have your own Pokémon,\n"
	.string "the tall grass won't be so threatening.\p"
	.string "Oh, I know!\n"
	.string "{PLAYER}, put these on.\p"
	.string "{PLAYER} received a pair of\n"
	.string "Running Shoes!\p"
	.string "Going to Sandgem Town is like an\n"
	.string "adventure in itself, right?\p"
	.string "With those Running Shoes, you can\n"
	.string "get to faraway places much faster.\p"
	.string "OK. . .\n"
	.string "Let me read the instructions. . .\p"
	.string "Press the B Button and dash\n"
	.string "about faster than ever before!\p"
	.string "Put on the Running Shoes and\n"
	.string "blaze new trails of adventure!\p"
	.string "Well, isn't that just nifty!$"

TwinleafTown_PlayersHouse1F_HowImpatient_Text_0:
# 145 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "You know how impatient\n"
	.string "Barry is.\p"
	.string "He took off before I could even\n"
	.string "ask what it was about.$"

TwinleafTown_PlayersHouse1F_Cooking_Text_0:
# 156 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "This is where Mom does all her\n"
	.string "delicious cooking.$"

TwinleafTown_PlayersHouse1F_Dessert_Text_0:
# 165 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's favorite dessert is in\n"
	.string "the refrigerator.$"

TwinleafTown_PlayersHouse1F_Spotless_Text_0:
# 174 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's kitchen is spotless!\n"
	.string "You can see your face on the floor!$"

TwinleafTown_PlayersHouse1F_ContestDigest_Text_0:
# 183 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "MC: Here we are!\n"
	.string "It's the Contest Digest!\p"
	.string "The winner of today's Normal Rank\n"
	.string "Smart Contest is. . .\p"
	.string "Westley, who won with his bright spark\n"
	.string "of a Pokémon!$"

TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0:
# 205 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass.\n"
	.string "Wild Pokémon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokémon, but you don't so. . .\p"
	.string "Well, take care, sweetie!$"

TwinleafTown_PlayersHouse1F_ByeBye_Text_0:
# 226 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Bye-Bye, {PLAYER}!\n"
	.string "You take care now!$"

TwinleafTown_PlayersHouse1F_BarryWaiting_Text_0:
# 239 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "What is it, dear?\n"
	.string "Isn't Barry waiting for you?$"

TwinleafTown_PlayersHouse1F_RunningShoes_Text_0:
# 251 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "I'll read you the instructions\n"
	.string "for the Running Shoes. . .\p"
	.string "Press the B Button and dash\n"
	.string "about faster than ever before!\p"
	.string "Put on the Running Shoes and\n"
	.string "blaze new trails of adventure!\p"
	.string "Well, isn't that just nifty!$"

TwinleafTown_PlayersHouse1F_Heal_Text_0:
# 269 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Welcome home {PLAYER}.\n"
	.string "Are you and your Pokémon healthy?\l"
	.string "Take a quick rest, dear.$"
