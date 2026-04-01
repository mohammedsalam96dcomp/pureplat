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


TwinleafTown_THUD::
# 15 "data/maps/TwinleafTown/scripts.pory"
	lock
# 16 "data/maps/TwinleafTown/scripts.pory"
	clearflag FLAG_HIDE_PLAYER_HOUSE_BARRY
# 17 "data/maps/TwinleafTown/scripts.pory"
	addobject 4
# 19 "data/maps/TwinleafTown/scripts.pory"
	playse SE_DOOR
# 20 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_THUD_Movement_0
# 21 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 22 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_THUD_Movement_1
# 23 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 24 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_THUD_Movement_2
# 25 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 26 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_THUD_Movement_3
# 27 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 28 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 30 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_THUD_Text_0
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
	msgbox TwinleafTown_THUD_Text_1
# 44 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 46 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_THUD_Movement_4
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
	applymovement 4, TwinleafTown_THUD_Movement_5
# 54 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 4
# 56 "data/maps/TwinleafTown/scripts.pory"
	setspeaker SP_NAME_BARRY
# 57 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_THUD_Text_2
# 59 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 61 "data/maps/TwinleafTown/scripts.pory"
	opendoor 7, 10
# 62 "data/maps/TwinleafTown/scripts.pory"
	waitdooranim
# 64 "data/maps/TwinleafTown/scripts.pory"
	applymovement 4, TwinleafTown_THUD_Movement_6
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
# 73 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_BARRYTWINLEAF, 2
# 75 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_Technology::
# 80 "data/maps/TwinleafTown/scripts.pory"
	lock
# 81 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 82 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Technology_Text_0
# 85 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_WildPokemon::
# 89 "data/maps/TwinleafTown/scripts.pory"
	lock
# 90 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 91 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_WildPokemon_Text_0
# 95 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_PlayersHouseSign::
# 99 "data/maps/TwinleafTown/scripts.pory"
	lock
# 100 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_PlayersHouseSign_Text_0
# 101 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_RivalsHouseSign::
# 106 "data/maps/TwinleafTown/scripts.pory"
	lock
# 107 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_RivalsHouseSign_Text_0
# 108 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_TwinleafSign::
# 113 "data/maps/TwinleafTown/scripts.pory"
	lock
# 114 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TwinleafSign_Text_0
# 116 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_GoSeeBarry1::
# 121 "data/maps/TwinleafTown/scripts.pory"
	lock
# 122 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 123 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_GoSeeBarry
# 124 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_GoSeeBarry2::
# 128 "data/maps/TwinleafTown/scripts.pory"
	lock
# 129 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 2
# 130 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_GoSeeBarry
# 131 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_GoSeeBarry3::
# 135 "data/maps/TwinleafTown/scripts.pory"
	lock
# 136 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 3
# 137 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_GoSeeBarry
# 138 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_GoSeeBarry4::
# 142 "data/maps/TwinleafTown/scripts.pory"
	lock
# 143 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 4
# 144 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_GoSeeBarry
# 145 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_GoSeeBarry5::
# 149 "data/maps/TwinleafTown/scripts.pory"
	lock
# 150 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 5
# 151 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_GoSeeBarry
# 152 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_GoSeeBarry6::
# 156 "data/maps/TwinleafTown/scripts.pory"
	lock
# 157 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 6
# 158 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_GoSeeBarry
# 159 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_GoSeeBarry7::
# 163 "data/maps/TwinleafTown/scripts.pory"
	lock
# 164 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 7
# 165 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_GoSeeBarry
# 166 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_GoSeeBarry8::
# 170 "data/maps/TwinleafTown/scripts.pory"
	lock
# 171 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 8
# 172 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_GoSeeBarry
# 173 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_GoSeeBarry::
# 177 "data/maps/TwinleafTown/scripts.pory"
	lock
# 179 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, Common_Movement_ExclamationMark
# 180 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 181 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 182 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 183 "data/maps/TwinleafTown/scripts.pory"
	delay 30
# 185 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 186 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_GoSeeBarry_3
# 188 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_GoSeeBarry_4
# 190 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_GoSeeBarry_5
# 192 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_GoSeeBarry_6
# 194 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_GoSeeBarry_7
# 196 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_GoSeeBarry_8
# 198 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_GoSeeBarry_9
# 200 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_GoSeeBarry_10
TwinleafTown_GoSeeBarry_1:
# 204 "data/maps/TwinleafTown/scripts.pory"
	waitmovement LOCALID_NPC3
# 205 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_THUD_Movement_1
# 206 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 207 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_THUD_Movement_3
# 208 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 209 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_THUD_Movement_3
# 210 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 212 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_GoSeeBarry_Text_0
# 216 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 218 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 219 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_GoSeeBarry_13
# 221 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_GoSeeBarry_14
# 223 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_GoSeeBarry_15
# 225 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_GoSeeBarry_16
# 227 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_GoSeeBarry_17
# 229 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_GoSeeBarry_18
# 231 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_GoSeeBarry_19
# 233 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_GoSeeBarry_20
TwinleafTown_GoSeeBarry_11:
# 236 "data/maps/TwinleafTown/scripts.pory"
	waitmovement LOCALID_NPC3
