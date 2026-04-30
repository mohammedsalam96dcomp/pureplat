SandgemTown_MapScripts::
# 11 "data/maps/SandgemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SandgemTown_EventScript_OnTransition
# 7 "data/maps/SandgemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SandgemTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 13 "data/maps/SandgemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SandgemTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SandgemTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/SandgemTown/scripts.pory"
	map_script_2 VAR_SANDGEM_TOWN_STATE, 2, SandgemTown_ON_FRAME
	.2byte 0

SandgemTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 14 "data/maps/SandgemTown/scripts.pory"
	map_script_2 VAR_SANDGEM_TOWN_STATE, 2, SandgemTown_ON_WARP
	.2byte 0


SandgemTown_ON_FRAME::
# 19 "data/maps/SandgemTown/scripts.pory"
	lock
# 21 "data/maps/SandgemTown/scripts.pory"
	delay 8
# 23 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_HIDE_SANDGEM_TOWN_ROWAN
# 24 "data/maps/SandgemTown/scripts.pory"
	addobject 3
# 26 "data/maps/SandgemTown/scripts.pory"
	playse SE_DOOR
# 27 "data/maps/SandgemTown/scripts.pory"
	waitse
# 29 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_0
# 30 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 32 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 33 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 34 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 35 "data/maps/SandgemTown/scripts.pory"
	waitse
# 36 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 37 "data/maps/SandgemTown/scripts.pory"
	delay 48
# 39 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_0
# 40 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 42 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_1
# 44 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 45 "data/maps/SandgemTown/scripts.pory"
	giveitem ITEM_TM_RETURN
# 46 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_2
# 59 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 61 "data/maps/SandgemTown/scripts.pory"
	applymovement 3, SandgemTown_ON_FRAME_Movement_0
# 62 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 64 "data/maps/SandgemTown/scripts.pory"
	playse SE_DOOR
# 65 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_ROWAN
# 66 "data/maps/SandgemTown/scripts.pory"
	removeobject 3
# 67 "data/maps/SandgemTown/scripts.pory"
	waitse
# 69 "data/maps/SandgemTown/scripts.pory"
	delay 10
# 71 "data/maps/SandgemTown/scripts.pory"
	checkplayergender
# 73 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_ON_FRAME_2
# 80 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_4
# 83 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_ON_FRAME_1:
# 86 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_1
# 87 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 88 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 90 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_ON_FRAME_6
# 96 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_6
# 102 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_ON_FRAME_5:
# 105 "data/maps/SandgemTown/scripts.pory"
	playbgm MUS_DP_FOLLOW_ME, 0
# 107 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_3
# 108 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_4
# 109 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 111 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_ON_FRAME_10
# 120 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_8
# 126 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_ON_FRAME_9:
# 129 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_4
# 130 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_4
# 131 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 133 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_ON_FRAME_14
# 144 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_10
# 152 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_ON_FRAME_13:
# 155 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_5
# 156 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_6
# 157 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 159 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 160 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 161 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 162 "data/maps/SandgemTown/scripts.pory"
	waitse
# 164 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_ON_FRAME_18
# 178 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_12
# 189 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_ON_FRAME_17:
# 192 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_7
# 193 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 194 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_1
# 195 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_8
# 196 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 197 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_6
# 198 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_9
# 199 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 201 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_DAWN
# 202 "data/maps/SandgemTown/scripts.pory"
	removeobject 1
# 204 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_SANDGEM_TOWN_STATE, 3
# 205 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_ROUTE202_STATE, 1
# 206 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_ROUTE202_DAWN_STATE, 1
# 207 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 5
# 208 "data/maps/SandgemTown/scripts.pory"
	release
# 210 "data/maps/SandgemTown/scripts.pory"
	fadedefaultbgm
	return

SandgemTown_ON_FRAME_2:
# 74 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_3
# 78 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_ON_FRAME_1

SandgemTown_ON_FRAME_6:
# 91 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_5
# 94 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_ON_FRAME_5

SandgemTown_ON_FRAME_10:
# 112 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_7
# 118 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_ON_FRAME_9

SandgemTown_ON_FRAME_14:
# 134 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_9
# 142 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_ON_FRAME_13

SandgemTown_ON_FRAME_18:
# 165 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_11
# 176 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_ON_FRAME_17


SandgemTown_EventScript_OnTransition::
# 214 "data/maps/SandgemTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


SandgemTown_ON_WARP::
# 218 "data/maps/SandgemTown/scripts.pory"
	addobject 1
# 219 "data/maps/SandgemTown/scripts.pory"
	turnobject 1, DIR_NORTH
	return


