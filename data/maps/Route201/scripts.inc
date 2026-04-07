Route201_MapScripts::
# 10 "data/maps/Route201/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route201_EventScript_OnTransition
	.byte 0


Route201_EventScript_OnTransition::
# 14 "data/maps/Route201/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


Route201_EventScript_BarryScene1::
# 18 "data/maps/Route201/scripts.pory"
	lock
# 19 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 1
# 20 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 21 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene2::
# 25 "data/maps/Route201/scripts.pory"
	lock
# 26 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 2
# 27 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 28 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene3::
# 32 "data/maps/Route201/scripts.pory"
	lock
# 33 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 3
# 34 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 35 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene4::
# 39 "data/maps/Route201/scripts.pory"
	lock
# 40 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 4
# 41 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 42 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene::
# 47 "data/maps/Route201/scripts.pory"
	lock
# 49 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 50 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route201/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 53 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 54 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route201/scripts.pory"
	waitse
# 56 "data/maps/Route201/scripts.pory"
	delay 30
# 58 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 59 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_0
# 60 "data/maps/Route201/scripts.pory"
	closemessage
# 62 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_1
# 63 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryScene_3
# 65 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryScene_4
# 67 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryScene_5
# 69 "data/maps/Route201/scripts.pory"
	case 4, Route201_EventScript_BarryScene_6
Route201_EventScript_BarryScene_1:
# 72 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 75 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_1
# 77 "data/maps/Route201/scripts.pory"
	closemessage
# 79 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_1
# 80 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryScene_9
# 83 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryScene_10
# 86 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryScene_11
# 89 "data/maps/Route201/scripts.pory"
	case 4, Route201_EventScript_BarryScene_12
Route201_EventScript_BarryScene_7:
# 93 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 95 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 96 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_2
# 107 "data/maps/Route201/scripts.pory"
	closemessage
# 109 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_13
# 110 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 112 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_14
# 113 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 115 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 116 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_3
# 123 "data/maps/Route201/scripts.pory"
	closemessage
# 125 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_13
# 126 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 127 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_15
# 128 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_16
# 129 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 131 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 132 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_4
# 134 "data/maps/Route201/scripts.pory"
	closemessage
# 136 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_17
# 137 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_14
# 138 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_5
# 141 "data/maps/Route201/scripts.pory"
	closemessage
# 143 "data/maps/Route201/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 144 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 145 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 146 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 147 "data/maps/Route201/scripts.pory"
	waitse
# 148 "data/maps/Route201/scripts.pory"
	delay 30
# 150 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_18
# 151 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 152 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 154 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_201_ROWAN
# 155 "data/maps/Route201/scripts.pory"
	addobject 2
# 157 "data/maps/Route201/scripts.pory"
	playbgm MUS_BIRCH_LAB, 0
# 159 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_19
# 160 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 162 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_6
# 173 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_20
# 174 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 176 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_7
# 180 "data/maps/Route201/scripts.pory"
	closemessage
# 182 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_21
# 183 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 184 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 185 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 187 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_8
# 199 "data/maps/Route201/scripts.pory"
	closemessage
# 201 "data/maps/Route201/scripts.pory"
	delay 30
# 202 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_22
# 203 "data/maps/Route201/scripts.pory"
	waitmovement 2
Route201_EventScript_BarryScene_14:
# 206 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_9, MSGBOX_YESNO
# 208 "data/maps/Route201/scripts.pory"
	closemessage
# 209 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route201_EventScript_BarryScene_19
# 227 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_15
# 228 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 230 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_12
Route201_EventScript_BarryScene_17:
# 237 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 238 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_13
# 243 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 244 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 245 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 246 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_14, MSGBOX_YESNO
# 247 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route201_EventScript_BarryScene_22
# 258 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_16
# 263 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 264 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_18
# 265 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 267 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_17
# 287 "data/maps/Route201/scripts.pory"
	closemessage
# 289 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_18
# 290 "data/maps/Route201/scripts.pory"
	delay 30
# 291 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 292 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_23
# 293 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 294 "data/maps/Route201/scripts.pory"
	delay 30
# 296 "data/maps/Route201/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 297 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_201_DAWN
# 298 "data/maps/Route201/scripts.pory"
	addobject 3
# 300 "data/maps/Route201/scripts.pory"
	applymovement 3, Route201_EventScript_BarryScene_Movement_24
# 301 "data/maps/Route201/scripts.pory"
	waitmovement 3
# 303 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_18
# 306 "data/maps/Route201/scripts.pory"
	closemessage
# 308 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_15
# 309 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 311 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_201_BRIEFCASE
# 312 "data/maps/Route201/scripts.pory"
	addobject 4
# 313 "data/maps/Route201/scripts.pory"
	setobjectxy 4, 16, 14
