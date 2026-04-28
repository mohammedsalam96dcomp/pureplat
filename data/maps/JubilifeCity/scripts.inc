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
	compare VAR_TEMP_1, 45
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_2
# 21 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 46
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_3
# 24 "data/maps/JubilifeCity/scripts.pory"
	setobjectxy 1, 47, 48
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
# 66 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_4
# 68 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 69 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 70 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge JubilifeCity_EventScript_GoToTrainerSchool_21
# 74 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_6
JubilifeCity_EventScript_GoToTrainerSchool_20:
# 81 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_7
# 87 "data/maps/JubilifeCity/scripts.pory"
	closemessage
JubilifeCity_EventScript_GoToTrainerSchool_7:
# 90 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 45
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_12
# 94 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 47
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_13
JubilifeCity_EventScript_GoToTrainerSchool_11:
# 100 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_7
# 101 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_7
# 102 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 104 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 106 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_25
# 111 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_9
# 113 "data/maps/JubilifeCity/scripts.pory"
	closemessage
JubilifeCity_EventScript_GoToTrainerSchool_24:
# 116 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_8
# 117 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 119 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_9
# 120 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_10
# 121 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_11
# 122 "data/maps/JubilifeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 124 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_29
# 127 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_11, MSGBOX_AUTOCLOSE
JubilifeCity_EventScript_GoToTrainerSchool_28:
# 129 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_12
# 130 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 131 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_12
# 135 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_13
# 136 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 137 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_33
# 141 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_14
JubilifeCity_EventScript_GoToTrainerSchool_32:
# 145 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_15, MSGBOX_YESNO
# 164 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_37
# 168 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_17
JubilifeCity_EventScript_GoToTrainerSchool_36:
# 175 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_18
# 182 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_14
# 183 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 185 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_19
# 193 "data/maps/JubilifeCity/scripts.pory"
	closemessage
# 195 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_15
# 196 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_15
# 197 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_16
# 198 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 200 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_17
# 201 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_17
# 202 "data/maps/JubilifeCity/scripts.pory"
	applymovement 2, JubilifeCity_EventScript_GoToTrainerSchool_Movement_18
# 203 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 2
# 205 "data/maps/JubilifeCity/scripts.pory"
	checkplayergender
# 207 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_41
# 212 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_21
# 214 "data/maps/JubilifeCity/scripts.pory"
	closemessage
JubilifeCity_EventScript_GoToTrainerSchool_40:
# 217 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_19
# 218 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_20
# 219 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 221 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq JubilifeCity_EventScript_GoToTrainerSchool_45
# 234 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_24
# 237 "data/maps/JubilifeCity/scripts.pory"
	closemessage
# 238 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_21
# 239 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 240 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_25
# 243 "data/maps/JubilifeCity/scripts.pory"
	closemessage
JubilifeCity_EventScript_GoToTrainerSchool_44:
# 246 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_22
# 247 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_23
# 248 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 250 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_HIDE_DAWN_JUBILIFE_CITY
# 251 "data/maps/JubilifeCity/scripts.pory"
	removeobject 1
# 252 "data/maps/JubilifeCity/scripts.pory"
	removeobject 2
# 254 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_CITY_STATE, 2
# 255 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_LOOKER_STATE, 1
# 256 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_GoToTrainerSchool_2:
# 20 "data/maps/JubilifeCity/scripts.pory"
	setobjectxy 1, 45, 48
	goto JubilifeCity_EventScript_GoToTrainerSchool_1

JubilifeCity_EventScript_GoToTrainerSchool_3:
# 22 "data/maps/JubilifeCity/scripts.pory"
	setobjectxy 1, 46, 48
	goto JubilifeCity_EventScript_GoToTrainerSchool_1

JubilifeCity_EventScript_GoToTrainerSchool_8:
# 41 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_0
# 43 "data/maps/JubilifeCity/scripts.pory"
	getpartysize
# 44 "data/maps/JubilifeCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 45 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge JubilifeCity_EventScript_GoToTrainerSchool_17
# 51 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_2
JubilifeCity_EventScript_GoToTrainerSchool_16:
# 57 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_3
# 64 "data/maps/JubilifeCity/scripts.pory"
	closemessage
	goto JubilifeCity_EventScript_GoToTrainerSchool_7

JubilifeCity_EventScript_GoToTrainerSchool_12:
# 91 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_3
# 92 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_4
# 93 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
	goto JubilifeCity_EventScript_GoToTrainerSchool_11

JubilifeCity_EventScript_GoToTrainerSchool_13:
# 95 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_GoToTrainerSchool_Movement_5
# 96 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_6
# 97 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
	goto JubilifeCity_EventScript_GoToTrainerSchool_11

