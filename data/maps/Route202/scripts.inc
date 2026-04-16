Route202_MapScripts::
# 4 "data/maps/Route202/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route202_EventScript_OnTransition
	.byte 0


Route202_EventScript_OnTransition::
# 8 "data/maps/Route202/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


Route202_EventScript_GoSeeMom1::
# 13 "data/maps/Route202/scripts.pory"
	lock
# 14 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_GoSeeMom
# 16 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_GoSeeMom2::
# 20 "data/maps/Route202/scripts.pory"
	lock
# 21 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 2
# 22 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_GoSeeMom
# 23 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_GoSeeMom3::
# 27 "data/maps/Route202/scripts.pory"
	lock
# 28 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 3
# 29 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_GoSeeMom
# 30 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_GoSeeMom4::
# 34 "data/maps/Route202/scripts.pory"
	lock
# 35 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 4
# 36 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_GoSeeMom
# 37 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_GoSeeMom5::
# 41 "data/maps/Route202/scripts.pory"
	lock
# 42 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 5
# 43 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_GoSeeMom
# 44 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_GoSeeMom::
# 48 "data/maps/Route202/scripts.pory"
	lock
# 50 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 51 "data/maps/Route202/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 52 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Route202_EventScript_GoSeeMom_2
Route202_EventScript_GoSeeMom_1:
# 55 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_1
# 56 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 57 "data/maps/Route202/scripts.pory"
	waitse
# 59 "data/maps/Route202/scripts.pory"
	switch VAR_TEMP_1
# 60 "data/maps/Route202/scripts.pory"
	case 1, Route202_EventScript_GoSeeMom_6
# 62 "data/maps/Route202/scripts.pory"
	case 2, Route202_EventScript_GoSeeMom_7
# 64 "data/maps/Route202/scripts.pory"
	case 3, Route202_EventScript_GoSeeMom_8
# 66 "data/maps/Route202/scripts.pory"
	case 4, Route202_EventScript_GoSeeMom_9
# 68 "data/maps/Route202/scripts.pory"
	case 5, Route202_EventScript_GoSeeMom_10
Route202_EventScript_GoSeeMom_4:
# 72 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 74 "data/maps/Route202/scripts.pory"
	checkplayergender
# 76 "data/maps/Route202/scripts.pory"
	compare VAR_ROUTE202_DAWN_STATE, 1
	goto_if_eq Route202_EventScript_GoSeeMom_12
# 99 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route202_EventScript_GoSeeMom_25
# 106 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_GoSeeMom_Text_3
# 109 "data/maps/Route202/scripts.pory"
	closemessage
Route202_EventScript_GoSeeMom_11:
# 113 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route202_EventScript_GoSeeMom_Movement_7
# 114 "data/maps/Route202/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route202_EventScript_GoSeeMom_Movement_8
# 117 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_8
# 118 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 120 "data/maps/Route202/scripts.pory"
	switch VAR_TEMP_1
# 121 "data/maps/Route202/scripts.pory"
	case 1, Route202_EventScript_GoSeeMom_17
# 123 "data/maps/Route202/scripts.pory"
	case 2, Route202_EventScript_GoSeeMom_18
# 125 "data/maps/Route202/scripts.pory"
	case 3, Route202_EventScript_GoSeeMom_19
# 127 "data/maps/Route202/scripts.pory"
	case 4, Route202_EventScript_GoSeeMom_20
# 129 "data/maps/Route202/scripts.pory"
	case 5, Route202_EventScript_GoSeeMom_21
Route202_EventScript_GoSeeMom_15:
# 132 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 134 "data/maps/Route202/scripts.pory"
	setvar VAR_ROUTE202_DAWN_STATE, 2
# 135 "data/maps/Route202/scripts.pory"
	release
	return

Route202_EventScript_GoSeeMom_2:
# 53 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route202_EventScript_GoSeeMom_Movement_0
	goto Route202_EventScript_GoSeeMom_1

Route202_EventScript_GoSeeMom_6:
# 61 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_2
	goto Route202_EventScript_GoSeeMom_4

Route202_EventScript_GoSeeMom_7:
# 63 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_3
	goto Route202_EventScript_GoSeeMom_4

Route202_EventScript_GoSeeMom_8:
# 65 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_4
	goto Route202_EventScript_GoSeeMom_4

