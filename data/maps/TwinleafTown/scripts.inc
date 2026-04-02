TwinleafTown_MapScripts::
# 6 "data/maps/TwinleafTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TwinleafTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/TwinleafTown/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 5, TwinleafTown_ON_FRAME
	.2byte 0


TwinleafTown_ON_FRAME::
# 12 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 6
	return


TwinleafTown_EventScript_THUD::
# 16 "data/maps/TwinleafTown/scripts.pory"
	lock
# 17 "data/maps/TwinleafTown/scripts.pory"
	clearflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 18 "data/maps/TwinleafTown/scripts.pory"
	addobject 4
# 20 "data/maps/TwinleafTown/scripts.pory"
	playse SE_DOOR
# 21 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_0
# 22 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 23 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_1
# 24 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 25 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_THUD_Movement_2
# 26 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 27 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_3
# 28 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 29 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 31 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_THUD_Text_0
# 32 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 34 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 35 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 36 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 37 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 38 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 40 "data/maps/TwinleafTown/scripts.pory"
	setspeaker SP_NAME_BARRY
# 41 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_THUD_Text_1
# 45 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 47 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_THUD_Movement_4
# 48 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 49 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 50 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 51 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 52 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 53 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 54 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_THUD_Movement_5
# 55 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 4
# 57 "data/maps/TwinleafTown/scripts.pory"
	setspeaker SP_NAME_BARRY
# 58 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_THUD_Text_2
# 60 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 62 "data/maps/TwinleafTown/scripts.pory"
	opendoor 7, 10
# 63 "data/maps/TwinleafTown/scripts.pory"
	waitdooranim
# 65 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_THUD_Movement_6
# 66 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 67 "data/maps/TwinleafTown/scripts.pory"
	removeobject 4
# 68 "data/maps/TwinleafTown/scripts.pory"
	closedoor 7, 10
# 69 "data/maps/TwinleafTown/scripts.pory"
	waitdooranim
# 72 "data/maps/TwinleafTown/scripts.pory"
	setflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 73 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TWINLEAF_BARRY_STATE, 2
# 75 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_Technology::
# 80 "data/maps/TwinleafTown/scripts.pory"
	lock
# 81 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 82 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_Technology_Text_0
# 85 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_WildPokemon::
# 89 "data/maps/TwinleafTown/scripts.pory"
	lock
# 90 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 91 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_WildPokemon_Text_0
# 95 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_TwinleafMan::
# 99 "data/maps/TwinleafTown/scripts.pory"
	lock
# 100 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 6
	goto_if_eq TwinleafTown_EventScript_TwinleafMan_2
TwinleafTown_EventScript_TwinleafMan_1:
# 103 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_EventScript_TwinleafMan_2:
# 101 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLooking
	goto TwinleafTown_EventScript_TwinleafMan_1


TwinleafTown_EventScript_BarryLooking::
# 107 "data/maps/TwinleafTown/scripts.pory"
	lock
# 108 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 109 "data/maps/TwinleafTown/scripts.pory"
	msgbox BarryLooking
# 110 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_PlayersHouseSign::
# 114 "data/maps/TwinleafTown/scripts.pory"
	lock
# 115 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_PlayersHouseSign_Text_0
# 116 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_RivalsHouseSign::
# 121 "data/maps/TwinleafTown/scripts.pory"
	lock
# 122 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_RivalsHouseSign_Text_0
# 123 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_TwinleafSign::
# 128 "data/maps/TwinleafTown/scripts.pory"
	lock
# 129 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TwinleafSign_Text_0
# 131 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_GoSeeBarry1::
# 136 "data/maps/TwinleafTown/scripts.pory"
	lock
# 137 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 138 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 139 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry2::
# 143 "data/maps/TwinleafTown/scripts.pory"
	lock
# 144 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 2
# 145 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 146 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry3::
# 150 "data/maps/TwinleafTown/scripts.pory"
	lock
# 151 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 3
# 152 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 153 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry4::
# 157 "data/maps/TwinleafTown/scripts.pory"
	lock
# 158 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 4
# 159 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 160 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry5::
# 164 "data/maps/TwinleafTown/scripts.pory"
	lock
# 165 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 5
# 166 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 167 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry6::
# 171 "data/maps/TwinleafTown/scripts.pory"
	lock
# 172 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 6
# 173 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 174 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry7::
# 178 "data/maps/TwinleafTown/scripts.pory"
	lock
# 179 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 7
# 180 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 181 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry8::
# 185 "data/maps/TwinleafTown/scripts.pory"
	lock
# 186 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 8
# 187 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 188 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry::
# 192 "data/maps/TwinleafTown/scripts.pory"
	lock
# 194 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 195 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 196 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 197 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 198 "data/maps/TwinleafTown/scripts.pory"
	delay 30