JubilifeCity_EventScript_GoToTrainerSchool_17:
# 46 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_1
	goto JubilifeCity_EventScript_GoToTrainerSchool_16

JubilifeCity_EventScript_GoToTrainerSchool_21:
# 71 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_5
	goto JubilifeCity_EventScript_GoToTrainerSchool_20

JubilifeCity_EventScript_GoToTrainerSchool_25:
# 107 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_8
# 109 "data/maps/JubilifeCity/scripts.pory"
	closemessage
	goto JubilifeCity_EventScript_GoToTrainerSchool_24

JubilifeCity_EventScript_GoToTrainerSchool_29:
# 125 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_10, MSGBOX_AUTOCLOSE
	goto JubilifeCity_EventScript_GoToTrainerSchool_28

JubilifeCity_EventScript_GoToTrainerSchool_33:
# 138 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_13
	goto JubilifeCity_EventScript_GoToTrainerSchool_32

JubilifeCity_EventScript_GoToTrainerSchool_37:
# 165 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_16
	goto JubilifeCity_EventScript_GoToTrainerSchool_36

JubilifeCity_EventScript_GoToTrainerSchool_41:
# 208 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_20
# 210 "data/maps/JubilifeCity/scripts.pory"
	closemessage
	goto JubilifeCity_EventScript_GoToTrainerSchool_40

JubilifeCity_EventScript_GoToTrainerSchool_45:
# 222 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_22
# 225 "data/maps/JubilifeCity/scripts.pory"
	closemessage
# 226 "data/maps/JubilifeCity/scripts.pory"
	applymovement 1, JubilifeCity_EventScript_GoToTrainerSchool_Movement_21
# 227 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 1
# 228 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GoToTrainerSchool_Text_23
# 232 "data/maps/JubilifeCity/scripts.pory"
	closemessage
	goto JubilifeCity_EventScript_GoToTrainerSchool_44


JubilifeCity_EventScript_LookerVisitSchool::
# 261 "data/maps/JubilifeCity/scripts.pory"
	lock
# 263 "data/maps/JubilifeCity/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 265 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 266 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_0
# 267 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 15
# 268 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 270 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_LookerVisitSchool_Movement_1
# 271 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 0
# 273 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 17
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_2
# 276 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 18
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_3
# 278 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 19
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_4
# 281 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_5
JubilifeCity_EventScript_LookerVisitSchool_1:
# 283 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 15
# 285 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_CITY_STATE, 2
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_10
# 291 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_LookerVisitSchool_Text_1, MSGBOX_AUTOCLOSE
JubilifeCity_EventScript_LookerVisitSchool_9:
# 297 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_LookerVisitSchool_Movement_6
# 298 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 17
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_14
# 300 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 18
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_15
# 302 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_2, 19
	goto_if_eq JubilifeCity_EventScript_LookerVisitSchool_16
# 305 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_10
JubilifeCity_EventScript_LookerVisitSchool_13:
# 307 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 15
# 309 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_LookerVisitSchool_2:
# 274 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_2
	goto JubilifeCity_EventScript_LookerVisitSchool_1

JubilifeCity_EventScript_LookerVisitSchool_3:
# 277 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_3
	goto JubilifeCity_EventScript_LookerVisitSchool_1

JubilifeCity_EventScript_LookerVisitSchool_4:
# 279 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_4
	goto JubilifeCity_EventScript_LookerVisitSchool_1

JubilifeCity_EventScript_LookerVisitSchool_10:
# 286 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_LookerVisitSchool_Text_0, MSGBOX_AUTOCLOSE
	goto JubilifeCity_EventScript_LookerVisitSchool_9

JubilifeCity_EventScript_LookerVisitSchool_14:
# 299 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_7
	goto JubilifeCity_EventScript_LookerVisitSchool_13

JubilifeCity_EventScript_LookerVisitSchool_15:
# 301 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_8
	goto JubilifeCity_EventScript_LookerVisitSchool_13

JubilifeCity_EventScript_LookerVisitSchool_16:
# 303 "data/maps/JubilifeCity/scripts.pory"
	applymovement 15, JubilifeCity_EventScript_LookerVisitSchool_Movement_9
	goto JubilifeCity_EventScript_LookerVisitSchool_13


JubilifeCity_EventScript_PoketchCampaign::
# 313 "data/maps/JubilifeCity/scripts.pory"
	lock
# 315 "data/maps/JubilifeCity/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 317 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_ne JubilifeCity_EventScript_PoketchCampaign_2
JubilifeCity_EventScript_PoketchCampaign_1:
# 322 "data/maps/JubilifeCity/scripts.pory"
	playse SE_PIN
