JubilifeCity_MapScripts::
# 5 "data/maps/JubilifeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JubilifeCity_EventScript_OnTransition
	.byte 0


JubilifeCity_EventScript_OnTransition::
# 9 "data/maps/JubilifeCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 10 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_CITY_STATE, 2
	goto_if_eq JubilifeCity_EventScript_OnTransition_1
	return

JubilifeCity_EventScript_OnTransition_1:
# 11 "data/maps/JubilifeCity/scripts.pory"
	setobjectxyperm 2, 58, 16
# 12 "data/maps/JubilifeCity/scripts.pory"
	turnobject 2, DIR_SOUTH
	return


JubilifeCity_EventScript_GoToTrainerSchool::
# 17 "data/maps/JubilifeCity/scripts.pory"
	lock
# 19 "data/maps/JubilifeCity/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 21 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 45
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_2
# 23 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 46
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_3
# 26 "data/maps/JubilifeCity/scripts.pory"
	setobjectxy 1, 47, 48
JubilifeCity_EventScript_GoToTrainerSchool_1:
# 29 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_0
# 30 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 32 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 34 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_8
# 60 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_4
# 62 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 63 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 64 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge JubilifeCity_EventScript_GoToTrainerSchool_21
# 68 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_6
JubilifeCity_EventScript_GoToTrainerSchool_20:
# 75 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_7
# 81 "data/maps/JubilifeCity/scripts.pory"
	closemessage
JubilifeCity_EventScript_GoToTrainerSchool_7:
# 84 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 45
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_12
# 88 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 47
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_13
JubilifeCity_EventScript_GoToTrainerSchool_11:
# 94 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_5
# 95 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_5
# 96 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 98 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 100 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_25
# 105 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_9
# 107 "data/maps/JubilifeCity/scripts.pory"
	closemessage
JubilifeCity_EventScript_GoToTrainerSchool_24:
# 110 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_6
# 111 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 113 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_7
# 114 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_8
# 115 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_9
# 116 "data/maps/JubilifeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 118 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_29
# 121 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_11, MSGBOX_AUTOCLOSE
JubilifeCity_EventScript_GoToTrainerSchool_28:
# 123 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_10
# 124 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 125 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_12
# 129 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_11
# 130 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 131 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_33
# 135 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_14
JubilifeCity_EventScript_GoToTrainerSchool_32:
# 139 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_15, MSGBOX_YESNO
# 158 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_37
# 162 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_17
JubilifeCity_EventScript_GoToTrainerSchool_36:
# 169 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_18
# 176 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_12
# 177 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 179 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_19
# 187 "data/maps/JubilifeCity/scripts.pory"
	closemessage
# 189 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_13
# 190 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_13
# 191 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_14
# 192 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 194 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_15
# 195 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_15
# 196 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_16
# 197 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 199 "data/maps/JubilifeCity/scripts.pory"
	removeobject 2
# 200 "data/maps/JubilifeCity/scripts.pory"
	setobjectxyperm 2, 58, 16
# 202 "data/maps/JubilifeCity/scripts.pory"
	turnobject 2, DIR_SOUTH
# 204 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 206 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_41
# 211 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_21
# 213 "data/maps/JubilifeCity/scripts.pory"
	closemessage
JubilifeCity_EventScript_GoToTrainerSchool_40:
# 216 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_17
# 217 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_18
# 218 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 220 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_45
# 233 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_24
# 236 "data/maps/JubilifeCity/scripts.pory"
	closemessage
# 237 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_19
# 238 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 239 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_25
# 242 "data/maps/JubilifeCity/scripts.pory"
	closemessage
JubilifeCity_EventScript_GoToTrainerSchool_44:
# 245 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_20
# 246 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_21
# 247 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 249 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_HIDE_DAWN_JUBILIFE_CITY
# 250 "data/maps/JubilifeCity/scripts.pory"
	removeobject 1
# 252 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_CITY_STATE, 2
# 254 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_GoToTrainerSchool_2:
# 22 "data/maps/JubilifeCity/scripts.pory"
	setobjectxy 1, 45, 48
	goto JubilifeCity_EventScript_GoToTrainerSchool_1

JubilifeCity_EventScript_GoToTrainerSchool_3:
# 24 "data/maps/JubilifeCity/scripts.pory"
	setobjectxy 1, 46, 48
	goto JubilifeCity_EventScript_GoToTrainerSchool_1

