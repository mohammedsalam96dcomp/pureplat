Route201_MapScripts::
# 15 "data/maps/Route201/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route201_EventScript_OnTransition
	.byte 0


Route201_EventScript_OnTransition::
# 19 "data/maps/Route201/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


Route201_EventScript_BarryScene1::
# 23 "data/maps/Route201/scripts.pory"
	lock
# 24 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 1
# 25 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 26 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene2::
# 30 "data/maps/Route201/scripts.pory"
	lock
# 31 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 2
# 32 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 33 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene3::
# 37 "data/maps/Route201/scripts.pory"
	lock
# 38 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 3
# 39 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 40 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene4::
# 44 "data/maps/Route201/scripts.pory"
	lock
# 45 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 4
# 46 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 47 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene::
# 52 "data/maps/Route201/scripts.pory"
	lock
# 54 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 55 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route201/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 58 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 59 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route201/scripts.pory"
	waitse
# 61 "data/maps/Route201/scripts.pory"
	delay 30
# 63 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 64 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_0
# 65 "data/maps/Route201/scripts.pory"
	closemessage
# 67 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_1
# 68 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryScene_3
# 70 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryScene_4
# 72 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryScene_5
# 74 "data/maps/Route201/scripts.pory"
	case 4, Route201_EventScript_BarryScene_6
Route201_EventScript_BarryScene_1:
# 77 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 80 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_1
# 82 "data/maps/Route201/scripts.pory"
	closemessage
# 84 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_1
# 85 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryScene_9
# 88 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryScene_10
# 91 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryScene_11
# 94 "data/maps/Route201/scripts.pory"
	case 4, Route201_EventScript_BarryScene_12
Route201_EventScript_BarryScene_7:
# 98 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 100 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 101 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_2
# 112 "data/maps/Route201/scripts.pory"
	closemessage
# 114 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_13
# 115 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 117 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_14
# 118 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 120 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 121 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_3
# 128 "data/maps/Route201/scripts.pory"
	closemessage
# 130 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_13
# 131 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_15
# 133 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_16
# 134 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 136 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 137 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_4
# 139 "data/maps/Route201/scripts.pory"
	closemessage
# 141 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_17
# 142 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_14
# 143 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 145 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_5
# 146 "data/maps/Route201/scripts.pory"
	closemessage
# 148 "data/maps/Route201/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 149 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 150 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 151 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 152 "data/maps/Route201/scripts.pory"
	waitse
# 153 "data/maps/Route201/scripts.pory"
	delay 30
# 155 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_18
# 156 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 157 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 159 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_201_ROWAN
# 160 "data/maps/Route201/scripts.pory"
	addobject 2
# 162 "data/maps/Route201/scripts.pory"
	playbgm MUS_BIRCH_LAB, 0
# 164 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_19
# 165 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 167 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_6
# 178 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_20
# 179 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 181 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_7
# 185 "data/maps/Route201/scripts.pory"
	closemessage
# 187 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_21
# 188 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 189 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 190 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 192 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_8
# 204 "data/maps/Route201/scripts.pory"
	closemessage
# 206 "data/maps/Route201/scripts.pory"
	delay 30
# 207 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_22
# 208 "data/maps/Route201/scripts.pory"
	waitmovement 2
Route201_EventScript_BarryScene_14:
# 211 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_9, MSGBOX_YESNO
# 213 "data/maps/Route201/scripts.pory"
	closemessage
# 214 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route201_EventScript_BarryScene_19
# 232 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_15
# 233 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 235 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_12
Route201_EventScript_BarryScene_17:
# 242 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 243 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_13
# 248 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 249 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 250 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 251 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_14, MSGBOX_YESNO
# 252 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route201_EventScript_BarryScene_22
# 263 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_16
# 268 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 269 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_18
# 270 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 272 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_17
# 292 "data/maps/Route201/scripts.pory"
	closemessage
# 294 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_18
# 295 "data/maps/Route201/scripts.pory"
	delay 30
# 296 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 297 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_23
# 298 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 299 "data/maps/Route201/scripts.pory"
	delay 30
# 301 "data/maps/Route201/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 302 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_201_DAWN
# 303 "data/maps/Route201/scripts.pory"
	addobject 3
# 305 "data/maps/Route201/scripts.pory"
	applymovement 3, Route201_EventScript_BarryScene_Movement_24
# 306 "data/maps/Route201/scripts.pory"
	waitmovement 3
# 308 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_18
# 311 "data/maps/Route201/scripts.pory"
	closemessage
# 313 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_15
# 314 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 316 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_201_BRIEFCASE
# 317 "data/maps/Route201/scripts.pory"
	addobject 4
# 318 "data/maps/Route201/scripts.pory"
	setobjectxy 4, 16, 14
