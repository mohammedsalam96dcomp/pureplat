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
# 30 "data/maps/TwinleafTown/scripts.pory"
	playse SE_WALL_HIT
# 31 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_THUD_Text_0
# 32 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 33 "data/maps/TwinleafTown/scripts.pory"
	playbgm MUS_GSC_ROUTE38, 0
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
# 70 "data/maps/TwinleafTown/scripts.pory"
	fadedefaultbgm
# 71 "data/maps/TwinleafTown/scripts.pory"
	setflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 72 "data/maps/TwinleafTown/scripts.pory"
	removeobject 4
# 74 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TWINLEAF_BARRY_STATE, 2
# 76 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_Technology::
# 81 "data/maps/TwinleafTown/scripts.pory"
	lock
# 82 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 83 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_Technology_Text_0
# 86 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_WildPokemon::
# 90 "data/maps/TwinleafTown/scripts.pory"
	lock
# 91 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 92 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_WildPokemon_Text_0
# 96 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_TwinleafMan::
# 100 "data/maps/TwinleafTown/scripts.pory"
	lock
# 101 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 5
	goto_if_eq TwinleafTown_EventScript_TwinleafMan_2
# 103 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 6
	goto_if_eq TwinleafTown_EventScript_TwinleafMan_3
TwinleafTown_EventScript_TwinleafMan_1:
# 107 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_EventScript_TwinleafMan_2:
# 102 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLooking
	goto TwinleafTown_EventScript_TwinleafMan_1

TwinleafTown_EventScript_TwinleafMan_3:
# 104 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_TearingOff
	goto TwinleafTown_EventScript_TwinleafMan_1


TwinleafTown_EventScript_BarryLooking::
# 111 "data/maps/TwinleafTown/scripts.pory"
	lock
# 112 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 113 "data/maps/TwinleafTown/scripts.pory"
	msgbox BarryLooking
# 114 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_PlayersHouseSign::
# 118 "data/maps/TwinleafTown/scripts.pory"
	lock
# 119 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_PlayersHouseSign_Text_0
# 120 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_RivalsHouseSign::
# 125 "data/maps/TwinleafTown/scripts.pory"
	lock
# 126 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_RivalsHouseSign_Text_0
# 127 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_TwinleafSign::
# 132 "data/maps/TwinleafTown/scripts.pory"
	lock
# 133 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TwinleafSign_Text_0
# 135 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_GoSeeBarry1::
# 140 "data/maps/TwinleafTown/scripts.pory"
	lock
# 141 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 142 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 143 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry2::
# 147 "data/maps/TwinleafTown/scripts.pory"
	lock
# 148 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 2
# 149 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 150 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry3::
# 154 "data/maps/TwinleafTown/scripts.pory"
	lock
# 155 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 3
# 156 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 157 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry4::
# 161 "data/maps/TwinleafTown/scripts.pory"
	lock
# 162 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 4
# 163 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 164 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry5::
# 168 "data/maps/TwinleafTown/scripts.pory"
	lock
# 169 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 5
# 170 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 171 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry6::
# 175 "data/maps/TwinleafTown/scripts.pory"
	lock
# 176 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 6
# 177 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 178 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry7::
# 182 "data/maps/TwinleafTown/scripts.pory"
	lock
# 183 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 7
# 184 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 185 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry8::
# 189 "data/maps/TwinleafTown/scripts.pory"
	lock
# 190 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 8
# 191 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 192 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry::
# 196 "data/maps/TwinleafTown/scripts.pory"
	lock
# 198 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 199 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 200 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 201 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 202 "data/maps/TwinleafTown/scripts.pory"
	delay 30