JubilifeCity_EventScript_GoToTrainerSchool_8:
# 35 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_0
# 37 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 38 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 39 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge JubilifeCity_EventScript_GoToTrainerSchool_17
# 45 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_2
JubilifeCity_EventScript_GoToTrainerSchool_16:
# 51 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_3
# 58 "data/maps/JubilifeCity/scripts.pory"
	closemessage
	goto JubilifeCity_EventScript_GoToTrainerSchool_7

JubilifeCity_EventScript_GoToTrainerSchool_12:
# 85 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_1
# 86 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_2
# 87 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
	goto JubilifeCity_EventScript_GoToTrainerSchool_11

JubilifeCity_EventScript_GoToTrainerSchool_13:
# 89 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_3
# 90 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_4
# 91 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
	goto JubilifeCity_EventScript_GoToTrainerSchool_11

JubilifeCity_EventScript_GoToTrainerSchool_17:
# 40 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_1
	goto JubilifeCity_EventScript_GoToTrainerSchool_16

JubilifeCity_EventScript_GoToTrainerSchool_21:
# 65 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_5
	goto JubilifeCity_EventScript_GoToTrainerSchool_20

JubilifeCity_EventScript_GoToTrainerSchool_25:
# 101 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_8
# 103 "data/maps/JubilifeCity/scripts.pory"
	closemessage
	goto JubilifeCity_EventScript_GoToTrainerSchool_24

JubilifeCity_EventScript_GoToTrainerSchool_29:
# 119 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_10, MSGBOX_AUTOCLOSE
	goto JubilifeCity_EventScript_GoToTrainerSchool_28

JubilifeCity_EventScript_GoToTrainerSchool_33:
# 132 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_13
	goto JubilifeCity_EventScript_GoToTrainerSchool_32

JubilifeCity_EventScript_GoToTrainerSchool_37:
# 159 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_16
	goto JubilifeCity_EventScript_GoToTrainerSchool_36

JubilifeCity_EventScript_GoToTrainerSchool_41:
# 207 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_20
# 209 "data/maps/JubilifeCity/scripts.pory"
	closemessage
	goto JubilifeCity_EventScript_GoToTrainerSchool_40

JubilifeCity_EventScript_GoToTrainerSchool_45:
# 221 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_22
# 224 "data/maps/JubilifeCity/scripts.pory"
	closemessage
# 225 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_19
# 226 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 227 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_23
# 231 "data/maps/JubilifeCity/scripts.pory"
	closemessage
	goto JubilifeCity_EventScript_GoToTrainerSchool_44


# 29 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_0:
# 29 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 29 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 29 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 29 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 29 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 29 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
# 29 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 29 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 29 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 29 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 29 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 85 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_1:
# 85 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 85 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 86 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_2:
# 86 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 86 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 89 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_3:
# 89 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 89 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 90 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_4:
# 90 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 90 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 94 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_5:
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 110 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_6:
# 110 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 110 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 110 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 110 "data/maps/JubilifeCity/scripts.pory"
	face_down
# 110 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 110 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 110 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 110 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 110 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 110 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 110 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 110 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 110 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 110 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 110 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 110 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 110 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 110 "data/maps/JubilifeCity/scripts.pory"
	face_up
# 110 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 110 "data/maps/JubilifeCity/scripts.pory"
	delay_16
	step_end

# 113 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_7:
# 113 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 113 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 113 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 113 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 114 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_8:
# 114 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 114 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 115 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_9:
# 115 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 115 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 115 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 115 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 115 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
	step_end

# 123 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_10:
# 123 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
# 123 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 129 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_11:
# 129 "data/maps/JubilifeCity/scripts.pory"
	walk_in_place_up
	step_end

# 176 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_12:
# 176 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 176 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 176 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 176 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 176 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 176 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 176 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 176 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 176 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 189 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_13:
# 189 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 189 "data/maps/JubilifeCity/scripts.pory"
	face_right
	step_end

# 191 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_14:
# 191 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 191 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 191 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
	step_end

# 194 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_15:
# 194 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 194 "data/maps/JubilifeCity/scripts.pory"
	face_up
	step_end

# 196 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_16:
# 196 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 196 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 196 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 196 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 196 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 196 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 196 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
	step_end

# 216 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_17:
# 216 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 216 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 216 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 216 "data/maps/JubilifeCity/scripts.pory"
	face_left
	step_end

# 217 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_18:
# 217 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 217 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 217 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 217 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 217 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 225 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_19:
# 225 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 225 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 225 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 245 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_20:
# 245 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 245 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 245 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 246 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_21:
# 246 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 246 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 246 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 246 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 246 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 246 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