# 320 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_19
# 325 "data/maps/Route201/scripts.pory"
	applymovement 3, Route201_EventScript_BarryScene_Movement_25
# 326 "data/maps/Route201/scripts.pory"
	waitmovement 3
# 328 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_20
# 339 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_25
# 340 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 341 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_21
# 343 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_15
# 344 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 345 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_22
# 349 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 350 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 351 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_23
# 356 "data/maps/Route201/scripts.pory"
	closemessage
# 357 "data/maps/Route201/scripts.pory"
	fadedefaultbgm
# 358 "data/maps/Route201/scripts.pory"
	release
	return

Route201_EventScript_BarryScene_3:
# 69 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_1
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_4:
# 71 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_2
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_5:
# 73 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_3
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_6:
# 75 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_4
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_9:
# 86 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_5
# 87 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_6
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_10:
# 89 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_7
# 90 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_8
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_11:
# 92 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_9
# 93 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_10
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_12:
# 95 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_11
# 96 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_12
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_19:
# 215 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 216 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 218 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_10
# 221 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 222 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 224 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_11
	goto Route201_EventScript_BarryScene_14

Route201_EventScript_BarryScene_22:
# 253 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 254 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_15
# 256 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 257 "data/maps/Route201/scripts.pory"
	waitmovement 1
	goto Route201_EventScript_BarryScene_17


Route201_EventScript_PickAPokemonRight::
# 362 "data/maps/Route201/scripts.pory"
	lock
# 364 "data/maps/Route201/scripts.pory"
	setvar VAR_ROUTE201_FOLLOWERBARRY, 1
# 365 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_PickAPokemon
# 367 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_PickAPokemonDown::
# 371 "data/maps/Route201/scripts.pory"
	lock
# 373 "data/maps/Route201/scripts.pory"
	setvar VAR_ROUTE201_FOLLOWERBARRY, 2
# 374 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_PickAPokemon
# 376 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_PickAPokemon::
# 380 "data/maps/Route201/scripts.pory"
	lock
# 382 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 383 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 384 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_PickAPokemon_Text_0
# 386 "data/maps/Route201/scripts.pory"
	closemessage
# 388 "data/maps/Route201/scripts.pory"
	compare VAR_ROUTE201_FOLLOWERBARRY, 1
	goto_if_eq Route201_EventScript_PickAPokemon_2
# 391 "data/maps/Route201/scripts.pory"
	compare VAR_ROUTE201_FOLLOWERBARRY, 2
	goto_if_eq Route201_EventScript_PickAPokemon_3
Route201_EventScript_PickAPokemon_1:
# 394 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 396 "data/maps/Route201/scripts.pory"
	release
	return

Route201_EventScript_PickAPokemon_2:
# 389 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_13
	goto Route201_EventScript_PickAPokemon_1

Route201_EventScript_PickAPokemon_3:
# 392 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_PickAPokemon_Movement_0
	goto Route201_EventScript_PickAPokemon_1


Route201_EventScript_Rowan::
# 400 "data/maps/Route201/scripts.pory"
	lock
# 401 "data/maps/Route201/scripts.pory"
	faceplayer
# 402 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_21
# 404 "data/maps/Route201/scripts.pory"
	closemessage
# 405 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_Rival::
# 409 "data/maps/Route201/scripts.pory"
	lock
# 411 "data/maps/Route201/scripts.pory"
	faceplayer
# 412 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_Rival_Text_0
# 416 "data/maps/Route201/scripts.pory"
	closemessage
# 418 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_ChooseStarter::
# 423 "data/maps/Route201/scripts.pory"
	lock
# 425 "data/maps/Route201/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 427 "data/maps/Route201/scripts.pory"
	fadescreen FADE_TO_BLACK
# 428 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_ROUTE_201_BRIEFCASE
# 429 "data/maps/Route201/scripts.pory"
	removeobject 4
# 430 "data/maps/Route201/scripts.pory"
	special ChooseStarter
# 431 "data/maps/Route201/scripts.pory"
	waitstate
# 433 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_20
# 434 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 435 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_ChooseStarter_Movement_0
# 436 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 437 "data/maps/Route201/scripts.pory"
	delay 8
# 438 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 440 "data/maps/Route201/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq Route201_EventScript_ChooseStarter_2
# 443 "data/maps/Route201/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq Route201_EventScript_ChooseStarter_3
# 447 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_2
Route201_EventScript_ChooseStarter_1:
# 450 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_3
# 462 "data/maps/Route201/scripts.pory"
	closemessage
# 464 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_PickAPokemon_Movement_0
# 465 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 466 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_25
# 467 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_25
# 468 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 469 "data/maps/Route201/scripts.pory"
	delay 8
