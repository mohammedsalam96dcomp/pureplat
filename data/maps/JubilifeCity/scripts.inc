JubilifeCity_MapScripts::
# 7 "data/maps/JubilifeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JubilifeCity_EventScript_OnTransition
	.byte 0


JubilifeCity_EventScript_OnTransition::
# 11 "data/maps/JubilifeCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


JubilifeCity_EventScript_GoToTrainerSchool::
# 15 "data/maps/JubilifeCity/scripts.pory"
	lock
# 17 "data/maps/JubilifeCity/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 19 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 48
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_2
# 21 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_3
# 24 "data/maps/JubilifeCity/scripts.pory"
	setobjectxy 1, 50, 50
JubilifeCity_EventScript_GoToTrainerSchool_1:
# 27 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_0
# 28 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 30 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 31 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_1
# 32 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 33 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 35 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_2
# 36 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 38 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 40 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_8
# 67 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_DP_LUCAS, 0
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
	playbgm MUS_PL_LOOKER, 0
# 134 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_12
# 138 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_13
# 139 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 140 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_33
# 144 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_14
JubilifeCity_EventScript_GoToTrainerSchool_32:
# 148 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_15, MSGBOX_YESNO
# 167 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_37
# 171 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_17
JubilifeCity_EventScript_GoToTrainerSchool_36:
# 178 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_18
# 185 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_14
# 186 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 188 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_19
# 196 "data/maps/JubilifeCity/scripts.pory"
	closemessage
# 198 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_15
# 199 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_15
# 200 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_16
# 201 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 203 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_17
# 204 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_17
# 205 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_18
# 206 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 208 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 209 "data/maps/JubilifeCity/scripts.pory"
	fadedefaultbgm
# 210 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_41
# 215 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_21
# 217 "data/maps/JubilifeCity/scripts.pory"
	closemessage
JubilifeCity_EventScript_GoToTrainerSchool_40:
# 220 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_19
# 221 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_20
# 222 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 224 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_45
# 237 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_24
# 240 "data/maps/JubilifeCity/scripts.pory"
	closemessage
# 241 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_21
# 242 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 243 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_25
# 246 "data/maps/JubilifeCity/scripts.pory"
	closemessage
JubilifeCity_EventScript_GoToTrainerSchool_44:
# 249 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_22
# 250 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_23
# 251 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 253 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_HIDE_DAWN_JUBILIFE_CITY
# 254 "data/maps/JubilifeCity/scripts.pory"
	removeobject 1
# 255 "data/maps/JubilifeCity/scripts.pory"
	removeobject 2
# 257 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_CITY_STATE, 2
# 258 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_LOOKER_STATE, 1
# 259 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_GoToTrainerSchool_2:
# 20 "data/maps/JubilifeCity/scripts.pory"
	setobjectxy 1, 48, 50
	goto JubilifeCity_EventScript_GoToTrainerSchool_1

JubilifeCity_EventScript_GoToTrainerSchool_3:
# 22 "data/maps/JubilifeCity/scripts.pory"
	setobjectxy 1, 49, 50
	goto JubilifeCity_EventScript_GoToTrainerSchool_1

JubilifeCity_EventScript_GoToTrainerSchool_8:
# 41 "data/maps/JubilifeCity/scripts.pory"
	playbgm MUS_DP_DAWN, 0
# 42 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_0
# 44 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 45 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 46 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge JubilifeCity_EventScript_GoToTrainerSchool_17
# 52 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_2
JubilifeCity_EventScript_GoToTrainerSchool_16:
# 58 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_3
# 65 "data/maps/JubilifeCity/scripts.pory"
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
# 47 "data/maps/JubilifeCity/scripts.pory"
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
# 141 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_13
	goto JubilifeCity_EventScript_GoToTrainerSchool_32

JubilifeCity_EventScript_GoToTrainerSchool_37:
# 168 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_16
	goto JubilifeCity_EventScript_GoToTrainerSchool_36

JubilifeCity_EventScript_GoToTrainerSchool_41:
# 211 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_20
# 213 "data/maps/JubilifeCity/scripts.pory"
	closemessage
	goto JubilifeCity_EventScript_GoToTrainerSchool_40

