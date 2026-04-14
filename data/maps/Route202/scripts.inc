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
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_0
# 52 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 53 "data/maps/Route202/scripts.pory"
	waitse
# 55 "data/maps/Route202/scripts.pory"
	switch VAR_TEMP_1
# 56 "data/maps/Route202/scripts.pory"
	case 1, Route202_EventScript_GoSeeMom_3
# 58 "data/maps/Route202/scripts.pory"
	case 2, Route202_EventScript_GoSeeMom_4
# 60 "data/maps/Route202/scripts.pory"
	case 3, Route202_EventScript_GoSeeMom_5
# 62 "data/maps/Route202/scripts.pory"
	case 4, Route202_EventScript_GoSeeMom_6
# 64 "data/maps/Route202/scripts.pory"
	case 5, Route202_EventScript_GoSeeMom_7
Route202_EventScript_GoSeeMom_1:
# 68 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 70 "data/maps/Route202/scripts.pory"
	compare VAR_ROUTE202_DAWN_STATE, 1
	goto_if_eq Route202_EventScript_GoSeeMom_9
# 81 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_GoSeeMom_Text_1
# 85 "data/maps/Route202/scripts.pory"
	closemessage
Route202_EventScript_GoSeeMom_8:
# 88 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route202_EventScript_GoSeeMom_Movement_6
# 89 "data/maps/Route202/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route202_EventScript_GoSeeMom_Movement_7
# 92 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_7
# 93 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 95 "data/maps/Route202/scripts.pory"
	switch VAR_TEMP_1
# 96 "data/maps/Route202/scripts.pory"
	case 1, Route202_EventScript_GoSeeMom_14
# 98 "data/maps/Route202/scripts.pory"
	case 2, Route202_EventScript_GoSeeMom_15
# 100 "data/maps/Route202/scripts.pory"
	case 3, Route202_EventScript_GoSeeMom_16
# 102 "data/maps/Route202/scripts.pory"
	case 4, Route202_EventScript_GoSeeMom_17
# 104 "data/maps/Route202/scripts.pory"
	case 5, Route202_EventScript_GoSeeMom_18
Route202_EventScript_GoSeeMom_12:
# 107 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 109 "data/maps/Route202/scripts.pory"
	setvar VAR_ROUTE202_DAWN_STATE, 2
# 110 "data/maps/Route202/scripts.pory"
	release
	return

Route202_EventScript_GoSeeMom_3:
# 57 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_1
	goto Route202_EventScript_GoSeeMom_1

Route202_EventScript_GoSeeMom_4:
# 59 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_2
	goto Route202_EventScript_GoSeeMom_1

Route202_EventScript_GoSeeMom_5:
# 61 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_3
	goto Route202_EventScript_GoSeeMom_1

Route202_EventScript_GoSeeMom_6:
# 63 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_4
	goto Route202_EventScript_GoSeeMom_1

Route202_EventScript_GoSeeMom_7:
# 65 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_5
	goto Route202_EventScript_GoSeeMom_1

Route202_EventScript_GoSeeMom_9:
# 71 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_GoSeeMom_Text_0
# 79 "data/maps/Route202/scripts.pory"
	closemessage
	goto Route202_EventScript_GoSeeMom_8

Route202_EventScript_GoSeeMom_14:
# 97 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_8
	goto Route202_EventScript_GoSeeMom_12

Route202_EventScript_GoSeeMom_15:
# 99 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_9
	goto Route202_EventScript_GoSeeMom_12

Route202_EventScript_GoSeeMom_16:
# 101 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_10
	goto Route202_EventScript_GoSeeMom_12

Route202_EventScript_GoSeeMom_17:
# 103 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_11
	goto Route202_EventScript_GoSeeMom_12

Route202_EventScript_GoSeeMom_18:
# 105 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_12
	goto Route202_EventScript_GoSeeMom_12


# 51 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_0:
# 51 "data/maps/Route202/scripts.pory"
	walk_in_place_right
# 51 "data/maps/Route202/scripts.pory"
	emote_exclamation_mark
# 51 "data/maps/Route202/scripts.pory"
	delay_16
# 51 "data/maps/Route202/scripts.pory"
	delay_16
# 51 "data/maps/Route202/scripts.pory"
	delay_16
	step_end

# 57 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_1:
# 57 "data/maps/Route202/scripts.pory"
	walk_right
# 57 "data/maps/Route202/scripts.pory"
	walk_right
# 57 "data/maps/Route202/scripts.pory"
	walk_right
# 57 "data/maps/Route202/scripts.pory"
	walk_right
# 57 "data/maps/Route202/scripts.pory"
	walk_up
# 57 "data/maps/Route202/scripts.pory"
	walk_up
# 57 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 59 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_2:
# 59 "data/maps/Route202/scripts.pory"
	walk_right
# 59 "data/maps/Route202/scripts.pory"
	walk_right