# 470 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_19
# 471 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 472 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_ROUTE_201_ROWAN
# 473 "data/maps/Route201/scripts.pory"
	removeobject 2
# 475 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_4
# 477 "data/maps/Route201/scripts.pory"
	closemessage
# 479 "data/maps/Route201/scripts.pory"
	applymovement 3, Route201_EventScript_ChooseStarter_Movement_1
# 480 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_14
# 481 "data/maps/Route201/scripts.pory"
	waitmovement 3
# 483 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_5
# 484 "data/maps/Route201/scripts.pory"
	closemessage
# 486 "data/maps/Route201/scripts.pory"
	applymovement 3, Route201_EventScript_ChooseStarter_Movement_1
# 487 "data/maps/Route201/scripts.pory"
	waitmovement 3
# 488 "data/maps/Route201/scripts.pory"
	applymovement 3, Route201_EventScript_BarryScene_Movement_24
# 489 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_25
# 490 "data/maps/Route201/scripts.pory"
	waitmovement 3
# 492 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_ROUTE_201_DAWN
# 493 "data/maps/Route201/scripts.pory"
	removeobject 3
# 495 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_6
# 498 "data/maps/Route201/scripts.pory"
	closemessage
# 500 "data/maps/Route201/scripts.pory"
	delay 60
# 501 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_20
# 502 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 503 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_ChooseStarter_Movement_0
# 504 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 505 "data/maps/Route201/scripts.pory"
	delay 40
# 506 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 507 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_ChooseStarter_Movement_2
# 508 "data/maps/Route201/scripts.pory"
	waitmovement 1
Route201_EventScript_ChooseStarter_8:
# 511 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_7, MSGBOX_YESNO
# 515 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route201_EventScript_ChooseStarter_15
# 523 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_9
# 529 "data/maps/Route201/scripts.pory"
	switch VAR_STARTER_MON
# 530 "data/maps/Route201/scripts.pory"
	case 0, Route201_EventScript_ChooseStarter_12
# 532 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_ChooseStarter_13
# 534 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_ChooseStarter_14
Route201_EventScript_ChooseStarter_10:
# 539 "data/maps/Route201/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 541 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route201_EventScript_ChooseStarter_19
# 548 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_12
Route201_EventScript_ChooseStarter_18:
# 560 "data/maps/Route201/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 5
# 561 "data/maps/Route201/scripts.pory"
	special HealPlayerParty
# 562 "data/maps/Route201/scripts.pory"
	fadescreen FADE_TO_BLACK
# 563 "data/maps/Route201/scripts.pory"
	warp MAP_TWINLEAF_TOWN_PLAYERS_HOUSE_1F, 1, 5
# 565 "data/maps/Route201/scripts.pory"
	release
	return

Route201_EventScript_ChooseStarter_2:
# 441 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_0
	goto Route201_EventScript_ChooseStarter_1

Route201_EventScript_ChooseStarter_3:
# 444 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_1
	goto Route201_EventScript_ChooseStarter_1

Route201_EventScript_ChooseStarter_12:
# 531 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BARRY_ROUTE_201_TURTWIG, Route201_EventScript_ChooseStarter_Text_10
	goto Route201_EventScript_ChooseStarter_10

Route201_EventScript_ChooseStarter_13:
# 533 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BARRY_ROUTE_201_CHIMCHAR, Route201_EventScript_ChooseStarter_Text_10
	goto Route201_EventScript_ChooseStarter_10

Route201_EventScript_ChooseStarter_14:
# 535 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BARRY_ROUTE_201_PIPLUP, Route201_EventScript_ChooseStarter_Text_10
	goto Route201_EventScript_ChooseStarter_10

Route201_EventScript_ChooseStarter_15:
# 516 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_8
	goto Route201_EventScript_ChooseStarter_8

Route201_EventScript_ChooseStarter_19:
# 542 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_11
	goto Route201_EventScript_ChooseStarter_18


Route201_EventScript_LakeVerity1::
# 570 "data/maps/Route201/scripts.pory"
	lock
# 571 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 1
# 572 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_LakeVerityScene
# 573 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_LakeVerity2::
# 577 "data/maps/Route201/scripts.pory"
	lock
# 578 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 2
# 579 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_LakeVerityScene
# 580 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_LakeVerity3::
# 584 "data/maps/Route201/scripts.pory"
	lock
# 585 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 3
# 586 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_LakeVerityScene
# 587 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_LakeVerity4::
# 591 "data/maps/Route201/scripts.pory"
	lock
# 592 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 4
# 593 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_LakeVerityScene
# 594 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_LakeVerityScene::
# 598 "data/maps/Route201/scripts.pory"
	lock