# 315 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_19
# 320 "data/maps/Route201/scripts.pory"
	applymovement 3, Route201_EventScript_BarryScene_Movement_25
# 321 "data/maps/Route201/scripts.pory"
	waitmovement 3
# 323 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_20
# 334 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_25
# 335 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 336 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_21
# 338 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_15
# 339 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 340 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_22
# 344 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 345 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 346 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_23
# 351 "data/maps/Route201/scripts.pory"
	closemessage
# 352 "data/maps/Route201/scripts.pory"
	fadedefaultbgm
# 353 "data/maps/Route201/scripts.pory"
	release
	return

Route201_EventScript_BarryScene_3:
# 64 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_1
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_4:
# 66 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_2
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_5:
# 68 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_3
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_6:
# 70 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_4
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_9:
# 81 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_5
# 82 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_6
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_10:
# 84 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_7
# 85 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_8
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_11:
# 87 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_9
# 88 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_10
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_12:
# 90 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_11
# 91 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_12
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_19:
# 210 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 211 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 213 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_10
# 216 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 217 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 219 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_11
	goto Route201_EventScript_BarryScene_14

Route201_EventScript_BarryScene_22:
# 248 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 249 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_15
# 251 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 252 "data/maps/Route201/scripts.pory"
	waitmovement 1
	goto Route201_EventScript_BarryScene_17


Route201_EventScript_PickAPokemonRight::
# 357 "data/maps/Route201/scripts.pory"
	lock
# 359 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_2, 1
# 360 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_PickAPokemon
# 362 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_PickAPokemonDown::
# 366 "data/maps/Route201/scripts.pory"
	lock
# 368 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_2, 2
# 369 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_PickAPokemon
# 371 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_PickAPokemon::
# 375 "data/maps/Route201/scripts.pory"
	lock
# 377 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 378 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 379 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_PickAPokemon_Text_0
# 381 "data/maps/Route201/scripts.pory"
	closemessage
# 383 "data/maps/Route201/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Route201_EventScript_PickAPokemon_2
# 386 "data/maps/Route201/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq Route201_EventScript_PickAPokemon_3
Route201_EventScript_PickAPokemon_1:
# 389 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 391 "data/maps/Route201/scripts.pory"
	release
	return

Route201_EventScript_PickAPokemon_2:
# 384 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_13
	goto Route201_EventScript_PickAPokemon_1

Route201_EventScript_PickAPokemon_3:
# 387 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_PickAPokemon_Movement_0
	goto Route201_EventScript_PickAPokemon_1


Route201_EventScript_Rowan::
# 395 "data/maps/Route201/scripts.pory"
	lock
# 396 "data/maps/Route201/scripts.pory"
	faceplayer
# 397 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_21
# 399 "data/maps/Route201/scripts.pory"
	closemessage
# 400 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_Rival::
# 404 "data/maps/Route201/scripts.pory"
	lock
# 406 "data/maps/Route201/scripts.pory"
	faceplayer
# 407 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_Rival_Text_0
# 411 "data/maps/Route201/scripts.pory"
	closemessage
# 413 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_ChooseStarter::
# 418 "data/maps/Route201/scripts.pory"
	lock
# 420 "data/maps/Route201/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 422 "data/maps/Route201/scripts.pory"
	fadescreen FADE_TO_BLACK
# 423 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_ROUTE_201_BRIEFCASE
# 424 "data/maps/Route201/scripts.pory"
	removeobject 4
# 425 "data/maps/Route201/scripts.pory"
	special ChooseStarter
# 426 "data/maps/Route201/scripts.pory"
	waitstate
# 428 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_20
# 429 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 430 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_ChooseStarter_Movement_0
# 431 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 432 "data/maps/Route201/scripts.pory"
	delay 8
# 433 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 435 "data/maps/Route201/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq Route201_EventScript_ChooseStarter_2
# 438 "data/maps/Route201/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq Route201_EventScript_ChooseStarter_3
# 442 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_2
Route201_EventScript_ChooseStarter_1:
# 445 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_3
# 457 "data/maps/Route201/scripts.pory"
	closemessage
# 459 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_PickAPokemon_Movement_0
# 460 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 461 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_25
# 462 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_25
# 463 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 464 "data/maps/Route201/scripts.pory"
	delay 8
# 465 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_19
# 466 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 467 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_ROUTE_201_ROWAN
# 468 "data/maps/Route201/scripts.pory"
	removeobject 2
# 470 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_4
# 472 "data/maps/Route201/scripts.pory"
	closemessage
# 474 "data/maps/Route201/scripts.pory"
	applymovement 3, Route201_EventScript_ChooseStarter_Movement_1
# 475 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_14
# 476 "data/maps/Route201/scripts.pory"
	waitmovement 3
# 478 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_5
# 479 "data/maps/Route201/scripts.pory"
	closemessage
# 481 "data/maps/Route201/scripts.pory"
	applymovement 3, Route201_EventScript_ChooseStarter_Movement_1
