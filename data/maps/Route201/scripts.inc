Route201_MapScripts::
# 7 "data/maps/Route201/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route201_EventScript_OnTransition
	.byte 0


Route201_EventScript_OnTransition::
# 11 "data/maps/Route201/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


Route201_EventScript_BarryScene1::
# 15 "data/maps/Route201/scripts.pory"
	lock
# 16 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 1
# 17 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 18 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene2::
# 22 "data/maps/Route201/scripts.pory"
	lock
# 23 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 2
# 24 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 25 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene3::
# 29 "data/maps/Route201/scripts.pory"
	lock
# 30 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 3
# 31 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 32 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene4::
# 36 "data/maps/Route201/scripts.pory"
	lock
# 37 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_1, 4
# 38 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_BarryScene
# 39 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_BarryScene::
# 44 "data/maps/Route201/scripts.pory"
	lock
# 46 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 47 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route201/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 50 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 51 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route201/scripts.pory"
	waitse
# 53 "data/maps/Route201/scripts.pory"
	delay 30
# 55 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 56 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_0
# 57 "data/maps/Route201/scripts.pory"
	closemessage
# 59 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_1
# 60 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryScene_3
# 62 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryScene_4
# 64 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryScene_5
# 66 "data/maps/Route201/scripts.pory"
	case 4, Route201_EventScript_BarryScene_6
Route201_EventScript_BarryScene_1:
# 69 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 72 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_1
# 74 "data/maps/Route201/scripts.pory"
	closemessage
# 76 "data/maps/Route201/scripts.pory"
	switch VAR_TEMP_1
# 77 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_BarryScene_9
# 80 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_BarryScene_10
# 83 "data/maps/Route201/scripts.pory"
	case 3, Route201_EventScript_BarryScene_11
# 86 "data/maps/Route201/scripts.pory"
	case 4, Route201_EventScript_BarryScene_12
Route201_EventScript_BarryScene_7:
# 90 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 92 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 93 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_2
# 104 "data/maps/Route201/scripts.pory"
	closemessage
# 106 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_13
# 107 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 108 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 109 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_14
# 110 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 112 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 113 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_3
# 120 "data/maps/Route201/scripts.pory"
	closemessage
# 122 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_13
# 123 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_15
# 125 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_16
# 126 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 128 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 129 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_4
# 131 "data/maps/Route201/scripts.pory"
	closemessage
# 133 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_17
# 134 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_14
# 135 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_5
# 138 "data/maps/Route201/scripts.pory"
	closemessage
# 140 "data/maps/Route201/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 141 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 142 "data/maps/Route201/scripts.pory"
	playse SE_PIN
# 143 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 144 "data/maps/Route201/scripts.pory"
	waitse
# 145 "data/maps/Route201/scripts.pory"
	delay 30
# 147 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_18
# 148 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 149 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 151 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_201_ROWAN
# 152 "data/maps/Route201/scripts.pory"
	addobject 2
# 154 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_19
# 155 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 157 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_6
# 168 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_20
# 169 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 171 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_7
# 175 "data/maps/Route201/scripts.pory"
	closemessage
# 177 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_21
# 178 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 179 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 180 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 182 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_8
# 194 "data/maps/Route201/scripts.pory"
	closemessage
# 196 "data/maps/Route201/scripts.pory"
	delay 30
# 197 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_22
# 198 "data/maps/Route201/scripts.pory"
	waitmovement 2
Route201_EventScript_BarryScene_14:
# 201 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_9, MSGBOX_YESNO
# 203 "data/maps/Route201/scripts.pory"
	closemessage
# 204 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route201_EventScript_BarryScene_19
# 222 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_15
# 223 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 225 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_12
Route201_EventScript_BarryScene_17:
# 232 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 233 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_13
# 238 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 239 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 240 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 241 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_14, MSGBOX_YESNO
# 242 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route201_EventScript_BarryScene_22
# 253 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_16
# 258 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 259 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_18
# 260 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 262 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_17
# 282 "data/maps/Route201/scripts.pory"
	closemessage
# 284 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_18
# 285 "data/maps/Route201/scripts.pory"
	delay 30
# 286 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 287 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_23
# 288 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 289 "data/maps/Route201/scripts.pory"
	delay 30
# 291 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_201_DAWN
# 292 "data/maps/Route201/scripts.pory"
	addobject 3
