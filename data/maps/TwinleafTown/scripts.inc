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


TwinleafTown_EventScript_TwinleafMan::
# 98 "data/maps/TwinleafTown/scripts.pory"
	lock
# 99 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 6
	goto_if_eq TwinleafTown_EventScript_TwinleafMan_2
TwinleafTown_EventScript_TwinleafMan_1:
# 102 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_EventScript_TwinleafMan_2:
# 100 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLooking
	goto TwinleafTown_EventScript_TwinleafMan_1


TwinleafTown_EventScript_BarryLooking::
# 106 "data/maps/TwinleafTown/scripts.pory"
	lock
# 107 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 108 "data/maps/TwinleafTown/scripts.pory"
	msgbox BarryLooking
# 109 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_PlayersHouseSign::
# 113 "data/maps/TwinleafTown/scripts.pory"
	lock
# 114 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_PlayersHouseSign_Text_0
# 115 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_RivalsHouseSign::
# 120 "data/maps/TwinleafTown/scripts.pory"
	lock
# 121 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_RivalsHouseSign_Text_0
# 122 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_TwinleafSign::
# 127 "data/maps/TwinleafTown/scripts.pory"
	lock
# 128 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TwinleafSign_Text_0
# 130 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_GoSeeBarry1::
# 135 "data/maps/TwinleafTown/scripts.pory"
	lock
# 136 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 137 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 138 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry2::
# 142 "data/maps/TwinleafTown/scripts.pory"
	lock
# 143 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 2
# 144 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 145 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry3::
# 149 "data/maps/TwinleafTown/scripts.pory"
	lock
# 150 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 3
# 151 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 152 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry4::
# 156 "data/maps/TwinleafTown/scripts.pory"
	lock
# 157 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 4
# 158 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 159 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry5::
# 163 "data/maps/TwinleafTown/scripts.pory"
	lock
# 164 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 5
# 165 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 166 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry6::
# 170 "data/maps/TwinleafTown/scripts.pory"
	lock
# 171 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 6
# 172 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 173 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry7::
# 177 "data/maps/TwinleafTown/scripts.pory"
	lock
# 178 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 7
# 179 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 180 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry8::
# 184 "data/maps/TwinleafTown/scripts.pory"
	lock
# 185 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 8
# 186 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 187 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry::
# 191 "data/maps/TwinleafTown/scripts.pory"
	lock
# 193 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, Common_Movement_ExclamationMark
# 194 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 195 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 196 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 197 "data/maps/TwinleafTown/scripts.pory"
	delay 30
# 199 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 200 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_GoSeeBarry_3
# 202 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_GoSeeBarry_4
# 204 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_GoSeeBarry_5
# 206 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_GoSeeBarry_6
# 208 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_GoSeeBarry_7
# 210 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_GoSeeBarry_8
# 212 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_GoSeeBarry_9
# 214 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_EventScript_GoSeeBarry_10
TwinleafTown_EventScript_GoSeeBarry_1:
# 218 "data/maps/TwinleafTown/scripts.pory"
	waitmovement LOCALID_NPC3
# 219 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_1
# 220 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 221 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_THUD_Movement_3
# 222 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 223 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_3
# 224 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 226 "data/maps/TwinleafTown/scripts.pory"
	msgbox BarryLooking
# 228 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 230 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 231 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_GoSeeBarry_13
# 233 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_GoSeeBarry_14
# 235 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_GoSeeBarry_15
# 237 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_GoSeeBarry_16
# 239 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_GoSeeBarry_17
# 241 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_GoSeeBarry_18
# 243 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_GoSeeBarry_19
# 245 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_EventScript_GoSeeBarry_20
TwinleafTown_EventScript_GoSeeBarry_11:
# 248 "data/maps/TwinleafTown/scripts.pory"
	waitmovement LOCALID_NPC3
# 250 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_EventScript_GoSeeBarry_3:
# 201 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_0
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_4:
# 203 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_1
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_5:
# 205 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_2
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_6:
# 207 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_3
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_7:
# 209 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_4
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_8:
# 211 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_5
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_9:
# 213 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_6
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_10:
# 215 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_7
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_13:
# 232 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_8
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_14:
# 234 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_9
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_15:
# 236 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_10
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_16:
# 238 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_11
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_17:
# 240 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_12
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_18:
# 242 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_13
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_19:
# 244 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_EventScript_GoSeeBarry_Movement_14
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_20:
# 246 "data/maps/TwinleafTown/scripts.pory"
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

# 201 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_0:
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
	step_end

# 203 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_1:
# 203 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 203 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 203 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 203 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 205 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_2:
# 205 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 205 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 205 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 205 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 205 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 207 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_3:
# 207 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 207 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 207 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 207 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 207 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 207 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 209 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_4:
# 209 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 209 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 209 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 209 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 209 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 209 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 209 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 211 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_5:
# 211 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 211 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 211 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 211 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 211 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 211 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 211 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 211 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 213 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_6:
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 213 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 215 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_7:
# 215 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 215 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 215 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 215 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 215 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 215 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 215 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 215 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 215 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 215 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 232 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_8:
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_right
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_left
	step_end

# 234 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_9:
# 234 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 234 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 234 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 236 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_10:
# 236 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 236 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 236 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 236 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 238 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_11:
# 238 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 238 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 238 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 238 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 238 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 240 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_12:
# 240 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 240 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 240 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 240 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 240 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 240 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 242 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_13:
# 242 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 242 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 242 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 242 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 242 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 242 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 242 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 244 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_14:
# 244 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 244 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 244 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 244 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 244 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 244 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 244 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 244 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 246 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_15:
# 246 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 246 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 246 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 246 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 246 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 246 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 246 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 246 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 246 "data/maps/TwinleafTown/scripts.pory"
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
# 114 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_EventScript_RivalsHouseSign_Text_0:
# 121 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

TwinleafTown_EventScript_TwinleafSign_Text_0:
# 128 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

BarryLooking::
# 253 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"
