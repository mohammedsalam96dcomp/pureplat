TwinleafTown_MapScripts::
# 5 "data/maps/TwinleafTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TwinleafTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/TwinleafTown/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 5, TwinleafTown_ON_FRAME
	.2byte 0


TwinleafTown_ON_FRAME::
# 11 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 6
	return


TwinleafTown_EventScript_THUD::
# 15 "data/maps/TwinleafTown/scripts.pory"
	lock
# 16 "data/maps/TwinleafTown/scripts.pory"
	clearflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 17 "data/maps/TwinleafTown/scripts.pory"
	addobject 4
# 19 "data/maps/TwinleafTown/scripts.pory"
	playse SE_DOOR
# 20 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_0
# 21 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 22 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_1
# 23 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 24 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_THUD_Movement_2
# 25 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 26 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_3
# 27 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 28 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 30 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_THUD_Text_0
# 31 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 33 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 34 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 35 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 36 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 37 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 39 "data/maps/TwinleafTown/scripts.pory"
	setspeaker SP_NAME_BARRY
# 40 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_THUD_Text_1
# 44 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 46 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_THUD_Movement_4
# 47 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 48 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 49 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 50 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 51 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 52 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 53 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_THUD_Movement_5
# 54 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 4
# 56 "data/maps/TwinleafTown/scripts.pory"
	setspeaker SP_NAME_BARRY
# 57 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_THUD_Text_2
# 59 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 61 "data/maps/TwinleafTown/scripts.pory"
	opendoor 7, 10
# 62 "data/maps/TwinleafTown/scripts.pory"
	waitdooranim
# 64 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_THUD_Movement_6
# 65 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 66 "data/maps/TwinleafTown/scripts.pory"
	removeobject 4
# 67 "data/maps/TwinleafTown/scripts.pory"
	closedoor 7, 10
# 68 "data/maps/TwinleafTown/scripts.pory"
	waitdooranim
# 71 "data/maps/TwinleafTown/scripts.pory"
	setflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 72 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TWINLEAF_BARRY_STATE, 2
# 74 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_Technology::
# 79 "data/maps/TwinleafTown/scripts.pory"
	lock
# 80 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 81 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_Technology_Text_0
# 84 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_WildPokemon::
# 88 "data/maps/TwinleafTown/scripts.pory"
	lock
# 89 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 90 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_WildPokemon_Text_0
# 94 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_PlayersHouseSign::
# 98 "data/maps/TwinleafTown/scripts.pory"
	lock
# 99 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_PlayersHouseSign_Text_0
# 100 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_RivalsHouseSign::
# 105 "data/maps/TwinleafTown/scripts.pory"
	lock
# 106 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_RivalsHouseSign_Text_0
# 107 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_TwinleafSign::
# 112 "data/maps/TwinleafTown/scripts.pory"
	lock
# 113 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TwinleafSign_Text_0
# 115 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_GoSeeBarry1::
# 120 "data/maps/TwinleafTown/scripts.pory"
	lock
# 121 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 122 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 123 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry2::
# 127 "data/maps/TwinleafTown/scripts.pory"
	lock
# 128 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 2
# 129 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 130 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry3::
# 134 "data/maps/TwinleafTown/scripts.pory"
	lock
# 135 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 3
# 136 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 137 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry4::
# 141 "data/maps/TwinleafTown/scripts.pory"
	lock
# 142 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 4
# 143 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 144 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry5::
# 148 "data/maps/TwinleafTown/scripts.pory"
	lock
# 149 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 5
# 150 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 151 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry6::
# 155 "data/maps/TwinleafTown/scripts.pory"
	lock
# 156 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 6
# 157 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 158 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry7::
# 162 "data/maps/TwinleafTown/scripts.pory"
	lock
# 163 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 7
# 164 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 165 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry8::
# 169 "data/maps/TwinleafTown/scripts.pory"
	lock
# 170 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 8
# 171 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 172 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry::
# 176 "data/maps/TwinleafTown/scripts.pory"
	lock
# 178 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, Common_Movement_ExclamationMark
# 179 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 180 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 181 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 182 "data/maps/TwinleafTown/scripts.pory"
	delay 30
# 184 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 185 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_GoSeeBarry_3
# 187 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_GoSeeBarry_4
# 189 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_GoSeeBarry_5
# 191 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_GoSeeBarry_6
# 193 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_GoSeeBarry_7
# 195 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_GoSeeBarry_8
# 197 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_GoSeeBarry_9
# 199 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_EventScript_GoSeeBarry_10
TwinleafTown_EventScript_GoSeeBarry_1:
# 203 "data/maps/TwinleafTown/scripts.pory"
	waitmovement LOCALID_NPC3
