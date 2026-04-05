Route201_MapScripts::
	.byte 0


Route201_EventScript_BarryScene1::
# 8 "data/maps/Route201/scripts.pory"
	lock
# 9 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 1
# 10 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 11 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene2::
# 15 "data/maps/Route201/scripts.pory"
	lock
# 16 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 2
# 17 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 18 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene3::
# 22 "data/maps/Route201/scripts.pory"
	lock
# 23 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 3
# 24 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 25 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene4::
# 29 "data/maps/Route201/scripts.pory"
	lock
# 30 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 4
# 31 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 32 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene::
# 37 "data/maps/Route201/scripts.pory"
	lock
# 39 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 40 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route201/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 43 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 44 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route201/scripts.pory"
	waitse
# 46 "data/maps/Route201/scripts.pory"
	delay 30
# 48 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 49 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_0
# 50 "data/maps/Route201/scripts.pory"
	closemessage
# 52 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_1
# 53 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryScene_3
# 55 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryScene_4
# 57 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryScene_5
# 59 "data/maps/Route201/scripts.pory"
	case 4, Route201_EventScript_BarryScene_6
Route201_EventScript_BarryScene_1:
# 62 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 65 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_1
# 67 "data/maps/Route201/scripts.pory"
	closemessage
# 69 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_1
# 70 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryScene_9
# 73 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryScene_10
# 76 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryScene_11
# 79 "data/maps/Route201/scripts.pory"
	case 4, Route201_EventScript_BarryScene_12
Route201_EventScript_BarryScene_7:
# 83 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 85 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 86 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_2
# 97 "data/maps/Route201/scripts.pory"
	closemessage
# 99 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_13
# 100 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 102 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_14
# 103 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 105 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 106 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_3
# 113 "data/maps/Route201/scripts.pory"
	closemessage
# 115 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_13
# 116 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 117 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_15
# 118 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_16
# 119 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 121 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 122 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_4
# 124 "data/maps/Route201/scripts.pory"
	closemessage
# 126 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_17
# 127 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_14
# 128 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_5
# 131 "data/maps/Route201/scripts.pory"
	closemessage
# 133 "data/maps/Route201/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 134 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 135 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 136 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route201/scripts.pory"
	waitse
# 138 "data/maps/Route201/scripts.pory"
	delay 30
# 140 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_18
# 141 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 142 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 144 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_201_ROWAN
# 145 "data/maps/Route201/scripts.pory"
	addobject 2
# 147 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_19
# 148 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 150 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_6
# 161 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_20
# 162 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 164 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_7
# 168 "data/maps/Route201/scripts.pory"
	closemessage
# 170 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_21
# 171 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 172 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 173 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 175 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_8
# 187 "data/maps/Route201/scripts.pory"
	closemessage
# 189 "data/maps/Route201/scripts.pory"
	delay 30
# 190 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_22
# 191 "data/maps/Route201/scripts.pory"
	waitmovement 2
Route201_EventScript_BarryScene_14:
# 194 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_9, MSGBOX_YESNO
# 196 "data/maps/Route201/scripts.pory"
	closemessage
# 197 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route201_EventScript_BarryScene_19
# 215 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_15
# 216 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 218 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_12
Route201_EventScript_BarryScene_17:
# 225 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 226 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_13
# 231 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 232 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 233 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 234 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_14, MSGBOX_YESNO
# 235 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route201_EventScript_BarryScene_22
# 246 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_17
# 251 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 252 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_18
# 253 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 255 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_18
# 280 "data/maps/Route201/scripts.pory"
	release
	return

Route201_EventScript_BarryScene_3:
# 54 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_1
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_4:
# 56 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_2
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_5:
# 58 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_3
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_6:
# 60 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_4
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_9:
# 71 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_5
# 72 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_6
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_10:
# 74 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_7
# 75 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_8
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_11:
# 77 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_9
# 78 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_10
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_12:
# 80 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_11
# 81 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_12
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_19:
# 198 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 199 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 201 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_10
# 204 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 205 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 207 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_11
	goto Route201_EventScript_BarryScene_14

Route201_EventScript_BarryScene_22:
# 236 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_16
# 239 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 240 "data/maps/Route201/scripts.pory"
	waitmovement 1
	goto Route201_EventScript_BarryScene_17


# 39 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_0:
# 39 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 54 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_1:
# 54 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 54 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 54 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 54 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 56 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_2:
# 56 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 56 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 56 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 58 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_3:
# 58 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 60 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_4:
# 60 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 60 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 60 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 71 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_5:
# 71 "data/maps/Route201/scripts.pory"
	walk_up
# 71 "data/maps/Route201/scripts.pory"
	walk_right
# 71 "data/maps/Route201/scripts.pory"
	walk_right
# 71 "data/maps/Route201/scripts.pory"
	walk_right
# 71 "data/maps/Route201/scripts.pory"
	walk_right
# 71 "data/maps/Route201/scripts.pory"
	walk_up
# 71 "data/maps/Route201/scripts.pory"
	walk_up