# 294 "data/maps/Route201/scripts.pory"
	applymovement 3, Route201_EventScript_BarryScene_Movement_24
# 295 "data/maps/Route201/scripts.pory"
	waitmovement 3
# 297 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_18
# 300 "data/maps/Route201/scripts.pory"
	closemessage
# 302 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_15
# 303 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 305 "data/maps/Route201/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_201_BRIEFCASE
# 306 "data/maps/Route201/scripts.pory"
	addobject 4
# 307 "data/maps/Route201/scripts.pory"
	setobjectxy 4, 16, 14
# 309 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_19
# 314 "data/maps/Route201/scripts.pory"
	applymovement 3, Route201_EventScript_BarryScene_Movement_25
# 315 "data/maps/Route201/scripts.pory"
	waitmovement 3
# 317 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_20
# 328 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_25
# 329 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 330 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_21
# 332 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_15
# 333 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 334 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_22
# 338 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 339 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 340 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_23
# 344 "data/maps/Route201/scripts.pory"
	closemessage
# 346 "data/maps/Route201/scripts.pory"
	release
	return

Route201_EventScript_BarryScene_3:
# 61 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_1
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_4:
# 63 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_2
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_5:
# 65 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_3
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_6:
# 67 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_4
	goto Route201_EventScript_BarryScene_1

Route201_EventScript_BarryScene_9:
# 78 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_5
# 79 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_6
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_10:
# 81 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_7
# 82 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_8
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_11:
# 84 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_9
# 85 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_10
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_12:
# 87 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_11
# 88 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_12
	goto Route201_EventScript_BarryScene_7

Route201_EventScript_BarryScene_19:
# 205 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 206 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 208 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_10
# 211 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 212 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 214 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_11
	goto Route201_EventScript_BarryScene_14

Route201_EventScript_BarryScene_22:
# 243 "data/maps/Route201/scripts.pory"
	setspeaker SP_NAME_BARRY
# 244 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_15
# 246 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 247 "data/maps/Route201/scripts.pory"
	waitmovement 1
	goto Route201_EventScript_BarryScene_17


Route201_EventScript_PickAPokemonRight::
# 350 "data/maps/Route201/scripts.pory"
	lock
# 352 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_2, 1
# 353 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_PickAPokemon
# 355 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_PickAPokemonDown::
# 359 "data/maps/Route201/scripts.pory"
	lock
# 361 "data/maps/Route201/scripts.pory"
	setvar VAR_TEMP_2, 2
# 362 "data/maps/Route201/scripts.pory"
	goto Route201_EventScript_PickAPokemon
# 364 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_PickAPokemon::
# 368 "data/maps/Route201/scripts.pory"
	lock
# 370 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_0
# 371 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 372 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_PickAPokemon_Text_0
# 374 "data/maps/Route201/scripts.pory"
	closemessage
# 376 "data/maps/Route201/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Route201_EventScript_PickAPokemon_2
# 379 "data/maps/Route201/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq Route201_EventScript_PickAPokemon_3
Route201_EventScript_PickAPokemon_1:
# 382 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 384 "data/maps/Route201/scripts.pory"
	release
	return

Route201_EventScript_PickAPokemon_2:
# 377 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_13
	goto Route201_EventScript_PickAPokemon_1

Route201_EventScript_PickAPokemon_3:
# 380 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_PickAPokemon_Movement_0
	goto Route201_EventScript_PickAPokemon_1


Route201_EventScript_Rowan::
# 388 "data/maps/Route201/scripts.pory"
	lock
# 389 "data/maps/Route201/scripts.pory"
	faceplayer
# 390 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_BarryScene_Text_21
# 392 "data/maps/Route201/scripts.pory"
	closemessage
# 393 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_Rival::
# 397 "data/maps/Route201/scripts.pory"
	lock
# 399 "data/maps/Route201/scripts.pory"
	faceplayer
# 400 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_Rival_Text_0
# 404 "data/maps/Route201/scripts.pory"
	closemessage
# 406 "data/maps/Route201/scripts.pory"
	release
	return


Route201_EventScript_ChooseStarter::
# 411 "data/maps/Route201/scripts.pory"
	lock
# 413 "data/maps/Route201/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 414 "data/maps/Route201/scripts.pory"
	special ChooseStarter