Route202_EventScript_GoSeeMom_9:
# 67 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_5
	goto Route202_EventScript_GoSeeMom_4

Route202_EventScript_GoSeeMom_10:
# 69 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_6
	goto Route202_EventScript_GoSeeMom_4

Route202_EventScript_GoSeeMom_12:
# 77 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route202_EventScript_GoSeeMom_22
# 88 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_GoSeeMom_Text_1
# 96 "data/maps/Route202/scripts.pory"
	closemessage
	goto Route202_EventScript_GoSeeMom_11

Route202_EventScript_GoSeeMom_17:
# 122 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_9
	goto Route202_EventScript_GoSeeMom_15

Route202_EventScript_GoSeeMom_18:
# 124 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_10
	goto Route202_EventScript_GoSeeMom_15

Route202_EventScript_GoSeeMom_19:
# 126 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_11
	goto Route202_EventScript_GoSeeMom_15

Route202_EventScript_GoSeeMom_20:
# 128 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_12
	goto Route202_EventScript_GoSeeMom_15

Route202_EventScript_GoSeeMom_21:
# 130 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_13
	goto Route202_EventScript_GoSeeMom_15

Route202_EventScript_GoSeeMom_22:
# 78 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_GoSeeMom_Text_0
# 86 "data/maps/Route202/scripts.pory"
	closemessage
	goto Route202_EventScript_GoSeeMom_11

Route202_EventScript_GoSeeMom_25:
# 100 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_GoSeeMom_Text_2
# 104 "data/maps/Route202/scripts.pory"
	closemessage
	goto Route202_EventScript_GoSeeMom_11


Route202_EventScript_CatchingTutorial1::
# 139 "data/maps/Route202/scripts.pory"
	lock
# 140 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 1
# 141 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_CatchingTutorial
# 142 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_CatchingTutorial2::
# 146 "data/maps/Route202/scripts.pory"
	lock
# 147 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 2
# 148 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_CatchingTutorial
# 149 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_CatchingTutorial3::
# 153 "data/maps/Route202/scripts.pory"
	lock
# 154 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 3
# 155 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_CatchingTutorial
# 156 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_CatchingTutorial4::
# 160 "data/maps/Route202/scripts.pory"
	lock
# 161 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 4
# 162 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_CatchingTutorial
# 163 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_CatchingTutorial5::
# 167 "data/maps/Route202/scripts.pory"
	lock
# 168 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 5
# 169 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_CatchingTutorial
# 170 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_CatchingTutorial::
# 174 "data/maps/Route202/scripts.pory"
	lock
# 176 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 177 "data/maps/Route202/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 178 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Route202_EventScript_CatchingTutorial_2
Route202_EventScript_CatchingTutorial_1:
# 181 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_1
# 182 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 183 "data/maps/Route202/scripts.pory"
	waitse
# 185 "data/maps/Route202/scripts.pory"
	switch VAR_TEMP_1
# 186 "data/maps/Route202/scripts.pory"
	case 1, Route202_EventScript_CatchingTutorial_6
# 188 "data/maps/Route202/scripts.pory"
	case 2, Route202_EventScript_CatchingTutorial_7
# 190 "data/maps/Route202/scripts.pory"
	case 3, Route202_EventScript_CatchingTutorial_8
# 192 "data/maps/Route202/scripts.pory"
	case 4, Route202_EventScript_CatchingTutorial_9
# 194 "data/maps/Route202/scripts.pory"
	case 5, Route202_EventScript_CatchingTutorial_10
Route202_EventScript_CatchingTutorial_4:
# 198 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 200 "data/maps/Route202/scripts.pory"
	checkplayergender
# 202 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route202_EventScript_CatchingTutorial_12
# 209 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_CatchingTutorial_Text_1
# 214 "data/maps/Route202/scripts.pory"
	closemessage
Route202_EventScript_CatchingTutorial_11:
# 217 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route202_EventScript_CatchingTutorial_Movement_0
# 218 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_CatchingTutorial_Movement_0
# 219 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 221 "data/maps/Route202/scripts.pory"
	special SavePlayerParty
# 222 "data/maps/Route202/scripts.pory"
	special LoadWallyZigzagoon
# 223 "data/maps/Route202/scripts.pory"
	special StartWallyTutorialBattle