JubilifeCity_EventScript_GoToTrainerSchool_45:
# 225 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_22
# 228 "data/maps/JubilifeCity/scripts.pory"
	closemessage
# 229 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_21
# 230 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 231 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_23
# 235 "data/maps/JubilifeCity/scripts.pory"
	closemessage
	goto JubilifeCity_EventScript_GoToTrainerSchool_44


JubilifeCity_EventScript_LookerVisitSchool::
# 264 "data/maps/JubilifeCity/scripts.pory"
	lock
# 266 "data/maps/JubilifeCity/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 268 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 269 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_0
# 270 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 15
# 271 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 273 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_LookerVisitSchool_Movement_1
# 274 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 0
# 276 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 19
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_2
# 279 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 20
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_3
# 281 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 21
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_4
# 284 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_5
JubilifeCity_EventScript_LookerVisitSchool_1:
# 286 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 15
# 288 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_CITY_STATE, 2
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_10
# 294 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_LookerVisitSchool_Text_1, MSGBOX_AUTOCLOSE
JubilifeCity_EventScript_LookerVisitSchool_9:
# 300 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_LookerVisitSchool_Movement_6
# 301 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 19
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_14
# 303 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 20
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_15
# 305 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 21
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_16
# 308 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_10
JubilifeCity_EventScript_LookerVisitSchool_13:
# 310 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 15
# 312 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_LookerVisitSchool_2:
# 277 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_2
	goto JubilifeCity_EventScript_LookerVisitSchool_1

JubilifeCity_EventScript_LookerVisitSchool_3:
# 280 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_3
	goto JubilifeCity_EventScript_LookerVisitSchool_1

JubilifeCity_EventScript_LookerVisitSchool_4:
# 282 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_4
	goto JubilifeCity_EventScript_LookerVisitSchool_1

JubilifeCity_EventScript_LookerVisitSchool_10:
# 289 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_LookerVisitSchool_Text_0, MSGBOX_AUTOCLOSE
	goto JubilifeCity_EventScript_LookerVisitSchool_9

JubilifeCity_EventScript_LookerVisitSchool_14:
# 302 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_7
	goto JubilifeCity_EventScript_LookerVisitSchool_13

JubilifeCity_EventScript_LookerVisitSchool_15:
# 304 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_8
	goto JubilifeCity_EventScript_LookerVisitSchool_13

JubilifeCity_EventScript_LookerVisitSchool_16:
# 306 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_9
	goto JubilifeCity_EventScript_LookerVisitSchool_13


JubilifeCity_EventScript_PoketchCampaign::
# 316 "data/maps/JubilifeCity/scripts.pory"
	lock
# 318 "data/maps/JubilifeCity/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 320 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_ne JubilifeCity_EventScript_PoketchCampaign_2
JubilifeCity_EventScript_PoketchCampaign_1:
# 325 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 326 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchCampaign_Movement_1
# 327 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 12
# 328 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 330 "data/maps/JubilifeCity/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 332 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 44
	goto_if_eq JubilifeCity_EventScript_PoketchCampaign_5
# 334 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 45
	goto_if_eq JubilifeCity_EventScript_PoketchCampaign_6
# 336 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 46
	goto_if_eq JubilifeCity_EventScript_PoketchCampaign_7
# 338 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 47
	goto_if_eq JubilifeCity_EventScript_PoketchCampaign_8
# 341 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchCampaign_Movement_6
JubilifeCity_EventScript_PoketchCampaign_4:
# 343 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 12
# 345 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_PoketchCampaign_Text_0, MSGBOX_AUTOCLOSE
# 360 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_CITY_STATE, 4
# 361 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_PoketchCampaign_2:
# 321 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_PoketchCampaign_Movement_0
# 322 "data/maps/JubilifeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto JubilifeCity_EventScript_PoketchCampaign_1

JubilifeCity_EventScript_PoketchCampaign_5:
# 333 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchCampaign_Movement_2
	goto JubilifeCity_EventScript_PoketchCampaign_4

JubilifeCity_EventScript_PoketchCampaign_6:
# 335 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchCampaign_Movement_3
	goto JubilifeCity_EventScript_PoketchCampaign_4

JubilifeCity_EventScript_PoketchCampaign_7:
# 337 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchCampaign_Movement_4
	goto JubilifeCity_EventScript_PoketchCampaign_4