# 600 "data/maps/Route201/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 601 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 602 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 603 "data/maps/Route201/scripts.pory"
	waitse
# 604 "data/maps/Route201/scripts.pory"
	delay 30
# 606 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_LakeVerityScene_Movement_0
# 607 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 609 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_LakeVerityScene_Text_0
# 623 "data/maps/Route201/scripts.pory"
	closemessage
# 625 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_1
# 626 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_LakeVerityScene_3
# 628 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_LakeVerityScene_4
# 630 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_LakeVerityScene_5
# 632 "data/maps/Route201/scripts.pory"
	case 4, Route201_EventScript_LakeVerityScene_6
Route201_EventScript_LakeVerityScene_1:
# 635 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 637 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_LakeVerityScene_Text_1
# 639 "data/maps/Route201/scripts.pory"
	closemessage
# 641 "data/maps/Route201/scripts.pory"
	setvar VAR_ROUTE201_FOLLOWERBARRY, 1
# 642 "data/maps/Route201/scripts.pory"
	setvar VAR_ROUTE201_STATE, 3
# 644 "data/maps/Route201/scripts.pory"
	setfollowernpc 1, FLAG_HIDE_ROUTE_201_BARRY, Route201_EventScript_NPCBarry, 0
# 646 "data/maps/Route201/scripts.pory"
	release
	return

Route201_EventScript_LakeVerityScene_3:
# 627 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_LakeVerityScene_Movement_1
	goto Route201_EventScript_LakeVerityScene_1

Route201_EventScript_LakeVerityScene_4:
# 629 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_LakeVerityScene_Movement_2
	goto Route201_EventScript_LakeVerityScene_1

Route201_EventScript_LakeVerityScene_5:
# 631 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_LakeVerityScene_Movement_3
	goto Route201_EventScript_LakeVerityScene_1

Route201_EventScript_LakeVerityScene_6:
# 633 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_LakeVerityScene_Movement_4
	goto Route201_EventScript_LakeVerityScene_1


Route201_EventScript_VerityExitSouth::
# 650 "data/maps/Route201/scripts.pory"
	lock
# 651 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_14
# 652 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route201_EventScript_BarryScene_Movement_0
# 653 "data/maps/Route201/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 655 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_VerityExitSouth_Text_0
# 657 "data/maps/Route201/scripts.pory"
	closemessage
# 659 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route201_EventScript_PickAPokemon_Movement_0
# 660 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_PickAPokemon_Movement_0
# 661 "data/maps/Route201/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 663 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route201_EventScript_BarryScene_Movement_0
# 664 "data/maps/Route201/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 667 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_VerityExitEast::
# 671 "data/maps/Route201/scripts.pory"
	lock
# 673 "data/maps/Route201/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 674 "data/maps/Route201/scripts.pory"
	facefollowernpc
# 676 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_VerityExitEast_Text_0
# 678 "data/maps/Route201/scripts.pory"
	closemessage
# 679 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq Route201_EventScript_VerityExitEast_2
# 683 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq Route201_EventScript_VerityExitEast_3
Route201_EventScript_VerityExitEast_1:
# 689 "data/maps/Route201/scripts.pory"
	release
	return

Route201_EventScript_VerityExitEast_2:
# 680 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_VerityExitEast_Movement_0
# 681 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route201_EventScript_VerityExitEast_Movement_1
# 682 "data/maps/Route201/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
	goto Route201_EventScript_VerityExitEast_1

Route201_EventScript_VerityExitEast_3:
# 684 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_13
# 685 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Route201_EventScript_VerityExitEast_Movement_2
# 686 "data/maps/Route201/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
	goto Route201_EventScript_VerityExitEast_1


Route201_EventScript_NPCBarry::
# 693 "data/maps/Route201/scripts.pory"
	lock
# 694 "data/maps/Route201/scripts.pory"
	switch VAR_ROUTE201_FOLLOWERBARRY
# 695 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_NPCBarry_2
# 705 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_NPCBarry_3
# 714 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_NPCBarry_4
# 728 "data/maps/Route201/scripts.pory"
	case 4, Route201_EventScript_NPCBarry_5
# 736 "data/maps/Route201/scripts.pory"
	case 5, Route201_EventScript_NPCBarry_6
# 748 "data/maps/Route201/scripts.pory"
	case 6, Route201_EventScript_NPCBarry_7
	return

Route201_EventScript_NPCBarry_2:
# 696 "data/maps/Route201/scripts.pory"
	faceplayer
# 697 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_NPCBarry_Text_0
# 703 "data/maps/Route201/scripts.pory"
	closemessage
# 704 "data/maps/Route201/scripts.pory"
	addvar VAR_ROUTE201_FOLLOWERBARRY, 1
	return

Route201_EventScript_NPCBarry_3:
# 706 "data/maps/Route201/scripts.pory"
	faceplayer