# 482 "data/maps/Route201/scripts.pory"
	waitmovement 3
# 483 "data/maps/Route201/scripts.pory"
	applymovement 3, Route201_EventScript_BarryScene_Movement_24
# 484 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_25
# 485 "data/maps/Route201/scripts.pory"
	waitmovement 3
# 487 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_ROUTE_201_DAWN
# 488 "data/maps/Route201/scripts.pory"
	removeobject 3
# 490 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_6
# 493 "data/maps/Route201/scripts.pory"
	closemessage
# 495 "data/maps/Route201/scripts.pory"
	delay 60
# 496 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_20
# 497 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 498 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_ChooseStarter_Movement_0
# 499 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 500 "data/maps/Route201/scripts.pory"
	delay 40
# 501 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 502 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_ChooseStarter_Movement_2
# 503 "data/maps/Route201/scripts.pory"
	waitmovement 1
Route201_EventScript_ChooseStarter_8:
# 506 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_7, MSGBOX_YESNO
# 510 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route201_EventScript_ChooseStarter_15
# 518 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_9
# 524 "data/maps/Route201/scripts.pory"
	switch VAR_STARTER_MON
# 525 "data/maps/Route201/scripts.pory"
	case 0, Route201_EventScript_ChooseStarter_12
# 527 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_ChooseStarter_13
# 529 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_ChooseStarter_14
Route201_EventScript_ChooseStarter_10:
# 534 "data/maps/Route201/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 536 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route201_EventScript_ChooseStarter_19
# 543 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_12
Route201_EventScript_ChooseStarter_18:
# 555 "data/maps/Route201/scripts.pory"
	special HealPlayerParty
# 556 "data/maps/Route201/scripts.pory"
	fadescreen FADE_TO_BLACK
# 557 "data/maps/Route201/scripts.pory"
	warp MAP_TWINLEAF_TOWN_PLAYERS_HOUSE_1F, 1, 5
# 559 "data/maps/Route201/scripts.pory"
	release
	return

Route201_EventScript_ChooseStarter_2:
# 436 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_0
	goto Route201_EventScript_ChooseStarter_1

Route201_EventScript_ChooseStarter_3:
# 439 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_1
	goto Route201_EventScript_ChooseStarter_1

Route201_EventScript_ChooseStarter_12:
# 526 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BARRY_ROUTE_201_TURTWIG, Route201_EventScript_ChooseStarter_Text_10
	goto Route201_EventScript_ChooseStarter_10

Route201_EventScript_ChooseStarter_13:
# 528 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BARRY_ROUTE_201_CHIMCHAR, Route201_EventScript_ChooseStarter_Text_10
	goto Route201_EventScript_ChooseStarter_10

Route201_EventScript_ChooseStarter_14:
# 530 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BARRY_ROUTE_201_PIPLUP, Route201_EventScript_ChooseStarter_Text_10
	goto Route201_EventScript_ChooseStarter_10

Route201_EventScript_ChooseStarter_15:
# 511 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_8
	goto Route201_EventScript_ChooseStarter_8

Route201_EventScript_ChooseStarter_19:
# 537 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_11
	goto Route201_EventScript_ChooseStarter_18


Route201_EventScript_LakeVerity1::
# 564 "data/maps/Route201/scripts.pory"
	lock
# 565 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 1
# 566 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_LakeVerityScene
# 567 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_LakeVerity2::
# 571 "data/maps/Route201/scripts.pory"
	lock
# 572 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 2
# 573 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_LakeVerityScene
# 574 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_LakeVerity3::
# 578 "data/maps/Route201/scripts.pory"
	lock
# 579 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 3
# 580 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_LakeVerityScene
# 581 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_LakeVerity4::
# 585 "data/maps/Route201/scripts.pory"
	lock
# 586 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 4
# 587 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_LakeVerityScene
# 588 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_LakeVerityScene::
# 592 "data/maps/Route201/scripts.pory"
	lock
# 594 "data/maps/Route201/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 595 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 596 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 597 "data/maps/Route201/scripts.pory"
	waitse
# 598 "data/maps/Route201/scripts.pory"
	delay 30
# 600 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_LakeVerityScene_Movement_0
# 601 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 603 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_LakeVerityScene_Text_0
# 617 "data/maps/Route201/scripts.pory"
	closemessage
# 619 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_1
# 620 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_LakeVerityScene_3
# 622 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_LakeVerityScene_4
# 624 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_LakeVerityScene_5
# 626 "data/maps/Route201/scripts.pory"
	case 4, Route201_EventScript_LakeVerityScene_6
Route201_EventScript_LakeVerityScene_1:
# 629 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 631 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_LakeVerityScene_Text_1
# 633 "data/maps/Route201/scripts.pory"
	closemessage