# 415 "data/maps/Route201/scripts.pory"
	waitstate
# 417 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_ROUTE_201_BRIEFCASE
# 418 "data/maps/Route201/scripts.pory"
	removeobject 4
# 421 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_20
# 422 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_18
# 423 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_ChooseStarter_Movement_0
# 424 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 425 "data/maps/Route201/scripts.pory"
	delay 8
# 426 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 428 "data/maps/Route201/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq Route201_EventScript_ChooseStarter_2
# 431 "data/maps/Route201/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq Route201_EventScript_ChooseStarter_3
# 435 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_2
Route201_EventScript_ChooseStarter_1:
# 438 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_3
# 450 "data/maps/Route201/scripts.pory"
	closemessage
# 452 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_PickAPokemon_Movement_0
# 453 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 454 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_25
# 455 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_25
# 456 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 457 "data/maps/Route201/scripts.pory"
	delay 8
# 458 "data/maps/Route201/scripts.pory"
	applymovement 2, Route201_EventScript_BarryScene_Movement_19
# 459 "data/maps/Route201/scripts.pory"
	waitmovement 2
# 460 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_ROUTE_201_ROWAN
# 461 "data/maps/Route201/scripts.pory"
	removeobject 2
# 463 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_4
# 465 "data/maps/Route201/scripts.pory"
	closemessage
# 467 "data/maps/Route201/scripts.pory"
	applymovement 3, Route201_EventScript_ChooseStarter_Movement_1
# 468 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_14
# 469 "data/maps/Route201/scripts.pory"
	waitmovement 3
# 471 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_5
# 472 "data/maps/Route201/scripts.pory"
	closemessage
# 474 "data/maps/Route201/scripts.pory"
	applymovement 3, Route201_EventScript_ChooseStarter_Movement_1
# 475 "data/maps/Route201/scripts.pory"
	waitmovement 3
# 476 "data/maps/Route201/scripts.pory"
	applymovement 3, Route201_EventScript_BarryScene_Movement_24
# 477 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_BarryScene_Movement_25
# 478 "data/maps/Route201/scripts.pory"
	waitmovement 3
# 480 "data/maps/Route201/scripts.pory"
	setflag FLAG_HIDE_ROUTE_201_DAWN
# 481 "data/maps/Route201/scripts.pory"
	removeobject 3
# 483 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_6
# 486 "data/maps/Route201/scripts.pory"
	closemessage
# 488 "data/maps/Route201/scripts.pory"
	delay 60
# 489 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_BarryScene_Movement_20
# 490 "data/maps/Route201/scripts.pory"
	waitmovement 1
# 491 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route201_EventScript_ChooseStarter_Movement_0
# 492 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 493 "data/maps/Route201/scripts.pory"
	delay 40
# 494 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 495 "data/maps/Route201/scripts.pory"
	applymovement 1, Route201_EventScript_ChooseStarter_Movement_2
# 496 "data/maps/Route201/scripts.pory"
	waitmovement 1
Route201_EventScript_ChooseStarter_8:
# 499 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_7, MSGBOX_YESNO
# 503 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route201_EventScript_ChooseStarter_15
# 511 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_9
# 517 "data/maps/Route201/scripts.pory"
	switch VAR_STARTER_MON
# 518 "data/maps/Route201/scripts.pory"
	case 0, Route201_EventScript_ChooseStarter_12
# 520 "data/maps/Route201/scripts.pory"
	case 1, Route201_EventScript_ChooseStarter_13
# 522 "data/maps/Route201/scripts.pory"
	case 2, Route201_EventScript_ChooseStarter_14
Route201_EventScript_ChooseStarter_10:
# 527 "data/maps/Route201/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 529 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route201_EventScript_ChooseStarter_19
# 536 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_11
Route201_EventScript_ChooseStarter_18:
# 540 "data/maps/Route201/scripts.pory"
	release
	return

Route201_EventScript_ChooseStarter_2:
# 429 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_0
	goto Route201_EventScript_ChooseStarter_1

Route201_EventScript_ChooseStarter_3:
# 432 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_1
	goto Route201_EventScript_ChooseStarter_1

Route201_EventScript_ChooseStarter_12:
# 519 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BARRY_ROUTE_201_TURTWIG, Route201_Text_BarryDefeated
	goto Route201_EventScript_ChooseStarter_10