SandgemTown_EventScript_LucasDawnScene1::
# 224 "data/maps/SandgemTown/scripts.pory"
	lock
# 225 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 226 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 227 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene2::
# 231 "data/maps/SandgemTown/scripts.pory"
	lock
# 232 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 2
# 233 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 234 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene3::
# 238 "data/maps/SandgemTown/scripts.pory"
	lock
# 239 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 3
# 240 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 241 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene4::
# 245 "data/maps/SandgemTown/scripts.pory"
	lock
# 246 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 4
# 247 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 248 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene5::
# 252 "data/maps/SandgemTown/scripts.pory"
	lock
# 253 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 5
# 254 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 255 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene::
# 259 "data/maps/SandgemTown/scripts.pory"
	lock
# 261 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 262 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_0
# 263 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 264 "data/maps/SandgemTown/scripts.pory"
	waitse
# 266 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 267 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 269 "data/maps/SandgemTown/scripts.pory"
	switch VAR_TEMP_1
# 270 "data/maps/SandgemTown/scripts.pory"
	case 1, SandgemTown_EventScript_LucasDawnScene_3
# 276 "data/maps/SandgemTown/scripts.pory"
	case 2, SandgemTown_EventScript_LucasDawnScene_4
# 279 "data/maps/SandgemTown/scripts.pory"
	case 3, SandgemTown_EventScript_LucasDawnScene_5
# 282 "data/maps/SandgemTown/scripts.pory"
	case 4, SandgemTown_EventScript_LucasDawnScene_6
# 288 "data/maps/SandgemTown/scripts.pory"
	case 5, SandgemTown_EventScript_LucasDawnScene_7
SandgemTown_EventScript_LucasDawnScene_1:
# 296 "data/maps/SandgemTown/scripts.pory"
	checkplayergender
# 298 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_EventScript_LucasDawnScene_9
# 304 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_1
# 307 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_EventScript_LucasDawnScene_8:
# 310 "data/maps/SandgemTown/scripts.pory"
	switch VAR_TEMP_1
# 311 "data/maps/SandgemTown/scripts.pory"
	case 1, SandgemTown_EventScript_LucasDawnScene_14
# 315 "data/maps/SandgemTown/scripts.pory"
	case 2, SandgemTown_EventScript_LucasDawnScene_15
# 319 "data/maps/SandgemTown/scripts.pory"
	case 3, SandgemTown_EventScript_LucasDawnScene_16
# 323 "data/maps/SandgemTown/scripts.pory"
	case 4, SandgemTown_EventScript_LucasDawnScene_17
# 327 "data/maps/SandgemTown/scripts.pory"
	case 5, SandgemTown_EventScript_LucasDawnScene_18
SandgemTown_EventScript_LucasDawnScene_12:
# 333 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_EventScript_LucasDawnScene_20
# 339 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_3
# 342 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_EventScript_LucasDawnScene_19:
# 346 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_HIDE_SANDGEM_TOWN_RIVAL
# 347 "data/maps/SandgemTown/scripts.pory"
	addobject 2
# 349 "data/maps/SandgemTown/scripts.pory"
	playse SE_DOOR
# 350 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_16
# 351 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 352 "data/maps/SandgemTown/scripts.pory"
	waitse
# 354 "data/maps/SandgemTown/scripts.pory"
	playse SE_WALL_HIT
# 355 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_4
# 356 "data/maps/SandgemTown/scripts.pory"
	waitse
# 357 "data/maps/SandgemTown/scripts.pory"
	playbgm MUS_DP_RIVAL, 0
# 359 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_5
# 365 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 367 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_17
# 368 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 370 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_18
# 371 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_18
# 372 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_19
# 373 "data/maps/SandgemTown/scripts.pory"
	waitmovement 2
# 375 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_RIVAL
# 376 "data/maps/SandgemTown/scripts.pory"
	removeobject 2
# 377 "data/maps/SandgemTown/scripts.pory"
	delay 10
# 378 "data/maps/SandgemTown/scripts.pory"
	fadedefaultbgm
# 380 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_EventScript_LucasDawnScene_24
# 388 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_7
# 393 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_EventScript_LucasDawnScene_23:
# 397 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 398 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 399 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_4
# 400 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 401 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 403 "data/maps/SandgemTown/scripts.pory"
	playse SE_DOOR
# 404 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 405 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_2
# 406 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 407 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_DAWN
# 408 "data/maps/SandgemTown/scripts.pory"
	removeobject 1
# 410 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_2
# 411 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 413 "data/maps/SandgemTown/scripts.pory"
	warp MAP_SANDGEM_PROFESSORS_LAB, 6, 12