# 71 "data/maps/Route201/scripts.pory"
	walk_right
# 71 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 72 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_6:
# 72 "data/maps/Route201/scripts.pory"
	walk_up
# 72 "data/maps/Route201/scripts.pory"
	walk_right
# 72 "data/maps/Route201/scripts.pory"
	walk_right
# 72 "data/maps/Route201/scripts.pory"
	walk_right
# 72 "data/maps/Route201/scripts.pory"
	walk_right
# 72 "data/maps/Route201/scripts.pory"
	walk_up
# 72 "data/maps/Route201/scripts.pory"
	walk_up
# 72 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 74 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_7:
# 74 "data/maps/Route201/scripts.pory"
	walk_up
# 74 "data/maps/Route201/scripts.pory"
	walk_right
# 74 "data/maps/Route201/scripts.pory"
	walk_right
# 74 "data/maps/Route201/scripts.pory"
	walk_right
# 74 "data/maps/Route201/scripts.pory"
	walk_up
# 74 "data/maps/Route201/scripts.pory"
	walk_up
# 74 "data/maps/Route201/scripts.pory"
	walk_right
# 74 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 75 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_8:
# 75 "data/maps/Route201/scripts.pory"
	walk_up
# 75 "data/maps/Route201/scripts.pory"
	walk_right
# 75 "data/maps/Route201/scripts.pory"
	walk_right
# 75 "data/maps/Route201/scripts.pory"
	walk_right
# 75 "data/maps/Route201/scripts.pory"
	walk_up
# 75 "data/maps/Route201/scripts.pory"
	walk_up
# 75 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 77 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_9:
# 77 "data/maps/Route201/scripts.pory"
	walk_up
# 77 "data/maps/Route201/scripts.pory"
	walk_right
# 77 "data/maps/Route201/scripts.pory"
	walk_right
# 77 "data/maps/Route201/scripts.pory"
	walk_up
# 77 "data/maps/Route201/scripts.pory"
	walk_up
# 77 "data/maps/Route201/scripts.pory"
	walk_right
# 77 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 78 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_10:
# 78 "data/maps/Route201/scripts.pory"
	walk_up
# 78 "data/maps/Route201/scripts.pory"
	walk_right
# 78 "data/maps/Route201/scripts.pory"
	walk_right
# 78 "data/maps/Route201/scripts.pory"
	walk_up
# 78 "data/maps/Route201/scripts.pory"
	walk_up
# 78 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 80 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_11:
# 80 "data/maps/Route201/scripts.pory"
	walk_up
# 80 "data/maps/Route201/scripts.pory"
	walk_right
# 80 "data/maps/Route201/scripts.pory"
	walk_up
# 80 "data/maps/Route201/scripts.pory"
	walk_up
# 80 "data/maps/Route201/scripts.pory"
	walk_right
# 80 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 81 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_12:
# 81 "data/maps/Route201/scripts.pory"
	walk_up
# 81 "data/maps/Route201/scripts.pory"
	walk_right
# 81 "data/maps/Route201/scripts.pory"
	walk_up
# 81 "data/maps/Route201/scripts.pory"
	walk_up
# 81 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 99 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_13:
# 99 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 102 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_14:
# 102 "data/maps/Route201/scripts.pory"
	walk_in_place_up
	step_end

# 117 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_15:
# 117 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 118 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_16:
# 118 "data/maps/Route201/scripts.pory"
	walk_left
# 118 "data/maps/Route201/scripts.pory"
	walk_left
# 118 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 126 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_17:
# 126 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 126 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 126 "data/maps/Route201/scripts.pory"
	walk_fast_right
	step_end

# 140 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_18:
# 140 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 147 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_19:
# 147 "data/maps/Route201/scripts.pory"
	walk_right
# 147 "data/maps/Route201/scripts.pory"
	walk_right
# 147 "data/maps/Route201/scripts.pory"
	walk_right
# 147 "data/maps/Route201/scripts.pory"
	walk_right
# 147 "data/maps/Route201/scripts.pory"
	walk_right
# 147 "data/maps/Route201/scripts.pory"
	walk_right
# 147 "data/maps/Route201/scripts.pory"
	walk_right
# 147 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 161 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_20:
# 161 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 170 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_21:
# 170 "data/maps/Route201/scripts.pory"
	walk_left
# 170 "data/maps/Route201/scripts.pory"
	walk_left
# 170 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 190 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_22:
# 190 "data/maps/Route201/scripts.pory"
	walk_right
# 190 "data/maps/Route201/scripts.pory"
	walk_right
# 190 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

Route201_EventScript_BarryScene_Text_0:
# 49 "data/maps/Route201/scripts.pory"
	.string "Too slow!$"

Route201_EventScript_BarryScene_Text_1:
# 65 "data/maps/Route201/scripts.pory"
	.string "All right!\n"
	.string "Let's get moving to Prof. Rowan's lab.$"