Route201_EventScript_ChooseStarter_13:
# 521 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BARRY_ROUTE_201_CHIMCHAR, Route201_Text_BarryDefeated
	goto Route201_EventScript_ChooseStarter_10

Route201_EventScript_ChooseStarter_14:
# 523 "data/maps/Route201/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_BARRY_ROUTE_201_PIPLUP, Route201_Text_BarryDefeated
	goto Route201_EventScript_ChooseStarter_10

Route201_EventScript_ChooseStarter_15:
# 504 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_8
	goto Route201_EventScript_ChooseStarter_8

Route201_EventScript_ChooseStarter_19:
# 530 "data/maps/Route201/scripts.pory"
	msgbox Route201_EventScript_ChooseStarter_Text_10
	goto Route201_EventScript_ChooseStarter_18


# 46 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_0:
# 46 "data/maps/Route201/scripts.pory"
	walk_in_place_down
	step_end

# 61 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_1:
# 61 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 61 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 61 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 61 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 63 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_2:
# 63 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 63 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 63 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 65 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_3:
# 65 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

# 67 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_4:
# 67 "data/maps/Route201/scripts.pory"
	walk_fast_down
# 67 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 67 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 78 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_5:
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
	walk_right
# 78 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 79 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_6:
# 79 "data/maps/Route201/scripts.pory"
	walk_up
# 79 "data/maps/Route201/scripts.pory"
	walk_right
# 79 "data/maps/Route201/scripts.pory"
	walk_right
# 79 "data/maps/Route201/scripts.pory"
	walk_right
# 79 "data/maps/Route201/scripts.pory"
	walk_right
# 79 "data/maps/Route201/scripts.pory"
	walk_up
# 79 "data/maps/Route201/scripts.pory"
	walk_up
# 79 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 81 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_7:
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
	walk_right
# 81 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 82 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_8:
# 82 "data/maps/Route201/scripts.pory"
	walk_up
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
Route201_EventScript_BarryScene_Movement_9:
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
	walk_right
# 84 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 85 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_10:
# 85 "data/maps/Route201/scripts.pory"
	walk_up
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
Route201_EventScript_BarryScene_Movement_11:
# 87 "data/maps/Route201/scripts.pory"
	walk_up
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
Route201_EventScript_BarryScene_Movement_12:
# 88 "data/maps/Route201/scripts.pory"
	walk_up
# 88 "data/maps/Route201/scripts.pory"
	walk_right
# 88 "data/maps/Route201/scripts.pory"
	walk_up
# 88 "data/maps/Route201/scripts.pory"
	walk_up
# 88 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 106 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_13:
# 106 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 109 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_14:
# 109 "data/maps/Route201/scripts.pory"
	walk_in_place_up
	step_end

# 124 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_15:
# 124 "data/maps/Route201/scripts.pory"
	walk_in_place_left
	step_end

# 125 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_16:
# 125 "data/maps/Route201/scripts.pory"
	walk_left
# 125 "data/maps/Route201/scripts.pory"
	walk_left
# 125 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 133 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_17:
# 133 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 133 "data/maps/Route201/scripts.pory"
	walk_fast_right
# 133 "data/maps/Route201/scripts.pory"
	walk_fast_right
	step_end

# 147 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_18:
# 147 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 154 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_19:
# 154 "data/maps/Route201/scripts.pory"
	walk_right
# 154 "data/maps/Route201/scripts.pory"
	walk_right
# 154 "data/maps/Route201/scripts.pory"
	walk_right
# 154 "data/maps/Route201/scripts.pory"
	walk_right
# 154 "data/maps/Route201/scripts.pory"
	walk_right
# 154 "data/maps/Route201/scripts.pory"
	walk_right
# 154 "data/maps/Route201/scripts.pory"
	walk_right
# 154 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 168 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_20:
# 168 "data/maps/Route201/scripts.pory"
	face_down
	step_end

# 177 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_21:
# 177 "data/maps/Route201/scripts.pory"
	walk_left
# 177 "data/maps/Route201/scripts.pory"
	walk_left
# 177 "data/maps/Route201/scripts.pory"
	walk_left
	step_end

# 197 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_22:
# 197 "data/maps/Route201/scripts.pory"
	walk_right
# 197 "data/maps/Route201/scripts.pory"
	walk_right