# 635 "data/maps/Route201/scripts.pory"
	setvar VAR_ROUTE201_BARRYNPC_STATE, 1
# 636 "data/maps/Route201/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 9
# 638 "data/maps/Route201/scripts.pory"
	setfollowernpc 1, FLAG_HIDE_ROUTE_201_BARRY, Route201_EventScript_NPCBarry, 0
# 640 "data/maps/Route201/scripts.pory"
	release
	return

Route201_EventScript_LakeVerityScene_3:
# 621 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_LakeVerityScene_Movement_1
	goto Route201_EventScript_LakeVerityScene_1

Route201_EventScript_LakeVerityScene_4:
# 623 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_LakeVerityScene_Movement_2
	goto Route201_EventScript_LakeVerityScene_1

Route201_EventScript_LakeVerityScene_5:
# 625 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_LakeVerityScene_Movement_3
	goto Route201_EventScript_LakeVerityScene_1

Route201_EventScript_LakeVerityScene_6:
# 627 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_LakeVerityScene_Movement_4
	goto Route201_EventScript_LakeVerityScene_1


Route201_EventScript_VerityExitSouth::
# 644 "data/maps/Route201/scripts.pory"
	lock
# 645 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_14
# 646 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route201_EventScript_BarryScene_Movement_0
# 647 "data/maps/Route201/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 649 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_VerityExitSouth_Text_0
# 651 "data/maps/Route201/scripts.pory"
	closemessage
# 653 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route201_EventScript_PickAPokemon_Movement_0
# 654 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_PickAPokemon_Movement_0
# 655 "data/maps/Route201/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 657 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route201_EventScript_BarryScene_Movement_0
# 658 "data/maps/Route201/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 661 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_VerityExitEast::
# 665 "data/maps/Route201/scripts.pory"
	lock
# 666 "data/maps/Route201/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 668 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Route201_EventScript_VerityExitEast_2
# 671 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Route201_EventScript_VerityExitEast_3
Route201_EventScript_VerityExitEast_1:
# 676 "data/maps/Route201/scripts.pory"
	release
	return

Route201_EventScript_VerityExitEast_2:
# 669 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_VerityExitEast_Movement_0
# 670 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_VerityExitEast_1

Route201_EventScript_VerityExitEast_3:
# 672 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_13
# 673 "data/maps/Route201/scripts.pory"
	waitmovement 0
	goto Route201_EventScript_VerityExitEast_1


Route201_EventScript_NPCBarry::
# 680 "data/maps/Route201/scripts.pory"
	lock
# 681 "data/maps/Route201/scripts.pory"
	switch VAR_ROUTE201_BARRYNPC_STATE
# 682 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_NPCBarry_2
# 692 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_NPCBarry_3
# 701 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_NPCBarry_4
# 715 "data/maps/Route201/scripts.pory"
	case 4, Route201_EventScript_NPCBarry_5
# 723 "data/maps/Route201/scripts.pory"
	case 5, Route201_EventScript_NPCBarry_6
# 735 "data/maps/Route201/scripts.pory"
	case 6, Route201_EventScript_NPCBarry_7
	return

Route201_EventScript_NPCBarry_2:
# 683 "data/maps/Route201/scripts.pory"
	faceplayer
# 684 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_NPCBarry_Text_0
# 690 "data/maps/Route201/scripts.pory"
	closemessage
# 691 "data/maps/Route201/scripts.pory"
	addvar VAR_ROUTE201_BARRYNPC_STATE, 1
	return

Route201_EventScript_NPCBarry_3:
# 693 "data/maps/Route201/scripts.pory"
	faceplayer
# 694 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_NPCBarry_Text_1
# 699 "data/maps/Route201/scripts.pory"
	closemessage
# 700 "data/maps/Route201/scripts.pory"
	addvar VAR_ROUTE201_BARRYNPC_STATE, 1
	return

Route201_EventScript_NPCBarry_4:
# 702 "data/maps/Route201/scripts.pory"
	faceplayer
# 703 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_NPCBarry_Text_2
# 713 "data/maps/Route201/scripts.pory"
	closemessage
# 714 "data/maps/Route201/scripts.pory"
	addvar VAR_ROUTE201_BARRYNPC_STATE, 1
	return

Route201_EventScript_NPCBarry_5:
# 716 "data/maps/Route201/scripts.pory"
	faceplayer
# 717 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_NPCBarry_Text_3
# 721 "data/maps/Route201/scripts.pory"
	closemessage
# 722 "data/maps/Route201/scripts.pory"
	addvar VAR_ROUTE201_BARRYNPC_STATE, 1
	return

Route201_EventScript_NPCBarry_6:
# 724 "data/maps/Route201/scripts.pory"
	faceplayer
# 725 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_NPCBarry_Text_4
# 733 "data/maps/Route201/scripts.pory"
	closemessage