# 59 "data/maps/Route202/scripts.pory"
	walk_right
# 59 "data/maps/Route202/scripts.pory"
	walk_right
# 59 "data/maps/Route202/scripts.pory"
	walk_up
# 59 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 61 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_3:
# 61 "data/maps/Route202/scripts.pory"
	walk_right
# 61 "data/maps/Route202/scripts.pory"
	walk_right
# 61 "data/maps/Route202/scripts.pory"
	walk_right
# 61 "data/maps/Route202/scripts.pory"
	walk_right
# 61 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 63 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_4:
# 63 "data/maps/Route202/scripts.pory"
	walk_right
# 63 "data/maps/Route202/scripts.pory"
	walk_right
# 63 "data/maps/Route202/scripts.pory"
	walk_right
# 63 "data/maps/Route202/scripts.pory"
	walk_right
# 63 "data/maps/Route202/scripts.pory"
	walk_down
# 63 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 65 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_5:
# 65 "data/maps/Route202/scripts.pory"
	walk_right
# 65 "data/maps/Route202/scripts.pory"
	walk_right
# 65 "data/maps/Route202/scripts.pory"
	walk_right
# 65 "data/maps/Route202/scripts.pory"
	walk_right
# 65 "data/maps/Route202/scripts.pory"
	walk_down
# 65 "data/maps/Route202/scripts.pory"
	walk_down
# 65 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 88 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_6:
# 88 "data/maps/Route202/scripts.pory"
	lock_facing_direction
	step_end

# 91 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_7:
# 91 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 97 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_8:
# 97 "data/maps/Route202/scripts.pory"
	walk_left
# 97 "data/maps/Route202/scripts.pory"
	walk_left
# 97 "data/maps/Route202/scripts.pory"
	walk_left
# 97 "data/maps/Route202/scripts.pory"
	walk_left
# 97 "data/maps/Route202/scripts.pory"
	walk_left
# 97 "data/maps/Route202/scripts.pory"
	walk_left
# 97 "data/maps/Route202/scripts.pory"
	walk_down
# 97 "data/maps/Route202/scripts.pory"
	walk_down
# 97 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 99 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_9:
# 99 "data/maps/Route202/scripts.pory"
	walk_left
# 99 "data/maps/Route202/scripts.pory"
	walk_left
# 99 "data/maps/Route202/scripts.pory"
	walk_left
# 99 "data/maps/Route202/scripts.pory"
	walk_left
# 99 "data/maps/Route202/scripts.pory"
	walk_left
# 99 "data/maps/Route202/scripts.pory"
	walk_left
# 99 "data/maps/Route202/scripts.pory"
	walk_down
# 99 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 101 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_10:
# 101 "data/maps/Route202/scripts.pory"
	walk_left
# 101 "data/maps/Route202/scripts.pory"
	walk_left
# 101 "data/maps/Route202/scripts.pory"
	walk_left
# 101 "data/maps/Route202/scripts.pory"
	walk_left
# 101 "data/maps/Route202/scripts.pory"
	walk_left
# 101 "data/maps/Route202/scripts.pory"
	walk_left
# 101 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 103 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_11:
# 103 "data/maps/Route202/scripts.pory"
	walk_left
# 103 "data/maps/Route202/scripts.pory"
	walk_left
# 103 "data/maps/Route202/scripts.pory"
	walk_left
# 103 "data/maps/Route202/scripts.pory"
	walk_left
# 103 "data/maps/Route202/scripts.pory"
	walk_left
# 103 "data/maps/Route202/scripts.pory"
	walk_left
# 103 "data/maps/Route202/scripts.pory"
	walk_up
# 103 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 105 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_12:
# 105 "data/maps/Route202/scripts.pory"
	walk_left
# 105 "data/maps/Route202/scripts.pory"
	walk_left
# 105 "data/maps/Route202/scripts.pory"
	walk_left
# 105 "data/maps/Route202/scripts.pory"
	walk_left
# 105 "data/maps/Route202/scripts.pory"
	walk_left
# 105 "data/maps/Route202/scripts.pory"
	walk_left
# 105 "data/maps/Route202/scripts.pory"
	walk_up
# 105 "data/maps/Route202/scripts.pory"
	walk_up
# 105 "data/maps/Route202/scripts.pory"
	face_right
	step_end

Route202_EventScript_GoSeeMom_Text_0:
# 71 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}{PLAYER}?!\p"
	.string "Did you tell your family that you're\n"
	.string "helping the professor?\p"
	.string ". . .I bet you didn't, did you?\p"
	.string "I know that you're eager to\n"
	.string "see all kinds of Pokémon.\p"
	.string "But you shouldn't make your mom\n"
	.string "worry like that.$"

Route202_EventScript_GoSeeMom_Text_1:
# 81 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Why don't you go to tell your\n"
	.string "family that the professor asked for\l"
	.string "your help?\p"
	.string "You should do it right away.$"
