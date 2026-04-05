Route201_MapScripts::
# 6 "data/maps/Route201/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route201_EventScript_OnTransition
	.byte 0


Route201_EventScript_OnTransition::
# 10 "data/maps/Route201/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


Route201_EventScript_BarryScene1::
# 14 "data/maps/Route201/scripts.pory"
	lock
# 15 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 1
# 16 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 17 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene2::
# 21 "data/maps/Route201/scripts.pory"
	lock
# 22 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 2
# 23 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 24 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene3::
# 28 "data/maps/Route201/scripts.pory"
	lock
# 29 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 3
# 30 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 31 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene4::
# 35 "data/maps/Route201/scripts.pory"
	lock
# 36 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 4
# 37 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 38 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene::
# 43 "data/maps/Route201/scripts.pory"
	lock
# 45 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 46 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route201/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 49 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 50 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route201/scripts.pory"
	waitse
# 52 "data/maps/Route201/scripts.pory"
	delay 30
# 54 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 55 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_0
# 56 "data/maps/Route201/scripts.pory"
	closemessage
# 58 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_1
# 59 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryScene_3
# 61 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryScene_4
# 63 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryScene_5
# 65 "data/maps/Route201/scripts.pory"
	case 4, Route201_EventScript_BarryScene_6
Route201_EventScript_BarryScene_1:
# 68 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 71 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_1
# 73 "data/maps/Route201/scripts.pory"
	closemessage
# 75 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_1
# 76 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryScene_9
# 79 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryScene_10
# 82 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryScene_11
# 85 "data/maps/Route201/scripts.pory"
	case 4, Route201_EventScript_BarryScene_12
Route201_EventScript_BarryScene_7:
# 89 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 91 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 92 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_2
# 103 "data/maps/Route201/scripts.pory"
	closemessage
# 105 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_13
# 106 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 107 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 108 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_14
# 109 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 111 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 112 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_3
# 119 "data/maps/Route201/scripts.pory"
	closemessage
# 121 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_13
# 122 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 123 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_15
# 124 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_16
# 125 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 127 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 128 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_4
# 130 "data/maps/Route201/scripts.pory"
	closemessage
# 132 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_17
# 133 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_14
# 134 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_5
# 137 "data/maps/Route201/scripts.pory"
	closemessage
# 139 "data/maps/Route201/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 140 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 141 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 142 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 143 "data/maps/Route201/scripts.pory"
	waitse
# 144 "data/maps/Route201/scripts.pory"
	delay 30
# 146 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_18
# 147 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 148 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 150 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_201_ROWAN
# 151 "data/maps/Route201/scripts.pory"
	addobject 2
# 153 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_19
# 154 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 156 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_6
# 167 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_20
# 168 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 170 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_7
# 174 "data/maps/Route201/scripts.pory"
	closemessage
# 176 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_21
# 177 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 178 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 179 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 181 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_8
# 193 "data/maps/Route201/scripts.pory"
	closemessage
# 195 "data/maps/Route201/scripts.pory"
	delay 30
# 196 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_22
# 197 "data/maps/Route201/scripts.pory"
	waitmovement 2
Route201_EventScript_BarryScene_14:
# 200 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_9, MSGBOX_YESNO
# 202 "data/maps/Route201/scripts.pory"
	closemessage
# 203 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route201_EventScript_BarryScene_19
# 221 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_15
# 222 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 224 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_12
Route201_EventScript_BarryScene_17:
# 231 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 232 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_13
# 237 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 238 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 239 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 240 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_14, MSGBOX_YESNO
# 241 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route201_EventScript_BarryScene_22
# 252 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_16
# 257 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 258 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_18
# 259 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 261 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_17
# 282 "data/maps/Route201/scripts.pory"
	closemessage
# 284 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_23
# 285 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 287 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_201_DAWN
# 288 "data/maps/Route201/scripts.pory"
	addobject 3
# 290 "data/maps/Route201/scripts.pory"
	applymovement 3, Route201_EventScript_BarryScene_Movement_24
# 291 "data/maps/Route201/scripts.pory"
	waitmovement 3
# 293 "data/maps/Route201/scripts.pory"
	release
	return

