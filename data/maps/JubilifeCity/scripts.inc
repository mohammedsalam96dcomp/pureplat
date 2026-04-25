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
	playse SE_PIN
# 33 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_1
# 34 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 35 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 37 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_2
# 38 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 40 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 42 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_8
# 68 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_4
# 70 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 71 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 72 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge JubilifeCity_EventScript_GoToTrainerSchool_21
# 76 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_6
JubilifeCity_EventScript_GoToTrainerSchool_20:
# 83 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_7
# 89 "data/maps/JubilifeCity/scripts.pory"
	closemessage
JubilifeCity_EventScript_GoToTrainerSchool_7:
# 92 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 45
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_12
# 96 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 47
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_13
JubilifeCity_EventScript_GoToTrainerSchool_11:
# 102 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_7
# 103 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_7
# 104 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 106 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 108 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_25
# 113 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_9
# 115 "data/maps/JubilifeCity/scripts.pory"
	closemessage
JubilifeCity_EventScript_GoToTrainerSchool_24:
# 118 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_8
# 119 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 121 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_9
# 122 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_10
# 123 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_11
# 124 "data/maps/JubilifeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 126 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_29
# 129 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_11, MSGBOX_AUTOCLOSE
JubilifeCity_EventScript_GoToTrainerSchool_28:
# 131 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_12
# 132 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 133 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_12
# 137 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_13
# 138 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 139 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_33
# 143 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_14
JubilifeCity_EventScript_GoToTrainerSchool_32:
# 147 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_15, MSGBOX_YESNO
# 166 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_37
# 170 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_17
JubilifeCity_EventScript_GoToTrainerSchool_36:
# 177 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_18
# 184 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_14
# 185 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 187 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_19
# 195 "data/maps/JubilifeCity/scripts.pory"
	closemessage
# 197 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_15
# 198 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_15
# 199 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_16
# 200 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 202 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_17
# 203 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_17
# 204 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_18
# 205 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 207 "data/maps/JubilifeCity/scripts.pory"
	removeobject 2
# 208 "data/maps/JubilifeCity/scripts.pory"
	setobjectxyperm 2, 58, 16
# 210 "data/maps/JubilifeCity/scripts.pory"
	turnobject 2, DIR_SOUTH
# 212 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 214 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_41
# 219 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_21
# 221 "data/maps/JubilifeCity/scripts.pory"
	closemessage
JubilifeCity_EventScript_GoToTrainerSchool_40:
# 224 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_19
# 225 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_20
# 226 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 228 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_45
# 241 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_24
# 244 "data/maps/JubilifeCity/scripts.pory"
	closemessage
# 245 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_21
# 246 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 247 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_25
# 250 "data/maps/JubilifeCity/scripts.pory"
	closemessage
JubilifeCity_EventScript_GoToTrainerSchool_44:
# 253 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_22
# 254 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_23
# 255 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 257 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_HIDE_DAWN_JUBILIFE_CITY
# 258 "data/maps/JubilifeCity/scripts.pory"
	removeobject 1
# 260 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_CITY_STATE, 2
# 262 "data/maps/JubilifeCity/scripts.pory"
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
# 43 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_0
# 45 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 46 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 47 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge JubilifeCity_EventScript_GoToTrainerSchool_17
# 53 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_2
JubilifeCity_EventScript_GoToTrainerSchool_16:
# 59 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_3
# 66 "data/maps/JubilifeCity/scripts.pory"
	closemessage
	goto JubilifeCity_EventScript_GoToTrainerSchool_7

JubilifeCity_EventScript_GoToTrainerSchool_12:
# 93 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_3
# 94 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_4
# 95 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
	goto JubilifeCity_EventScript_GoToTrainerSchool_11

JubilifeCity_EventScript_GoToTrainerSchool_13:
# 97 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_5
# 98 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_6
# 99 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
	goto JubilifeCity_EventScript_GoToTrainerSchool_11