# 734 "data/maps/Route201/scripts.pory"
	addvar VAR_ROUTE201_BARRYNPC_STATE, 1
	return

Route201_EventScript_NPCBarry_7:
# 736 "data/maps/Route201/scripts.pory"
	faceplayer
# 737 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_NPCBarry_Text_5
# 741 "data/maps/Route201/scripts.pory"
	closemessage
	return


# 49 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_0:
# 49 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 64 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_1:
# 64 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 64 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 64 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 64 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 66 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_2:
# 66 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 66 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 66 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 68 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_3:
# 68 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 68 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 70 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_4:
# 70 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 70 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 70 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 81 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_5:
# 81 "data/maps/Route201/scripts.pory"
	walk_up
# 81 "data/maps/Route201/scripts.pory"
	walk_up
# 81 "data/maps/Route201/scripts.pory"
	walk_right
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
	walk_right
# 81 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 82 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_6:
# 82 "data/maps/Route201/scripts.pory"
	walk_up
# 82 "data/maps/Route201/scripts.pory"
	walk_up
# 82 "data/maps/Route201/scripts.pory"
	walk_right
# 82 "data/maps/Route201/scripts.pory"
	walk_right
# 82 "data/maps/Route201/scripts.pory"
	walk_right
# 82 "data/maps/Route201/scripts.pory"
	walk_right
# 82 "data/maps/Route201/scripts.pory"
	walk_up
# 82 "data/maps/Route201/scripts.pory"
	walk_up
# 82 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 84 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_7:
# 84 "data/maps/Route201/scripts.pory"
	walk_up
# 84 "data/maps/Route201/scripts.pory"
	walk_up
# 84 "data/maps/Route201/scripts.pory"
	walk_right
# 84 "data/maps/Route201/scripts.pory"
	walk_right
# 84 "data/maps/Route201/scripts.pory"
	walk_right
# 84 "data/maps/Route201/scripts.pory"
	walk_up
# 84 "data/maps/Route201/scripts.pory"
	walk_up
# 84 "data/maps/Route201/scripts.pory"
	walk_right
# 84 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 85 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_8:
# 85 "data/maps/Route201/scripts.pory"
	walk_up
# 85 "data/maps/Route201/scripts.pory"
	walk_up
# 85 "data/maps/Route201/scripts.pory"
	walk_right
# 85 "data/maps/Route201/scripts.pory"
	walk_right
# 85 "data/maps/Route201/scripts.pory"
	walk_right
# 85 "data/maps/Route201/scripts.pory"
	walk_up
# 85 "data/maps/Route201/scripts.pory"
	walk_up
# 85 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 87 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_9:
# 87 "data/maps/Route201/scripts.pory"
	walk_up
# 87 "data/maps/Route201/scripts.pory"
	walk_up
# 87 "data/maps/Route201/scripts.pory"
	walk_right
# 87 "data/maps/Route201/scripts.pory"
	walk_right
# 87 "data/maps/Route201/scripts.pory"
	walk_up
# 87 "data/maps/Route201/scripts.pory"
	walk_up
# 87 "data/maps/Route201/scripts.pory"
	walk_right
# 87 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 88 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_10:
# 88 "data/maps/Route201/scripts.pory"
	walk_up
# 88 "data/maps/Route201/scripts.pory"
	walk_up
# 88 "data/maps/Route201/scripts.pory"
	walk_right
# 88 "data/maps/Route201/scripts.pory"
	walk_right
# 88 "data/maps/Route201/scripts.pory"
	walk_up
# 88 "data/maps/Route201/scripts.pory"
	walk_up
# 88 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 90 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_11:
# 90 "data/maps/Route201/scripts.pory"
	walk_up
# 90 "data/maps/Route201/scripts.pory"
	walk_up
# 90 "data/maps/Route201/scripts.pory"
	walk_right
# 90 "data/maps/Route201/scripts.pory"
	walk_up
# 90 "data/maps/Route201/scripts.pory"
	walk_up
# 90 "data/maps/Route201/scripts.pory"
	walk_right
# 90 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 91 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_12:
# 91 "data/maps/Route201/scripts.pory"
	walk_up
# 91 "data/maps/Route201/scripts.pory"
	walk_up
# 91 "data/maps/Route201/scripts.pory"
	walk_right
# 91 "data/maps/Route201/scripts.pory"
	walk_up
# 91 "data/maps/Route201/scripts.pory"
	walk_up
# 91 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 109 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_13:
# 109 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 112 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_14:
# 112 "data/maps/Route201/scripts.pory"
	walk_in_place_up
	step_end

# 127 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_15:
# 127 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 128 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_16:
# 128 "data/maps/Route201/scripts.pory"
	walk_left
# 128 "data/maps/Route201/scripts.pory"
	walk_left
# 128 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 136 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_17:
# 136 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 136 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 136 "data/maps/Route201/scripts.pory"
	walk_fast_right
	step_end