# 200 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 201 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_GoSeeBarry_3
# 203 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_GoSeeBarry_4
# 205 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_GoSeeBarry_5
# 207 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_GoSeeBarry_6
# 209 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_GoSeeBarry_7
# 211 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_GoSeeBarry_8
# 213 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_GoSeeBarry_9
# 215 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_EventScript_GoSeeBarry_10
TwinleafTown_EventScript_GoSeeBarry_1:
# 219 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 3
# 220 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_1
# 221 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 222 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_THUD_Movement_3
# 223 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 224 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_3
# 225 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 227 "data/maps/TwinleafTown/scripts.pory"
	msgbox BarryLooking
# 229 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 231 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 232 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_GoSeeBarry_13
# 234 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_GoSeeBarry_14
# 236 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_GoSeeBarry_15
# 238 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_GoSeeBarry_16
# 240 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_GoSeeBarry_17
# 242 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_GoSeeBarry_18
# 244 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_GoSeeBarry_19
# 246 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_EventScript_GoSeeBarry_20
TwinleafTown_EventScript_GoSeeBarry_11:
# 249 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 3
# 251 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_EventScript_GoSeeBarry_3:
# 202 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_0
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_4:
# 204 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_1
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_5:
# 206 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_2
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_6:
# 208 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_3
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_7:
# 210 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_4
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_8:
# 212 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_5
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_9:
# 214 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_6
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_10:
# 216 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_7
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_13:
# 233 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_8
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_14:
# 235 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_9
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_15:
# 237 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_10
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_16:
# 239 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_11
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_17:
# 241 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_12
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_18:
# 243 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_13
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_19:
# 245 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_14
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_20:
# 247 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_15
	goto TwinleafTown_EventScript_GoSeeBarry_11


# 21 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_0:
# 21 "data/maps/TwinleafTown/scripts.pory"
	face_up
	step_end

# 23 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_1:
# 23 "data/maps/TwinleafTown/scripts.pory"
	lock_facing_direction
	step_end

# 25 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_2:
# 25 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_down
	step_end

# 27 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_3:
# 27 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 47 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_4:
# 47 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 47 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 47 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 47 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 54 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_5:
# 54 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 54 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 54 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 54 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 54 "data/maps/TwinleafTown/scripts.pory"
	face_down
	step_end

# 65 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_6:
# 65 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
	step_end

# 202 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_0:
# 202 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 202 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 202 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 202 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 202 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
	step_end

# 204 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_1:
# 204 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 204 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 204 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 204 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 206 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_2:
# 206 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 206 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 206 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 206 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 206 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 208 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_3:
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 210 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_4:
# 210 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 210 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 210 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 210 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 210 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 210 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 210 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 212 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_5:
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 214 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_6:
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 216 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_7:
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 216 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 233 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_8:
# 233 "data/maps/TwinleafTown/scripts.pory"
	walk_right
# 233 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 233 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 233 "data/maps/TwinleafTown/scripts.pory"
	walk_left
	step_end

# 235 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_9:
# 235 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 235 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 235 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 237 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_10:
# 237 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 237 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 237 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 237 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 239 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_11:
# 239 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 239 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 239 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 239 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 239 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 241 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_12:
# 241 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 241 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 241 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 241 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 241 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 241 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 243 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_13:
# 243 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 243 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 243 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 243 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 243 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 243 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 243 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 245 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_14:
# 245 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 245 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 245 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 245 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 245 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 245 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 245 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 245 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 247 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_15:
# 247 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 247 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 247 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 247 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 247 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 247 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 247 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 247 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 247 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

TwinleafTown_EventScript_THUD_Text_0:
# 31 "data/maps/TwinleafTown/scripts.pory"
	.string "THUD! !$"

TwinleafTown_EventScript_THUD_Text_1:
# 41 "data/maps/TwinleafTown/scripts.pory"
	.string "What was that about?!\p"
	.string "Oh, hey, {PLAYER}!\p"
	.string "Hey! I'm going to see Prof. Rowan!\n"
	.string "You should come, too! And quickly!$"

TwinleafTown_EventScript_THUD_Text_2:
# 58 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh, jeez!\n"
	.string "Forgot something!$"

TwinleafTown_EventScript_Technology_Text_0:
# 82 "data/maps/TwinleafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean now you can play with people\n"
	.string "around the world. . . wirelessly!$"

TwinleafTown_EventScript_WildPokemon_Text_0:
# 91 "data/maps/TwinleafTown/scripts.pory"
	.string "It's true that wild Pokémon do attack\n"
	.string "people sometimes. . .\p"
	.string "But, Pokémon also open their hearts\n"
	.string "to you, so you can become friends.$"

TwinleafTown_EventScript_PlayersHouseSign_Text_0:
# 115 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_EventScript_RivalsHouseSign_Text_0:
# 122 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

TwinleafTown_EventScript_TwinleafSign_Text_0:
# 129 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

BarryLooking::
# 254 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"