# 204 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 205 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_GoSeeBarry_3
# 207 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_GoSeeBarry_4
# 209 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_GoSeeBarry_5
# 211 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_GoSeeBarry_6
# 213 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_GoSeeBarry_7
# 215 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_GoSeeBarry_8
# 217 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_GoSeeBarry_9
# 219 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_EventScript_GoSeeBarry_10
TwinleafTown_EventScript_GoSeeBarry_1:
# 223 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 3
# 224 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_1
# 225 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 226 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_THUD_Movement_3
# 227 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 228 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_3
# 229 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 231 "data/maps/TwinleafTown/scripts.pory"
	msgbox BarryLooking
# 233 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 235 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 236 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_GoSeeBarry_13
# 238 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_GoSeeBarry_14
# 240 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_GoSeeBarry_15
# 242 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_GoSeeBarry_16
# 244 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_GoSeeBarry_17
# 246 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_GoSeeBarry_18
# 248 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_GoSeeBarry_19
# 250 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_EventScript_GoSeeBarry_20
TwinleafTown_EventScript_GoSeeBarry_11:
# 253 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 3
# 255 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_EventScript_GoSeeBarry_3:
# 206 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_0
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_4:
# 208 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_1
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_5:
# 210 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_2
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_6:
# 212 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_3
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_7:
# 214 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_4
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_8:
# 216 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_5
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_9:
# 218 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_6
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_10:
# 220 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_7
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_13:
# 237 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_8
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_14:
# 239 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_9
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_15:
# 241 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_10
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_16:
# 243 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_11
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_17:
# 245 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_12
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_18:
# 247 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_13
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_19:
# 249 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_14
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_20:
# 251 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_15
	goto TwinleafTown_EventScript_GoSeeBarry_11


TwinleafTown_EventScript_TearingOff::
# 259 "data/maps/TwinleafTown/scripts.pory"
	lock
# 261 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 262 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TearingOff_Text_0
# 269 "data/maps/TwinleafTown/scripts.pory"
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

# 64 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_6:
# 64 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
	step_end

# 206 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_0:
# 206 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 206 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 206 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 206 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 206 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
	step_end

# 208 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_1:
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 208 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 210 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_2:
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
	step_end

# 212 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_3:
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
	step_end

# 214 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_4:
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
	step_end

# 216 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_5:
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
	step_end

# 218 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_6:
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 220 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_7:
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 237 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_8:
# 237 "data/maps/TwinleafTown/scripts.pory"
	walk_right
# 237 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 237 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 237 "data/maps/TwinleafTown/scripts.pory"
	walk_left
	step_end

# 239 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_9:
# 239 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 239 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 239 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 241 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_10:
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
TwinleafTown_EventScript_GoSeeBarry_Movement_11:
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
TwinleafTown_EventScript_GoSeeBarry_Movement_12:
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
TwinleafTown_EventScript_GoSeeBarry_Movement_13:
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

# 249 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_14:
# 249 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 249 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 249 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 249 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 249 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 249 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 249 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 249 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 251 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_15:
# 251 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 251 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 251 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 251 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 251 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 251 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 251 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 251 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 251 "data/maps/TwinleafTown/scripts.pory"
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
# 83 "data/maps/TwinleafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean now you can play with people\n"
	.string "around the world. . . wirelessly!$"

TwinleafTown_EventScript_WildPokemon_Text_0:
# 92 "data/maps/TwinleafTown/scripts.pory"
	.string "It's true that wild Pokémon do attack\n"
	.string "people sometimes. . .\p"
	.string "But, Pokémon also open their hearts\n"
	.string "to you, so you can become friends.$"

TwinleafTown_EventScript_PlayersHouseSign_Text_0:
# 119 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_EventScript_RivalsHouseSign_Text_0:
# 126 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

TwinleafTown_EventScript_TwinleafSign_Text_0:
# 133 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

TwinleafTown_EventScript_TearingOff_Text_0:
# 262 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "You're looking for Barry?\p"
	.string "He just went tearing off a little\n"
	.string "while ago.\p"
	.string "He's probably not gone too far.\n"
	.string "Why not go chase after him?$"

BarryLooking::
# 272 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"