# 150 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_18:
# 150 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 159 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_19:
# 159 "data/maps/Route201/scripts.pory"
	walk_right
# 159 "data/maps/Route201/scripts.pory"
	walk_right
# 159 "data/maps/Route201/scripts.pory"
	walk_right
# 159 "data/maps/Route201/scripts.pory"
	walk_right
# 159 "data/maps/Route201/scripts.pory"
	walk_right
# 159 "data/maps/Route201/scripts.pory"
	walk_right
# 159 "data/maps/Route201/scripts.pory"
	walk_right
# 159 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 173 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_20:
# 173 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 182 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_21:
# 182 "data/maps/Route201/scripts.pory"
	walk_left
# 182 "data/maps/Route201/scripts.pory"
	walk_left
# 182 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 202 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_22:
# 202 "data/maps/Route201/scripts.pory"
	walk_right
# 202 "data/maps/Route201/scripts.pory"
	walk_right
# 202 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 292 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_23:
# 292 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 300 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_24:
# 300 "data/maps/Route201/scripts.pory"
	walk_right
# 300 "data/maps/Route201/scripts.pory"
	walk_right
# 300 "data/maps/Route201/scripts.pory"
	walk_right
# 300 "data/maps/Route201/scripts.pory"
	walk_right
# 300 "data/maps/Route201/scripts.pory"
	walk_right
# 300 "data/maps/Route201/scripts.pory"
	walk_right
# 300 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 320 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_25:
# 320 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 387 "data/maps/Route201/scripts.pory"
Route201_EventScript_PickAPokemon_Movement_0:
# 387 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

# 430 "data/maps/Route201/scripts.pory"
Route201_EventScript_ChooseStarter_Movement_0:
# 430 "data/maps/Route201/scripts.pory"
	face_up
	step_end

# 474 "data/maps/Route201/scripts.pory"
Route201_EventScript_ChooseStarter_Movement_1:
# 474 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 502 "data/maps/Route201/scripts.pory"
Route201_EventScript_ChooseStarter_Movement_2:
# 502 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 502 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 502 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 502 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 502 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 502 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 502 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 502 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 502 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 502 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 600 "data/maps/Route201/scripts.pory"
Route201_EventScript_LakeVerityScene_Movement_0:
# 600 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
	step_end

# 621 "data/maps/Route201/scripts.pory"
Route201_EventScript_LakeVerityScene_Movement_1:
# 621 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 621 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 621 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 621 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
	step_end

# 623 "data/maps/Route201/scripts.pory"
Route201_EventScript_LakeVerityScene_Movement_2:
# 623 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 623 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 623 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
	step_end

# 625 "data/maps/Route201/scripts.pory"
Route201_EventScript_LakeVerityScene_Movement_3:
# 625 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 627 "data/maps/Route201/scripts.pory"
Route201_EventScript_LakeVerityScene_Movement_4:
# 627 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 627 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 627 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
	step_end

# 669 "data/maps/Route201/scripts.pory"
Route201_EventScript_VerityExitEast_Movement_0:
# 669 "data/maps/Route201/scripts.pory"
	walk_down
	step_end

Route201_EventScript_BarryScene_Text_0:
# 59 "data/maps/Route201/scripts.pory"
	.string "Too slow!$"

Route201_EventScript_BarryScene_Text_1:
# 75 "data/maps/Route201/scripts.pory"
	.string "All right!\n"
	.string "Let's get moving to Prof. Rowan's lab.$"

Route201_EventScript_BarryScene_Text_2:
# 96 "data/maps/Route201/scripts.pory"
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
# 116 "data/maps/Route201/scripts.pory"
	.string "So, what you do is, you scoot over to\n"
	.string "the next patch of grass before any\l"
	.string "wild Pokémon can appear!\p"
	.string "If we just keep dashing, we can get to\n"
	.string "Sandgem Town without running into\l"
	.string "wild Pokémon!\p"
	.string "OK, stick with me!$"

Route201_EventScript_BarryScene_Text_4:
# 132 "data/maps/Route201/scripts.pory"
	.string "OK, here goes!\p"
	.string "On your marks. . .$"

Route201_EventScript_BarryScene_Text_5:
# 140 "data/maps/Route201/scripts.pory"
	.string "HOLD IT!$"

Route201_EventScript_BarryScene_Text_6:
# 162 "data/maps/Route201/scripts.pory"
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
# 176 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey, {PLAYER}.\n"
	.string "This old guy. . .\p"
	.string "It's Prof. Rowan, isn't it?\n"
	.string "What's he doing here. . .?$"

Route201_EventScript_BarryScene_Text_8:
# 187 "data/maps/Route201/scripts.pory"
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
# 206 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}You two.\n"
	.string "You truly love Pokémon, do you?$"

Route201_EventScript_BarryScene_Text_10:
# 213 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Whoa, hold up!\n"
	.string "You're not making any sense here!$"

