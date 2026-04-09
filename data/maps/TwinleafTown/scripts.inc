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
	goto_if_eq TwinleafTown_EventScript_TwinleafMan_3
TwinleafTown_EventScript_TwinleafMan_1:
# 104 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_EventScript_TwinleafMan_2:
# 99 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_BarryLooking
	goto TwinleafTown_EventScript_TwinleafMan_1

TwinleafTown_EventScript_TwinleafMan_3:
# 101 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_TearingOff
	goto TwinleafTown_EventScript_TwinleafMan_1


TwinleafTown_EventScript_BarryLooking::
# 108 "data/maps/TwinleafTown/scripts.pory"
	lock
# 109 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 110 "data/maps/TwinleafTown/scripts.pory"
	msgbox BarryLooking
# 111 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_PlayersHouseSign::
# 115 "data/maps/TwinleafTown/scripts.pory"
	lock
# 116 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_PlayersHouseSign_Text_0
# 117 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_RivalsHouseSign::
# 122 "data/maps/TwinleafTown/scripts.pory"
	lock
# 123 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_RivalsHouseSign_Text_0
# 124 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_TwinleafSign::
# 129 "data/maps/TwinleafTown/scripts.pory"
	lock
# 130 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TwinleafSign_Text_0
# 132 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_GoSeeBarry1::
# 137 "data/maps/TwinleafTown/scripts.pory"
	lock
# 138 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 139 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 140 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry2::
# 144 "data/maps/TwinleafTown/scripts.pory"
	lock
# 145 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 2
# 146 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 147 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry3::
# 151 "data/maps/TwinleafTown/scripts.pory"
	lock
# 152 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 3
# 153 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 154 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry4::
# 158 "data/maps/TwinleafTown/scripts.pory"
	lock
# 159 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 4
# 160 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 161 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry5::
# 165 "data/maps/TwinleafTown/scripts.pory"
	lock
# 166 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 5
# 167 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 168 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry6::
# 172 "data/maps/TwinleafTown/scripts.pory"
	lock
# 173 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 6
# 174 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 175 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry7::
# 179 "data/maps/TwinleafTown/scripts.pory"
	lock
# 180 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 7
# 181 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 182 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry8::
# 186 "data/maps/TwinleafTown/scripts.pory"
	lock
# 187 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 8
# 188 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_EventScript_GoSeeBarry
# 189 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_GoSeeBarry::
# 193 "data/maps/TwinleafTown/scripts.pory"
	lock
# 195 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 196 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 197 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 198 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 199 "data/maps/TwinleafTown/scripts.pory"
	delay 30
# 201 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 202 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_GoSeeBarry_3
# 204 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_GoSeeBarry_4
# 206 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_GoSeeBarry_5
# 208 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_GoSeeBarry_6
# 210 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_GoSeeBarry_7
# 212 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_GoSeeBarry_8
# 214 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_GoSeeBarry_9
# 216 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_EventScript_GoSeeBarry_10
TwinleafTown_EventScript_GoSeeBarry_1:
# 220 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 3
# 221 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_1
# 222 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 223 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_THUD_Movement_3
# 224 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 225 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_EventScript_THUD_Movement_3
# 226 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 228 "data/maps/TwinleafTown/scripts.pory"
	msgbox BarryLooking
# 230 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 232 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 233 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_EventScript_GoSeeBarry_13
# 235 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_EventScript_GoSeeBarry_14
# 237 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_EventScript_GoSeeBarry_15
# 239 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_EventScript_GoSeeBarry_16
# 241 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_EventScript_GoSeeBarry_17
# 243 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_EventScript_GoSeeBarry_18
# 245 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_EventScript_GoSeeBarry_19
# 247 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_EventScript_GoSeeBarry_20
TwinleafTown_EventScript_GoSeeBarry_11:
# 250 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 3
# 252 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_EventScript_GoSeeBarry_3:
# 203 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_0
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_4:
# 205 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_1
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_5:
# 207 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_2
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_6:
# 209 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_3
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_7:
# 211 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_4
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_8:
# 213 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_5
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_9:
# 215 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_6
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_10:
# 217 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_7
	goto TwinleafTown_EventScript_GoSeeBarry_1

TwinleafTown_EventScript_GoSeeBarry_13:
# 234 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_8
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_14:
# 236 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_9
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_15:
# 238 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_10
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_16:
# 240 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_11
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_17:
# 242 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_12
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_18:
# 244 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_13
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_19:
# 246 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_14
	goto TwinleafTown_EventScript_GoSeeBarry_11

TwinleafTown_EventScript_GoSeeBarry_20:
# 248 "data/maps/TwinleafTown/scripts.pory"
	applymovement 3, TwinleafTown_EventScript_GoSeeBarry_Movement_15
	goto TwinleafTown_EventScript_GoSeeBarry_11


TwinleafTown_EventScript_TearingOff::
# 256 "data/maps/TwinleafTown/scripts.pory"
	lock
# 258 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 259 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TearingOff_Text_0
# 266 "data/maps/TwinleafTown/scripts.pory"
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

# 203 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_0:
# 203 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 203 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 203 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 203 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 203 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
	step_end

# 205 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_1:
# 205 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 205 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 205 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 205 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 207 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_2:
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
	step_end

# 209 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_3:
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
	step_end

# 211 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_4:
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
	step_end

# 213 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_5:
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
	step_end

# 215 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_6:
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
	step_end

# 217 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_7:
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
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 217 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 234 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_8:
# 234 "data/maps/TwinleafTown/scripts.pory"
	walk_right
# 234 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 234 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 234 "data/maps/TwinleafTown/scripts.pory"
	walk_left
	step_end

# 236 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_9:
# 236 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 236 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 236 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 238 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_10:
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
TwinleafTown_EventScript_GoSeeBarry_Movement_11:
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
TwinleafTown_EventScript_GoSeeBarry_Movement_12:
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
TwinleafTown_EventScript_GoSeeBarry_Movement_13:
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
TwinleafTown_EventScript_GoSeeBarry_Movement_14:
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

# 248 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_EventScript_GoSeeBarry_Movement_15:
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
	walk_left
# 248 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 248 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 248 "data/maps/TwinleafTown/scripts.pory"
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

TwinleafTown_EventScript_PlayersHouseSign_Text_0:
# 116 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_EventScript_RivalsHouseSign_Text_0:
# 123 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

TwinleafTown_EventScript_TwinleafSign_Text_0:
# 130 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

TwinleafTown_EventScript_TearingOff_Text_0:
# 259 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "You're looking for Barry?\p"
	.string "He just went tearing off a little\n"
	.string "while ago.\p"
	.string "He's probably not gone too far.\n"
	.string "Why not go chase after him?$"

BarryLooking::
# 269 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"
