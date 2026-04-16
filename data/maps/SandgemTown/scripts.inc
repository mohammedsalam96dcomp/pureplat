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
# 106 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_3
# 107 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_4
# 108 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 110 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_ON_FRAME_10
# 119 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_8
# 125 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_ON_FRAME_9:
# 128 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_4
# 129 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_4
# 130 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 132 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_ON_FRAME_14
# 143 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_10
# 151 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_ON_FRAME_13:
# 154 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_5
# 155 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_6
# 156 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 158 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 159 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 160 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 161 "data/maps/SandgemTown/scripts.pory"
	waitse
# 163 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_ON_FRAME_18
# 177 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_12
# 188 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_ON_FRAME_17:
# 191 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_7
# 192 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 193 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_1
# 194 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_8
# 195 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 196 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_6
# 197 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_9
# 198 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 200 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_DAWN
# 201 "data/maps/SandgemTown/scripts.pory"
	removeobject 1
# 203 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_SANDGEM_TOWN_STATE, 3
# 204 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_ROUTE202_STATE, 1
# 205 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_ROUTE202_DAWN_STATE, 1
# 206 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 5
# 207 "data/maps/SandgemTown/scripts.pory"
	release
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
# 111 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_7
# 117 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_ON_FRAME_9

SandgemTown_ON_FRAME_14:
# 133 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_9
# 141 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_ON_FRAME_13

SandgemTown_ON_FRAME_18:
# 164 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_11
# 175 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_ON_FRAME_17


SandgemTown_EventScript_OnTransition::
# 211 "data/maps/SandgemTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


SandgemTown_ON_WARP::
# 215 "data/maps/SandgemTown/scripts.pory"
	addobject 1
# 216 "data/maps/SandgemTown/scripts.pory"
	turnobject 1, DIR_NORTH
	return


SandgemTown_EventScript_LucasDawnScene1::
# 221 "data/maps/SandgemTown/scripts.pory"
	lock
# 222 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 223 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 224 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene2::
# 228 "data/maps/SandgemTown/scripts.pory"
	lock
# 229 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 2
# 230 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 231 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene3::
# 235 "data/maps/SandgemTown/scripts.pory"
	lock
# 236 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 3
# 237 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 238 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene4::
# 242 "data/maps/SandgemTown/scripts.pory"
	lock
# 243 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 4
# 244 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 245 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene5::
# 249 "data/maps/SandgemTown/scripts.pory"
	lock
# 250 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 5
# 251 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 252 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene::
# 256 "data/maps/SandgemTown/scripts.pory"
	lock
# 258 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 259 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_0
# 260 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 261 "data/maps/SandgemTown/scripts.pory"
	waitse
# 263 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 264 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 266 "data/maps/SandgemTown/scripts.pory"
	switch VAR_TEMP_1
# 267 "data/maps/SandgemTown/scripts.pory"
	case 1, SandgemTown_EventScript_LucasDawnScene_3
# 273 "data/maps/SandgemTown/scripts.pory"
	case 2, SandgemTown_EventScript_LucasDawnScene_4
# 276 "data/maps/SandgemTown/scripts.pory"
	case 3, SandgemTown_EventScript_LucasDawnScene_5
# 279 "data/maps/SandgemTown/scripts.pory"
	case 4, SandgemTown_EventScript_LucasDawnScene_6
# 285 "data/maps/SandgemTown/scripts.pory"
	case 5, SandgemTown_EventScript_LucasDawnScene_7
SandgemTown_EventScript_LucasDawnScene_1:
# 293 "data/maps/SandgemTown/scripts.pory"
	checkplayergender
# 295 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_EventScript_LucasDawnScene_9
# 301 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_1
# 304 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_EventScript_LucasDawnScene_8:
# 307 "data/maps/SandgemTown/scripts.pory"
	switch VAR_TEMP_1
# 308 "data/maps/SandgemTown/scripts.pory"
	case 1, SandgemTown_EventScript_LucasDawnScene_14
# 312 "data/maps/SandgemTown/scripts.pory"
	case 2, SandgemTown_EventScript_LucasDawnScene_15
# 316 "data/maps/SandgemTown/scripts.pory"
	case 3, SandgemTown_EventScript_LucasDawnScene_16
# 320 "data/maps/SandgemTown/scripts.pory"
	case 4, SandgemTown_EventScript_LucasDawnScene_17
# 324 "data/maps/SandgemTown/scripts.pory"
	case 5, SandgemTown_EventScript_LucasDawnScene_18
SandgemTown_EventScript_LucasDawnScene_12:
# 330 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_EventScript_LucasDawnScene_20
# 336 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_3
# 339 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_EventScript_LucasDawnScene_19:
# 343 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_HIDE_SANDGEM_TOWN_RIVAL
# 344 "data/maps/SandgemTown/scripts.pory"
	addobject 2
# 346 "data/maps/SandgemTown/scripts.pory"
	playse SE_DOOR
# 347 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_16
# 348 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 349 "data/maps/SandgemTown/scripts.pory"
	waitse
# 351 "data/maps/SandgemTown/scripts.pory"
	playse SE_WALL_HIT
