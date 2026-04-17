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
	goto_if_set FLAG_RECEIVED_POKEDEX, TwinleafTown_EventScript_TwinleafMan_3
# 105 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_TOWN_STATE, 4
	goto_if_ge TwinleafTown_EventScript_TwinleafMan_4
TwinleafTown_EventScript_TwinleafMan_1:
# 119 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_EventScript_TwinleafMan_2:
# 99 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLooking
	goto TwinleafTown_EventScript_TwinleafMan_1

TwinleafTown_EventScript_TwinleafMan_3:
# 101 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 102 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TwinleafMan_Text_0
# 104 "data/maps/TwinleafTown/scripts.pory"
	closemessage
	goto TwinleafTown_EventScript_TwinleafMan_1

TwinleafTown_EventScript_TwinleafMan_4:
# 106 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_LAKE_VERITY_STATE, 3
	goto_if_ne TwinleafTown_EventScript_TwinleafMan_8
# 110 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 111 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TwinleafMan_Text_1
# 116 "data/maps/TwinleafTown/scripts.pory"
	closemessage
	goto TwinleafTown_EventScript_TwinleafMan_1

TwinleafTown_EventScript_TwinleafMan_8:
# 107 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_TearingOff
	goto TwinleafTown_EventScript_TwinleafMan_1


TwinleafTown_EventScript_BarryLooking::
# 123 "data/maps/TwinleafTown/scripts.pory"
	lock
# 124 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 125 "data/maps/TwinleafTown/scripts.pory"
	msgbox BarryLooking
# 126 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_PlayersHouseSign::
# 130 "data/maps/TwinleafTown/scripts.pory"
	lock
# 131 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_PlayersHouseSign_Text_0
# 132 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_RivalsHouseSign::
# 137 "data/maps/TwinleafTown/scripts.pory"
	lock
# 138 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_RivalsHouseSign_Text_0
# 139 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_TwinleafSign::
# 144 "data/maps/TwinleafTown/scripts.pory"
	lock
# 145 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TwinleafSign_Text_0
# 147 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_GoSeeBarry1::
# 152 "data/maps/TwinleafTown/scripts.pory"
	lock
# 153 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 154 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 155 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry2::
# 159 "data/maps/TwinleafTown/scripts.pory"
	lock
# 160 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 2
# 161 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 162 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry3::
# 166 "data/maps/TwinleafTown/scripts.pory"
	lock
# 167 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 3
# 168 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 169 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry4::
# 173 "data/maps/TwinleafTown/scripts.pory"
	lock
# 174 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 4
# 175 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 176 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry5::
# 180 "data/maps/TwinleafTown/scripts.pory"
	lock
# 181 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 5
# 182 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 183 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry6::
# 187 "data/maps/TwinleafTown/scripts.pory"
	lock
# 188 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 6
# 189 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 190 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry7::
# 194 "data/maps/TwinleafTown/scripts.pory"
	lock
# 195 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 7
# 196 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 197 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry8::
# 201 "data/maps/TwinleafTown/scripts.pory"
	lock
# 202 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 8
# 203 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 204 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry::
# 208 "data/maps/TwinleafTown/scripts.pory"
	lock
# 210 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 211 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 212 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 213 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 214 "data/maps/TwinleafTown/scripts.pory"
	delay 30
# 216 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 217 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_GoSeeBarry_3
# 219 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_GoSeeBarry_4
# 221 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_GoSeeBarry_5
# 223 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_GoSeeBarry_6
# 225 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_GoSeeBarry_7
# 227 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_GoSeeBarry_8
# 229 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_GoSeeBarry_9
# 231 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_EventScript_GoSeeBarry_10
TwinleafTown_EventScript_GoSeeBarry_1:
# 235 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 3
# 236 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_1
# 237 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 238 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_THUD_Movement_3
# 239 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 240 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_3
# 241 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 243 "data/maps/TwinleafTown/scripts.pory"
	msgbox BarryLooking