JubilifeCity_EventScript_PoketchCampaign_8:
# 339 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchCampaign_Movement_5
	goto JubilifeCity_EventScript_PoketchCampaign_4


JubilifeCity_EventScript_PoketchInventor::
# 365 "data/maps/JubilifeCity/scripts.pory"
	lock
# 366 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 367 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_POKETCH_COUPON_1, JubilifeCity_EventScript_PoketchInventor_5
JubilifeCity_EventScript_PoketchInventor_3:
# 404 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_PoketchInventor_Text_2, MSGBOX_AUTOCLOSE
JubilifeCity_EventScript_PoketchInventor_1:
# 413 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_PoketchInventor_2:
# 368 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_PoketchInventor_Text_0
# 376 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_PoketchInventor_Text_1, MSGBOX_AUTOCLOSE
# 379 "data/maps/JubilifeCity/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 380 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq JubilifeCity_EventScript_PoketchInventor_10
# 383 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq JubilifeCity_EventScript_PoketchInventor_11
# 386 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_PoketchInventor_Movement_3
# 387 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchInventor_Movement_2
JubilifeCity_EventScript_PoketchInventor_9:
# 389 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 12
# 390 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_COUPON_ONE, 1
# 391 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_COUPON_TWO, 1
# 392 "data/maps/JubilifeCity/scripts.pory"
	removeitem ITEM_COUPON_THREE, 1
# 393 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_HIDE_POKETCH_EMPLOYEE_JUBILIFE
# 394 "data/maps/JubilifeCity/scripts.pory"
	removeobject 12
# 396 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_HIDE_JUBILIFE_LOOKER
# 397 "data/maps/JubilifeCity/scripts.pory"
	removeobject 2
# 399 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_LOOKER_STATE, 2
# 400 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_CITY_STATE, 5
# 401 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_ROUTE203_STATE, 1
	goto JubilifeCity_EventScript_PoketchInventor_1

JubilifeCity_EventScript_PoketchInventor_4:
# 367 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_POKETCH_COUPON_3, JubilifeCity_EventScript_PoketchInventor_2
	goto JubilifeCity_EventScript_PoketchInventor_3

JubilifeCity_EventScript_PoketchInventor_5:
# 367 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_POKETCH_COUPON_2, JubilifeCity_EventScript_PoketchInventor_4
	goto JubilifeCity_EventScript_PoketchInventor_3

JubilifeCity_EventScript_PoketchInventor_10:
# 381 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_PoketchInventor_Movement_0
# 382 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchInventor_Movement_1
	goto JubilifeCity_EventScript_PoketchInventor_9

JubilifeCity_EventScript_PoketchInventor_11:
# 384 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchInventor_Movement_2
	goto JubilifeCity_EventScript_PoketchInventor_9


JubilifeCity_EventScript_GameKid1::
# 417 "data/maps/JubilifeCity/scripts.pory"
	lock
# 419 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 420 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GameKid1_Text_0, MSGBOX_AUTOCLOSE
# 422 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_GameKid2::
# 427 "data/maps/JubilifeCity/scripts.pory"
	lock
# 429 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 430 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GameKid2_Text_0, MSGBOX_AUTOCLOSE
# 435 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_OldMan::
# 439 "data/maps/JubilifeCity/scripts.pory"
	lock
# 441 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 442 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_OldMan_Text_0, MSGBOX_YESNO
# 445 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_EventScript_OldMan_2
# 453 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_OldMan_Text_2, MSGBOX_AUTOCLOSE
JubilifeCity_EventScript_OldMan_1:
# 459 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_OldMan_2:
# 446 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_OldMan_Text_1, MSGBOX_AUTOCLOSE
	goto JubilifeCity_EventScript_OldMan_1


JubilifeCity_EventScript_SchoolKid::
# 463 "data/maps/JubilifeCity/scripts.pory"
	lock
# 465 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 466 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_SchoolKid_Text_0, MSGBOX_AUTOCLOSE
# 470 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_OldMan2::
# 474 "data/maps/JubilifeCity/scripts.pory"
	lock