# 415 "data/maps/SandgemTown/scripts.pory"
	release
	return

SandgemTown_EventScript_LucasDawnScene_3:
# 271 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 272 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 273 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 274 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_2
# 275 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_4:
# 277 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_3
# 278 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_5:
# 280 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_4
# 281 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_6:
# 283 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_4
# 284 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 285 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 286 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_6
# 287 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_7:
# 289 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 290 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 291 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 292 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_7
# 293 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_9:
# 299 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_0
# 302 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_EventScript_LucasDawnScene_8

SandgemTown_EventScript_LucasDawnScene_14:
# 312 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_7
# 313 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_8
# 314 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_12

SandgemTown_EventScript_LucasDawnScene_15:
# 316 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_9
# 317 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_9
# 318 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_12

SandgemTown_EventScript_LucasDawnScene_16:
# 320 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_10
# 321 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_11
# 322 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_12

SandgemTown_EventScript_LucasDawnScene_17:
# 324 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_12
# 325 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_13
# 326 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_12

SandgemTown_EventScript_LucasDawnScene_18:
# 328 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_14
# 329 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_15
# 330 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_12

SandgemTown_EventScript_LucasDawnScene_20:
# 334 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_2
# 337 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_EventScript_LucasDawnScene_19

SandgemTown_EventScript_LucasDawnScene_24:
# 381 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_6
# 386 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_EventScript_LucasDawnScene_23


SandgemTown_EventScript_Woman::
# 419 "data/maps/SandgemTown/scripts.pory"
	lock
# 421 "data/maps/SandgemTown/scripts.pory"
	faceplayer
# 422 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_Woman_Text_0
# 426 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 428 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_Youngster::
# 432 "data/maps/SandgemTown/scripts.pory"
	lock
# 434 "data/maps/SandgemTown/scripts.pory"
	faceplayer
# 435 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_Youngster_Text_0
# 441 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 443 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_Man::
# 448 "data/maps/SandgemTown/scripts.pory"
	lock
# 450 "data/maps/SandgemTown/scripts.pory"
	faceplayer
# 451 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_Man_Text_0
# 455 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 457 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_SignScript_Lab::
# 461 "data/maps/SandgemTown/scripts.pory"
	lock
# 462 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_SignScript_Lab_Text_0
# 463 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_SignScript_RivalHouse::
# 467 "data/maps/SandgemTown/scripts.pory"
	lock
# 468 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_SignScript_RivalHouse_Text_0
# 469 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_SignScript_Town::
# 473 "data/maps/SandgemTown/scripts.pory"
	lock
# 474 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_SignScript_Town_Text_0
# 475 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_SignScript_Center::
# 479 "data/maps/SandgemTown/scripts.pory"
	lock
# 480 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_SignScript_Center_Text_0
# 481 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_SignScript_Mart::
# 485 "data/maps/SandgemTown/scripts.pory"
	lock
# 486 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_SignScript_Mart_Text_0
# 487 "data/maps/SandgemTown/scripts.pory"
	release
	return


# 39 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_0:
# 39 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 86 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_1:
# 86 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_down
	step_end

# 87 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_2:
# 87 "data/maps/SandgemTown/scripts.pory"
	walk_up
	step_end

# 107 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_3:
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_down
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 108 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_4:
# 108 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 108 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 108 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 108 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 108 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 108 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 108 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 108 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 108 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 108 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 108 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 155 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_5:
# 155 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_right
	step_end

# 156 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_6:
# 156 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_left
	step_end

# 192 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_7:
# 192 "data/maps/SandgemTown/scripts.pory"
	walk_down
	step_end

# 195 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_8:
# 195 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 195 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 195 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 195 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 195 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 198 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_9:
# 198 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 198 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 198 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 198 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 198 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 198 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 198 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 198 "data/maps/SandgemTown/scripts.pory"
	walk_up
	step_end

# 262 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_0:
# 262 "data/maps/SandgemTown/scripts.pory"
	emote_exclamation_mark
# 262 "data/maps/SandgemTown/scripts.pory"
	delay_16
# 262 "data/maps/SandgemTown/scripts.pory"
	delay_16
# 262 "data/maps/SandgemTown/scripts.pory"
	delay_16
	step_end

# 266 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_1:
# 266 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 266 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 274 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_2:
# 274 "data/maps/SandgemTown/scripts.pory"
	face_down
	step_end

# 277 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_3:
# 277 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 277 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 280 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_4:
# 280 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 285 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_5:
# 285 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 286 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_6:
# 286 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 286 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_down
	step_end