JubilifeCity_EventScript_GoToTrainerSchool_17:
# 48 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_1
	goto JubilifeCity_EventScript_GoToTrainerSchool_16

JubilifeCity_EventScript_GoToTrainerSchool_21:
# 73 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_5
	goto JubilifeCity_EventScript_GoToTrainerSchool_20

JubilifeCity_EventScript_GoToTrainerSchool_25:
# 109 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_8
# 111 "data/maps/JubilifeCity/scripts.pory"
	closemessage
	goto JubilifeCity_EventScript_GoToTrainerSchool_24

JubilifeCity_EventScript_GoToTrainerSchool_29:
# 127 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_10, MSGBOX_AUTOCLOSE
	goto JubilifeCity_EventScript_GoToTrainerSchool_28

JubilifeCity_EventScript_GoToTrainerSchool_33:
# 140 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_13
	goto JubilifeCity_EventScript_GoToTrainerSchool_32

JubilifeCity_EventScript_GoToTrainerSchool_37:
# 167 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_16
	goto JubilifeCity_EventScript_GoToTrainerSchool_36

JubilifeCity_EventScript_GoToTrainerSchool_41:
# 215 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_20
# 217 "data/maps/JubilifeCity/scripts.pory"
	closemessage
	goto JubilifeCity_EventScript_GoToTrainerSchool_40

JubilifeCity_EventScript_GoToTrainerSchool_45:
# 229 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_22
# 232 "data/maps/JubilifeCity/scripts.pory"
	closemessage
# 233 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_21
# 234 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 235 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_23
# 239 "data/maps/JubilifeCity/scripts.pory"
	closemessage
	goto JubilifeCity_EventScript_GoToTrainerSchool_44


JubilifeCity_EventScript_LookerVisitSchool::
# 267 "data/maps/JubilifeCity/scripts.pory"
	lock
# 269 "data/maps/JubilifeCity/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 271 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 272 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_LookerVisitSchool_Movement_0
# 273 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 274 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 276 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_LookerVisitSchool_Movement_1
# 277 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 0
# 279 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 17
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_2
# 282 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 18
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_3
# 284 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 19
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_4
# 287 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_LookerVisitSchool_Movement_5
JubilifeCity_EventScript_LookerVisitSchool_1:
# 289 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 291 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_LookerVisitSchool_Text_0, MSGBOX_AUTOCLOSE
# 296 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_LookerVisitSchool_Movement_6
# 297 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 17
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_10
# 299 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 18
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_11
# 301 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 19
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_12
# 304 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_LookerVisitSchool_Movement_10
JubilifeCity_EventScript_LookerVisitSchool_9:
# 306 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 308 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_LookerVisitSchool_2:
# 280 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_LookerVisitSchool_Movement_2
	goto JubilifeCity_EventScript_LookerVisitSchool_1

JubilifeCity_EventScript_LookerVisitSchool_3:
# 283 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_LookerVisitSchool_Movement_3
	goto JubilifeCity_EventScript_LookerVisitSchool_1

JubilifeCity_EventScript_LookerVisitSchool_4:
# 285 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_LookerVisitSchool_Movement_4
	goto JubilifeCity_EventScript_LookerVisitSchool_1

JubilifeCity_EventScript_LookerVisitSchool_10:
# 298 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_LookerVisitSchool_Movement_7
	goto JubilifeCity_EventScript_LookerVisitSchool_9

JubilifeCity_EventScript_LookerVisitSchool_11:
# 300 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_LookerVisitSchool_Movement_8
	goto JubilifeCity_EventScript_LookerVisitSchool_9

JubilifeCity_EventScript_LookerVisitSchool_12:
# 302 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_LookerVisitSchool_Movement_9
	goto JubilifeCity_EventScript_LookerVisitSchool_9


JubilifeCity_EventScript_GameKid1::
# 315 "data/maps/JubilifeCity/scripts.pory"
	lock