# 238 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_GoSeeBarry_3:
# 187 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_0
	goto TwinleafTown_GoSeeBarry_1

TwinleafTown_GoSeeBarry_4:
# 189 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_1
	goto TwinleafTown_GoSeeBarry_1

TwinleafTown_GoSeeBarry_5:
# 191 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_2
	goto TwinleafTown_GoSeeBarry_1

TwinleafTown_GoSeeBarry_6:
# 193 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_3
	goto TwinleafTown_GoSeeBarry_1

TwinleafTown_GoSeeBarry_7:
# 195 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_4
	goto TwinleafTown_GoSeeBarry_1

TwinleafTown_GoSeeBarry_8:
# 197 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_5
	goto TwinleafTown_GoSeeBarry_1

TwinleafTown_GoSeeBarry_9:
# 199 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_6
	goto TwinleafTown_GoSeeBarry_1

TwinleafTown_GoSeeBarry_10:
# 201 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_7
	goto TwinleafTown_GoSeeBarry_1

TwinleafTown_GoSeeBarry_13:
# 220 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_8
	goto TwinleafTown_GoSeeBarry_11

TwinleafTown_GoSeeBarry_14:
# 222 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_9
	goto TwinleafTown_GoSeeBarry_11

TwinleafTown_GoSeeBarry_15:
# 224 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_10
	goto TwinleafTown_GoSeeBarry_11

TwinleafTown_GoSeeBarry_16:
# 226 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_11
	goto TwinleafTown_GoSeeBarry_11

TwinleafTown_GoSeeBarry_17:
# 228 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_12
	goto TwinleafTown_GoSeeBarry_11

TwinleafTown_GoSeeBarry_18:
# 230 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_13
	goto TwinleafTown_GoSeeBarry_11

TwinleafTown_GoSeeBarry_19:
# 232 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_14
	goto TwinleafTown_GoSeeBarry_11

TwinleafTown_GoSeeBarry_20:
# 234 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_15
	goto TwinleafTown_GoSeeBarry_11


# 20 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_THUD_Movement_0:
# 20 "data/maps/TwinleafTown/scripts.pory"
	face_up
	step_end

# 22 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_THUD_Movement_1:
# 22 "data/maps/TwinleafTown/scripts.pory"
	lock_facing_direction
	step_end

# 24 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_THUD_Movement_2:
# 24 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_down
	step_end

# 26 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_THUD_Movement_3:
# 26 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 46 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_THUD_Movement_4:
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
TwinleafTown_THUD_Movement_5:
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
TwinleafTown_THUD_Movement_6:
# 64 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
	step_end

# 187 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_0:
# 187 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 187 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 187 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 187 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 187 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
	step_end

# 189 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_1:
# 189 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 189 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 189 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 189 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 191 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_2:
# 191 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 191 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 191 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 191 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 191 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 193 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_3:
# 193 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 193 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 193 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 193 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 193 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 193 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 195 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_4:
# 195 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 195 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 195 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 195 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 195 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 195 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 195 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 197 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_5:
# 197 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 197 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 197 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 197 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 197 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 197 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 197 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 197 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 199 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_6:
# 199 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 199 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 199 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 199 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 199 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 199 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 199 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 199 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 199 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 201 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_7:
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 201 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 220 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_8:
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_right
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 220 "data/maps/TwinleafTown/scripts.pory"
	walk_left
	step_end

# 222 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_9:
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 222 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 224 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_10:
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 224 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 226 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_11:
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 226 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 228 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_12:
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 228 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 230 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_13:
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 230 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 232 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_14:
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 232 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 234 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_15:
# 234 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 234 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 234 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 234 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 234 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 234 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 234 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 234 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 234 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

TwinleafTown_THUD_Text_0:
# 30 "data/maps/TwinleafTown/scripts.pory"
	.string "THUD! !$"

TwinleafTown_THUD_Text_1:
# 40 "data/maps/TwinleafTown/scripts.pory"
	.string "What was that about?!\p"
	.string "Oh, hey, {PLAYER}!\p"
	.string "Hey! I'm going to see Prof. Rowan!\n"
	.string "You should come, too! And quickly!$"

TwinleafTown_THUD_Text_2:
# 57 "data/maps/TwinleafTown/scripts.pory"
	.string "Oh, jeez!\n"
	.string "Forgot something!$"

TwinleafTown_Technology_Text_0:
# 82 "data/maps/TwinleafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean now you can play with people\n"
	.string "around the world. . . wirelessly!$"

TwinleafTown_WildPokemon_Text_0:
# 91 "data/maps/TwinleafTown/scripts.pory"
	.string "It's true that wild Pokémon do attack\n"
	.string "people sometimes. . .\p"
	.string "But, Pokémon also open their hearts\n"
	.string "to you, so you can become friends.$"

TwinleafTown_EventScript_PlayersHouseSign_Text_0:
# 100 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_EventScript_RivalsHouseSign_Text_0:
# 107 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

TwinleafTown_EventScript_TwinleafSign_Text_0:
# 114 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

TwinleafTown_GoSeeBarry_Text_0:
# 212 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"