# 323 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchCampaign_Movement_1
# 324 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 12
# 325 "data/maps/JubilifeCity/scripts.pory"
	waitse
# 327 "data/maps/JubilifeCity/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 329 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 44
	goto_if_eq JubilifeCity_EventScript_PoketchCampaign_5
# 331 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 45
	goto_if_eq JubilifeCity_EventScript_PoketchCampaign_6
# 333 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 46
	goto_if_eq JubilifeCity_EventScript_PoketchCampaign_7
# 335 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_TEMP_1, 47
	goto_if_eq JubilifeCity_EventScript_PoketchCampaign_8
# 338 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchCampaign_Movement_6
JubilifeCity_EventScript_PoketchCampaign_4:
# 340 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 12
# 342 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_PoketchCampaign_Text_0, MSGBOX_AUTOCLOSE
# 357 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_CITY_STATE, 4
# 358 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_PoketchCampaign_2:
# 318 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_PoketchCampaign_Movement_0
# 319 "data/maps/JubilifeCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto JubilifeCity_EventScript_PoketchCampaign_1

JubilifeCity_EventScript_PoketchCampaign_5:
# 330 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchCampaign_Movement_2
	goto JubilifeCity_EventScript_PoketchCampaign_4

JubilifeCity_EventScript_PoketchCampaign_6:
# 332 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchCampaign_Movement_3
	goto JubilifeCity_EventScript_PoketchCampaign_4

JubilifeCity_EventScript_PoketchCampaign_7:
# 334 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchCampaign_Movement_4
	goto JubilifeCity_EventScript_PoketchCampaign_4

JubilifeCity_EventScript_PoketchCampaign_8:
# 336 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchCampaign_Movement_5
	goto JubilifeCity_EventScript_PoketchCampaign_4


JubilifeCity_EventScript_PoketchInventor::
# 362 "data/maps/JubilifeCity/scripts.pory"
	lock
# 363 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 364 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_POKETCH_COUPON_1, JubilifeCity_EventScript_PoketchInventor_5
JubilifeCity_EventScript_PoketchInventor_3:
# 398 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_PoketchInventor_Text_2, MSGBOX_AUTOCLOSE
JubilifeCity_EventScript_PoketchInventor_1:
# 407 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_PoketchInventor_2:
# 365 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_PoketchInventor_Text_0
# 373 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_PoketchInventor_Text_1, MSGBOX_AUTOCLOSE
# 376 "data/maps/JubilifeCity/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 377 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq JubilifeCity_EventScript_PoketchInventor_10
# 380 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq JubilifeCity_EventScript_PoketchInventor_11
# 383 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_PoketchInventor_Movement_3
# 384 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchInventor_Movement_2
JubilifeCity_EventScript_PoketchInventor_9:
# 386 "data/maps/JubilifeCity/scripts.pory"
	waitmovement 12
# 388 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_HIDE_POKETCH_EMPLOYEE_JUBILIFE
# 389 "data/maps/JubilifeCity/scripts.pory"
	removeobject 12
# 391 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_HIDE_JUBILIFE_LOOKER
# 392 "data/maps/JubilifeCity/scripts.pory"
	removeobject 2
# 394 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_LOOKER_STATE, 2
# 395 "data/maps/JubilifeCity/scripts.pory"
	setvar VAR_JUBILIFE_CITY_STATE, 5
	goto JubilifeCity_EventScript_PoketchInventor_1

JubilifeCity_EventScript_PoketchInventor_4:
# 364 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_POKETCH_COUPON_3, JubilifeCity_EventScript_PoketchInventor_2
	goto JubilifeCity_EventScript_PoketchInventor_3

JubilifeCity_EventScript_PoketchInventor_5:
# 364 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_POKETCH_COUPON_2, JubilifeCity_EventScript_PoketchInventor_4
	goto JubilifeCity_EventScript_PoketchInventor_3

JubilifeCity_EventScript_PoketchInventor_10:
# 378 "data/maps/JubilifeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_EventScript_PoketchInventor_Movement_0
# 379 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchInventor_Movement_1
	goto JubilifeCity_EventScript_PoketchInventor_9

JubilifeCity_EventScript_PoketchInventor_11:
# 381 "data/maps/JubilifeCity/scripts.pory"
	applymovement 12, JubilifeCity_EventScript_PoketchInventor_Movement_2
	goto JubilifeCity_EventScript_PoketchInventor_9


JubilifeCity_EventScript_GameKid1::
# 411 "data/maps/JubilifeCity/scripts.pory"
	lock