# 317 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 318 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GameKid1_Text_0, MSGBOX_AUTOCLOSE
# 320 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_GameKid2::
# 325 "data/maps/JubilifeCity/scripts.pory"
	lock
# 327 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 328 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GameKid2_Text_0, MSGBOX_AUTOCLOSE
# 333 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_OldMan::
# 337 "data/maps/JubilifeCity/scripts.pory"
	lock
# 339 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 340 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_OldMan_Text_0, MSGBOX_YESNO
# 343 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_EventScript_OldMan_2
# 351 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_OldMan_Text_2, MSGBOX_AUTOCLOSE
JubilifeCity_EventScript_OldMan_1:
# 357 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_OldMan_2:
# 344 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_OldMan_Text_1, MSGBOX_AUTOCLOSE
	goto JubilifeCity_EventScript_OldMan_1


JubilifeCity_EventScript_SchoolKid::
# 361 "data/maps/JubilifeCity/scripts.pory"
	lock
# 363 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 364 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_SchoolKid_Text_0, MSGBOX_AUTOCLOSE
# 368 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_OldMan2::
# 372 "data/maps/JubilifeCity/scripts.pory"
	lock
# 374 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 375 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_OldMan2_Text_0, MSGBOX_AUTOCLOSE
# 380 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_LittleGirl::
# 384 "data/maps/JubilifeCity/scripts.pory"
	lock
# 386 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 387 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_LittleGirl_Text_0, MSGBOX_AUTOCLOSE
# 389 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_AceTrainerF::
# 393 "data/maps/JubilifeCity/scripts.pory"
	lock
# 395 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 396 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_AceTrainerF_Text_0, MSGBOX_AUTOCLOSE
# 398 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_AceTrainerM::
# 403 "data/maps/JubilifeCity/scripts.pory"
	lock
# 405 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 406 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_AceTrainerM_Text_0, MSGBOX_AUTOCLOSE
# 412 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_Clown1::
# 416 "data/maps/JubilifeCity/scripts.pory"
	lock
# 418 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 420 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_CITY_STATE, 2
	goto_if_eq JubilifeCity_EventScript_Clown1_2
JubilifeCity_EventScript_Clown1_1:
# 426 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_Clown1_2:
# 421 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_0, MSGBOX_AUTOCLOSE
	goto JubilifeCity_EventScript_Clown1_1


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
	step_end

# 33 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_1:
# 33 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
# 33 "data/maps/JubilifeCity/scripts.pory"
	delay_16
	step_end

# 37 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_2:
# 37 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 37 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 37 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 37 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 93 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_3:
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 93 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 94 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_4:
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 94 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 97 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_5:
# 97 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 97 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 98 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_6:
# 98 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 98 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 102 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_7:
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 102 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 118 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_8:
# 118 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 118 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 118 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 118 "data/maps/JubilifeCity/scripts.pory"
	face_down
# 118 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 118 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 118 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 118 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 118 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 118 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 118 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 118 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 118 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 118 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 118 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 118 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 118 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 118 "data/maps/JubilifeCity/scripts.pory"
	face_up
# 118 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 118 "data/maps/JubilifeCity/scripts.pory"
	delay_16
	step_end

# 121 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_9:
# 121 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 121 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 121 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 121 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 122 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_10:
# 122 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 122 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 123 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_11:
# 123 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 123 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 123 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 123 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 123 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
	step_end

# 131 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_12:
# 131 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
# 131 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 137 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_13:
# 137 "data/maps/JubilifeCity/scripts.pory"
	walk_in_place_up
	step_end

# 184 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_14:
# 184 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 184 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 184 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 184 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 184 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 184 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 184 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 184 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 184 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 197 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_15:
# 197 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 197 "data/maps/JubilifeCity/scripts.pory"
	face_right
	step_end

# 199 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_16:
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 199 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
	step_end

# 202 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_17:
# 202 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 202 "data/maps/JubilifeCity/scripts.pory"
	face_up
	step_end

# 204 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_18:
# 204 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 204 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 204 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
	step_end