# 204 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_1
# 205 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 206 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_THUD_Movement_3
# 207 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 208 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_3
# 209 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 211 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_GoSeeBarry_Text_0
# 215 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 217 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 218 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_GoSeeBarry_13
# 220 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_GoSeeBarry_14
# 222 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_GoSeeBarry_15
# 224 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_GoSeeBarry_16
# 226 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_GoSeeBarry_17
# 228 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_GoSeeBarry_18
# 230 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_GoSeeBarry_19
# 232 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_EventScript_GoSeeBarry_20
TwinleafTown_EventScript_GoSeeBarry_11:
# 235 "data/maps/TwinleafTown/scripts.pory"
	waitmovement LOCALID_NPC3
# 237 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_EventScript_GoSeeBarry_3:
# 186 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_0
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_4:
# 188 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_1
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_5:
# 190 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_2
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_6:
# 192 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_3
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_7:
# 194 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_4
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_8:
# 196 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_5
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_9:
# 198 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_6
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_10:
# 200 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_7
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_13:
# 219 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_8
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_14:
# 221 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_9
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_15:
# 223 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_10
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_16:
# 225 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_11
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_17:
# 227 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_12
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_18:
# 229 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_13
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_19:
# 231 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_14
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_20:
# 233 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_15
	goto TwinleafTown_EventScript_GoSeeBarry_11


# 20 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_0:
# 20 "data/maps/TwinleafTown/scripts.pory"
	face_up
	step_end

# 22 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_1:
# 22 "data/maps/TwinleafTown/scripts.pory"
	lock_facing_direction
	step_end

# 24 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_2:
# 24 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_down
	step_end

# 26 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_3:
# 26 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 46 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_4:
# 46 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 46 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 46 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 46 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 53 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_5:
# 53 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 53 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 53 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 53 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 53 "data/maps/TwinleafTown/scripts.pory"
	face_down
	step_end

# 64 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_6:
# 64 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
	step_end

# 186 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_0:
# 186 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 186 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 186 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 186 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 186 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
	step_end

# 188 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_1:
# 188 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 188 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 188 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 188 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 190 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_2:
# 190 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 190 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 190 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 190 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 190 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 192 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_3:
# 192 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 192 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 192 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 192 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 192 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 192 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 194 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_4:
# 194 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 194 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 194 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 194 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 194 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 194 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 194 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 196 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_5:
# 196 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 196 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 196 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 196 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 196 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 196 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 196 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 196 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 198 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_6:
# 198 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 198 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 198 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 198 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 198 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 198 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 198 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 198 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 198 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 200 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_7:
# 200 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 200 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 200 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 200 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 200 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 200 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 200 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 200 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 200 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 200 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 219 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_8:
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_right
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_left
	step_end

# 221 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_9:
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 223 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_10:
# 223 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 223 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 223 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 223 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 225 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_11:
# 225 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 225 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 225 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 225 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 225 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 227 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_12:
# 227 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 227 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 227 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 227 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 227 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 227 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 229 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_13:
# 229 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 229 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 229 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 229 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 229 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 229 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 229 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 231 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_14:
# 231 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 231 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 231 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 231 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 231 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 231 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 231 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 231 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 233 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_15:
# 233 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 233 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 233 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 233 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 233 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 233 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 233 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 233 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 233 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

TwinleafTown_EventScript_THUD_Text_0:
# 30 "data/maps/TwinleafTown/scripts.pory"
	.string "THUD! !$"

TwinleafTown_EventScript_THUD_Text_1:
# 40 "data/maps/TwinleafTown/scripts.pory"
	.string "What was that about?!\p"
	.string "Oh, hey, {PLAYER}!\p"
	.string "Hey! I'm going to see Prof. Rowan!\n"
	.string "You should come, too! And quickly!$"

TwinleafTown_EventScript_THUD_Text_2:
# 57 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh, jeez!\n"
	.string "Forgot something!$"

TwinleafTown_EventScript_Technology_Text_0:
# 81 "data/maps/TwinleafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean now you can play with people\n"
	.string "around the world. . . wirelessly!$"

TwinleafTown_EventScript_WildPokemon_Text_0:
# 90 "data/maps/TwinleafTown/scripts.pory"
	.string "It's true that wild Pokémon do attack\n"
	.string "people sometimes. . .\p"
	.string "But, Pokémon also open their hearts\n"
	.string "to you, so you can become friends.$"

TwinleafTown_EventScript_PlayersHouseSign_Text_0:
# 99 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_EventScript_RivalsHouseSign_Text_0:
# 106 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

TwinleafTown_EventScript_TwinleafSign_Text_0:
# 113 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

TwinleafTown_EventScript_GoSeeBarry_Text_0:
# 211 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"