# 197 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 287 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_23:
# 287 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 294 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_24:
# 294 "data/maps/Route201/scripts.pory"
	walk_right
# 294 "data/maps/Route201/scripts.pory"
	walk_right
# 294 "data/maps/Route201/scripts.pory"
	walk_right
# 294 "data/maps/Route201/scripts.pory"
	walk_right
# 294 "data/maps/Route201/scripts.pory"
	walk_right
# 294 "data/maps/Route201/scripts.pory"
	walk_right
# 294 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 314 "data/maps/Route201/scripts.pory"
Route201_EventScript_BarryScene_Movement_25:
# 314 "data/maps/Route201/scripts.pory"
	walk_in_place_right
	step_end

# 380 "data/maps/Route201/scripts.pory"
Route201_EventScript_PickAPokemon_Movement_0:
# 380 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

# 423 "data/maps/Route201/scripts.pory"
Route201_EventScript_ChooseStarter_Movement_0:
# 423 "data/maps/Route201/scripts.pory"
	face_up
	step_end

# 467 "data/maps/Route201/scripts.pory"
Route201_EventScript_ChooseStarter_Movement_1:
# 467 "data/maps/Route201/scripts.pory"
	walk_right
	step_end

# 495 "data/maps/Route201/scripts.pory"
Route201_EventScript_ChooseStarter_Movement_2:
# 495 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 495 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 495 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 495 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 495 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 495 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 495 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 495 "data/maps/Route201/scripts.pory"
	walk_in_place_faster_down
# 495 "data/maps/Route201/scripts.pory"
	walk_fast_left
# 495 "data/maps/Route201/scripts.pory"
	walk_fast_down
	step_end

Route201_EventScript_BarryScene_Text_0:
# 56 "data/maps/Route201/scripts.pory"
	.string "Too slow!$"

Route201_EventScript_BarryScene_Text_1:
# 72 "data/maps/Route201/scripts.pory"
	.string "All right!\n"
	.string "Let's get moving to Prof. Rowan's lab.$"

Route201_EventScript_BarryScene_Text_2:
# 93 "data/maps/Route201/scripts.pory"
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
# 113 "data/maps/Route201/scripts.pory"
	.string "So, what you do is, you scoot over to\n"
	.string "the next patch of grass before any\l"
	.string "wild Pokémon can appear!\p"
	.string "If we just keep dashing, we can get to\n"
	.string "Sandgem Town without running into\l"
	.string "wild Pokémon!\p"
	.string "OK, stick with me!$"

Route201_EventScript_BarryScene_Text_4:
# 129 "data/maps/Route201/scripts.pory"
	.string "OK, here goes!\p"
	.string "On your marks. . .$"

Route201_EventScript_BarryScene_Text_5:
# 137 "data/maps/Route201/scripts.pory"
	.string "HOLD IT!$"

Route201_EventScript_BarryScene_Text_6:
# 157 "data/maps/Route201/scripts.pory"
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
# 171 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey, {PLAYER}.\n"
	.string "This old guy. . .\p"
	.string "It's Prof. Rowan, isn't it?\n"
	.string "What's he doing here. . .?$"

Route201_EventScript_BarryScene_Text_8:
# 182 "data/maps/Route201/scripts.pory"
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
# 201 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}You two.\n"
	.string "You truly love Pokémon, do you?$"

Route201_EventScript_BarryScene_Text_10:
# 208 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Whoa, hold up!\n"
	.string "You're not making any sense here!$"

Route201_EventScript_BarryScene_Text_11:
# 214 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}Er-hem!\p"
	.string "I didn't quite catch that, so I will\n"
	.string "ask you again.$"

Route201_EventScript_BarryScene_Text_12:
# 225 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Me, too!\n"
	.string "I love Pokémon, too!\p"
	.string "{SPEAKER NAME_PROFESSOR}I will ask you once again.\p"
	.string "You two.\n"
	.string "You truly love Pokémon, do you?$"

Route201_EventScript_BarryScene_Text_13:
# 233 "data/maps/Route201/scripts.pory"
	.string "What?!\n"
	.string "You can ask a hundred times!\l"
	.string "The answer will never change!\p"
	.string "We'll both answer a hundred times\n"
	.string "we love Pokémon!$"

Route201_EventScript_BarryScene_Text_14:
# 241 "data/maps/Route201/scripts.pory"
	.string "Right, {PLAYER}?$"