# 413 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 414 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GameKid1_Text_0, MSGBOX_AUTOCLOSE
# 416 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_GameKid2::
# 421 "data/maps/JubilifeCity/scripts.pory"
	lock
# 423 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 424 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_GameKid2_Text_0, MSGBOX_AUTOCLOSE
# 429 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_OldMan::
# 433 "data/maps/JubilifeCity/scripts.pory"
	lock
# 435 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 436 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_OldMan_Text_0, MSGBOX_YESNO
# 439 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_EventScript_OldMan_2
# 447 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_OldMan_Text_2, MSGBOX_AUTOCLOSE
JubilifeCity_EventScript_OldMan_1:
# 453 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_OldMan_2:
# 440 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_OldMan_Text_1, MSGBOX_AUTOCLOSE
	goto JubilifeCity_EventScript_OldMan_1


JubilifeCity_EventScript_SchoolKid::
# 457 "data/maps/JubilifeCity/scripts.pory"
	lock
# 459 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 460 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_SchoolKid_Text_0, MSGBOX_AUTOCLOSE
# 464 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_OldMan2::
# 468 "data/maps/JubilifeCity/scripts.pory"
	lock
# 470 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 471 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_OldMan2_Text_0, MSGBOX_AUTOCLOSE
# 476 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_LittleGirl::
# 480 "data/maps/JubilifeCity/scripts.pory"
	lock
# 482 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 483 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_LittleGirl_Text_0, MSGBOX_AUTOCLOSE
# 485 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_AceTrainerF::
# 489 "data/maps/JubilifeCity/scripts.pory"
	lock
# 491 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 492 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_AceTrainerF_Text_0, MSGBOX_AUTOCLOSE
# 494 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_AceTrainerM::
# 499 "data/maps/JubilifeCity/scripts.pory"
	lock
# 501 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 502 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_AceTrainerM_Text_0, MSGBOX_AUTOCLOSE
# 508 "data/maps/JubilifeCity/scripts.pory"
	release
	return


JubilifeCity_EventScript_Clown1::
# 512 "data/maps/JubilifeCity/scripts.pory"
	lock
# 513 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 515 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_POKETCH_COUPON_1, JubilifeCity_EventScript_Clown1_2
# 535 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown1Correct
JubilifeCity_EventScript_Clown1_1:
# 537 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_Clown1_2:
# 516 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_0, MSGBOX_YESNO
# 520 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_EventScript_Clown1_5
# 529 "data/maps/JubilifeCity/scripts.pory"
	playse SE_FAILURE
# 530 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_3, MSGBOX_AUTOCLOSE
# 532 "data/maps/JubilifeCity/scripts.pory"
	waitse
	goto JubilifeCity_EventScript_Clown1_1

JubilifeCity_EventScript_Clown1_5:
# 521 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_1
# 523 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown1Correct
# 524 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_2
# 526 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_POKETCH_COUPON_1
# 527 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_COUPON_ONE
	goto JubilifeCity_EventScript_Clown1_1


JubilifeCity_EventScript_Clown2::
# 541 "data/maps/JubilifeCity/scripts.pory"
	lock
# 542 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 544 "data/maps/JubilifeCity/scripts.pory"
	goto_if_unset FLAG_POKETCH_COUPON_2, JubilifeCity_EventScript_Clown2_2
# 562 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown2Correct
JubilifeCity_EventScript_Clown2_1:
# 564 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_Clown2_2:
# 545 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown2_Text_0, MSGBOX_YESNO
# 549 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_EventScript_Clown2_5
# 558 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_3, MSGBOX_AUTOCLOSE
	goto JubilifeCity_EventScript_Clown2_1

JubilifeCity_EventScript_Clown2_5:
# 550 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_1
# 552 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown2Correct
# 553 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_2
# 555 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_COUPON_TWO
# 556 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_POKETCH_COUPON_2
	goto JubilifeCity_EventScript_Clown2_1


JubilifeCity_EventScript_Clown3::
# 568 "data/maps/JubilifeCity/scripts.pory"
	lock
# 570 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 572 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_CITY_STATE, 2
	goto_if_eq JubilifeCity_EventScript_Clown3_2
# 578 "data/maps/JubilifeCity/scripts.pory"
	goto_if_set FLAG_POKETCH_COUPON_3, JubilifeCity_EventScript_Clown3_5
# 581 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown3_Text_1, MSGBOX_YESNO
# 584 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_EventScript_Clown3_8
# 594 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_3, MSGBOX_AUTOCLOSE
JubilifeCity_EventScript_Clown3_1:
# 599 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_Clown3_2:
# 573 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown3_Text_0, MSGBOX_AUTOCLOSE
	goto JubilifeCity_EventScript_Clown3_1