# 476 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 477 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_OldMan2_Text_0, MSGBOX_AUTOCLOSE
# 482 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_LittleGirl::
# 486 "data/maps/JubilifeCity/scripts.pory"
	lock
# 488 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 489 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_LittleGirl_Text_0, MSGBOX_AUTOCLOSE
# 491 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_AceTrainerF::
# 495 "data/maps/JubilifeCity/scripts.pory"
	lock
# 497 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 498 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_AceTrainerF_Text_0, MSGBOX_AUTOCLOSE
# 500 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_AceTrainerM::
# 505 "data/maps/JubilifeCity/scripts.pory"
	lock
# 507 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 508 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_AceTrainerM_Text_0, MSGBOX_AUTOCLOSE
# 514 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_Clown1::
# 518 "data/maps/JubilifeCity/scripts.pory"
	lock
# 519 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 521 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_POKETCH_COUPON_1, JubilifeCity_EventScript_Clown1_2
# 541 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown1Correct
JubilifeCity_EventScript_Clown1_1:
# 543 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_Clown1_2:
# 522 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_0, MSGBOX_YESNO
# 526 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_EventScript_Clown1_5
# 535 "data/maps/JubilifeCity/scripts.pory"
	playse SE_FAILURE
# 536 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_3, MSGBOX_AUTOCLOSE
# 538 "data/maps/JubilifeCity/scripts.pory"
	waitse
	goto JubilifeCity_EventScript_Clown1_1

JubilifeCity_EventScript_Clown1_5:
# 527 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_1
# 529 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown1Correct
# 530 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_2
# 532 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_POKETCH_COUPON_1
# 533 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_COUPON_ONE
	goto JubilifeCity_EventScript_Clown1_1


JubilifeCity_EventScript_Clown2::
# 547 "data/maps/JubilifeCity/scripts.pory"
	lock
# 548 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 550 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_POKETCH_COUPON_2, JubilifeCity_EventScript_Clown2_2
# 568 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown2Correct
JubilifeCity_EventScript_Clown2_1:
# 570 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_Clown2_2:
# 551 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown2_Text_0, MSGBOX_YESNO
# 555 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_EventScript_Clown2_5
# 564 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_3, MSGBOX_AUTOCLOSE
	goto JubilifeCity_EventScript_Clown2_1

JubilifeCity_EventScript_Clown2_5:
# 556 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_1
# 558 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown2Correct
# 559 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_2
# 561 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_COUPON_TWO
# 562 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_POKETCH_COUPON_2
	goto JubilifeCity_EventScript_Clown2_1


JubilifeCity_EventScript_Clown3::
# 574 "data/maps/JubilifeCity/scripts.pory"
	lock
# 576 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 578 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_CITY_STATE, 2
	goto_if_eq JubilifeCity_EventScript_Clown3_2
# 584 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_POKETCH_COUPON_3, JubilifeCity_EventScript_Clown3_5
# 587 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown3_Text_1, MSGBOX_YESNO
# 590 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_EventScript_Clown3_8
# 600 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_3, MSGBOX_AUTOCLOSE
JubilifeCity_EventScript_Clown3_1:
# 605 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_Clown3_2:
# 579 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown3_Text_0, MSGBOX_AUTOCLOSE
	goto JubilifeCity_EventScript_Clown3_1

JubilifeCity_EventScript_Clown3_5:
# 585 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown3Correct
	goto JubilifeCity_EventScript_Clown3_1

JubilifeCity_EventScript_Clown3_8:
# 591 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_1
# 593 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown3Correct
# 594 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_2
# 596 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_COUPON_THREE
# 597 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_POKETCH_COUPON_3
# 598 "data/maps/JubilifeCity/scripts.pory"
	setobjectxyperm 12, 46, 30
	goto JubilifeCity_EventScript_Clown3_1


JubilifeCity_EventScript_Looker::
# 610 "data/maps/JubilifeCity/scripts.pory"
	lock
# 611 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 612 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_CITY_STATE, 4
	goto_if_eq JubilifeCity_EventScript_Looker_2
# 620 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Looker_Text_1, MSGBOX_AUTOCLOSE
JubilifeCity_EventScript_Looker_1:
# 627 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_Looker_2:
# 613 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Looker_Text_0, MSGBOX_AUTOCLOSE
	goto JubilifeCity_EventScript_Looker_1