Route201_EventScript_BarryScene_Text_15:
# 244 "data/maps/Route201/scripts.pory"
	.string ". . .\n"
	.string "That joke's getting old!$"

Route201_EventScript_BarryScene_Text_16:
# 253 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}. . .A pair of reckless kids\n"
	.string "who foolishly try to enter tall grass\l"
	.string "without Pokémon of their own. . .?\p"
	.string "It worries what people like that\n"
	.string "would do with Pokémon.$"

Route201_EventScript_BarryScene_Text_17:
# 262 "data/maps/Route201/scripts.pory"
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
# 297 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Professor Rowan!\p"
	.string "You left your briefcase behind at\n"
	.string "the lake.$"

Route201_EventScript_BarryScene_Text_19:
# 309 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Is something wrong here?\p"
	.string "{SPEAKER NAME_PROFESSOR}Ah! There it is!\n"
	.string "{RIVAL}, nice work.\p"
	.string "What I was about to do was to entrust\n"
	.string "these two with their own Pokémon.$"

Route201_EventScript_BarryScene_Text_20:
# 317 "data/maps/Route201/scripts.pory"
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
# 330 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}Go on! Open the briefcase and choose\n"
	.string "a Pokémon!$"

Route201_EventScript_BarryScene_Text_22:
# 334 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Really?!\n"
	.string "Prof. Rowan!\p"
	.string "I can't believe it! I'm so happy now\n"
	.string "that I can't keep a straight face!$"

Route201_EventScript_BarryScene_Text_23:
# 340 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey {PLAYER}.\n"
	.string "You can choose first.\p"
	.string "Hey, I'm practically a grown-up.\n"
	.string "I have to show some class here.$"

Route201_EventScript_PickAPokemon_Text_0:
# 372 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}What's up with you?\n"
	.string "Open the briefcase and pick a Pokémon!$"

Route201_EventScript_Rival_Text_0:
# 400 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey, {PLAYER}.\n"
	.string "You can choose first. Go ahead.\p"
	.string "You know, like, I'm gonna be a man\n"
	.string "about it. Yeah, I'm slick.$"

Route201_EventScript_ChooseStarter_Text_0:
# 429 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Then, I choose you!\n"
	.string "I'm picking this CHIMCHAR.$"

Route201_EventScript_ChooseStarter_Text_1:
# 432 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Then, I choose you!\n"
	.string "I'm picking this PIPLUP.$"

Route201_EventScript_ChooseStarter_Text_2:
# 435 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Then, I choose you!\n"
	.string "I'm picking this TURTWIG.$"

Route201_EventScript_ChooseStarter_Text_3:
# 438 "data/maps/Route201/scripts.pory"
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
# 463 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Professor!\n"
	.string "Wait for me!$"

Route201_EventScript_ChooseStarter_Text_5:
# 471 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Uh, sorry, folks.$"

Route201_EventScript_ChooseStarter_Text_6:
# 483 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}How do you like that?\n"
	.string "Prof. Rowan's really nice.\p"
	.string "On TV, he seems so stern and scary.$"

Route201_EventScript_ChooseStarter_Text_7:
# 499 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Heheh, {PLAYER}!\n"
	.string "We've both got Pokémon now.\p"
	.string "There's only one thing to do, right?\n"
	.string "Are you up for this?$"

Route201_EventScript_ChooseStarter_Text_8:
# 504 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}What's with that attitude?\n"
	.string "Don't be that way!$"

Route201_EventScript_ChooseStarter_Text_9:
# 511 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}I've always wanted to\n"
	.string "say this. . .\p"
	.string "The time has finally come!\p"
	.string "{PLAYER}!\p"
	.string "I challenge you to a battle!$"

Route201_EventScript_ChooseStarter_Text_10:
# 530 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Whew!\n"
	.string "Let's go home.\p"
	.string "I'm beat after that battle.\n"
	.string "My Pokémon needs rest, too.\p"
	.string "See ya, {PLAYER}!$"

Route201_EventScript_ChooseStarter_Text_11:
# 536 "data/maps/Route201/scripts.pory"
	.string "{SPEAKER NAME_BARRY}WTEST$"

Route201_Text_BarryDefeated::
# 543 "data/maps/Route201/scripts.pory"
	.string "What are you saying?!\nWe ended up losing?$"