# 352 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_4
# 353 "data/maps/SandgemTown/scripts.pory"
	waitse
# 354 "data/maps/SandgemTown/scripts.pory"
	playbgm MUS_GSC_ROUTE38, 0
# 356 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_5
# 362 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 364 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_17
# 365 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 367 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_18
# 368 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_18
# 369 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_19
# 370 "data/maps/SandgemTown/scripts.pory"
	waitmovement 2
# 372 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_RIVAL
# 373 "data/maps/SandgemTown/scripts.pory"
	removeobject 2
# 374 "data/maps/SandgemTown/scripts.pory"
	delay 10
# 375 "data/maps/SandgemTown/scripts.pory"
	fadedefaultbgm
# 377 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_EventScript_LucasDawnScene_24
# 385 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_7
# 390 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_EventScript_LucasDawnScene_23:
# 394 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 395 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 396 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_4
# 397 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 398 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 400 "data/maps/SandgemTown/scripts.pory"
	playse SE_DOOR
# 401 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 402 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_2
# 403 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 404 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_DAWN
# 405 "data/maps/SandgemTown/scripts.pory"
	removeobject 1
# 407 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_2
# 408 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 410 "data/maps/SandgemTown/scripts.pory"
	warp MAP_SANDGEM_PROFESSORS_LAB, 6, 12
# 412 "data/maps/SandgemTown/scripts.pory"
	release
	return

SandgemTown_EventScript_LucasDawnScene_3:
# 268 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 269 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 270 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 271 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_2
# 272 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_4:
# 274 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_3
# 275 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_5:
# 277 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_4
# 278 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_6:
# 280 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_4
# 281 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 282 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 283 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_6
# 284 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_7:
# 286 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 287 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 288 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 289 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_7
# 290 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_9:
# 296 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_0
# 299 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_EventScript_LucasDawnScene_8

SandgemTown_EventScript_LucasDawnScene_14:
# 309 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_7
# 310 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_8
# 311 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_12

SandgemTown_EventScript_LucasDawnScene_15:
# 313 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_9
# 314 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_9
# 315 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_12

SandgemTown_EventScript_LucasDawnScene_16:
# 317 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_10
# 318 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_11
# 319 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_12

SandgemTown_EventScript_LucasDawnScene_17:
# 321 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_12
# 322 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_13
# 323 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_12

SandgemTown_EventScript_LucasDawnScene_18:
# 325 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_14
# 326 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_15
# 327 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_12

SandgemTown_EventScript_LucasDawnScene_20:
# 331 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_2
# 334 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_EventScript_LucasDawnScene_19

SandgemTown_EventScript_LucasDawnScene_24:
# 378 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_6
# 383 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_EventScript_LucasDawnScene_23


SandgemTown_EventScript_Woman::
# 416 "data/maps/SandgemTown/scripts.pory"
	lock
# 418 "data/maps/SandgemTown/scripts.pory"
	faceplayer
# 419 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_Woman_Text_0
# 423 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 425 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_Youngster::
# 429 "data/maps/SandgemTown/scripts.pory"
	lock
# 431 "data/maps/SandgemTown/scripts.pory"
	faceplayer
# 432 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_Youngster_Text_0
# 438 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 440 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_Man::
# 445 "data/maps/SandgemTown/scripts.pory"
	lock
# 447 "data/maps/SandgemTown/scripts.pory"
	faceplayer
# 448 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_Man_Text_0
# 452 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 454 "data/maps/SandgemTown/scripts.pory"
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

# 106 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_3:
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_down
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 107 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_4:
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
	walk_right
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 154 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_5:
# 154 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_right
	step_end

# 155 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_6:
# 155 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_left
	step_end

# 191 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_7:
# 191 "data/maps/SandgemTown/scripts.pory"
	walk_down
	step_end

# 194 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_8:
# 194 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 194 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 194 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 194 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 194 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 197 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_9:
# 197 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 197 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 197 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 197 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 197 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 197 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 197 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 197 "data/maps/SandgemTown/scripts.pory"
	walk_up
	step_end

# 259 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_0:
# 259 "data/maps/SandgemTown/scripts.pory"
	emote_exclamation_mark
# 259 "data/maps/SandgemTown/scripts.pory"
	delay_16
# 259 "data/maps/SandgemTown/scripts.pory"
	delay_16
# 259 "data/maps/SandgemTown/scripts.pory"
	delay_16
	step_end

# 263 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_1:
# 263 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 263 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 271 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_2:
# 271 "data/maps/SandgemTown/scripts.pory"
	face_down
	step_end

# 274 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_3:
# 274 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 274 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 277 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_4:
# 277 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 282 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_5:
# 282 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 283 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_6:
# 283 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 283 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_down
	step_end

# 309 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_7:
# 309 "data/maps/SandgemTown/scripts.pory"
	walk_down
# 309 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 309 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 309 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 309 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 309 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 310 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_8:
# 310 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 310 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 310 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 310 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 310 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 310 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 313 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_9:
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