# 707 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_NPCBarry_Text_1
# 712 "data/maps/Route201/scripts.pory"
	closemessage
# 713 "data/maps/Route201/scripts.pory"
	addvar VAR_ROUTE201_FOLLOWERBARRY, 1
	return

Route201_EventScript_NPCBarry_4:
# 715 "data/maps/Route201/scripts.pory"
	faceplayer
# 716 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_NPCBarry_Text_2
# 726 "data/maps/Route201/scripts.pory"
	closemessage
# 727 "data/maps/Route201/scripts.pory"
	addvar VAR_ROUTE201_FOLLOWERBARRY, 1
	return

Route201_EventScript_NPCBarry_5:
# 729 "data/maps/Route201/scripts.pory"
	faceplayer
# 730 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_NPCBarry_Text_3
# 734 "data/maps/Route201/scripts.pory"
	closemessage
# 735 "data/maps/Route201/scripts.pory"
	addvar VAR_ROUTE201_FOLLOWERBARRY, 1
	return

Route201_EventScript_NPCBarry_6:
# 737 "data/maps/Route201/scripts.pory"
	faceplayer
# 738 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_NPCBarry_Text_4
# 746 "data/maps/Route201/scripts.pory"
	closemessage
# 747 "data/maps/Route201/scripts.pory"
	addvar VAR_ROUTE201_FOLLOWERBARRY, 1
	return

Route201_EventScript_NPCBarry_7:
# 749 "data/maps/Route201/scripts.pory"
	faceplayer
# 750 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_NPCBarry_Text_5
# 754 "data/maps/Route201/scripts.pory"
	closemessage
	return


# 54 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_0:
# 54 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 69 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_1:
# 69 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 69 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 69 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 69 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 71 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_2:
# 71 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 71 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 71 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 73 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_3:
# 73 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 73 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 75 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_4:
# 75 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 75 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 75 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 86 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_5:
# 86 "data/maps/Route201/scripts.pory"
	walk_up
# 86 "data/maps/Route201/scripts.pory"
	walk_up
# 86 "data/maps/Route201/scripts.pory"
	walk_right
# 86 "data/maps/Route201/scripts.pory"
	walk_right
# 86 "data/maps/Route201/scripts.pory"
	walk_right
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
Route201_EventScript_BarryScene_Movement_6:
# 87 "data/maps/Route201/scripts.pory"
	walk_up
# 87 "data/maps/Route201/scripts.pory"
	walk_up
# 87 "data/maps/Route201/scripts.pory"
	walk_right
# 87 "data/maps/Route201/scripts.pory"
	walk_right
# 87 "data/maps/Route201/scripts.pory"
	walk_right
# 87 "data/maps/Route201/scripts.pory"
	walk_right
# 87 "data/maps/Route201/scripts.pory"
	walk_up
# 87 "data/maps/Route201/scripts.pory"
	walk_up
# 87 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 89 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_7:
# 89 "data/maps/Route201/scripts.pory"
	walk_up
# 89 "data/maps/Route201/scripts.pory"
	walk_up
# 89 "data/maps/Route201/scripts.pory"
	walk_right
# 89 "data/maps/Route201/scripts.pory"
	walk_right
# 89 "data/maps/Route201/scripts.pory"
	walk_right
# 89 "data/maps/Route201/scripts.pory"
	walk_up
# 89 "data/maps/Route201/scripts.pory"
	walk_up
# 89 "data/maps/Route201/scripts.pory"
	walk_right
# 89 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 90 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_8:
# 90 "data/maps/Route201/scripts.pory"
	walk_up
# 90 "data/maps/Route201/scripts.pory"
	walk_up
# 90 "data/maps/Route201/scripts.pory"
	walk_right
# 90 "data/maps/Route201/scripts.pory"
	walk_right
# 90 "data/maps/Route201/scripts.pory"
	walk_right
# 90 "data/maps/Route201/scripts.pory"
	walk_up
# 90 "data/maps/Route201/scripts.pory"
	walk_up
# 90 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 92 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_9:
# 92 "data/maps/Route201/scripts.pory"
	walk_up
# 92 "data/maps/Route201/scripts.pory"
	walk_up
# 92 "data/maps/Route201/scripts.pory"
	walk_right
# 92 "data/maps/Route201/scripts.pory"
	walk_right
# 92 "data/maps/Route201/scripts.pory"
	walk_up
# 92 "data/maps/Route201/scripts.pory"
	walk_up
# 92 "data/maps/Route201/scripts.pory"
	walk_right
# 92 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 93 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_10:
# 93 "data/maps/Route201/scripts.pory"
	walk_up
# 93 "data/maps/Route201/scripts.pory"
	walk_up