# 312 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_7:
# 312 "data/maps/SandgemTown/scripts.pory"
	walk_down
# 312 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 312 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 312 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 312 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 312 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 313 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_8:
# 313 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 313 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 313 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 313 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 313 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 313 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 316 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_9:
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 316 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 320 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_10:
# 320 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 320 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 320 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 320 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 320 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 320 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 321 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_11:
# 321 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 321 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 321 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 321 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 321 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 321 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 324 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_12:
# 324 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 324 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 324 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 324 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 324 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 324 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 324 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 325 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_13:
# 325 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 325 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 325 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 325 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 325 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 325 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 325 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 328 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_14:
# 328 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 328 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 328 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 328 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 328 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 328 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 328 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 328 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 329 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_15:
# 329 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 329 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 329 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 329 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 329 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 329 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 329 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 329 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 350 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_16:
# 350 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
# 350 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 367 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_17:
# 367 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 367 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 367 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
	step_end

# 370 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_18:
# 370 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 372 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_19:
# 372 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 372 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 372 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 372 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 372 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 372 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
	step_end

SandgemTown_ON_FRAME_Text_0:
# 29 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}{PLAYER}!$"

SandgemTown_ON_FRAME_Text_1:
# 42 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}I have something good here.\n"
	.string "You should take this as well.$"

SandgemTown_ON_FRAME_Text_2:
# 46 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}That is a Technical Machine.\n"
	.string "That one contains the move Return.\p"
	.string "Using a Technical Machine, or TM for\n"
	.string "short, teaches a move instantly to\l"
	.string "a Pokémon.\p"
	.string "Bear in mind, however,\n"
	.string "that a TM is single-use only.\p"
	.string "The move Return gains power the more\n"
	.string "friendly your Pokémon is with you.\p"
	.string "It's up to you, of course, if you want\n"
	.string "to use that TM or not.\p"
	.string "I'll send you off with the wish that\n"
	.string "your journey will be fun.$"

SandgemTown_ON_FRAME_Text_3:
# 74 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Well, I'll be. . .\n"
	.string "The professor had TMs. . .?\p"
	.string "Next thing, he'll tell me he battled\n"
	.string "when he was young.$"

SandgemTown_ON_FRAME_Text_4:
# 80 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Oh, wow.\n"
	.string "I didn't know the professor had TMs.\p"
	.string "Was he a Trainer when he was young. . .?$"

SandgemTown_ON_FRAME_Text_5:
# 91 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hey, {PLAYER}!\n"
	.string "I want to show you a few things.\l"
	.string "So, follow me!$"

SandgemTown_ON_FRAME_Text_6:
# 96 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}OK, {PLAYER}, I'll act as\n"
	.string "your mentor.\p"
	.string "I've got a bit more experience than\n"
	.string "you as a Trainer and as the professor's\n"
	.string "assistant.\p"
	.string "OK, follow me!$"

SandgemTown_ON_FRAME_Text_7:
# 112 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}This building with the red roof is\n"
	.string "the Pokémon Center.\p"
	.string "You can get your Pokémon healed if\n"
	.string "it's been hurt in battle.\p"
	.string "You'll find a Pokémon Center in most\n"
	.string "towns.$"

SandgemTown_ON_FRAME_Text_8:
# 120 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}This building with the red roof is\n"
	.string "the Pokémon Center.\p"
	.string "It's the place that heals Pokémon\n"
	.string "that have been hurt in battle.\p"
	.string "You can find a Pokémon Center in\n"
	.string "most towns.$"

SandgemTown_ON_FRAME_Text_9:
# 134 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Over here, the building with the blue\n"
	.string "roof is the Poké Mart.\p"
	.string "It's a shop where you can buy and\n"
	.string "sell all sorts of items.\p"
	.string "{PLAYER}, since you're a rookie\n"
	.string "Trainer, you won't be able to buy\l"
	.string "very much stuff.\p"
	.string "Don't worry about it, OK?$"

SandgemTown_ON_FRAME_Text_10:
# 144 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}The building with the blue roof over\n"
	.string "here is the Poké Mart.\p"
	.string "It's a shop where you can buy and\n"
	.string "sell items and medicine.\p"
	.string "{PLAYER}, since you're a novice\n"
	.string "Trainer, you won't be able to buy\l"
	.string "many kinds of merchandise.\p"
	.string "Don't let it bother you!$"