# 317 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_10:
# 317 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 317 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 317 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 317 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 317 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 317 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 318 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_11:
# 318 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 318 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 318 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 318 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 318 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 318 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 321 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_12:
# 321 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 321 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 321 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 321 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 321 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 321 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 321 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 322 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_13:
# 322 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 322 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 322 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 322 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 322 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 322 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 322 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 325 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_14:
# 325 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 325 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 325 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 325 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 325 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 325 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 325 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 325 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 326 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_15:
# 326 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 326 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 326 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 326 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 326 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 326 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 326 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 326 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 347 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_16:
# 347 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
# 347 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 364 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_17:
# 364 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 364 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 364 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
	step_end

# 367 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_18:
# 367 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 369 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_19:
# 369 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 369 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 369 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 369 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 369 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 369 "data/maps/SandgemTown/scripts.pory"
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
# 111 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}This building with the red roof is\n"
	.string "the Pokémon Center.\p"
	.string "You can get your Pokémon healed if\n"
	.string "it's been hurt in battle.\p"
	.string "You'll find a Pokémon Center in most\n"
	.string "towns.$"

SandgemTown_ON_FRAME_Text_8:
# 119 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}This building with the red roof is\n"
	.string "the Pokémon Center.\p"
	.string "It's the place that heals Pokémon\n"
	.string "that have been hurt in battle.\p"
	.string "You can find a Pokémon Center in\n"
	.string "most towns.$"

SandgemTown_ON_FRAME_Text_9:
# 133 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Over here, the building with the blue\n"
	.string "roof is the Poké Mart.\p"
	.string "It's a shop where you can buy and\n"
	.string "sell all sorts of items.\p"
	.string "{PLAYER}, since you're a rookie\n"
	.string "Trainer, you won't be able to buy\l"
	.string "very much stuff.\p"
	.string "Don't worry about it, OK?$"

SandgemTown_ON_FRAME_Text_10:
# 143 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}The building with the blue roof over\n"
	.string "here is the Poké Mart.\p"
	.string "It's a shop where you can buy and\n"
	.string "sell items and medicine.\p"
	.string "{PLAYER}, since you're a novice\n"
	.string "Trainer, you won't be able to buy\l"
	.string "many kinds of merchandise.\p"
	.string "Don't let it bother you!$"

SandgemTown_ON_FRAME_Text_11:
# 164 "data/maps/SandgemTown/scripts.pory"
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
# 177 "data/maps/SandgemTown/scripts.pory"
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
# 296 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hi! I've been waiting for you!\n"
	.string "Please, come with me!\l"
	.string "The prof's waiting to see you.$"

SandgemTown_EventScript_LucasDawnScene_Text_1:
# 301 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Oh! There you are!\n"
	.string "Please, come with me!\l"
	.string "The professor is waiting!$"

SandgemTown_EventScript_LucasDawnScene_Text_2:
# 331 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}See? This is our Pokémon Research\n"
	.string "Lab.\p"
	.string "We'll just go ahead and. . .$"

SandgemTown_EventScript_LucasDawnScene_Text_3:
# 336 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}This is it!\n"
	.string "Our Pokémon Research Lab!\p"
	.string "Let's go. . .$"

SandgemTown_EventScript_LucasDawnScene_Text_4:
# 352 "data/maps/SandgemTown/scripts.pory"
	.string "THUD! !$"

SandgemTown_EventScript_LucasDawnScene_Text_5:
# 356 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_BARRY}What the. . .\p"
	.string "Oh, it's you, {PLAYER}!\p"
	.string "That old guy. . . He's not so scary so\n"
	.string "much as he is totally out there!\p"
	.string "Aww, it doesn't matter, {PLAYER}.\n"
	.string "I'm out of here. See you later!$"

SandgemTown_EventScript_LucasDawnScene_Text_6:
# 378 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}What was that?!\p"
	.string "Your friend always seems to be\n"
	.string "in such a rush.\p"
	.string "Anyway. . .\n"
	.string "Let's go in.$"

SandgemTown_EventScript_LucasDawnScene_Text_7:
# 385 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Wow, what was that?!\p"
	.string "Your friend sure seems to be really\n"
	.string "impatient.\p"
	.string "Well, anyway. . .\n"
	.string "Let's go inside.$"

SandgemTown_EventScript_Woman_Text_0:
# 419 "data/maps/SandgemTown/scripts.pory"
	.string "So I don't forget what's happened,\n"
	.string "till now, I'd better save this. . .\p"
	.string "There!\n"
	.string "Now I can take a break.$"

SandgemTown_EventScript_Youngster_Text_0:
# 432 "data/maps/SandgemTown/scripts.pory"
	.string "Oh, wow!\n"
	.string "Pokémon are so cool!\p"
	.string "You can make yours battle and make\n"
	.string "them stronger!\p"
	.string "I wish I had some!\n"
	.string "It's so cool!$"

SandgemTown_EventScript_Man_Text_0:
# 448 "data/maps/SandgemTown/scripts.pory"
	.string "That thing you have!\p"
	.string "It's a Pokédex, isn't it?!\p"
	.string "You're off to see all kinds of\n"
	.string "Pokémon now! Lucky you!$"