Jubilifecity_SignScript_Jubilife::
# 652 "data/maps/JubilifeCity/scripts.pory"
	lock
# 653 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilifecity_SignScript_Jubilife_Text_0, MSGBOX_AUTOCLOSE
# 655 "data/maps/JubilifeCity/scripts.pory"
	release
	return


Jubilifecity_SignScript_School::
# 659 "data/maps/JubilifeCity/scripts.pory"
	lock
# 660 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilifecity_SignScript_School_Text_0, MSGBOX_AUTOCLOSE
# 662 "data/maps/JubilifeCity/scripts.pory"
	release
	return


Jubilifecity_SignScript_Condos::
# 666 "data/maps/JubilifeCity/scripts.pory"
	lock
# 667 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilifecity_SignScript_Condos_Text_0, MSGBOX_AUTOCLOSE
# 669 "data/maps/JubilifeCity/scripts.pory"
	release
	return


Jubilifecity_SignScript_Station::
# 673 "data/maps/JubilifeCity/scripts.pory"
	lock
# 674 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilifecity_SignScript_Station_Text_0, MSGBOX_AUTOCLOSE
# 676 "data/maps/JubilifeCity/scripts.pory"
	release
	return


Jubilifecity_SignScript_Poketch::
# 680 "data/maps/JubilifeCity/scripts.pory"
	lock
# 681 "data/maps/JubilifeCity/scripts.pory"
	msgbox Jubilifecity_SignScript_Poketch_Text_0, MSGBOX_AUTOCLOSE
# 683 "data/maps/JubilifeCity/scripts.pory"
	release
	return


# 27 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_0:
# 27 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 27 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 27 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 27 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 27 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 31 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_1:
# 31 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
# 31 "data/maps/JubilifeCity/scripts.pory"
	delay_16
	step_end

# 35 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_2:
# 35 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 35 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 35 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 35 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 35 "data/maps/JubilifeCity/scripts.pory"
	delay_16
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
	walk_right
# 121 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 122 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_10:
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

# 138 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_13:
# 138 "data/maps/JubilifeCity/scripts.pory"
	walk_in_place_up
	step_end

# 185 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_14:
# 185 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 185 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 185 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 185 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 185 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 185 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 185 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 185 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 185 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 198 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_15:
# 198 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 198 "data/maps/JubilifeCity/scripts.pory"
	face_right
	step_end

# 200 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_16:
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 200 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
	step_end

# 203 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_17:
# 203 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 203 "data/maps/JubilifeCity/scripts.pory"
	face_up
	step_end

# 205 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_18:
# 205 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 205 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 205 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 205 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 205 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 205 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 205 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
	step_end

# 220 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_19:
# 220 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 220 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 220 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 220 "data/maps/JubilifeCity/scripts.pory"
	face_left
	step_end

# 221 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_20:
# 221 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 221 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 221 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 221 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 221 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 229 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_21:
# 229 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 229 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 229 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 249 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_22:
# 249 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 249 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 249 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 250 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_23:
# 250 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 250 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 250 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 250 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 250 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 250 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 269 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_0:
# 269 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
# 269 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 269 "data/maps/JubilifeCity/scripts.pory"
	delay_16
	step_end

# 273 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_1:
# 273 "data/maps/JubilifeCity/scripts.pory"
	walk_in_place_left
	step_end

# 277 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_2:
# 277 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 277 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 280 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_3:
# 280 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 280 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 280 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 282 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_4:
# 282 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 282 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 282 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 282 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 284 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_5:
# 284 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 284 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 284 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 284 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 284 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 300 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_6:
# 300 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 302 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_7:
# 302 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 302 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 302 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 304 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_8:
# 304 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 304 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 304 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 304 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 306 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_9:
# 306 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 306 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 306 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 306 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 306 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 308 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_10:
# 308 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 308 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 308 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 308 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 308 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 308 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 321 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchCampaign_Movement_0:
# 321 "data/maps/JubilifeCity/scripts.pory"
	face_up
	step_end

# 326 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchCampaign_Movement_1:
# 326 "data/maps/JubilifeCity/scripts.pory"
	walk_in_place_down