Route201_EventScript_BarryScene_Text_11:
# 219 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}Er-hem!\p"
	.string "I didn't quite catch that, so I will\n"
	.string "ask you again.$"

Route201_EventScript_BarryScene_Text_12:
# 230 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Me, too!\n"
	.string "I love Pokémon, too!\p"
	.string "{SPEAKER NAME_PROFESSOR}I will ask you once again.\p"
	.string "You two.\n"
	.string "You truly love Pokémon, do you?$"

Route201_EventScript_BarryScene_Text_13:
# 238 "data/maps/Route201/scripts.pory"
	.string "What?!\n"
	.string "You can ask a hundred times!\l"
	.string "The answer will never change!\p"
	.string "We'll both answer a hundred times\n"
	.string "we love Pokémon!$"

Route201_EventScript_BarryScene_Text_14:
# 246 "data/maps/Route201/scripts.pory"
	.string "Right, {PLAYER}?$"

Route201_EventScript_BarryScene_Text_15:
# 249 "data/maps/Route201/scripts.pory"
	.string ". . .\n"
	.string "That joke's getting old!$"

Route201_EventScript_BarryScene_Text_16:
# 258 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}. . .A pair of reckless kids\n"
	.string "who foolishly try to enter tall grass\l"
	.string "without Pokémon of their own. . .?\p"
	.string "It worries what people like that\n"
	.string "would do with Pokémon.$"

Route201_EventScript_BarryScene_Text_17:
# 267 "data/maps/Route201/scripts.pory"
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

Route201_EventScript_BarryScene_Text_18:
# 303 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Professor Rowan!\p"
	.string "You left your briefcase behind at\n"
	.string "the lake.$"

Route201_EventScript_BarryScene_Text_19:
# 315 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Is something wrong here?\p"
	.string "{SPEAKER NAME_PROFESSOR}Ah! There it is!\n"
	.string "{RIVAL}, nice work.\p"
	.string "What I was about to do was to entrust\n"
	.string "these two with their own Pokémon.$"

Route201_EventScript_BarryScene_Text_20:
# 323 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Wha. . .?!\p"
	.string "Those Pokémon are crucial.\n"
	.string "You're giving them away?\p"
	.string "{SPEAKER NAME_PROFESSOR}Hm!\p"
	.string "We exist side by side with Pokémon.\p"
	.string "There comes a time when people should\n"
	.string "meet Pokémon.\p"
	.string "There is a world that should be\n"
	.string "explored together.\p"
	.string "For them, today is that time.\n"
	.string "The place, right here.$"

Route201_EventScript_BarryScene_Text_21:
# 336 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}Go on! Open the briefcase and choose\n"
	.string "a Pokémon!$"

Route201_EventScript_BarryScene_Text_22:
# 340 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Really?!\n"
	.string "Prof. Rowan!\p"
	.string "I can't believe it! I'm so happy now\n"
	.string "that I can't keep a straight face!$"

Route201_EventScript_BarryScene_Text_23:
# 346 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey {PLAYER}.\n"
	.string "You can choose first.\p"
	.string "Hey, I'm practically a grown-up.\n"
	.string "I have to show some class here.$"

Route201_EventScript_PickAPokemon_Text_0:
# 379 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}What's up with you?\n"
	.string "Open the briefcase and pick a Pokémon!$"

Route201_EventScript_Rival_Text_0:
# 407 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey, {PLAYER}.\n"
	.string "You can choose first. Go ahead.\p"
	.string "You know, like, I'm gonna be a man\n"
	.string "about it. Yeah, I'm slick.$"

Route201_EventScript_ChooseStarter_Text_0:
# 436 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Then, I choose you!\n"
	.string "I'm picking this CHIMCHAR.$"

Route201_EventScript_ChooseStarter_Text_1:
# 439 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Then, I choose you!\n"
	.string "I'm picking this PIPLUP.$"

Route201_EventScript_ChooseStarter_Text_2:
# 442 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Then, I choose you!\n"
	.string "I'm picking this TURTWIG.$"

Route201_EventScript_ChooseStarter_Text_3:
# 445 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}Very well! Both of you have\n"
	.string "chosen a good Pokémon, it seems.\p"
	.string "Now, listen well!\p"
	.string "The Pokémon you have been entrusted\n"
	.string "with are unfamiliar with the world.\p"
	.string "In that regard, they're much\n"
	.string "like you.\p"
	.string "As fellow newcomers to the world,\n"
	.string "I hope you'll do well together.\p"
	.string "If you have any trouble, come see me\n"
	.string "at my lab in Sandgem Town.\p"
	.string "And now, we'll be on our way.$"

Route201_EventScript_ChooseStarter_Text_4:
# 470 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Professor!\n"
	.string "Wait for me!$"