Route201_EventScript_BarryScene_Text_2:
# 86 "data/maps/Route201/scripts.pory"
	.string ". . .\n"
	.string ". . .\p"
	.string "What?\n"
	.string "Don't go into the grass, right?\l"
	.string "No worries! No problem!\p"
	.string "It doesn't matter that we don't have\n"
	.string "any Pokémon.\p"
	.string "Trust me on this one.\n"
	.string "I've got an idea!\p"
	.string "Now listen. You know how wild Pokémon\n"
	.string "jump out when you go into tall grass?$"

Route201_EventScript_BarryScene_Text_3:
# 106 "data/maps/Route201/scripts.pory"
	.string "So, what you do is, you scoot over to\n"
	.string "the next patch of grass before any\l"
	.string "wild Pokémon can appear!\p"
	.string "If we just keep dashing, we can get to\n"
	.string "Sandgem Town without running into\l"
	.string "wild Pokémon!\p"
	.string "OK, stick with me!$"

Route201_EventScript_BarryScene_Text_4:
# 122 "data/maps/Route201/scripts.pory"
	.string "OK, here goes!\p"
	.string "On your marks. . .$"

Route201_EventScript_BarryScene_Text_5:
# 130 "data/maps/Route201/scripts.pory"
	.string "HOLD IT!$"

Route201_EventScript_BarryScene_Text_6:
# 150 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}You two don't seem to have\n"
	.string "any Pokémon between you?\p"
	.string "Then, what is the meaning of going into\n"
	.string "the tall grass?!\p"
	.string "{SPEAKER NAME_BARRY}. . .\n"
	.string ". . .\p"
	.string "{SPEAKER NAME_PROFESSOR}. . .\n"
	.string ". . .\p"
	.string ". . .\n"
	.string ". . .$"

Route201_EventScript_BarryScene_Text_7:
# 164 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey, {PLAYER}.\n"
	.string "This old guy. . .\p"
	.string "It's Prof. Rowan, isn't it?\n"
	.string "What's he doing here. . .?$"

Route201_EventScript_BarryScene_Text_8:
# 175 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}. . .\n"
	.string ". . .\p"
	.string "They tried to go into the tall grass\n"
	.string "because they wanted Pokémon. . .\p"
	.string "Hmm. . . \n"
	.string "What to do. . .?\p"
	.string "Their world would surely change if\n"
	.string "they were to meet Pokémon. . .\p"
	.string "Is it right for me to put them on that\n"
	.string "path. . .?\p"
	.string ". . .\n"
	.string ". . .$"

Route201_EventScript_BarryScene_Text_9:
# 194 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}You two.\n"
	.string "You truly love Pokémon, do you?$"

Route201_EventScript_BarryScene_Text_10:
# 201 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Whoa, hold up!\n"
	.string "You're not making any sense here!$"

Route201_EventScript_BarryScene_Text_11:
# 207 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}Er-hem!\p"
	.string "I didn't quite catch that, so I will\n"
	.string "ask you again.$"

Route201_EventScript_BarryScene_Text_12:
# 218 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Me, too!\n"
	.string "I love Pokémon, too!\p"
	.string "{SPEAKER NAME_PROFESSOR}I will ask you once again.\p"
	.string "You two.\n"
	.string "You truly love Pokémon, do you?$"

Route201_EventScript_BarryScene_Text_13:
# 226 "data/maps/Route201/scripts.pory"
	.string "What?!\n"
	.string "You can ask a hundred times!\l"
	.string "The answer will never change!\p"
	.string "We'll both answer a hundred times\n"
	.string "we love Pokémon!$"

Route201_EventScript_BarryScene_Text_14:
# 234 "data/maps/Route201/scripts.pory"
	.string "Right, {PLAYER}?$"

Route201_EventScript_BarryScene_Text_15:
# 236 "data/maps/Route201/scripts.pory"
	.string ". . .\n$"

Route201_EventScript_BarryScene_Text_16:
# 238 "data/maps/Route201/scripts.pory"
	.string "That joke's getting old!$"

Route201_EventScript_BarryScene_Text_17:
# 246 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}. . .A pair of reckless kids\n"
	.string "who foolishly try to enter tall grass\l"
	.string "without Pokémon of their own. . .?\p"
	.string "It worries what people like that\n"
	.string "would do with Pokémon.$"

Route201_EventScript_BarryScene_Text_18:
# 255 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}. . .Uh. . .\n"
	.string "Well, I, uh. . .\p"
	.string ". . .\n"
	.string ". . .\p"
	.string "Well, then forget about me, but give\n"
	.string "a Pokémon to my friend here!\p"
	.string "I mean, it was me who tried to get into\n"
	.string "the tall grass and all. . .\p"
	.string "{SPEAKER NAME_PROFESSOR}!\p"
	.string "How big of you. . .\p"
	.string "Very well, then!\n"
	.string "I will entrust you two with Pokémon!\p"
	.string "I apologize for putting you through\n"
	.string "that exercise.\p"
	.string "However!\p"
	.string "You must promise me that you will never\n"
	.string "recklessly endanger yourselves again.\p"
	.string "Now, then. . .\p"
	.string "Hm?\n"
	.string "Now, where. . .?$"
