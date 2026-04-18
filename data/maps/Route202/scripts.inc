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
	setflag FLAG_FOLLOWER_POKEMON
# 177 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 178 "data/maps/Route202/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 179 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Route202_EventScript_CatchingTutorial_2
Route202_EventScript_CatchingTutorial_1:
# 182 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_1
# 183 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 184 "data/maps/Route202/scripts.pory"
	waitse
# 186 "data/maps/Route202/scripts.pory"
	switch VAR_TEMP_1
# 187 "data/maps/Route202/scripts.pory"
	case 1, Route202_EventScript_CatchingTutorial_6
# 189 "data/maps/Route202/scripts.pory"
	case 2, Route202_EventScript_CatchingTutorial_7
# 191 "data/maps/Route202/scripts.pory"
	case 3, Route202_EventScript_CatchingTutorial_8
# 193 "data/maps/Route202/scripts.pory"
	case 4, Route202_EventScript_CatchingTutorial_9
# 195 "data/maps/Route202/scripts.pory"
	case 5, Route202_EventScript_CatchingTutorial_10
Route202_EventScript_CatchingTutorial_4:
# 199 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 201 "data/maps/Route202/scripts.pory"
	checkplayergender
# 203 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route202_EventScript_CatchingTutorial_12
# 210 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_CatchingTutorial_Text_1
# 215 "data/maps/Route202/scripts.pory"
	closemessage
Route202_EventScript_CatchingTutorial_11:
# 218 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route202_EventScript_CatchingTutorial_Movement_0
# 219 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_CatchingTutorial_Movement_0
# 220 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 222 "data/maps/Route202/scripts.pory"
	special SavePlayerParty
# 223 "data/maps/Route202/scripts.pory"
	special LoadWallyZigzagoon
# 224 "data/maps/Route202/scripts.pory"
	special StartWallyTutorialBattle
# 225 "data/maps/Route202/scripts.pory"
	waitstate
# 227 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_CatchingTutorial_Movement_1
# 228 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 230 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Route202_EventScript_CatchingTutorial_16
# 252 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_CatchingTutorial_Text_4
# 266 "data/maps/Route202/scripts.pory"
	closemessage
# 267 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 268 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_CatchingTutorial_Text_5
# 274 "data/maps/Route202/scripts.pory"
	closemessage
Route202_EventScript_CatchingTutorial_15:
# 276 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_CatchingTutorial_Movement_2
# 277 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 279 "data/maps/Route202/scripts.pory"
	setflag FLAG_HIDE_ROUTE_202_DAWN
# 280 "data/maps/Route202/scripts.pory"
	removeobject 1
# 282 "data/maps/Route202/scripts.pory"
	special LoadPlayerParty
# 284 "data/maps/Route202/scripts.pory"
	setvar VAR_ROUTE202_STATE, 3
# 285 "data/maps/Route202/scripts.pory"
	clearflag FLAG_FOLLOWER_POKEMON
# 287 "data/maps/Route202/scripts.pory"
	release
	return

Route202_EventScript_CatchingTutorial_2:
# 180 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route202_EventScript_GoSeeMom_Movement_0
	goto Route202_EventScript_CatchingTutorial_1

Route202_EventScript_CatchingTutorial_6:
# 188 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_2
	goto Route202_EventScript_CatchingTutorial_4

Route202_EventScript_CatchingTutorial_7:
# 190 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_3
	goto Route202_EventScript_CatchingTutorial_4

Route202_EventScript_CatchingTutorial_8:
# 192 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_4
	goto Route202_EventScript_CatchingTutorial_4

Route202_EventScript_CatchingTutorial_9:
# 194 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_5
	goto Route202_EventScript_CatchingTutorial_4

Route202_EventScript_CatchingTutorial_10:
# 196 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_6
	goto Route202_EventScript_CatchingTutorial_4

Route202_EventScript_CatchingTutorial_12:
# 204 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_CatchingTutorial_Text_0
# 208 "data/maps/Route202/scripts.pory"
	closemessage
	goto Route202_EventScript_CatchingTutorial_11

Route202_EventScript_CatchingTutorial_16:
# 231 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_CatchingTutorial_Text_2
# 243 "data/maps/Route202/scripts.pory"
	closemessage
# 244 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 245 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_CatchingTutorial_Text_3
# 250 "data/maps/Route202/scripts.pory"
	closemessage
	goto Route202_EventScript_CatchingTutorial_15


Route202_EventScript_Tristan::
# 292 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_TRISTAN, Route202_EventScript_Tristan_Text_0, Route202_EventScript_Tristan_Text_1
# 297 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_Tristan_Text_2, MSGBOX_AUTOCLOSE
	end


Route202_EventScript_Natalie::
# 302 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_NATALIE, Route202_EventScript_Natalie_Text_0, Route202_EventScript_Natalie_Text_1
# 307 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_Natalie_Text_2, MSGBOX_AUTOCLOSE
	end