# 224 "data/maps/Route202/scripts.pory"
	waitstate
# 226 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_CatchingTutorial_Movement_1
# 227 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 229 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route202_EventScript_CatchingTutorial_16
# 251 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_CatchingTutorial_Text_4
# 265 "data/maps/Route202/scripts.pory"
	closemessage
# 266 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 267 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_CatchingTutorial_Text_5
# 273 "data/maps/Route202/scripts.pory"
	closemessage
Route202_EventScript_CatchingTutorial_15:
# 275 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_CatchingTutorial_Movement_2
# 276 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 278 "data/maps/Route202/scripts.pory"
	setflag FLAG_HIDE_ROUTE_202_DAWN
# 279 "data/maps/Route202/scripts.pory"
	removeobject 1
# 281 "data/maps/Route202/scripts.pory"
	special LoadPlayerParty
# 283 "data/maps/Route202/scripts.pory"
	setvar VAR_ROUTE202_STATE, 3
# 285 "data/maps/Route202/scripts.pory"
	release
	return

Route202_EventScript_CatchingTutorial_2:
# 179 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route202_EventScript_GoSeeMom_Movement_0
	goto Route202_EventScript_CatchingTutorial_1

Route202_EventScript_CatchingTutorial_6:
# 187 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_2
	goto Route202_EventScript_CatchingTutorial_4

Route202_EventScript_CatchingTutorial_7:
# 189 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_3
	goto Route202_EventScript_CatchingTutorial_4

Route202_EventScript_CatchingTutorial_8:
# 191 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_4
	goto Route202_EventScript_CatchingTutorial_4

Route202_EventScript_CatchingTutorial_9:
# 193 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_5
	goto Route202_EventScript_CatchingTutorial_4

Route202_EventScript_CatchingTutorial_10:
# 195 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_6
	goto Route202_EventScript_CatchingTutorial_4

Route202_EventScript_CatchingTutorial_12:
# 203 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_CatchingTutorial_Text_0
# 207 "data/maps/Route202/scripts.pory"
	closemessage
	goto Route202_EventScript_CatchingTutorial_11

Route202_EventScript_CatchingTutorial_16:
# 230 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_CatchingTutorial_Text_2
# 242 "data/maps/Route202/scripts.pory"
	closemessage
# 243 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 244 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_CatchingTutorial_Text_3
# 249 "data/maps/Route202/scripts.pory"
	closemessage
	goto Route202_EventScript_CatchingTutorial_15


# 53 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_0:
# 53 "data/maps/Route202/scripts.pory"
	walk_in_place_left
	step_end

# 55 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_1:
# 55 "data/maps/Route202/scripts.pory"
	walk_in_place_right
# 55 "data/maps/Route202/scripts.pory"
	emote_exclamation_mark
# 55 "data/maps/Route202/scripts.pory"
	delay_16
# 55 "data/maps/Route202/scripts.pory"
	delay_16
# 55 "data/maps/Route202/scripts.pory"
	delay_16
	step_end

# 61 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_2:
# 61 "data/maps/Route202/scripts.pory"
	walk_right
# 61 "data/maps/Route202/scripts.pory"
	walk_right
# 61 "data/maps/Route202/scripts.pory"
	walk_right
# 61 "data/maps/Route202/scripts.pory"
	walk_right
# 61 "data/maps/Route202/scripts.pory"
	walk_up
# 61 "data/maps/Route202/scripts.pory"
	walk_up
# 61 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 63 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_3:
# 63 "data/maps/Route202/scripts.pory"
	walk_right
# 63 "data/maps/Route202/scripts.pory"
	walk_right
# 63 "data/maps/Route202/scripts.pory"
	walk_right
# 63 "data/maps/Route202/scripts.pory"
	walk_right
# 63 "data/maps/Route202/scripts.pory"
	walk_up
# 63 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 65 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_4:
# 65 "data/maps/Route202/scripts.pory"
	walk_right
# 65 "data/maps/Route202/scripts.pory"
	walk_right
# 65 "data/maps/Route202/scripts.pory"
	walk_right
# 65 "data/maps/Route202/scripts.pory"
	walk_right
# 65 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 67 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_5:
# 67 "data/maps/Route202/scripts.pory"
	walk_right
