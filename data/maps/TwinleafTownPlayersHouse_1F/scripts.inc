TwinleafTownPlayersHouse_1F_MapScripts::
# 8 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 14 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 3, TwinleafTownPlayersHouse_1F_ON_FRAME3
# 10 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 8, TwinleafTownPlayersHouse_1F_ON_FRAME8
	.2byte 0

TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 15 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 7, TwinleafTownPlayersHouse_1F_ON_WARP
	.2byte 0


TwinleafTownPlayersHouse_1F_ON_FRAME3::
# 20 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lockall
# 22 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME3_Movement_0
# 23 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 24 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 25 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME3_Movement_1
# 26 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 27 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 28 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 29 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 48
# 30 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME3_Movement_2
# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_1F_ON_FRAME3_Text_0
# 39 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 41 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME3_Movement_3
# 42 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 43 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 10
# 48 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	releaseall
# 50 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 1
# 51 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 4
	return


TwinleafTownPlayersHouse_1F_ON_FRAME8::
# 55 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 57 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME8_Movement_0
# 58 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 59 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 30
# 60 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME8_Movement_1
# 61 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME8_Movement_2
# 62 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 64 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME8_Movement_3
# 65 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 67 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME8_Movement_4
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME8_Movement_5
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 70 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 72 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_1F_ON_FRAME8_Text_0
# 102 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 104 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 9
# 105 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 106 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 4
# 108 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTownPlayersHouse_1F_ON_WARP::
# 112 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_WARP_Movement_0
# 113 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setobjectxy 1, 1, 3
# 114 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 8
	return


TwinleafTown_PlayersHouse1F_EventScript_Mom::
# 119 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 121 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_2
# 123 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 1
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_3
# 125 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 2
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_4
# 127 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 3
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_5
# 129 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 4
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_6
TwinleafTown_PlayersHouse1F_EventScript_Mom_1:
# 133 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return

TwinleafTown_PlayersHouse1F_EventScript_Mom_2:
# 122 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_RunningShoes
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_3:
# 124 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_HowImpatient
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_4:
# 126 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_ByeBye
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_5:
# 128 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_BarryWaiting
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_6:
# 130 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_Heal
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1


TwinleafTown_PlayersHouse1F_HowImpatient::
# 137 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 138 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 140 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 141 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_HowImpatient_Text_0
# 146 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 147 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Cooking::
# 151 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 152 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Cooking_Text_0
# 155 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 156 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Dessert::
# 160 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 161 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Dessert_Text_0
# 164 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 165 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Spotless::
# 169 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 170 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Spotless_Text_0
# 173 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 174 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ContestDigest::
# 178 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 179 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ContestDigest_Text_0
# 186 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 187 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_EventScript_ExitHouse::
# 191 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 196 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 197 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 198 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 199 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME3_Movement_0
# 200 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 201 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 203 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 204 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0
# 212 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 217 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 5
# 218 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_BARRY_STATE, 1
# 219 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 2
# 221 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ByeBye::
# 225 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 226 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 228 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 229 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ByeBye_Text_0
# 232 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 233 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
# 234 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 3
	return


TwinleafTown_PlayersHouse1F_BarryWaiting::
# 238 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 239 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 241 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 242 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_BarryWaiting_Text_0
# 245 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 246 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_RunningShoes::
# 250 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 251 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 253 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 254 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_RunningShoes_Text_0
# 262 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 264 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Heal::
# 268 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 269 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 271 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 272 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Heal_Text_0
# 275 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 277 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	return


# 22 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME3_Movement_0:
# 22 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 25 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME3_Movement_1:
# 25 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_down
	step_end

# 30 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME3_Movement_2:
# 30 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 30 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 30 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 30 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 30 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 30 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 41 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME3_Movement_3:
# 41 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 41 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 41 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 41 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 41 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 41 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 41 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 57 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME8_Movement_0:
# 57 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 57 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_up
	step_end

# 60 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME8_Movement_1:
# 60 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 61 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME8_Movement_2:
# 61 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_right
	step_end

# 64 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME8_Movement_3:
# 64 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 64 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 64 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 64 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 67 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME8_Movement_4:
# 67 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 67 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 67 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 67 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 67 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_left
	step_end

# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME8_Movement_5:
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 112 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_WARP_Movement_0:
# 112 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_up
	step_end

# 196 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0:
# 196 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_down
	step_end

TwinleafTownPlayersHouse_1F_ON_FRAME3_Text_0:
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "Barry already left.\p"
	.string "I don't know what it was about, but\n"
	.string "he sure was in a hurry!$"

TwinleafTownPlayersHouse_1F_ON_FRAME8_Text_0:
# 72 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
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
# 141 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "You know how impatient\n"
	.string "Barry is.\p"
	.string "He took off before I could even\n"
	.string "ask what it was about.$"

TwinleafTown_PlayersHouse1F_Cooking_Text_0:
# 152 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "This is where Mom does all her\n"
	.string "delicious cooking.$"

TwinleafTown_PlayersHouse1F_Dessert_Text_0:
# 161 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's favorite dessert is in\n"
	.string "the refrigerator.$"

TwinleafTown_PlayersHouse1F_Spotless_Text_0:
# 170 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's kitchen is spotless!\n"
	.string "You can see your face on the floor!$"

TwinleafTown_PlayersHouse1F_ContestDigest_Text_0:
# 179 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "MC: Here we are!\n"
	.string "It's the Contest Digest!\p"
	.string "The winner of today's Normal Rank\n"
	.string "Smart Contest is. . .\p"
	.string "Westley, who won with his bright spark\n"
	.string "of a Pokémon!$"

TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0:
# 204 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass.\n"
	.string "Wild Pokémon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokémon, but you don't so. . .\p"
	.string "Well, take care, sweetie!$"

TwinleafTown_PlayersHouse1F_ByeBye_Text_0:
# 229 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Bye-Bye, Nic!\n"
	.string "You take care now!$"

TwinleafTown_PlayersHouse1F_BarryWaiting_Text_0:
# 242 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "What is it, dear?\n"
	.string "Isn't Barry waiting for you?$"

TwinleafTown_PlayersHouse1F_RunningShoes_Text_0:
# 254 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "I'll read you the instructions\n"
	.string "for the Running Shoes. . .\p"
	.string "Press the B Button and dash\n"
	.string "about faster than ever before!\p"
	.string "Put on the Running Shoes and\n"
	.string "blaze new trails of adventure!\p"
	.string "Well, isn't that just nifty!$"

TwinleafTown_PlayersHouse1F_Heal_Text_0:
# 272 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Welcome home {PLAYER}.\n"
	.string "Are you and your Pokémon healthy?\l"
	.string "Take a quick rest, dear.$"