# 93 "data/maps/Route201/scripts.pory"
	walk_right
# 93 "data/maps/Route201/scripts.pory"
	walk_right
# 93 "data/maps/Route201/scripts.pory"
	walk_up
# 93 "data/maps/Route201/scripts.pory"
	walk_up
# 93 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 95 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_11:
# 95 "data/maps/Route201/scripts.pory"
	walk_up
# 95 "data/maps/Route201/scripts.pory"
	walk_up
# 95 "data/maps/Route201/scripts.pory"
	walk_right
# 95 "data/maps/Route201/scripts.pory"
	walk_up
# 95 "data/maps/Route201/scripts.pory"
	walk_up
# 95 "data/maps/Route201/scripts.pory"
	walk_right
# 95 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 96 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_12:
# 96 "data/maps/Route201/scripts.pory"
	walk_up
# 96 "data/maps/Route201/scripts.pory"
	walk_up
# 96 "data/maps/Route201/scripts.pory"
	walk_right
# 96 "data/maps/Route201/scripts.pory"
	walk_up
# 96 "data/maps/Route201/scripts.pory"
	walk_up
# 96 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 114 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_13:
# 114 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 117 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_14:
# 117 "data/maps/Route201/scripts.pory"
	walk_in_place_up
	step_end

# 132 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_15:
# 132 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 133 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_16:
# 133 "data/maps/Route201/scripts.pory"
	walk_left
# 133 "data/maps/Route201/scripts.pory"
	walk_left
# 133 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 141 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_17:
# 141 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 141 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 141 "data/maps/Route201/scripts.pory"
	walk_fast_right
	step_end

# 155 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_18:
# 155 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 164 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_19:
# 164 "data/maps/Route201/scripts.pory"
	walk_right
# 164 "data/maps/Route201/scripts.pory"
	walk_right
# 164 "data/maps/Route201/scripts.pory"
	walk_right
# 164 "data/maps/Route201/scripts.pory"
	walk_right
# 164 "data/maps/Route201/scripts.pory"
	walk_right
# 164 "data/maps/Route201/scripts.pory"
	walk_right
# 164 "data/maps/Route201/scripts.pory"
	walk_right
# 164 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 178 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_20:
# 178 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 187 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_21:
# 187 "data/maps/Route201/scripts.pory"
	walk_left
# 187 "data/maps/Route201/scripts.pory"
	walk_left
# 187 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 207 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_22:
# 207 "data/maps/Route201/scripts.pory"
	walk_right
# 207 "data/maps/Route201/scripts.pory"
	walk_right
# 207 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 297 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_23:
# 297 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 305 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_24:
# 305 "data/maps/Route201/scripts.pory"
	walk_right
# 305 "data/maps/Route201/scripts.pory"
	walk_right
# 305 "data/maps/Route201/scripts.pory"
	walk_right
# 305 "data/maps/Route201/scripts.pory"
	walk_right
# 305 "data/maps/Route201/scripts.pory"
	walk_right
# 305 "data/maps/Route201/scripts.pory"
	walk_right
# 305 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 325 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_25:
# 325 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 392 "data/maps/Route201/scripts.pory"
Route201_EventScript_PickAPokemon_Movement_0:
# 392 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

# 435 "data/maps/Route201/scripts.pory"
Route201_EventScript_ChooseStarter_Movement_0:
# 435 "data/maps/Route201/scripts.pory"
	face_up
	step_end

# 479 "data/maps/Route201/scripts.pory"
Route201_EventScript_ChooseStarter_Movement_1:
# 479 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 507 "data/maps/Route201/scripts.pory"
Route201_EventScript_ChooseStarter_Movement_2:
# 507 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 507 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 507 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 507 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 507 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 507 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 507 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 507 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 507 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 507 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 606 "data/maps/Route201/scripts.pory"
Route201_EventScript_LakeVerityScene_Movement_0:
# 606 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
	step_end

# 627 "data/maps/Route201/scripts.pory"
Route201_EventScript_LakeVerityScene_Movement_1:
# 627 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 627 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 627 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 627 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
	step_end

# 629 "data/maps/Route201/scripts.pory"
Route201_EventScript_LakeVerityScene_Movement_2:
# 629 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 629 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 629 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
	step_end

# 631 "data/maps/Route201/scripts.pory"
Route201_EventScript_LakeVerityScene_Movement_3:
# 631 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 633 "data/maps/Route201/scripts.pory"
Route201_EventScript_LakeVerityScene_Movement_4:
# 633 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 633 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 633 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
	step_end

# 680 "data/maps/Route201/scripts.pory"
Route201_EventScript_VerityExitEast_Movement_0:
# 680 "data/maps/Route201/scripts.pory"
	walk_down
	step_end