Route201_EventScript_ChooseStarter_Text_5:
# 478 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Uh, sorry, folks.$"

Route201_EventScript_ChooseStarter_Text_6:
# 490 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}How do you like that?\n"
	.string "Prof. Rowan's really nice.\p"
	.string "On TV, he seems so stern and scary.$"

Route201_EventScript_ChooseStarter_Text_7:
# 506 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Heheh, {PLAYER}!\n"
	.string "We've both got Pokémon now.\p"
	.string "There's only one thing to do, right?\n"
	.string "Are you up for this?$"

Route201_EventScript_ChooseStarter_Text_8:
# 511 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}What's with that attitude?\n"
	.string "Don't be that way!$"

Route201_EventScript_ChooseStarter_Text_9:
# 518 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}I've always wanted to\n"
	.string "say this. . .\p"
	.string "The time has finally come!\p"
	.string "{PLAYER}!\p"
	.string "I challenge you to a battle!$"

Route201_EventScript_ChooseStarter_Text_10:
# 526 "data/maps/Route201/scripts.pory"
	.string "What are you saying?!\nWe ended up losing?$"

Route201_EventScript_ChooseStarter_Text_11:
# 537 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Whew!\n"
	.string "Let's go home.\p"
	.string "I'm beat after that battle.\n"
	.string "My Pokémon needs rest, too.\p"
	.string "See ya, {PLAYER}!$"

Route201_EventScript_ChooseStarter_Text_12:
# 543 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Aha. . .\n"
	.string "Ahaha. . . I won? I won!\p"
	.string "But that battle, it could've gone\n"
	.string "either way. It was that close!\p"
	.string "I can tell you one thing: battling is\n"
	.string "awesomely fun!\p"
	.string "OK, let's go home.\p"
	.string "I'm beat after that battle.\n"
	.string "My Pokémon needs rest, too.\p"
	.string "See ya, {PLAYER}!$"

Route201_EventScript_LakeVerityScene_Text_0:
# 603 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Too slow!\n"
	.string "{PLAYER}, I'm sick of waiting!\p"
	.string "I'm going to go see Prof. Rowan, so I\n"
	.string "can thank him properly.\p"
	.string "So, I had this great idea.\n"
	.string "Listen up, OK?\p"
	.string "You know that lake where we always\n"
	.string "play at?\p"
	.string "You know how they say a legendary\n"
	.string "Pokémon lives there?\p"
	.string "You guessed it!\n"
	.string "Let's catch that Pokémon.\p"
	.string "That'll make Prof. Rowan happy.\n"
	.string "I'm sure of that!$"

Route201_EventScript_LakeVerityScene_Text_1:
# 631 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Me and you together,\n"
	.string "we've got nothing to fear!$"

Route201_EventScript_VerityExitSouth_Text_0:
# 649 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Heheh, {PLAYER}.\n"
	.string "The lake's not that way!$"

Route201_EventScript_NPCBarry_Text_0:
# 684 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}That Pokémon battle. . .\p"
	.string "Wasn't that wickedly fun or what?\p"
	.string "I mean, I'd pick the moves, and my\n"
	.string "Pokémon would use them!\p"
	.string "Yeah, I'm going to battle tons and get\n"
	.string "real close with Pokémon.$"

Route201_EventScript_NPCBarry_Text_1:
# 694 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Pokémon all have\n"
	.string "different moves, huh?\p"
	.string "A Trainer makes his Pokémon battle\n"
	.string "by ordering them to use moves.\p"
	.string "That's so awesomely cool.$"

Route201_EventScript_NPCBarry_Text_2:
# 703 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Do you believe it?\n"
	.string "I can hardly believe it.\p"
	.string "You and me, we're Pokémon Trainers all\n"
	.string "of a sudden.\p"
	.string "Man we've got tons to learn about\n"
	.string "being a Trainer.\p"
	.string "But seeing this Poké Ball with this\n"
	.string "TURTWIG inside. . .\p"
	.string "It makes me feel like I can do anything!\n"
	.string "Nothing's impossible!$"

Route201_EventScript_NPCBarry_Text_3:
# 717 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}That lake has a mirage\n"
	.string "Pokémon living in it.\p"
	.string "Everyone says it's just a legend, but\n"
	.string "I know I'm right.$"

Route201_EventScript_NPCBarry_Text_4:
# 725 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey, do you know about\n"
	.string "the Champion?\p"
	.string "There's this out-of-this-world tough\n"
	.string "Trainer who gets called that.\p"
	.string "Well, I'm gonna get so tough, the Champ\n"
	.string "has to battle me. You watch!\p"
	.string "With this little guy here, I'm sure I can\n"
	.string "get that tough.$"

Route201_EventScript_NPCBarry_Text_5:
# 737 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey, that's enough\n"
	.string "talking already.\p"
	.string "I'm itching to get going to the lake.\n"
	.string "Come on, come on!$"