JubilifeCity_EventScript_GoToTrainerSchool_Text_0:
# 35 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hi {PLAYER}!\n"
	.string "Are you catching Pokémon?$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_1:
# 40 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Wow! You've already got {STR_VAR_1} Pokémon\n"
	.string "with you!\p"
	.string "At that pace, your Pokédex should\n"
	.string "be full in no time at all!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_2:
# 45 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}. . .Um. . .\p"
	.string "I think youd'd feel a lot safer if you\n"
	.string "were to catch some more.\p"
	.string "You know, like when you need to travel\n"
	.string "to faraway places.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_3:
# 51 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Oh, I know! Don't you think its\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "I know just the place.\p"
	.string "Come on!\n"
	.string "Don't be shy. Follow me!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_4:
# 60 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hey, {PLAYER}!\n"
	.string "How many Pokémon have you caught?$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_5:
# 65 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Whoa!\n"
	.string "You already have {STR_VAR_1} with you!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_6:
# 68 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Huh?\n"
	.string "I think you should catch some more.\p"
	.string "It might be more of a challenge\n"
	.string "raising a lot of Pokémon. . .\p"
	.string "But it's worth it. The more Pokémon\n"
	.string "you have, the happier you'll be.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_7:
# 75 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hey, that's right! Don't you think it's\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "There's this great place for that.\p"
	.string "Come on! It's all right.\n"
	.string "Follow me.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_8:
# 101 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}That man. . .\n"
	.string "What is he doing?$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_9:
# 105 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}That guy. . .\n"
	.string "What's he doing?$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_10:
# 119 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Umm. . .$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_11:
# 121 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Uh, excuse. . .$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_12:
# 125 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_MYSTERIOUS}WHAAAT?!\p"
	.string ". . .How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_13:
# 132 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Huh? What? I beg your pardon?\n"
	.string "I was just making conversation. . .$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_14:
# 135 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Huh? What? Are you kidding\n"
	.string "I was just making small talk. . .$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_15:
# 139 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_MYSTERIOUS}. . .Heh. You claim you were\n"
	.string "only making conversation, do you?\p"
	.string "But, I know better not to believe that.\n"
	.string "No, no, no.\p"
	.string "You recognized right away that I was\n"
	.string "someone extraordinary.\p"
	.string "That is why you spoke to me, is it not?\n"
	.string "Your power of observation is fearsome!\p"
	.string "Quite admirable, you are!\p"
	.string "Now that my cover has been blown, let\n"
	.string "me introduce myself.\p"
	.string "I am a globe-trotting elite of the\n"
	.string "International Police.\p"
	.string "My name. . . Ah, no, I shall inform you\n"
	.string "only of my code name.\p"
	.string "{SPEAKER NAME_LOOKER}My code name, it is Looker.\n"
	.string "It is what they all call me.\p"
	.string "Incidentally, is the saying,  “Don't be\n"
	.string "a thief!” familiar to you?$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_16:
# 159 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Yes, that is correct.\n"
	.string "Taking what belongs to others is wrong.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_17:
# 162 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}No? You claim to not know it?\n"
	.string "How could that be?\p"
	.string "Perhaps your mama has said it, but you\n"
	.string "have forgotten it, like usual?\p"
	.string "Now listen, my friends. It is wrong to\n"
	.string "take what belongs to others.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_18:
# 169 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Unfortunately, there are apparently\n"
	.string "those who do not heed those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the Pokémon of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_19:
# 179 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string ". . .Actually, yes, yes you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no!\n"
	.string "You must inform me of bad guys!\l"
	.string "You must inform me of any happenings!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_20:
# 207 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}. . .Working for the International\n"
	.string "Police must be hard.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_21:
# 211 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}. . .Working for the International\n"
	.string "Police sounds hard.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_22:
# 221 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}{PLAYER}, here it is.\n"
	.string "It's the Trainers School.\l"
	.string "The name says it all!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_23:
# 227 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}I saw your friend {BARRY} go in\n"
	.string "earlier.\p"
	.string "He could still be in there studying.\n"
	.string "OK, bye now!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_24:
# 233 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}{PLAYER}, here we are.\n"
	.string "This is the Trainers School.\l"
	.string "The name says it all!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_25:
# 239 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Your pal {BARRY} went in earlier.\n"
	.string "He might still be studying in there.\p"
	.string "OK, see you around!$"