# 326 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
# 326 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 326 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 326 "data/maps/JubilifeCity/scripts.pory"
	delay_16
	step_end

# 333 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchCampaign_Movement_2:
# 333 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 333 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 333 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 333 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 333 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 335 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchCampaign_Movement_3:
# 335 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 335 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 335 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 335 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 337 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchCampaign_Movement_4:
# 337 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 337 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 337 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 339 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchCampaign_Movement_5:
# 339 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 339 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 339 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 339 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 341 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchCampaign_Movement_6:
# 341 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 341 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 341 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 341 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 341 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 381 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchInventor_Movement_0:
# 381 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 381 "data/maps/JubilifeCity/scripts.pory"
	walk_in_place_left
# 381 "data/maps/JubilifeCity/scripts.pory"
	walk_in_place_up
	step_end

# 382 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchInventor_Movement_1:
# 382 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 382 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 382 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 382 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 382 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 382 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 382 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 384 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchInventor_Movement_2:
# 384 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 384 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 384 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 384 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 384 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 384 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 386 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchInventor_Movement_3:
# 386 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 386 "data/maps/JubilifeCity/scripts.pory"
	walk_in_place_up
	step_end

JubilifeCity_EventScript_GoToTrainerSchool_Text_0:
# 42 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hi {PLAYER}!\n"
	.string "Are you catching Pokémon?$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_1:
# 47 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Wow! You've already got {STR_VAR_1} Pokémon\n"
	.string "with you!\p"
	.string "At that pace, your Pokédex should\n"
	.string "be full in no time at all!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_2:
# 52 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}. . .Um. . .\p"
	.string "I think youd'd feel a lot safer if you\n"
	.string "were to catch some more.\p"
	.string "You know, like when you need to travel\n"
	.string "to faraway places.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_3:
# 58 "data/maps/JubilifeCity/scripts.pory"
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
# 134 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_MYSTERIOUS}WHAAAT?!\p"
	.string ". . .How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_13:
# 141 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Huh? What? I beg your pardon?\n"
	.string "I was just making conversation. . .$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_14:
# 144 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Huh? What? Are you kidding\n"
	.string "I was just making small talk. . .$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_15:
# 148 "data/maps/JubilifeCity/scripts.pory"
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
# 168 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Yes, that is correct.\n"
	.string "Taking what belongs to others is wrong.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_17:
# 171 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}No? You claim to not know it?\n"
	.string "How could that be?\p"
	.string "Perhaps your mama has said it, but you\n"
	.string "have forgotten it, like usual?\p"
	.string "Now listen, my friends. It is wrong to\n"
	.string "take what belongs to others.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_18:
# 178 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Unfortunately, there are apparently\n"
	.string "those who do not heed those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the Pokémon of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_19:
# 188 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string ". . .Actually, yes, yes you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no!\n"
	.string "You must inform me of bad guys!\l"
	.string "You must inform me of any happenings!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_20:
# 211 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}. . .Working for the International\n"
	.string "Police must be hard.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_21:
# 215 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}. . .Working for the International\n"
	.string "Police sounds hard.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_22:
# 225 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}{PLAYER}, here it is.\n"
	.string "It's the Trainers School.\l"
	.string "The name says it all!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_23:
# 231 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}I saw your friend {BARRY} go in\n"
	.string "earlier.\p"
	.string "He could still be in there studying.\n"
	.string "OK, bye now!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_24:
# 237 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}{PLAYER}, here we are.\n"
	.string "This is the Trainers School.\l"
	.string "The name says it all!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_25:
# 243 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Your pal {BARRY} went in earlier.\n"
	.string "He might still be studying in there.\p"
	.string "OK, see you around!$"

JubilifeCity_EventScript_LookerVisitSchool_Text_0:
# 289 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Hello, my friend.\n"
	.string "Have you visited the Trainers' School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

JubilifeCity_EventScript_LookerVisitSchool_Text_1:
# 294 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Tell me, have you not obtained\n"
	.string "a Pokétch?\p"
	.string "I believe a Pokétch is now free in\n"
	.string "exchange for some Coupons?$"