Route202_EventScript_Logan::
# 312 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_LOGAN, Route202_EventScript_Logan_Text_0, Route202_EventScript_Logan_Text_1
# 317 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_Logan_Text_2, MSGBOX_AUTOCLOSE
	end


Route202_EventScript_Youngster::
# 322 "data/maps/Route202/scripts.pory"
	lock
# 323 "data/maps/Route202/scripts.pory"
	faceplayer
# 325 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_Youngster_Text_0
# 330 "data/maps/Route202/scripts.pory"
	release
	return


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

# 218 "data/maps/Route202/scripts.pory"
Route202_EventScript_CatchingTutorial_Movement_0:
# 218 "data/maps/Route202/scripts.pory"
	walk_left
# 218 "data/maps/Route202/scripts.pory"
	walk_left
	step_end

# 227 "data/maps/Route202/scripts.pory"
Route202_EventScript_CatchingTutorial_Movement_1:
# 227 "data/maps/Route202/scripts.pory"
	walk_in_place_right
	step_end

# 276 "data/maps/Route202/scripts.pory"
Route202_EventScript_CatchingTutorial_Movement_2:
# 276 "data/maps/Route202/scripts.pory"
	walk_left
# 276 "data/maps/Route202/scripts.pory"
	walk_left
# 276 "data/maps/Route202/scripts.pory"
	walk_left
# 276 "data/maps/Route202/scripts.pory"
	walk_left
# 276 "data/maps/Route202/scripts.pory"
	walk_left
# 276 "data/maps/Route202/scripts.pory"
	walk_left
# 276 "data/maps/Route202/scripts.pory"
	walk_left
# 276 "data/maps/Route202/scripts.pory"
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
# 204 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}{PLAYER}, do you know\n"
	.string "how to catch a Pokémon?\p"
	.string "I'll demonstrate how to catch\n"
	.string "one, so just watch, OK?$"

Route202_EventScript_CatchingTutorial_Text_1:
# 210 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Oh, that's right!\p"
	.string "{PLAYER}, I haven't shown you\n"
	.string "how to catch a Pokémon.\p"
	.string "I'll demonstrate how to catch\n"
	.string "one, so just watch me, OK?$"

Route202_EventScript_CatchingTutorial_Text_2:
# 231 "data/maps/Route202/scripts.pory"
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
# 245 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}If you have lots of Pokémon with you,\n"
	.string "you'll be able to travel farther.\p"
	.string "That way, you'll have a better shot\n"
	.string "at meeting more Pokémon.\p"
	.string "See you around!$"

Route202_EventScript_CatchingTutorial_Text_4:
# 252 "data/maps/Route202/scripts.pory"
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
# 268 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}If you have lots of Pokémon with you,\n"
	.string "it will be safer on long trips.\p"
	.string "Plus, it will be a lot more fun\n"
	.string "having your Pokémon friends along.\p"
	.string "OK, I need to get going.\n"
	.string "Bye, now!$"

Route202_EventScript_Tristan_Text_0:
# 294 "data/maps/Route202/scripts.pory"
	.string "You're a Pokémon Trainer, and so am I!\n"
	.string "Our eyes met, so battle we must!$"

Route202_EventScript_Tristan_Text_1:
# 295 "data/maps/Route202/scripts.pory"
	.string "Too strong!\n"
	.string "Too strong!$"

Route202_EventScript_Tristan_Text_2:
# 297 "data/maps/Route202/scripts.pory"
	.string "Don't be shy about talking to\nTrainers you'd like to battle.\pPokémon grow stronger and stronger\nfrom battling.$"

Route202_EventScript_Natalie_Text_0:
# 304 "data/maps/Route202/scripts.pory"
	.string "I spy, with my little eye. . .\n"
	.string "A Trainer!\p"
	.string "A battle, please!$"

Route202_EventScript_Natalie_Text_1:
# 305 "data/maps/Route202/scripts.pory"
	.string "Oh, boo!\n"
	.string "I can't win!$"

Route202_EventScript_Natalie_Text_2:
# 307 "data/maps/Route202/scripts.pory"
	.string "My Pokémon are all tuckered out!\nI need to go to a Pokémon Center.$"

Route202_EventScript_Logan_Text_0:
# 314 "data/maps/Route202/scripts.pory"
	.string "Let's have a Pokémon battle!\n"
	.string "Humph! But I'm gonna win!$"

Route202_EventScript_Logan_Text_1:
# 315 "data/maps/Route202/scripts.pory"
	.string "You beat me?!\n"
	.string "You got talent!$"

Route202_EventScript_Logan_Text_2:
# 317 "data/maps/Route202/scripts.pory"
	.string "It was fun battling!\nYup! I'm going to battle everyone!$"

Route202_EventScript_Youngster_Text_0:
# 325 "data/maps/Route202/scripts.pory"
	.string "Some Pokémon only appear in the\n"
	.string "morning.\p"
	.string "Some only come out at night.\p"
	.string "I'll keep looking till I've seen them\n"
	.string "all!$"