Route201_EventScript_BarryScene_3:
# 60 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_1
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_4:
# 62 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_2
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_5:
# 64 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_3
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_6:
# 66 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_4
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_9:
# 77 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_5
# 78 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_6
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_10:
# 80 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_7
# 81 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_8
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_11:
# 83 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_9
# 84 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_10
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_12:
# 86 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_11
# 87 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_12
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_19:
# 204 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 205 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 207 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_10
# 210 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 211 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 213 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_11
	goto Route201_EventScript_BarryScene_14

Route201_EventScript_BarryScene_22:
# 242 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 243 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_15
# 245 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 246 "data/maps/Route201/scripts.pory"
	waitmovement 1
	goto Route201_EventScript_BarryScene_17


# 45 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_0:
# 45 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 60 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_1:
# 60 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 60 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 60 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 60 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 62 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_2:
# 62 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 62 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 62 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 64 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_3:
# 64 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 66 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_4:
# 66 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 66 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 66 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 77 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_5:
# 77 "data/maps/Route201/scripts.pory"
	walk_up
# 77 "data/maps/Route201/scripts.pory"
	walk_right
# 77 "data/maps/Route201/scripts.pory"
	walk_right
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
Route201_EventScript_BarryScene_Movement_6:
# 78 "data/maps/Route201/scripts.pory"
	walk_up
# 78 "data/maps/Route201/scripts.pory"
	walk_right
# 78 "data/maps/Route201/scripts.pory"
	walk_right
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
Route201_EventScript_BarryScene_Movement_7:
# 80 "data/maps/Route201/scripts.pory"
	walk_up
# 80 "data/maps/Route201/scripts.pory"
	walk_right
# 80 "data/maps/Route201/scripts.pory"
	walk_right
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
Route201_EventScript_BarryScene_Movement_8:
# 81 "data/maps/Route201/scripts.pory"
	walk_up
# 81 "data/maps/Route201/scripts.pory"
	walk_right
# 81 "data/maps/Route201/scripts.pory"
	walk_right
# 81 "data/maps/Route201/scripts.pory"
	walk_right
# 81 "data/maps/Route201/scripts.pory"
	walk_up
# 81 "data/maps/Route201/scripts.pory"
	walk_up
# 81 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 83 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_9:
# 83 "data/maps/Route201/scripts.pory"
	walk_up
# 83 "data/maps/Route201/scripts.pory"
	walk_right
# 83 "data/maps/Route201/scripts.pory"
	walk_right
# 83 "data/maps/Route201/scripts.pory"
	walk_up
# 83 "data/maps/Route201/scripts.pory"
	walk_up
# 83 "data/maps/Route201/scripts.pory"
	walk_right
# 83 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 84 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_10:
# 84 "data/maps/Route201/scripts.pory"
	walk_up
# 84 "data/maps/Route201/scripts.pory"
	walk_right
# 84 "data/maps/Route201/scripts.pory"
	walk_right
# 84 "data/maps/Route201/scripts.pory"
	walk_up
# 84 "data/maps/Route201/scripts.pory"
	walk_up
# 84 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 86 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_11:
# 86 "data/maps/Route201/scripts.pory"
	walk_up
# 86 "data/maps/Route201/scripts.pory"
	walk_right
# 86 "data/maps/Route201/scripts.pory"
	walk_up
# 86 "data/maps/Route201/scripts.pory"
	walk_up
# 86 "data/maps/Route201/scripts.pory"
	walk_right
# 86 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 87 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_12:
# 87 "data/maps/Route201/scripts.pory"
	walk_up
# 87 "data/maps/Route201/scripts.pory"
	walk_right
# 87 "data/maps/Route201/scripts.pory"
	walk_up
# 87 "data/maps/Route201/scripts.pory"
	walk_up
# 87 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 105 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_13:
# 105 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 108 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_14:
# 108 "data/maps/Route201/scripts.pory"
	walk_in_place_up
	step_end

# 123 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_15:
# 123 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 124 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_16:
# 124 "data/maps/Route201/scripts.pory"
	walk_left
# 124 "data/maps/Route201/scripts.pory"
	walk_left
# 124 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 132 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_17:
# 132 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 132 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 132 "data/maps/Route201/scripts.pory"
	walk_fast_right
	step_end

# 146 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_18:
# 146 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 153 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_19:
# 153 "data/maps/Route201/scripts.pory"
	walk_right
# 153 "data/maps/Route201/scripts.pory"
	walk_right
# 153 "data/maps/Route201/scripts.pory"
	walk_right
# 153 "data/maps/Route201/scripts.pory"
	walk_right
# 153 "data/maps/Route201/scripts.pory"
	walk_right