JubilifeCity_EventScript_PoketchCampaign_Text_0:
# 345 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, oh, oh?\p"
	.string "You call yourself a Pokémon Trainer?\n"
	.string "And yet you have no Pokétch?\p"
	.string "That is, Pokémon Watch, or Pokétch\n"
	.string "for short!\p"
	.string "Oh my, you are a rare case\n"
	.string "indeed!\p"
	.string "You see, I invented, and now\n"
	.string "manufacture, Pokétches.\p"
	.string "Not only that, I'm now coducting\n"
	.string "the Pokétch promotional campaign!\p"
	.string "All you have to do is find three\n"
	.string "clowns in Jubilife City.\p"
	.string "If you can find them. . .\n"
	.string "I will gift you with a Pokétch!$"

JubilifeCity_EventScript_PoketchInventor_Text_0:
# 368 "data/maps/JubilifeCity/scripts.pory"
	.string "OK, let me count your Coupons!\n"
	.string "I'll use the Pokétch here. . .\p"
	.string "One, two, three!\n"
	.string "Bravo! I say, bravo!\p"
	.string "In return for these Coupons,\n"
	.string "I present you this Pokémon Watch,\l"
	.string "or Pokétch for short!$"

JubilifeCity_EventScript_PoketchInventor_Text_1:
# 376 "data/maps/JubilifeCity/scripts.pory"
	.string "You can add apps to your Pokétch\n"
	.string "to make it even more versatile!$"

JubilifeCity_EventScript_PoketchInventor_Text_2:
# 404 "data/maps/JubilifeCity/scripts.pory"
	.string "The three clowns will each ask you\n"
	.string "a skill-testing question.\p"
	.string "The questions will all have to do\n"
	.string "with Pokémon.\p"
	.string "After all, a Pokétch is a tool for\n"
	.string "Pokémon Trainers.\p"
	.string "Collect a Coupon from each clown,\n"
	.string "then come see me, OK?$"

JubilifeCity_EventScript_GameKid1_Text_0:
# 420 "data/maps/JubilifeCity/scripts.pory"
	.string "I'm trading Pokémon with my buddy!$"

JubilifeCity_EventScript_GameKid2_Text_0:
# 430 "data/maps/JubilifeCity/scripts.pory"
	.string "I made my Pokémon hold an item before\n"
	.string "trading it.\p"
	.string "That will make the other Trainer\n"
	.string "double happy!$"

JubilifeCity_EventScript_OldMan_Text_0:
# 442 "data/maps/JubilifeCity/scripts.pory"
	.string "Hello, Trainer!\n"
	.string "Do you know much about Pokémon?$"

JubilifeCity_EventScript_OldMan_Text_1:
# 446 "data/maps/JubilifeCity/scripts.pory"
	.string "Ah, I see!\n"
	.string "You are knowledgeable!\p"
	.string "I imagine you wouldn't see the need\n"
	.string "to visit the Trainers' School, then.\p"
	.string "But do visit if you have the time.\n"
	.string "You may discover something new!$"

JubilifeCity_EventScript_OldMan_Text_2:
# 453 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, you're not knowledgeable. . .\n"
	.string "But not to worry!\l"
	.string "There's the Trainers' School.\p"
	.string "The school will teach you the\n"
	.string "basics of Pokémon.$"

JubilifeCity_EventScript_SchoolKid_Text_0:
# 466 "data/maps/JubilifeCity/scripts.pory"
	.string "OK, set six Poké Balls in my\n"
	.string "belt. . .\p"
	.string "Yeah, that'll do it. At most, you\n"
	.string "can have six Pokémon with you.$"

JubilifeCity_EventScript_OldMan2_Text_0:
# 477 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife City's built on land they\n"
	.string "carved out of a mountain.\p"
	.string "The people and Pokémon of Oreburgh\n"
	.string "City helped out with that undertaking.$"

JubilifeCity_EventScript_LittleGirl_Text_0:
# 489 "data/maps/JubilifeCity/scripts.pory"
	.string "Did you see me on TV?\n"
	.string "I was in an interview!$"

JubilifeCity_EventScript_AceTrainerF_Text_0:
# 498 "data/maps/JubilifeCity/scripts.pory"
	.string "When you walk with your Pokémon,\n"
	.string "they gradually grow friendlier.$"