# 67 "data/maps/Route202/scripts.pory"
	walk_right
# 67 "data/maps/Route202/scripts.pory"
	walk_right
# 67 "data/maps/Route202/scripts.pory"
	walk_right
# 67 "data/maps/Route202/scripts.pory"
	walk_down
# 67 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 69 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_6:
# 69 "data/maps/Route202/scripts.pory"
	walk_right
# 69 "data/maps/Route202/scripts.pory"
	walk_right
# 69 "data/maps/Route202/scripts.pory"
	walk_right
# 69 "data/maps/Route202/scripts.pory"
	walk_right
# 69 "data/maps/Route202/scripts.pory"
	walk_down
# 69 "data/maps/Route202/scripts.pory"
	walk_down
# 69 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 113 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_7:
# 113 "data/maps/Route202/scripts.pory"
	lock_facing_direction
	step_end

# 116 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_8:
# 116 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 122 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_9:
# 122 "data/maps/Route202/scripts.pory"
	walk_left
# 122 "data/maps/Route202/scripts.pory"
	walk_left
# 122 "data/maps/Route202/scripts.pory"
	walk_left
# 122 "data/maps/Route202/scripts.pory"
	walk_left
# 122 "data/maps/Route202/scripts.pory"
	walk_left
# 122 "data/maps/Route202/scripts.pory"
	walk_left
# 122 "data/maps/Route202/scripts.pory"
	walk_down
# 122 "data/maps/Route202/scripts.pory"
	walk_down
# 122 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 124 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_10:
# 124 "data/maps/Route202/scripts.pory"
	walk_left
# 124 "data/maps/Route202/scripts.pory"
	walk_left
# 124 "data/maps/Route202/scripts.pory"
	walk_left
# 124 "data/maps/Route202/scripts.pory"
	walk_left
# 124 "data/maps/Route202/scripts.pory"
	walk_left
# 124 "data/maps/Route202/scripts.pory"
	walk_left
# 124 "data/maps/Route202/scripts.pory"
	walk_down
# 124 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 126 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_11:
# 126 "data/maps/Route202/scripts.pory"
	walk_left
# 126 "data/maps/Route202/scripts.pory"
	walk_left
# 126 "data/maps/Route202/scripts.pory"
	walk_left
# 126 "data/maps/Route202/scripts.pory"
	walk_left
# 126 "data/maps/Route202/scripts.pory"
	walk_left
# 126 "data/maps/Route202/scripts.pory"
	walk_left
# 126 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 128 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_12:
# 128 "data/maps/Route202/scripts.pory"
	walk_left
# 128 "data/maps/Route202/scripts.pory"
	walk_left
# 128 "data/maps/Route202/scripts.pory"
	walk_left
# 128 "data/maps/Route202/scripts.pory"
	walk_left
# 128 "data/maps/Route202/scripts.pory"
	walk_left
# 128 "data/maps/Route202/scripts.pory"
	walk_left
# 128 "data/maps/Route202/scripts.pory"
	walk_up
# 128 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 130 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_13:
# 130 "data/maps/Route202/scripts.pory"
	walk_left
# 130 "data/maps/Route202/scripts.pory"
	walk_left
# 130 "data/maps/Route202/scripts.pory"
	walk_left
# 130 "data/maps/Route202/scripts.pory"
	walk_left
# 130 "data/maps/Route202/scripts.pory"
	walk_left
# 130 "data/maps/Route202/scripts.pory"
	walk_left
# 130 "data/maps/Route202/scripts.pory"
	walk_up
# 130 "data/maps/Route202/scripts.pory"
	walk_up
# 130 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 217 "data/maps/Route202/scripts.pory"
Route202_EventScript_CatchingTutorial_Movement_0:
# 217 "data/maps/Route202/scripts.pory"
	walk_left
# 217 "data/maps/Route202/scripts.pory"
	walk_left
	step_end

# 226 "data/maps/Route202/scripts.pory"
Route202_EventScript_CatchingTutorial_Movement_1:
# 226 "data/maps/Route202/scripts.pory"
	walk_in_place_right
	step_end

# 275 "data/maps/Route202/scripts.pory"
Route202_EventScript_CatchingTutorial_Movement_2:
# 275 "data/maps/Route202/scripts.pory"
	walk_left
