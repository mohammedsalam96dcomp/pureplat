TwinleafTown_MapScripts::
	.byte 0


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
	removeobject 4
# 75 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TWINLEAF_BARRY_STATE, 2
# 77 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_Technology::
# 82 "data/maps/TwinleafTown/scripts.pory"
	lock
# 83 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 84 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_Technology_Text_0
# 87 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_WildPokemon::
# 91 "data/maps/TwinleafTown/scripts.pory"
	lock
# 92 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 93 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_WildPokemon_Text_0
# 97 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_TwinleafMan::
# 101 "data/maps/TwinleafTown/scripts.pory"
	lock
# 102 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 5
	goto_if_eq TwinleafTown_EventScript_TwinleafMan_2
# 104 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 6
	goto_if_eq TwinleafTown_EventScript_TwinleafMan_3
TwinleafTown_EventScript_TwinleafMan_1:
# 108 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_EventScript_TwinleafMan_2:
# 103 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLooking
	goto TwinleafTown_EventScript_TwinleafMan_1

TwinleafTown_EventScript_TwinleafMan_3:
# 105 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_TearingOff
	goto TwinleafTown_EventScript_TwinleafMan_1


TwinleafTown_EventScript_BarryLooking::
# 112 "data/maps/TwinleafTown/scripts.pory"
	lock
# 113 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 114 "data/maps/TwinleafTown/scripts.pory"
	msgbox BarryLooking
# 115 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_PlayersHouseSign::
# 119 "data/maps/TwinleafTown/scripts.pory"
	lock
# 120 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_PlayersHouseSign_Text_0
# 121 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_RivalsHouseSign::
# 126 "data/maps/TwinleafTown/scripts.pory"
	lock
# 127 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_RivalsHouseSign_Text_0
# 128 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_TwinleafSign::
# 133 "data/maps/TwinleafTown/scripts.pory"
	lock
# 134 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TwinleafSign_Text_0
# 136 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_GoSeeBarry1::
# 141 "data/maps/TwinleafTown/scripts.pory"
	lock
# 142 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 143 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 144 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry2::
# 148 "data/maps/TwinleafTown/scripts.pory"
	lock
# 149 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 2
# 150 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 151 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry3::
# 155 "data/maps/TwinleafTown/scripts.pory"
	lock
# 156 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 3
# 157 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 158 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry4::
# 162 "data/maps/TwinleafTown/scripts.pory"
	lock
# 163 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 4
# 164 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 165 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry5::
# 169 "data/maps/TwinleafTown/scripts.pory"
	lock
# 170 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 5
# 171 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 172 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry6::
# 176 "data/maps/TwinleafTown/scripts.pory"
	lock
# 177 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 6
# 178 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 179 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry7::
# 183 "data/maps/TwinleafTown/scripts.pory"
	lock
# 184 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 7
# 185 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 186 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry8::
# 190 "data/maps/TwinleafTown/scripts.pory"
	lock
# 191 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 8
# 192 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 193 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry::
# 197 "data/maps/TwinleafTown/scripts.pory"
	lock
# 199 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 200 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 201 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 202 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 203 "data/maps/TwinleafTown/scripts.pory"
	delay 30
# 205 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 206 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_GoSeeBarry_3
# 208 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_GoSeeBarry_4
# 210 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_GoSeeBarry_5
# 212 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_GoSeeBarry_6
# 214 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_GoSeeBarry_7
# 216 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_GoSeeBarry_8
# 218 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_GoSeeBarry_9
# 220 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_EventScript_GoSeeBarry_10
TwinleafTown_EventScript_GoSeeBarry_1:
# 224 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 3
# 225 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_1
# 226 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 227 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_THUD_Movement_3
# 228 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 229 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_3
# 230 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 232 "data/maps/TwinleafTown/scripts.pory"
	msgbox BarryLooking
# 234 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 236 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 237 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_GoSeeBarry_13
# 239 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_GoSeeBarry_14
# 241 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_GoSeeBarry_15
# 243 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_GoSeeBarry_16
# 245 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_GoSeeBarry_17
# 247 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_GoSeeBarry_18
# 249 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_GoSeeBarry_19
# 251 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_EventScript_GoSeeBarry_20
TwinleafTown_EventScript_GoSeeBarry_11:
# 254 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 3
# 256 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_EventScript_GoSeeBarry_3:
# 207 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_0
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_4:
# 209 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_1
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_5:
# 211 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_2
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_6:
# 213 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_3
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_7:
# 215 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_4
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_8:
# 217 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_5
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_9:
# 219 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_6
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_10:
# 221 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_7
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_13:
# 238 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_8
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_14:
# 240 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_9
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_15:
# 242 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_10
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_16:
# 244 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_11
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_17:
# 246 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_12
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_18:
# 248 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_13
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_19:
# 250 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_14
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_20:
# 252 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_15
	goto TwinleafTown_EventScript_GoSeeBarry_11


TwinleafTown_EventScript_TearingOff::
# 260 "data/maps/TwinleafTown/scripts.pory"
	lock
# 262 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 263 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TearingOff_Text_0
# 270 "data/maps/TwinleafTown/scripts.pory"
	release
	return


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

# 207 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_0:
# 207 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 207 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 207 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 207 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 207 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
	step_end

# 209 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_1:
# 209 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 209 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 209 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 209 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 211 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_2:
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
	step_end

# 213 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_3:
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
	step_end

# 215 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_4:
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
	step_end

# 217 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_5:
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 219 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_6:
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 219 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 221 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_7:
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 221 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 238 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_8:
# 238 "data/maps/TwinleafTown/scripts.pory"
	walk_right
# 238 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 238 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 238 "data/maps/TwinleafTown/scripts.pory"
	walk_left
	step_end

# 240 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_9:
# 240 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 240 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 240 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 242 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_10:
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
TwinleafTown_EventScript_GoSeeBarry_Movement_11:
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
TwinleafTown_EventScript_GoSeeBarry_Movement_12:
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

# 248 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_13:
# 248 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 248 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 248 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 248 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 248 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 248 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 248 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 250 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_14:
# 250 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 250 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 250 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 250 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 250 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 250 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 250 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 250 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 252 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_15:
# 252 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 252 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 252 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 252 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 252 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 252 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 252 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 252 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 252 "data/maps/TwinleafTown/scripts.pory"
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
# 84 "data/maps/TwinleafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean now you can play with people\n"
	.string "around the world. . . wirelessly!$"

TwinleafTown_EventScript_WildPokemon_Text_0:
# 93 "data/maps/TwinleafTown/scripts.pory"
	.string "It's true that wild Pokémon do attack\n"
	.string "people sometimes. . .\p"
	.string "But, Pokémon also open their hearts\n"
	.string "to you, so you can become friends.$"

TwinleafTown_EventScript_PlayersHouseSign_Text_0:
# 120 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_EventScript_RivalsHouseSign_Text_0:
# 127 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

TwinleafTown_EventScript_TwinleafSign_Text_0:
# 134 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

TwinleafTown_EventScript_TearingOff_Text_0:
# 263 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "You're looking for Barry?\p"
	.string "He just went tearing off a little\n"
	.string "while ago.\p"
	.string "He's probably not gone too far.\n"
	.string "Why not go chase after him?$"

BarryLooking::
# 273 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"