JubilifeCity_EventScript_AceTrainerM_Text_0:
# 508 "data/maps/JubilifeCity/scripts.pory"
	.string "Hiya, where'd you come from?\p"
	.string ". . .\p"
	.string "Twinleaf Town, huh. . .\n"
	.string "It's a nice place. Quiet and all.\p"
	.string "Jubilife City is a big place, so it\n"
	.string "might be a bit of a shock to you.$"

JubilifeCity_EventScript_Clown1_Text_0:
# 522 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I'm a Pokétch campaign clown!\n"
	.string "Let's roll out my question!\p"
	.string "Does a Pokémon grow by defeating\n"
	.string "others and gaining Exp. Points?$"

JubilifeCity_EventScript_Clown1_Text_1:
# 527 "data/maps/JubilifeCity/scripts.pory"
	.string "Ding-ding!\n"
	.string "You're absolutely correct!$"

JubilifeCity_EventScript_Clown1_Text_2:
# 530 "data/maps/JubilifeCity/scripts.pory"
	.string "Here you go!\n"
	.string "Your Pokétch Coupon!$"

JubilifeCity_EventScript_Clown1_Text_3:
# 536 "data/maps/JubilifeCity/scripts.pory"
	.string "Bzzzzt!\n"
	.string "That's the wrong answer. . .$"

JubilifeCity_EventScript_Clown2_Text_0:
# 551 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I'm a Pokétch campaign clown!\n"
	.string "Let's roll out my question!\p"
	.string "Just like Pokémon types, the moves\n"
	.string "of Pokémon also have types?$"

JubilifeCity_EventScript_Clown3_Text_0:
# 579 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi, there. You should stick around.\n"
	.string "We're doing a Pokétch campaign soon.\p"
	.string "Before it starts, I think you should\n"
	.string "brush up at the Trainers' School.$"

JubilifeCity_EventScript_Clown3_Text_1:
# 587 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I'm a Pokétch campaign clown!\n"
	.string "Let's roll out my question!\p"
	.string "Can a Pokémon hold an item?$"

JubilifeCity_EventScript_Looker_Text_0:
# 613 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Ah, it is you! Have no fear.\n"
	.string "There are no shady characters about.\p"
	.string "Incidentally, have you not obtained\n"
	.string "a Pokétch?\p"
	.string "I believe a Pokétch is now free in\n"
	.string "exchange for some Coupons?$"

JubilifeCity_EventScript_Looker_Text_1:
# 620 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Ah, it is you! Have no fear.\n"
	.string "There are no shady characters about.\p"
	.string "Incidentally, have you visited the\n"
	.string "Trainers' School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

Jubilifecity_SignScript_Jubilife_Text_0:
# 653 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife City\n"
	.string "City of Joy$"

Jubilifecity_SignScript_School_Text_0:
# 660 "data/maps/JubilifeCity/scripts.pory"
	.string "Trainers' School\n"
	.string "The First Step for Trainers!$"

Jubilifecity_SignScript_Condos_Text_0:
# 667 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife Condominiums\n"
	.string "Tenants Wanted!$"

Jubilifecity_SignScript_Station_Text_0:
# 674 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife TV\n"
	.string "The Fun-and-Games TV Station!$"

Jubilifecity_SignScript_Poketch_Text_0:
# 681 "data/maps/JubilifeCity/scripts.pory"
	.string "The Pokétch Company\n"
	.string "Pokémon Watches for the World!$"

Clown1Correct::
# 629 "data/maps/JubilifeCity/scripts.pory"
	.string "Pokémon grow stronger by defeating\n"
	.string "other Pokémon in battle.\p"
	.string "Some Pokémon even grow into an\n"
	.string "entirely different form in a process\l"
	.string "known as evolution.$"

Clown2Correct::
# 637 "data/maps/JubilifeCity/scripts.pory"
	.string "If the Pokémon's type matches its\n"
	.string "move's type, that move is made much\l"
	.string "more powerful!$"

Clown3Correct::
# 643 "data/maps/JubilifeCity/scripts.pory"
	.string "A Pokémon may hold a single item.\p"
	.string "Some items become effective as soon\n"
	.string "as they are held by a Pokémon.\p"
	.string "Berries are eaten by Pokémon as\n"
	.string "necessary during battle.$"