# 681 "data/maps/Route201/scripts.pory"
Route201_EventScript_VerityExitEast_Movement_1:
# 681 "data/maps/Route201/scripts.pory"
	walk_up
# 681 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 685 "data/maps/Route201/scripts.pory"
Route201_EventScript_VerityExitEast_Movement_2:
# 685 "data/maps/Route201/scripts.pory"
	walk_left
# 685 "data/maps/Route201/scripts.pory"
	face_right
	step_end

Route201_EventScript_BarryScene_Text_0:
# 64 "data/maps/Route201/scripts.pory"
	.string "Too slow!$"

Route201_EventScript_BarryScene_Text_1:
# 80 "data/maps/Route201/scripts.pory"
	.string "All right!\n"
	.string "Let's get moving to Prof. Rowan's lab.$"

Route201_EventScript_BarryScene_Text_2:
# 101 "data/maps/Route201/scripts.pory"
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
# 121 "data/maps/Route201/scripts.pory"
	.string "So, what you do is, you scoot over to\n"
	.string "the next patch of grass before any\l"
	.string "wild Pokémon can appear!\p"
	.string "If we just keep dashing, we can get to\n"
	.string "Sandgem Town without running into\l"
	.string "wild Pokémon!\p"
	.string "OK, stick with me!$"

Route201_EventScript_BarryScene_Text_4:
# 137 "data/maps/Route201/scripts.pory"
	.string "OK, here goes!\p"
	.string "On your marks. . .$"

Route201_EventScript_BarryScene_Text_5:
# 145 "data/maps/Route201/scripts.pory"
	.string "HOLD IT!$"

Route201_EventScript_BarryScene_Text_6:
# 167 "data/maps/Route201/scripts.pory"
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
# 181 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey, {PLAYER}.\n"
	.string "This old guy. . .\p"
	.string "It's Prof. Rowan, isn't it?\n"
	.string "What's he doing here. . .?$"

Route201_EventScript_BarryScene_Text_8:
# 192 "data/maps/Route201/scripts.pory"
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
# 211 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}You two.\n"
	.string "You truly love Pokémon, do you?$"

Route201_EventScript_BarryScene_Text_10:
# 218 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Whoa, hold up!\n"
	.string "You're not making any sense here!$"

Route201_EventScript_BarryScene_Text_11:
# 224 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}Er-hem!\p"
	.string "I didn't quite catch that, so I will\n"
	.string "ask you again.$"

Route201_EventScript_BarryScene_Text_12:
# 235 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Me, too!\n"
	.string "I love Pokémon, too!\p"
	.string "{SPEAKER NAME_PROFESSOR}I will ask you once again.\p"
	.string "You two.\n"
	.string "You truly love Pokémon, do you?$"

Route201_EventScript_BarryScene_Text_13:
# 243 "data/maps/Route201/scripts.pory"
	.string "What?!\n"
	.string "You can ask a hundred times!\l"
	.string "The answer will never change!\p"
	.string "We'll both answer a hundred times\n"
	.string "we love Pokémon!$"

Route201_EventScript_BarryScene_Text_14:
# 251 "data/maps/Route201/scripts.pory"
	.string "Right, {PLAYER}?$"

Route201_EventScript_BarryScene_Text_15:
# 254 "data/maps/Route201/scripts.pory"
	.string ". . .\n"
	.string "That joke's getting old!$"

Route201_EventScript_BarryScene_Text_16:
# 263 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}. . .A pair of reckless kids\n"
	.string "who foolishly try to enter tall grass\l"
	.string "without Pokémon of their own. . .?\p"
	.string "It worries what people like that\n"
	.string "would do with Pokémon.$"

Route201_EventScript_BarryScene_Text_17:
# 272 "data/maps/Route201/scripts.pory"
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
# 308 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Professor Rowan!\p"
	.string "You left your briefcase behind at\n"
	.string "the lake.$"

Route201_EventScript_BarryScene_Text_19:
# 320 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Is something wrong here?\p"
	.string "{SPEAKER NAME_PROFESSOR}Ah! There it is!\n"
	.string "{RIVAL}, nice work.\p"
	.string "What I was about to do was to entrust\n"
	.string "these two with their own Pokémon.$"

Route201_EventScript_BarryScene_Text_20:
# 328 "data/maps/Route201/scripts.pory"
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
# 341 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}Go on! Open the briefcase and choose\n"
	.string "a Pokémon!$"

Route201_EventScript_BarryScene_Text_22:
# 345 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Really?!\n"
	.string "Prof. Rowan!\p"
	.string "I can't believe it! I'm so happy now\n"
	.string "that I can't keep a straight face!$"