# 275 "data/maps/Route202/scripts.pory"
	walk_left
# 275 "data/maps/Route202/scripts.pory"
	walk_left
# 275 "data/maps/Route202/scripts.pory"
	walk_left
# 275 "data/maps/Route202/scripts.pory"
	walk_left
# 275 "data/maps/Route202/scripts.pory"
	walk_left
# 275 "data/maps/Route202/scripts.pory"
	walk_left
# 275 "data/maps/Route202/scripts.pory"
	walk_left
	step_end

Route202_EventScript_GoSeeMom_Text_0:
# 78 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}{PLAYER}?!\p"
	.string "Did you tell your family that you're\n"
	.string "helping the professor?\p"
	.string ". . .I bet you didn't, did you?\p"
	.string "I know that you're eager to\n"
	.string "see all kinds of Pokémon.\p"
	.string "But you shouldn't make your mom\n"
	.string "worry like that.$"

Route202_EventScript_GoSeeMom_Text_1:
# 88 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}{PLAYER}?!\p"
	.string "Did you tell your family that you're\n"
	.string "helping the professor?\p"
	.string ". . .You didn't, did you?\p"
	.string "I know that you're really eager to\n"
	.string "see all kinds of Pokémon.\p"
	.string "But you shouldn't make your mom\n"
	.string "worry that you've disappeared.$"

Route202_EventScript_GoSeeMom_Text_2:
# 100 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Why don't you go to tell your\n"
	.string "family that the professor asked for\l"
	.string "your help?\p"
	.string "You should do it right away.$"

Route202_EventScript_GoSeeMom_Text_3:
# 106 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}You should go tell your family\n"
	.string "that you're helping the professor.\p"
	.string "The faster the better, too.$"

Route202_EventScript_CatchingTutorial_Text_0:
# 203 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}{PLAYER}, do you know\n"
	.string "how to catch a Pokémon?\p"
	.string "I'll demonstrate how to catch\n"
	.string "one, so just watch, OK?$"

Route202_EventScript_CatchingTutorial_Text_1:
# 209 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Oh, that's right!\p"
	.string "{PLAYER}, I haven't shown you\n"
	.string "how to catch a Pokémon.\p"
	.string "I'll demonstrate how to catch\n"
	.string "one, so just watch me, OK?$"

Route202_EventScript_CatchingTutorial_Text_2:
# 230 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}And that's how it's done.\p"
	.string "Actually, I should have lowered the\n"
	.string "target's HP some more.\p"
	.string "Yup, the important thing is to lower\n"
	.string "the Pokémon's HP as much as possible.\p"
	.string "See, a healthy Pokémon isn't easy to\n"
	.string "catch.\p"
	.string "Oh, yeah. They also get easier to\n"
	.string "catch if you make one of your\l"
	.string "Pokémon put them to sleep or such.\p"
	.string "Here, {PLAYER}, I'll give you\n"
	.string "ten Poké Balls to get you started.$"

Route202_EventScript_CatchingTutorial_Text_3:
# 244 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}If you have lots of Pokémon with you,\n"
	.string "you'll be able to travel farther.\p"
	.string "That way, you'll have a better shot\n"
	.string "at meeting more Pokémon.\p"
	.string "See you around!$"

Route202_EventScript_CatchingTutorial_Text_4:
# 251 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Giggle. . .\n"
	.string "See? Isn't it neat?\p"
	.string "Actually, it's better to lower your\n"
	.string "target's HP more than I did\p"
	.string "It's important to get the Pokémon's\n"
	.string "HP down as low as possible.\p"
	.string "This is because a healthy Pokémon\n"
	.string "is very difficult to catch.\p"
	.string "Oh, Pokémon also get easier to catch\n"
	.string "if you make them sleep or something\l"
	.string "by using a Pokémon's move.\p"
	.string "OK, {PLAYER}, to get you\n"
	.string "started, I'll give you ten\l"
	.string "Poké Balls!$"

Route202_EventScript_CatchingTutorial_Text_5:
# 267 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}If you have lots of Pokémon with you,\n"
	.string "it will be safer on long trips.\p"
	.string "Plus, it will be a lot more fun\n"
	.string "having your Pokémon friends along."
	.string "OK, I need to get going.\n"
	.string "Bye, now!$"
