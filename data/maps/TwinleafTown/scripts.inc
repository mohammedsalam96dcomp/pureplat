TwinleafTown_MapScripts::
	.byte 0


TwinleafTown_EventScript_THUD::
# 13 "data/maps/TwinleafTown/scripts.pory"
	lock
# 14 "data/maps/TwinleafTown/scripts.pory"
	clearflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 15 "data/maps/TwinleafTown/scripts.pory"
	addobject 4
# 17 "data/maps/TwinleafTown/scripts.pory"
	playse SE_DOOR
# 18 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_0
# 19 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 20 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_1
# 21 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 22 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_THUD_Movement_2
# 23 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 24 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_3
# 25 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 26 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 27 "data/maps/TwinleafTown/scripts.pory"
	playse SE_WALL_HIT
# 28 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_THUD_Text_0
# 29 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 30 "data/maps/TwinleafTown/scripts.pory"
	playbgm MUS_GSC_ROUTE38, 0
# 31 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 32 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 33 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 34 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 35 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 37 "data/maps/TwinleafTown/scripts.pory"
	setspeaker SP_NAME_BARRY
# 38 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_THUD_Text_1
# 42 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 44 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_THUD_Movement_4
# 45 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 46 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 47 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 48 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 49 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 50 "data/maps/TwinleafTown/scripts.pory"
	delay 48
# 51 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_THUD_Movement_5
# 52 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 4
# 54 "data/maps/TwinleafTown/scripts.pory"
	setspeaker SP_NAME_BARRY
# 55 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_THUD_Text_2
# 57 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 59 "data/maps/TwinleafTown/scripts.pory"
	opendoor 7, 10
# 60 "data/maps/TwinleafTown/scripts.pory"
	waitdooranim
# 61 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_EventScript_THUD_Movement_6
# 62 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 63 "data/maps/TwinleafTown/scripts.pory"
	removeobject 4
# 64 "data/maps/TwinleafTown/scripts.pory"
	closedoor 7, 10
# 65 "data/maps/TwinleafTown/scripts.pory"
	waitdooranim
# 67 "data/maps/TwinleafTown/scripts.pory"
	fadedefaultbgm
# 68 "data/maps/TwinleafTown/scripts.pory"
	setflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 69 "data/maps/TwinleafTown/scripts.pory"
	removeobject 4
# 71 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TWINLEAF_BARRY_STATE, 2
# 73 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_Technology::
# 78 "data/maps/TwinleafTown/scripts.pory"
	lock
# 79 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 80 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_Technology_Text_0
# 83 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_WildPokemon::
# 87 "data/maps/TwinleafTown/scripts.pory"
	lock
# 88 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 89 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_WildPokemon_Text_0
# 93 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_TwinleafMan::
# 97 "data/maps/TwinleafTown/scripts.pory"
	lock
# 98 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_TOWN_STATE, 3
	goto_if_eq TwinleafTown_EventScript_TwinleafMan_2
# 100 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_TOWN_STATE, 4
	goto_if_ge TwinleafTown_EventScript_TwinleafMan_3
TwinleafTown_EventScript_TwinleafMan_1:
# 113 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_EventScript_TwinleafMan_2:
# 99 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLooking
	goto TwinleafTown_EventScript_TwinleafMan_1

TwinleafTown_EventScript_TwinleafMan_3:
# 101 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_LAKE_VERITY_STATE, 3
	goto_if_ne TwinleafTown_EventScript_TwinleafMan_6
# 105 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 106 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TwinleafMan_Text_0
	goto TwinleafTown_EventScript_TwinleafMan_1

TwinleafTown_EventScript_TwinleafMan_6:
# 102 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_TearingOff
	goto TwinleafTown_EventScript_TwinleafMan_1


TwinleafTown_EventScript_BarryLooking::
# 117 "data/maps/TwinleafTown/scripts.pory"
	lock
# 118 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 119 "data/maps/TwinleafTown/scripts.pory"
	msgbox BarryLooking
# 120 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_PlayersHouseSign::
# 124 "data/maps/TwinleafTown/scripts.pory"
	lock
# 125 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_PlayersHouseSign_Text_0
# 126 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_RivalsHouseSign::
# 131 "data/maps/TwinleafTown/scripts.pory"
	lock
# 132 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_RivalsHouseSign_Text_0
# 133 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_TwinleafSign::
# 138 "data/maps/TwinleafTown/scripts.pory"
	lock
# 139 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TwinleafSign_Text_0
# 141 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_GoSeeBarry1::
# 146 "data/maps/TwinleafTown/scripts.pory"
	lock
# 147 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 148 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 149 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry2::
# 153 "data/maps/TwinleafTown/scripts.pory"
	lock
# 154 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 2
# 155 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 156 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry3::
# 160 "data/maps/TwinleafTown/scripts.pory"
	lock
# 161 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 3
# 162 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 163 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry4::
# 167 "data/maps/TwinleafTown/scripts.pory"
	lock
# 168 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 4
# 169 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 170 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry5::
# 174 "data/maps/TwinleafTown/scripts.pory"
	lock
# 175 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 5
# 176 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 177 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry6::
# 181 "data/maps/TwinleafTown/scripts.pory"
	lock
# 182 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 6
# 183 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 184 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry7::
# 188 "data/maps/TwinleafTown/scripts.pory"
	lock
# 189 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 7
# 190 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 191 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry8::
# 195 "data/maps/TwinleafTown/scripts.pory"
	lock
# 196 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 8
# 197 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 198 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry::
# 202 "data/maps/TwinleafTown/scripts.pory"
	lock
# 204 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 205 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 206 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 207 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 208 "data/maps/TwinleafTown/scripts.pory"
	delay 30