JubilifeCity_EventScript_Clown3_5:
# 579 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown3Correct
	goto JubilifeCity_EventScript_Clown3_1

JubilifeCity_EventScript_Clown3_8:
# 585 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_1
# 587 "data/maps/JubilifeCity/scripts.pory"
	msgbox Clown3Correct
# 588 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Clown1_Text_2
# 590 "data/maps/JubilifeCity/scripts.pory"
	giveitem ITEM_COUPON_THREE
# 591 "data/maps/JubilifeCity/scripts.pory"
	setflag FLAG_POKETCH_COUPON_3
# 592 "data/maps/JubilifeCity/scripts.pory"
	setobjectxyperm 12, 46, 30
	goto JubilifeCity_EventScript_Clown3_1


JubilifeCity_EventScript_Looker::
# 604 "data/maps/JubilifeCity/scripts.pory"
	lock
# 605 "data/maps/JubilifeCity/scripts.pory"
	faceplayer
# 606 "data/maps/JubilifeCity/scripts.pory"
	compare VAR_JUBILIFE_CITY_STATE, 4
	goto_if_eq JubilifeCity_EventScript_Looker_2
# 614 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Looker_Text_1, MSGBOX_AUTOCLOSE
JubilifeCity_EventScript_Looker_1:
# 621 "data/maps/JubilifeCity/scripts.pory"
	release
	return

JubilifeCity_EventScript_Looker_2:
# 607 "data/maps/JubilifeCity/scripts.pory"
	msgbox JubilifeCity_EventScript_Looker_Text_0, MSGBOX_AUTOCLOSE
	goto JubilifeCity_EventScript_Looker_1


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
	step_end

# 91 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_3:
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 91 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 92 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_4:
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 92 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 95 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_5:
# 95 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 95 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 96 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_6:
# 96 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 96 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 100 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_7:
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 100 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 116 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_8:
# 116 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 116 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 116 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 116 "data/maps/JubilifeCity/scripts.pory"
	face_down
# 116 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 116 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 116 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 116 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 116 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 116 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 116 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 116 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_left
# 116 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 116 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 116 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 116 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 116 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 116 "data/maps/JubilifeCity/scripts.pory"
	face_up
# 116 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 116 "data/maps/JubilifeCity/scripts.pory"
	delay_16
	step_end

# 119 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_9:
# 119 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 119 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 119 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 119 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 120 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_10:
# 120 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 120 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 121 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_11:
# 121 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 121 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 121 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 121 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 121 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
	step_end

# 129 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_12:
# 129 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
# 129 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 135 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_13:
# 135 "data/maps/JubilifeCity/scripts.pory"
	walk_in_place_up
	step_end

# 182 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_14:
# 182 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 182 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 182 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 182 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 182 "data/maps/JubilifeCity/scripts.pory"
	face_right
# 182 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 182 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 182 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 182 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 195 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_15:
# 195 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 195 "data/maps/JubilifeCity/scripts.pory"
	face_right
	step_end

# 197 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_16:
# 197 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 197 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
# 197 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_right
	step_end

# 200 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_17:
# 200 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 200 "data/maps/JubilifeCity/scripts.pory"
	face_up
	step_end

# 202 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_18:
# 202 "data/maps/JubilifeCity/scripts.pory"
	face_left
# 202 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 202 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 202 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 202 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 202 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
# 202 "data/maps/JubilifeCity/scripts.pory"
	walk_fast_up
	step_end

# 217 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_19:
# 217 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 217 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 217 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 217 "data/maps/JubilifeCity/scripts.pory"
	face_left
	step_end

# 218 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_20:
# 218 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 218 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 218 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 218 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 218 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 226 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_21:
# 226 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 226 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 226 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 246 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_22:
# 246 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 246 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 246 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 247 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_GoToTrainerSchool_Movement_23:
# 247 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 247 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 247 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 247 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 247 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 247 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 266 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_0:
# 266 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
# 266 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 266 "data/maps/JubilifeCity/scripts.pory"
	delay_16
	step_end

# 270 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_1:
# 270 "data/maps/JubilifeCity/scripts.pory"
	walk_in_place_left
	step_end

# 274 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_2:
# 274 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 274 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 277 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_3:
# 277 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 277 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 277 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 279 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_4:
# 279 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 279 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 279 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 279 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 281 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_5:
# 281 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 281 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 281 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 281 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 281 "data/maps/JubilifeCity/scripts.pory"
	walk_right
	step_end

# 297 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_6:
# 297 "data/maps/JubilifeCity/scripts.pory"
	walk_left
	step_end