Route201_EventScript_BarryScene_Text_23:
# 351 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey {PLAYER}.\n"
	.string "You can choose first.\p"
	.string "Hey, I'm practically a grown-up.\n"
	.string "I have to show some class here.$"

Route201_EventScript_PickAPokemon_Text_0:
# 384 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}What's up with you?\n"
	.string "Open the briefcase and pick a Pokémon!$"

Route201_EventScript_Rival_Text_0:
# 412 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey, {PLAYER}.\n"
	.string "You can choose first. Go ahead.\p"
	.string "You know, like, I'm gonna be a man\n"
	.string "about it. Yeah, I'm slick.$"

Route201_EventScript_ChooseStarter_Text_0:
# 441 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Then, I choose you!\n"
	.string "I'm picking this CHIMCHAR.$"

Route201_EventScript_ChooseStarter_Text_1:
# 444 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Then, I choose you!\n"
	.string "I'm picking this PIPLUP.$"

Route201_EventScript_ChooseStarter_Text_2:
# 447 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Then, I choose you!\n"
	.string "I'm picking this TURTWIG.$"

Route201_EventScript_ChooseStarter_Text_3:
# 450 "data/maps/Route201/scripts.pory"
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
# 475 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Professor!\n"
	.string "Wait for me!$"

Route201_EventScript_ChooseStarter_Text_5:
# 483 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Uh, sorry, folks.$"

Route201_EventScript_ChooseStarter_Text_6:
# 495 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}How do you like that?\n"
	.string "Prof. Rowan's really nice.\p"
	.string "On TV, he seems so stern and scary.$"

Route201_EventScript_ChooseStarter_Text_7:
# 511 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Heheh, {PLAYER}!\n"
	.string "We've both got Pokémon now.\p"
	.string "There's only one thing to do, right?\n"
	.string "Are you up for this?$"

Route201_EventScript_ChooseStarter_Text_8:
# 516 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}What's with that attitude?\n"
	.string "Don't be that way!$"

Route201_EventScript_ChooseStarter_Text_9:
# 523 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}I've always wanted to\n"
	.string "say this. . .\p"
	.string "The time has finally come!\p"
	.string "{PLAYER}!\p"
	.string "I challenge you to a battle!$"

Route201_EventScript_ChooseStarter_Text_10:
# 531 "data/maps/Route201/scripts.pory"
	.string "What are you saying?!\nWe ended up losing?$"

Route201_EventScript_ChooseStarter_Text_11:
# 542 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Whew!\n"
	.string "Let's go home.\p"
	.string "I'm beat after that battle.\n"
	.string "My Pokémon needs rest, too.\p"
	.string "See ya, {PLAYER}!$"

Route201_EventScript_ChooseStarter_Text_12:
# 548 "data/maps/Route201/scripts.pory"
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
# 609 "data/maps/Route201/scripts.pory"
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
# 637 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Me and you together,\n"
	.string "we've got nothing to fear!$"

Route201_EventScript_VerityExitSouth_Text_0:
# 655 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Heheh, {PLAYER}.\n"
	.string "The lake's not that way!$"

Route201_EventScript_VerityExitEast_Text_0:
# 676 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey, {PLAYER}!\p"
	.string "I said, the lake's not that way!$"

Route201_EventScript_NPCBarry_Text_0:
# 697 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}That Pokémon battle. . .\p"
	.string "Wasn't that wickedly fun or what?\p"
	.string "I mean, I'd pick the moves, and my\n"
	.string "Pokémon would use them!\p"
	.string "Yeah, I'm going to battle tons and get\n"
	.string "real close with Pokémon.$"

Route201_EventScript_NPCBarry_Text_1:
# 707 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Pokémon all have\n"
	.string "different moves, huh?\p"
	.string "A Trainer makes his Pokémon battle\n"
	.string "by ordering them to use moves.\p"
	.string "That's so awesomely cool.$"

Route201_EventScript_NPCBarry_Text_2:
# 716 "data/maps/Route201/scripts.pory"
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
# 730 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}That lake has a mirage\n"
	.string "Pokémon living in it.\p"
	.string "Everyone says it's just a legend, but\n"
	.string "I know I'm right.$"

Route201_EventScript_NPCBarry_Text_4:
# 738 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey, do you know about\n"
	.string "the Champion?\p"
	.string "There's this out-of-this-world tough\n"
	.string "Trainer who gets called that.\p"
	.string "Well, I'm gonna get so tough, the Champ\n"
	.string "has to battle me. You watch!\p"
	.string "With this little guy here, I'm sure I can\n"
	.string "get that tough.$"

Route201_EventScript_NPCBarry_Text_5:
# 750 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey, that's enough\n"
	.string "talking already.\p"
	.string "I'm itching to get going to the lake.\n"
	.string "Come on, come on!$"