# 210 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 211 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_GoSeeBarry_3
# 213 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_GoSeeBarry_4
# 215 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_GoSeeBarry_5
# 217 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_GoSeeBarry_6
# 219 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_GoSeeBarry_7
# 221 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_GoSeeBarry_8
# 223 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_GoSeeBarry_9
# 225 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_EventScript_GoSeeBarry_10
TwinleafTown_EventScript_GoSeeBarry_1:
# 229 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 3
# 230 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_1
# 231 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 232 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_THUD_Movement_3
# 233 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 234 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_3
# 235 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 237 "data/maps/TwinleafTown/scripts.pory"
	msgbox BarryLooking
# 239 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 241 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 242 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_GoSeeBarry_13
# 244 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_GoSeeBarry_14
# 246 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_GoSeeBarry_15
# 248 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_GoSeeBarry_16
# 250 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_GoSeeBarry_17
# 252 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_GoSeeBarry_18
# 254 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_GoSeeBarry_19
# 256 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_EventScript_GoSeeBarry_20
TwinleafTown_EventScript_GoSeeBarry_11:
# 259 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 3
# 261 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_EventScript_GoSeeBarry_3:
# 212 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_0
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_4:
# 214 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_1
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_5:
# 216 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_2
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_6:
# 218 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_3
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_7:
# 220 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_4
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_8:
# 222 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_5
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_9:
# 224 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_6
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_10:
# 226 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_7
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_13:
# 243 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_8
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_14:
# 245 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_9
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_15:
# 247 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_10
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_16:
# 249 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_11
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_17:
# 251 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_12
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_18:
# 253 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_13
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_19:
# 255 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_14
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_20:
# 257 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_15
	goto TwinleafTown_EventScript_GoSeeBarry_11


TwinleafTown_EventScript_TearingOff::
# 265 "data/maps/TwinleafTown/scripts.pory"
	lock
# 267 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 268 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TearingOff_Text_0
# 275 "data/maps/TwinleafTown/scripts.pory"
	release
	return


# 18 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_0:
# 18 "data/maps/TwinleafTown/scripts.pory"
	face_up
	step_end

# 20 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_1:
# 20 "data/maps/TwinleafTown/scripts.pory"
	lock_facing_direction
	step_end

# 22 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_2:
# 22 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_down
	step_end

# 24 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_3:
# 24 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 44 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_4:
# 44 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 44 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 44 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 44 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 51 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_5:
# 51 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 51 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 51 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 51 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
# 51 "data/maps/TwinleafTown/scripts.pory"
	face_down
	step_end

# 61 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_THUD_Movement_6:
# 61 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
	step_end

# 212 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_0:
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 212 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
	step_end

# 214 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_1:
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 214 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 216 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_2:
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
	step_end

# 218 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_3:
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
	step_end

# 220 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_4:
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
	step_end

# 222 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_5:
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 224 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_6:
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 226 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_7:
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 243 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_8:
# 243 "data/maps/TwinleafTown/scripts.pory"
	walk_right
# 243 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 243 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 243 "data/maps/TwinleafTown/scripts.pory"
	walk_left
	step_end

# 245 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_9:
# 245 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 245 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 245 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 247 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_10:
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
TwinleafTown_EventScript_GoSeeBarry_Movement_11:
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
TwinleafTown_EventScript_GoSeeBarry_Movement_12:
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

# 253 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_13:
# 253 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 253 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 253 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 253 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 253 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 253 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 253 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 255 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_14:
# 255 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 255 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 255 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 255 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 255 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 255 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 255 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 255 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 257 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_15:
# 257 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 257 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 257 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 257 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 257 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 257 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 257 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 257 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 257 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

TwinleafTown_EventScript_THUD_Text_0:
# 28 "data/maps/TwinleafTown/scripts.pory"
	.string "THUD! !$"

TwinleafTown_EventScript_THUD_Text_1:
# 38 "data/maps/TwinleafTown/scripts.pory"
	.string "What was that about?!\p"
	.string "Oh, hey, {PLAYER}!\p"
	.string "Hey! I'm going to see Prof. Rowan!\n"
	.string "You should come, too! And quickly!$"

TwinleafTown_EventScript_THUD_Text_2:
# 55 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh, jeez!\n"
	.string "Forgot something!$"

TwinleafTown_EventScript_Technology_Text_0:
# 80 "data/maps/TwinleafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean now you can play with people\n"
	.string "around the world. . . wirelessly!$"

TwinleafTown_EventScript_WildPokemon_Text_0:
# 89 "data/maps/TwinleafTown/scripts.pory"
	.string "It's true that wild Pokémon do attack\n"
	.string "people sometimes. . .\p"
	.string "But, Pokémon also open their hearts\n"
	.string "to you, so you can become friends.$"

TwinleafTown_EventScript_TwinleafMan_Text_0:
# 106 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry? He went tearing off\n"
	.string "in a huge rush a while ago.\p"
	.string ". . .Ouch. He ran right into me earlier.\n"
	.string "It's still hurting.\l"
	.string "That kid's growing up tough.$"

TwinleafTown_EventScript_PlayersHouseSign_Text_0:
# 125 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_EventScript_RivalsHouseSign_Text_0:
# 132 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

TwinleafTown_EventScript_TwinleafSign_Text_0:
# 139 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

TwinleafTown_EventScript_TearingOff_Text_0:
# 268 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "You're looking for Barry?\p"
	.string "He just went tearing off a little\n"
	.string "while ago.\p"
	.string "He's probably not gone too far.\n"
	.string "Why not go chase after him?$"

BarryLooking::
# 278 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"