# 299 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_7:
# 299 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 299 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 299 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 301 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_8:
# 301 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 301 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 301 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 301 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 303 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_9:
# 303 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 303 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 303 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 303 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 303 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 305 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_LookerVisitSchool_Movement_10:
# 305 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 305 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 305 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 305 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 305 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 305 "data/maps/JubilifeCity/scripts.pory"
	face_down
	step_end

# 318 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchCampaign_Movement_0:
# 318 "data/maps/JubilifeCity/scripts.pory"
	face_up
	step_end

# 323 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchCampaign_Movement_1:
# 323 "data/maps/JubilifeCity/scripts.pory"
	walk_in_place_down
# 323 "data/maps/JubilifeCity/scripts.pory"
	emote_exclamation_mark
# 323 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 323 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 323 "data/maps/JubilifeCity/scripts.pory"
	delay_16
	step_end

# 330 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchCampaign_Movement_2:
# 330 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 330 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 330 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 330 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 330 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 332 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchCampaign_Movement_3:
# 332 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 332 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 332 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 332 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 334 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchCampaign_Movement_4:
# 334 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 334 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 334 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 336 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchCampaign_Movement_5:
# 336 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 336 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 336 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 336 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 338 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchCampaign_Movement_6:
# 338 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 338 "data/maps/JubilifeCity/scripts.pory"
	walk_down
# 338 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 338 "data/maps/JubilifeCity/scripts.pory"
	walk_right
# 338 "data/maps/JubilifeCity/scripts.pory"
	walk_down
	step_end

# 378 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchInventor_Movement_0:
# 378 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 378 "data/maps/JubilifeCity/scripts.pory"
	walk_in_place_left
# 378 "data/maps/JubilifeCity/scripts.pory"
	walk_in_place_up
	step_end

# 379 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchInventor_Movement_1:
# 379 "data/maps/JubilifeCity/scripts.pory"
	walk_left
# 379 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 379 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 379 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 379 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 379 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 379 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 381 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchInventor_Movement_2:
# 381 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 381 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 381 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 381 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 381 "data/maps/JubilifeCity/scripts.pory"
	walk_up
# 381 "data/maps/JubilifeCity/scripts.pory"
	walk_up
	step_end

# 383 "data/maps/JubilifeCity/scripts.pory"
JubilifeCity_EventScript_PoketchInventor_Movement_3:
# 383 "data/maps/JubilifeCity/scripts.pory"
	delay_16
# 383 "data/maps/JubilifeCity/scripts.pory"
	walk_in_place_up
	step_end

JubilifeCity_EventScript_GoToTrainerSchool_Text_0:
# 41 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hi {PLAYER}!\n"
	.string "Are you catching Pokémon?$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_1:
# 46 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Wow! You've already got {STR_VAR_1} Pokémon\n"
	.string "with you!\p"
	.string "At that pace, your Pokédex should\n"
	.string "be full in no time at all!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_2:
# 51 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}. . .Um. . .\p"
	.string "I think youd'd feel a lot safer if you\n"
	.string "were to catch some more.\p"
	.string "You know, like when you need to travel\n"
	.string "to faraway places.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_3:
# 57 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Oh, I know! Don't you think its\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "I know just the place.\p"
	.string "Come on!\n"
	.string "Don't be shy. Follow me!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_4:
# 66 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hey, {PLAYER}!\n"
	.string "How many Pokémon have you caught?$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_5:
# 71 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Whoa!\n"
	.string "You already have {STR_VAR_1} with you!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_6:
# 74 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Huh?\n"
	.string "I think you should catch some more.\p"
	.string "It might be more of a challenge\n"
	.string "raising a lot of Pokémon. . .\p"
	.string "But it's worth it. The more Pokémon\n"
	.string "you have, the happier you'll be.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_7:
# 81 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hey, that's right! Don't you think it's\n"
	.string "better to know more about Pokémon?\p"
	.string "Sure it is!\n"
	.string "There's this great place for that.\p"
	.string "Come on! It's all right.\n"
	.string "Follow me.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_8:
# 107 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}That man. . .\n"
	.string "What is he doing?$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_9:
# 111 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}That guy. . .\n"
	.string "What's he doing?$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_10:
# 125 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Umm. . .$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_11:
# 127 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Uh, excuse. . .$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_12:
# 131 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_MYSTERIOUS}WHAAAT?!\p"
	.string ". . .How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_13:
# 138 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Huh? What? I beg your pardon?\n"
	.string "I was just making conversation. . .$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_14:
# 141 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Huh? What? Are you kidding\n"
	.string "I was just making small talk. . .$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_15:
# 145 "data/maps/JubilifeCity/scripts.pory"
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
# 165 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Yes, that is correct.\n"
	.string "Taking what belongs to others is wrong.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_17:
# 168 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}No? You claim to not know it?\n"
	.string "How could that be?\p"
	.string "Perhaps your mama has said it, but you\n"
	.string "have forgotten it, like usual?\p"
	.string "Now listen, my friends. It is wrong to\n"
	.string "take what belongs to others.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_18:
# 175 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Unfortunately, there are apparently\n"
	.string "those who do not heed those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the Pokémon of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_19:
# 185 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string ". . .Actually, yes, yes you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no!\n"
	.string "You must inform me of bad guys!\l"
	.string "You must inform me of any happenings!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_20:
# 208 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}. . .Working for the International\n"
	.string "Police must be hard.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_21:
# 212 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}. . .Working for the International\n"
	.string "Police sounds hard.$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_22:
# 222 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}{PLAYER}, here it is.\n"
	.string "It's the Trainers School.\l"
	.string "The name says it all!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_23:
# 228 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}I saw your friend {BARRY} go in\n"
	.string "earlier.\p"
	.string "He could still be in there studying.\n"
	.string "OK, bye now!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_24:
# 234 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}{PLAYER}, here we are.\n"
	.string "This is the Trainers School.\l"
	.string "The name says it all!$"

JubilifeCity_EventScript_GoToTrainerSchool_Text_25:
# 240 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Your pal {BARRY} went in earlier.\n"
	.string "He might still be studying in there.\p"
	.string "OK, see you around!$"

JubilifeCity_EventScript_LookerVisitSchool_Text_0:
# 286 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Hello, my friend.\n"
	.string "Have you visited the Trainers' School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

JubilifeCity_EventScript_LookerVisitSchool_Text_1:
# 291 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Tell me, have you not obtained\n"
	.string "a Pokétch?\p"
	.string "I believe a Pokétch is now free in\n"
	.string "exchange for some Coupons?$"

JubilifeCity_EventScript_PoketchCampaign_Text_0:
# 342 "data/maps/JubilifeCity/scripts.pory"
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
# 365 "data/maps/JubilifeCity/scripts.pory"
	.string "OK, let me count your Coupons!\n"
	.string "I'll use the Pokétch here. . .\p"
	.string "One, two, three!\n"
	.string "Bravo! I say, bravo!\p"
	.string "In return for these Coupons,\n"
	.string "I present you this Pokémon Watch,\l"
	.string "or Pokétch for short!$"

JubilifeCity_EventScript_PoketchInventor_Text_1:
# 373 "data/maps/JubilifeCity/scripts.pory"
	.string "You can add apps to your Pokétch\n"
	.string "to make it even more versatile!$"

JubilifeCity_EventScript_PoketchInventor_Text_2:
# 398 "data/maps/JubilifeCity/scripts.pory"
	.string "The three clowns will each ask you\n"
	.string "a skill-testing question.\p"
	.string "The questions will all have to do\n"
	.string "with Pokémon.\p"
	.string "After all, a Pokétch is a tool for\n"
	.string "Pokémon Trainers.\p"
	.string "Collect a Coupon from each clown,\n"
	.string "then come see me, OK?$"

JubilifeCity_EventScript_GameKid1_Text_0:
# 414 "data/maps/JubilifeCity/scripts.pory"
	.string "I'm trading Pokémon with my buddy!$"

JubilifeCity_EventScript_GameKid2_Text_0:
# 424 "data/maps/JubilifeCity/scripts.pory"
	.string "I made my Pokémon hold an item before\n"
	.string "trading it.\p"
	.string "That will make the other Trainer\n"
	.string "double happy!$"

JubilifeCity_EventScript_OldMan_Text_0:
# 436 "data/maps/JubilifeCity/scripts.pory"
	.string "Hello, Trainer!\n"
	.string "Do you know much about Pokémon?$"

JubilifeCity_EventScript_OldMan_Text_1:
# 440 "data/maps/JubilifeCity/scripts.pory"
	.string "Ah, I see!\n"
	.string "You are knowledgeable!\p"
	.string "I imagine you wouldn't see the need\n"
	.string "to visit the Trainers' School, then.\p"
	.string "But do visit if you have the time.\n"
	.string "You may discover something new!$"

JubilifeCity_EventScript_OldMan_Text_2:
# 447 "data/maps/JubilifeCity/scripts.pory"
	.string "Oh, you're not knowledgeable. . .\n"
	.string "But not to worry!\l"
	.string "There's the Trainers' School.\p"
	.string "The school will teach you the\n"
	.string "basics of Pokémon.$"