# 224 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_19:
# 224 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 224 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 224 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 224 "data/maps/JubilifeCity/scripts.pory"
	face_left
	step_end

# 225 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_20:
# 225 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 225 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 225 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 225 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 225 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 233 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_21:
# 233 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 233 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 233 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 253 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_22:
# 253 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 253 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 253 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 254 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_23:
# 254 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 254 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 254 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 254 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 254 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 254 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 272 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_0:
# 272 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
# 272 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 272 "data/maps/JubilifeCity/scripts.pory"
	delay_16
	step_end

# 276 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_1:
# 276 "data/maps/JubilifeCity/scripts.pory"
	walk_in_place_left
	step_end

# 280 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_2:
# 280 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 280 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 283 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_3:
# 283 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 283 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 283 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 285 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_4:
# 285 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 285 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 285 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 285 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 287 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_5:
# 287 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 287 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 287 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 287 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 287 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 296 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_6:
# 296 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 298 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_7:
# 298 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 298 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 298 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 300 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_8:
# 300 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 300 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 300 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 300 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 302 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_9:
# 302 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 302 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 302 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 302 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 302 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 304 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_10:
# 304 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 304 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 304 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 304 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 304 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 304 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

JubilifeCity_EventScript_GoToTrainerSchool_Text_0:
# 43 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hi {PLAYER}!\n"
	.string "Are you catching Pokémon?$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_1:
# 48 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Wow! You've already got {STR_VAR_1} Pokémon\n"
	.string "with you!\p"
	.string "At that pace, your Pokédex should\n"
	.string "be full in no time at all!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_2:
# 53 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}. . .Um. . .\p"
	.string "I think youd'd feel a lot safer if you\n"
	.string "were to catch some more.\p"
	.string "You know, like when you need to travel\n"
	.string "to faraway places.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_3:
# 59 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Oh, I know! Don't you think its\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "I know just the place.\p"
	.string "Come on!\n"
	.string "Don't be shy. Follow me!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_4:
# 68 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hey, {PLAYER}!\n"
	.string "How many Pokémon have you caught?$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_5:
# 73 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Whoa!\n"
	.string "You already have {STR_VAR_1} with you!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_6:
# 76 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Huh?\n"
	.string "I think you should catch some more.\p"
	.string "It might be more of a challenge\n"
	.string "raising a lot of Pokémon. . .\p"
	.string "But it's worth it. The more Pokémon\n"
	.string "you have, the happier you'll be.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_7:
# 83 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hey, that's right! Don't you think it's\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "There's this great place for that.\p"
	.string "Come on! It's all right.\n"
	.string "Follow me.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_8:
# 109 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}That man. . .\n"
	.string "What is he doing?$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_9:
# 113 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}That guy. . .\n"
	.string "What's he doing?$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_10:
# 127 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Umm. . .$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_11:
# 129 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Uh, excuse. . .$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_12:
# 133 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_MYSTERIOUS}WHAAAT?!\p"
	.string ". . .How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_13:
# 140 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Huh? What? I beg your pardon?\n"
	.string "I was just making conversation. . .$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_14:
# 143 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Huh? What? Are you kidding\n"
	.string "I was just making small talk. . .$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_15:
# 147 "data/maps/JubilifeCity/scripts.pory"
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
# 167 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Yes, that is correct.\n"
	.string "Taking what belongs to others is wrong.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_17:
# 170 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}No? You claim to not know it?\n"
	.string "How could that be?\p"
	.string "Perhaps your mama has said it, but you\n"
	.string "have forgotten it, like usual?\p"
	.string "Now listen, my friends. It is wrong to\n"
	.string "take what belongs to others.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_18:
# 177 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Unfortunately, there are apparently\n"
	.string "those who do not heed those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the Pokémon of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_19:
# 187 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string ". . .Actually, yes, yes you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no!\n"
	.string "You must inform me of bad guys!\l"
	.string "You must inform me of any happenings!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_20:
# 215 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}. . .Working for the International\n"
	.string "Police must be hard.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_21:
# 219 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}. . .Working for the International\n"
	.string "Police sounds hard.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_22:
# 229 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}{PLAYER}, here it is.\n"
	.string "It's the Trainers School.\l"
	.string "The name says it all!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_23:
# 235 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}I saw your friend {BARRY} go in\n"
	.string "earlier.\p"
	.string "He could still be in there studying.\n"
	.string "OK, bye now!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_24:
# 241 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}{PLAYER}, here we are.\n"
	.string "This is the Trainers School.\l"
	.string "The name says it all!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_25:
# 247 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Your pal {BARRY} went in earlier.\n"
	.string "He might still be studying in there.\p"
	.string "OK, see you around!$"

JubilifeCity_EventScript_LookerVisitSchool_Text_0:
# 291 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Hello, my friend.\n"
	.string "Have you visited the Trainers' School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

JubilifeCity_EventScript_GameKid1_Text_0:
# 318 "data/maps/JubilifeCity/scripts.pory"
	.string "I'm trading Pokémon with my buddy!$"

JubilifeCity_EventScript_GameKid2_Text_0:
# 328 "data/maps/JubilifeCity/scripts.pory"
	.string "I made my Pokémon hold an item before\n"
	.string "trading it.\p"
	.string "That will make the other Trainer\n"
	.string "double happy!$"

JubilifeCity_EventScript_OldMan_Text_0:
# 340 "data/maps/JubilifeCity/scripts.pory"
	.string "Hello, Trainer!\n"
	.string "Do you know much about Pokémon?$"

JubilifeCity_EventScript_OldMan_Text_1:
# 344 "data/maps/JubilifeCity/scripts.pory"
	.string "Ah, I see!\n"
	.string "You are knowledgeable!\p"
	.string "I imagine you wouldn't see the need\n"
	.string "to visit the Trainers' School, then.\p"
	.string "But do visit if you have the time.\n"
	.string "You may discover something new!$"

JubilifeCity_EventScript_OldMan_Text_2:
# 351 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, you're not knowledgeable. . .\n"
	.string "But not to worry!\l"
	.string "There's the Trainers' School.\p"
	.string "The school will teach you the\n"
	.string "basics of Pokémon.$"

JubilifeCity_EventScript_SchoolKid_Text_0:
# 364 "data/maps/JubilifeCity/scripts.pory"
	.string "OK, set six Poké Balls in my\n"
	.string "belt. . .\p"
	.string "Yeah, that'll do it. At most, you\n"
	.string "can have six Pokémon with you.$"

JubilifeCity_EventScript_OldMan2_Text_0:
# 375 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife City's built on land they\n"
	.string "carved out of a mountain.\p"
	.string "The people and Pokémon of Oreburgh\n"
	.string "City helped out with that undertaking.$"

JubilifeCity_EventScript_LittleGirl_Text_0:
# 387 "data/maps/JubilifeCity/scripts.pory"
	.string "Did you see me on TV?\n"
	.string "I was in an interview!$"

JubilifeCity_EventScript_AceTrainerF_Text_0:
# 396 "data/maps/JubilifeCity/scripts.pory"
	.string "When you walk with your Pokémon,\n"
	.string "they gradually grow friendlier.$"

JubilifeCity_EventScript_AceTrainerM_Text_0:
# 406 "data/maps/JubilifeCity/scripts.pory"
	.string "Hiya, where'd you come from?\p"
	.string ". . .\p"
	.string "Twinleaf Town, huh. . .\n"
	.string "It's a nice place. Quiet and all.\p"
	.string "Jubilife City is a big place, so it\n"
	.string "might be a bit of a shock to you.$"

JubilifeCity_EventScript_Clown1_Text_0:
# 421 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi, there. You should stick around.\n"
	.string "We're doing a Pokétch campaign soon.\p"
	.string "Before it starts, I think you should\n"
	.string "brush up at the Trainers' School.$"