SandgemTown_ON_FRAME_Text_11:
# 165 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Oh, yeah, right!\n"
	.string "{PLAYER}. . .\p"
	.string "You should let your family know\n"
	.string "you're helping Prof. Rowan put\l"
	.string "together his Pokédex.\p"
	.string "Sometimes, you have to go far away,\n"
	.string "so you should let someone know.\p"
	.string "Oh, but first, go heal up your\n"
	.string "Pokémon at the Pokémon Center.\p"
	.string "You'll be safe then.\n"
	.string "OK, be seeing you!$"

SandgemTown_ON_FRAME_Text_12:
# 178 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Oh, that's right!\n"
	.string "{PLAYER}. . .\p"
	.string "Don't you need to let your family\n"
	.string "know that you're going to be helping\l"
	.string "Prof. Rowan with the Pokédex?\p"
	.string "You may need to go far away, so I\n"
	.string "think you should let someone know.\p"
	.string "Oh, but before you go, heal up your\n"
	.string "Pokémon at the Pokémon Center.\p"
	.string "It will be a lot less scary that way.\n"
	.string "OK, bye now!$"

SandgemTown_EventScript_LucasDawnScene_Text_0:
# 299 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hi! I've been waiting for you!\n"
	.string "Please, come with me!\l"
	.string "The prof's waiting to see you.$"

SandgemTown_EventScript_LucasDawnScene_Text_1:
# 304 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Oh! There you are!\n"
	.string "Please, come with me!\l"
	.string "The professor is waiting!$"

SandgemTown_EventScript_LucasDawnScene_Text_2:
# 334 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}See? This is our Pokémon Research\n"
	.string "Lab.\p"
	.string "We'll just go ahead and. . .$"

SandgemTown_EventScript_LucasDawnScene_Text_3:
# 339 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}This is it!\n"
	.string "Our Pokémon Research Lab!\p"
	.string "Let's go. . .$"

SandgemTown_EventScript_LucasDawnScene_Text_4:
# 355 "data/maps/SandgemTown/scripts.pory"
	.string "THUD! !$"

SandgemTown_EventScript_LucasDawnScene_Text_5:
# 359 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_BARRY}What the. . .\p"
	.string "Oh, it's you, {PLAYER}!\p"
	.string "That old guy. . . He's not so scary so\n"
	.string "much as he is totally out there!\p"
	.string "Aww, it doesn't matter, {PLAYER}.\n"
	.string "I'm out of here. See you later!$"

SandgemTown_EventScript_LucasDawnScene_Text_6:
# 381 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}What was that?!\p"
	.string "Your friend always seems to be\n"
	.string "in such a rush.\p"
	.string "Anyway. . .\n"
	.string "Let's go in.$"

SandgemTown_EventScript_LucasDawnScene_Text_7:
# 388 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Wow, what was that?!\p"
	.string "Your friend sure seems to be really\n"
	.string "impatient.\p"
	.string "Well, anyway. . .\n"
	.string "Let's go inside.$"

SandgemTown_EventScript_Woman_Text_0:
# 422 "data/maps/SandgemTown/scripts.pory"
	.string "So I don't forget what's happened,\n"
	.string "till now, I'd better save this. . .\p"
	.string "There!\n"
	.string "Now I can take a break.$"

SandgemTown_EventScript_Youngster_Text_0:
# 435 "data/maps/SandgemTown/scripts.pory"
	.string "Oh, wow!\n"
	.string "Pokémon are so cool!\p"
	.string "You can make yours battle and make\n"
	.string "them stronger!\p"
	.string "I wish I had some!\n"
	.string "It's so cool!$"

SandgemTown_EventScript_Man_Text_0:
# 451 "data/maps/SandgemTown/scripts.pory"
	.string "That thing you have!\p"
	.string "It's a Pokédex, isn't it?!\p"
	.string "You're off to see all kinds of\n"
	.string "Pokémon now! Lucky you!$"

SandgemTown_SignScript_Lab_Text_0:
# 462 "data/maps/SandgemTown/scripts.pory"
	.string "Pokémon Research Lab$"

SandgemTown_SignScript_RivalHouse_Text_0:
# 468 "data/maps/SandgemTown/scripts.pory"
	.string "{RIVAL}'s House$"

SandgemTown_SignScript_Town_Text_0:
# 474 "data/maps/SandgemTown/scripts.pory"
	.string "Sangdem Town\nTown of Sand!$"

SandgemTown_SignScript_Center_Text_0:
# 480 "data/maps/SandgemTown/scripts.pory"
	.string "Heal Your Pokémon!\nPokémon Center$"

SandgemTown_SignScript_Mart_Text_0:
# 486 "data/maps/SandgemTown/scripts.pory"
	.string "All your Item Needs Fulfilled!\nPokémon Mart!$"