# 245 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 247 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 248 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_GoSeeBarry_13
# 250 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_GoSeeBarry_14
# 252 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_GoSeeBarry_15
# 254 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_GoSeeBarry_16
# 256 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_GoSeeBarry_17
# 258 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_GoSeeBarry_18
# 260 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_GoSeeBarry_19
# 262 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_EventScript_GoSeeBarry_20
TwinleafTown_EventScript_GoSeeBarry_11:
# 265 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 3
# 267 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_EventScript_GoSeeBarry_3:
# 218 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_0
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_4:
# 220 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_1
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_5:
# 222 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_2
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_6:
# 224 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_3
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_7:
# 226 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_4
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_8:
# 228 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_5
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_9:
# 230 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_6
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_10:
# 232 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_7
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_13:
# 249 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_8
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_14:
# 251 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_9
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_15:
# 253 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_10
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_16:
# 255 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_11
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_17:
# 257 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_12
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_18:
# 259 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_13
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_19:
# 261 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_14
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_20:
# 263 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_15
	goto TwinleafTown_EventScript_GoSeeBarry_11


TwinleafTown_EventScript_TearingOff::
# 271 "data/maps/TwinleafTown/scripts.pory"
	lock
# 273 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 274 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TearingOff_Text_0
# 281 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_Woman::
# 293 "data/maps/TwinleafTown/scripts.pory"
	lock
# 294 "data/maps/TwinleafTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEDEX, TwinleafTown_EventScript_Woman_2
# 302 "data/maps/TwinleafTown/scripts.pory"
	compare VAR_TWINLEAF_TOWN_STATE, 7
	goto_if_eq TwinleafTown_EventScript_Woman_3
# 308 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_WildPokemon
TwinleafTown_EventScript_Woman_1:
# 310 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_EventScript_Woman_2:
# 295 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 296 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_Woman_Text_0
	goto TwinleafTown_EventScript_Woman_1

TwinleafTown_EventScript_Woman_3:
# 303 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 304 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_Woman_Text_1
# 306 "data/maps/TwinleafTown/scripts.pory"
	closemessage
	goto TwinleafTown_EventScript_Woman_1


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

# 218 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_0:
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 218 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
	step_end

# 220 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_1:
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 222 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_2:
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
	step_end

# 224 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_3:
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
	step_end

# 226 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_4:
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
	step_end

# 228 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_5:
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 230 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_6:
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 232 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_7:
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 249 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_8:
# 249 "data/maps/TwinleafTown/scripts.pory"
	walk_right
# 249 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 249 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 249 "data/maps/TwinleafTown/scripts.pory"
	walk_left
	step_end

# 251 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_9:
# 251 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 251 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 251 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 253 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_10:
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
TwinleafTown_EventScript_GoSeeBarry_Movement_11:
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
TwinleafTown_EventScript_GoSeeBarry_Movement_12:
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

# 259 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_13:
# 259 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 259 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 259 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 259 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 259 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 259 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 259 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 261 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_14:
# 261 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 261 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 261 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 261 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 261 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 261 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 261 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 261 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 263 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_15:
# 263 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 263 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 263 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 263 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 263 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 263 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 263 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 263 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 263 "data/maps/TwinleafTown/scripts.pory"
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
# 102 "data/maps/TwinleafTown/scripts.pory"
	.string "Everyone goes off on adventures,\n"
	.string "and then they gradually grow up...$"

TwinleafTown_EventScript_TwinleafMan_Text_1:
# 111 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry? He went tearing off\n"
	.string "in a huge rush a while ago.\p"
	.string ". . .Ouch. He ran right into me earlier.\n"
	.string "It's still hurting.\l"
	.string "That kid's growing up tough.$"

TwinleafTown_EventScript_PlayersHouseSign_Text_0:
# 131 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_EventScript_RivalsHouseSign_Text_0:
# 138 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

TwinleafTown_EventScript_TwinleafSign_Text_0:
# 145 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

TwinleafTown_EventScript_TearingOff_Text_0:
# 274 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "You're looking for Barry?\p"
	.string "He just went tearing off a little\n"
	.string "while ago.\p"
	.string "He's probably not gone too far.\n"
	.string "Why not go chase after him?$"

TwinleafTown_EventScript_Woman_Text_0:
# 296 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh, you're helping put together\n"
	.string "a Pokédex?\p"
	.string "That means you're going to travel\n"
	.string "all over the place with Pokémon!\p"
	.string "That sounds like a lot of fun!\n"
	.string "I'm a little envious, to be honest!$"

TwinleafTown_EventScript_Woman_Text_1:
# 304 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh! A Pokémon!\n"
	.string "You look good together!$"

BarryLooking::
# 284 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"