JubilifeCity_EventScript_SchoolKid_Text_0:
# 460 "data/maps/JubilifeCity/scripts.pory"
	.string "OK, set six Poké Balls in my\n"
	.string "belt. . .\p"
	.string "Yeah, that'll do it. At most, you\n"
	.string "can have six Pokémon with you.$"

JubilifeCity_EventScript_OldMan2_Text_0:
# 471 "data/maps/JubilifeCity/scripts.pory"
	.string "Jubilife City's built on land they\n"
	.string "carved out of a mountain.\p"
	.string "The people and Pokémon of Oreburgh\n"
	.string "City helped out with that undertaking.$"

JubilifeCity_EventScript_LittleGirl_Text_0:
# 483 "data/maps/JubilifeCity/scripts.pory"
	.string "Did you see me on TV?\n"
	.string "I was in an interview!$"

JubilifeCity_EventScript_AceTrainerF_Text_0:
# 492 "data/maps/JubilifeCity/scripts.pory"
	.string "When you walk with your Pokémon,\n"
	.string "they gradually grow friendlier.$"

JubilifeCity_EventScript_AceTrainerM_Text_0:
# 502 "data/maps/JubilifeCity/scripts.pory"
	.string "Hiya, where'd you come from?\p"
	.string ". . .\p"
	.string "Twinleaf Town, huh. . .\n"
	.string "It's a nice place. Quiet and all.\p"
	.string "Jubilife City is a big place, so it\n"
	.string "might be a bit of a shock to you.$"

JubilifeCity_EventScript_Clown1_Text_0:
# 516 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I'm a Pokétch campaign clown!\n"
	.string "Let's roll out my question!\p"
	.string "Does a Pokémon grow by defeating\n"
	.string "others and gaining Exp. Points?$"

JubilifeCity_EventScript_Clown1_Text_1:
# 521 "data/maps/JubilifeCity/scripts.pory"
	.string "Ding-ding!\n"
	.string "You're absolutely correct!$"

JubilifeCity_EventScript_Clown1_Text_2:
# 524 "data/maps/JubilifeCity/scripts.pory"
	.string "Here you go!\n"
	.string "Your Pokétch Coupon!$"

JubilifeCity_EventScript_Clown1_Text_3:
# 530 "data/maps/JubilifeCity/scripts.pory"
	.string "Bzzzzt!\n"
	.string "That's the wrong answer. . .$"

JubilifeCity_EventScript_Clown2_Text_0:
# 545 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I'm a Pokétch campaign clown!\n"
	.string "Let's roll out my question!\p"
	.string "Just like Pokémon types, the moves\n"
	.string "of Pokémon also have types?$"

JubilifeCity_EventScript_Clown3_Text_0:
# 573 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi, there. You should stick around.\n"
	.string "We're doing a Pokétch campaign soon.\p"
	.string "Before it starts, I think you should\n"
	.string "brush up at the Trainers' School.$"

JubilifeCity_EventScript_Clown3_Text_1:
# 581 "data/maps/JubilifeCity/scripts.pory"
	.string "Hi! I'm a Pokétch campaign clown!\n"
	.string "Let's roll out my question!\p"
	.string "Can a Pokémon hold an item?$"

JubilifeCity_EventScript_Looker_Text_0:
# 607 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Ah, it is you! Have no fear.\n"
	.string "There are no shady characters about.\p"
	.string "Incidentally, have you not obtained\n"
	.string "a Pokétch?\p"
	.string "I believe a Pokétch is now free in\n"
	.string "exchange for some Coupons?$"

JubilifeCity_EventScript_Looker_Text_1:
# 614 "data/maps/JubilifeCity/scripts.pory"
	.string "{SPEAKER NAME_LOOKER}Ah, it is you! Have no fear.\n"
	.string "There are no shady characters about.\p"
	.string "Incidentally, have you visited the\n"
	.string "Trainers' School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

Clown1Correct::
# 623 "data/maps/JubilifeCity/scripts.pory"
	.string "Pokémon grow stronger by defeating\n"
	.string "other Pokémon in battle.\p"
	.string "Some Pokémon even grow into an\n"
	.string "entirely different form in a process\l"
	.string "known as evolution.$"

Clown2Correct::
# 631 "data/maps/JubilifeCity/scripts.pory"
	.string "If the Pokémon's type matches its\n"
	.string "move's type, that move is made much\l"
	.string "more powerful!$"

Clown3Correct::
# 637 "data/maps/JubilifeCity/scripts.pory"
	.string "A Pokémon may hold a single item.\p"
	.string "Some items become effective as soon\n"
	.string "as they are held by a Pokémon.\p"
	.string "Berries are eaten by Pokémon as\n"
	.string "necessary during battle.$"