# 153 "data/maps/Route201/scripts.pory"
	walk_right
# 153 "data/maps/Route201/scripts.pory"
	walk_right
# 153 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 167 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_20:
# 167 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 176 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_21:
# 176 "data/maps/Route201/scripts.pory"
	walk_left
# 176 "data/maps/Route201/scripts.pory"
	walk_left
# 176 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 196 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_22:
# 196 "data/maps/Route201/scripts.pory"
	walk_right
# 196 "data/maps/Route201/scripts.pory"
	walk_right
# 196 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 284 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_23:
# 284 "data/maps/Route201/scripts.pory"
	face_left
# 284 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 290 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_24:
# 290 "data/maps/Route201/scripts.pory"
	walk_right
# 290 "data/maps/Route201/scripts.pory"
	walk_right
# 290 "data/maps/Route201/scripts.pory"
	walk_right
# 290 "data/maps/Route201/scripts.pory"
	walk_right
# 290 "data/maps/Route201/scripts.pory"
	walk_right
# 290 "data/maps/Route201/scripts.pory"
	walk_right
# 290 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

Route201_EventScript_BarryScene_Text_0:
# 55 "data/maps/Route201/scripts.pory"
	.string "Too slow!$"

Route201_EventScript_BarryScene_Text_1:
# 71 "data/maps/Route201/scripts.pory"
	.string "All right!\n"
	.string "Let's get moving to Prof. Rowan's lab.$"

Route201_EventScript_BarryScene_Text_2:
# 92 "data/maps/Route201/scripts.pory"
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
# 112 "data/maps/Route201/scripts.pory"
	.string "So, what you do is, you scoot over to\n"
	.string "the next patch of grass before any\l"
	.string "wild Pokémon can appear!\p"
	.string "If we just keep dashing, we can get to\n"
	.string "Sandgem Town without running into\l"
	.string "wild Pokémon!\p"
	.string "OK, stick with me!$"

Route201_EventScript_BarryScene_Text_4:
# 128 "data/maps/Route201/scripts.pory"
	.string "OK, here goes!\p"
	.string "On your marks. . .$"

Route201_EventScript_BarryScene_Text_5:
# 136 "data/maps/Route201/scripts.pory"
	.string "HOLD IT!$"

Route201_EventScript_BarryScene_Text_6:
# 156 "data/maps/Route201/scripts.pory"
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
# 170 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey, {PLAYER}.\n"
	.string "This old guy. . .\p"
	.string "It's Prof. Rowan, isn't it?\n"
	.string "What's he doing here. . .?$"

Route201_EventScript_BarryScene_Text_8:
# 181 "data/maps/Route201/scripts.pory"
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
# 200 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}You two.\n"
	.string "You truly love Pokémon, do you?$"

Route201_EventScript_BarryScene_Text_10:
# 207 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Whoa, hold up!\n"
	.string "You're not making any sense here!$"

Route201_EventScript_BarryScene_Text_11:
# 213 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}Er-hem!\p"
	.string "I didn't quite catch that, so I will\n"
	.string "ask you again.$"

Route201_EventScript_BarryScene_Text_12:
# 224 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Me, too!\n"
	.string "I love Pokémon, too!\p"
	.string "{SPEAKER NAME_PROFESSOR}I will ask you once again.\p"
	.string "You two.\n"
	.string "You truly love Pokémon, do you?$"

Route201_EventScript_BarryScene_Text_13:
# 232 "data/maps/Route201/scripts.pory"
	.string "What?!\n"
	.string "You can ask a hundred times!\l"
	.string "The answer will never change!\p"
	.string "We'll both answer a hundred times\n"
	.string "we love Pokémon!$"

Route201_EventScript_BarryScene_Text_14:
# 240 "data/maps/Route201/scripts.pory"
	.string "Right, {PLAYER}?$"

Route201_EventScript_BarryScene_Text_15:
# 243 "data/maps/Route201/scripts.pory"
	.string ". . .\n"
	.string "That joke's getting old!$"

Route201_EventScript_BarryScene_Text_16:
# 252 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}. . .A pair of reckless kids\n"
	.string "who foolishly try to enter tall grass\l"
	.string "without Pokémon of their own. . .?\p"
	.string "It worries what people like that\n"
	.string "would do with Pokémon.$"

Route201_EventScript_BarryScene_Text_17:
# 261 "data/maps/Route201/scripts.pory"
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
