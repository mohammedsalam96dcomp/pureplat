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
	msgbox SandgemTown_ON_FRAME_Text_3
# 75 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 77 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_1
# 78 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 79 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 81 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_4
# 84 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 86 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_3
# 87 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_4
# 88 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 90 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_5
# 96 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 98 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_4
# 99 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_4
# 100 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 102 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_6
# 110 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 112 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_5
# 113 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_6
# 114 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 116 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 117 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 118 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 119 "data/maps/SandgemTown/scripts.pory"
	waitse
# 121 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_7
# 132 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 134 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_7
# 135 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 136 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_1
# 137 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_8
# 138 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 139 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_6
# 140 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_9
# 141 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 143 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_DAWN
# 144 "data/maps/SandgemTown/scripts.pory"
	removeobject 1
# 146 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_SANDGEM_TOWN_STATE, 3
# 147 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_ROUTE202_STATE, 1
# 148 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_ROUTE202_DAWN_STATE, 1
# 149 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 5
# 150 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_OnTransition::
# 154 "data/maps/SandgemTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


SandgemTown_ON_WARP::
# 158 "data/maps/SandgemTown/scripts.pory"
	addobject 1
# 159 "data/maps/SandgemTown/scripts.pory"
	turnobject 1, DIR_NORTH
	return


SandgemTown_EventScript_LucasDawnScene1::
# 164 "data/maps/SandgemTown/scripts.pory"
	lock
# 165 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 166 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 167 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene2::
# 171 "data/maps/SandgemTown/scripts.pory"
	lock
# 172 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 2
# 173 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 174 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene3::
# 178 "data/maps/SandgemTown/scripts.pory"
	lock
# 179 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 3
# 180 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 181 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene4::
# 185 "data/maps/SandgemTown/scripts.pory"
	lock
# 186 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 4
# 187 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 188 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene5::
# 192 "data/maps/SandgemTown/scripts.pory"
	lock
# 193 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 5
# 194 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 195 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene::
# 199 "data/maps/SandgemTown/scripts.pory"
	lock
# 201 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 202 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_0
# 203 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 204 "data/maps/SandgemTown/scripts.pory"
	waitse
# 206 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 207 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 209 "data/maps/SandgemTown/scripts.pory"
	switch VAR_TEMP_1
# 210 "data/maps/SandgemTown/scripts.pory"
	case 1, SandgemTown_EventScript_LucasDawnScene_3
# 216 "data/maps/SandgemTown/scripts.pory"
	case 2, SandgemTown_EventScript_LucasDawnScene_4
# 219 "data/maps/SandgemTown/scripts.pory"
	case 3, SandgemTown_EventScript_LucasDawnScene_5
# 222 "data/maps/SandgemTown/scripts.pory"
	case 4, SandgemTown_EventScript_LucasDawnScene_6
# 228 "data/maps/SandgemTown/scripts.pory"
	case 5, SandgemTown_EventScript_LucasDawnScene_7
SandgemTown_EventScript_LucasDawnScene_1:
# 236 "data/maps/SandgemTown/scripts.pory"
	checkplayergender
# 238 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_EventScript_LucasDawnScene_9
# 244 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_1
# 247 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_EventScript_LucasDawnScene_8:
# 250 "data/maps/SandgemTown/scripts.pory"
	switch VAR_TEMP_1
# 251 "data/maps/SandgemTown/scripts.pory"
	case 1, SandgemTown_EventScript_LucasDawnScene_14
# 255 "data/maps/SandgemTown/scripts.pory"
	case 2, SandgemTown_EventScript_LucasDawnScene_15
# 259 "data/maps/SandgemTown/scripts.pory"
	case 3, SandgemTown_EventScript_LucasDawnScene_16
# 263 "data/maps/SandgemTown/scripts.pory"
	case 4, SandgemTown_EventScript_LucasDawnScene_17
# 267 "data/maps/SandgemTown/scripts.pory"
	case 5, SandgemTown_EventScript_LucasDawnScene_18
SandgemTown_EventScript_LucasDawnScene_12:
# 273 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_EventScript_LucasDawnScene_20
# 279 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_3
# 282 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_EventScript_LucasDawnScene_19:
# 286 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_HIDE_SANDGEM_TOWN_RIVAL
# 287 "data/maps/SandgemTown/scripts.pory"
	addobject 2
# 289 "data/maps/SandgemTown/scripts.pory"
	playse SE_DOOR
# 290 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_16
# 291 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 292 "data/maps/SandgemTown/scripts.pory"
	waitse
# 294 "data/maps/SandgemTown/scripts.pory"
	playse SE_WALL_HIT
# 295 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_4
# 296 "data/maps/SandgemTown/scripts.pory"
	waitse
# 297 "data/maps/SandgemTown/scripts.pory"
	playbgm MUS_GSC_ROUTE38, 0
# 299 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_5
# 305 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 307 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_17
# 308 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 310 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_18
# 311 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_18
# 312 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_19
# 313 "data/maps/SandgemTown/scripts.pory"
	waitmovement 2
# 315 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_RIVAL
# 316 "data/maps/SandgemTown/scripts.pory"
	removeobject 2
# 317 "data/maps/SandgemTown/scripts.pory"
	delay 10
# 318 "data/maps/SandgemTown/scripts.pory"
	fadedefaultbgm
# 320 "data/maps/SandgemTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq SandgemTown_EventScript_LucasDawnScene_24
# 328 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_7
# 333 "data/maps/SandgemTown/scripts.pory"
	closemessage
SandgemTown_EventScript_LucasDawnScene_23:
# 337 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 338 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 339 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_4
# 340 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 341 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 343 "data/maps/SandgemTown/scripts.pory"
	playse SE_DOOR
# 344 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 345 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_2
# 346 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 347 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_DAWN
# 348 "data/maps/SandgemTown/scripts.pory"
	removeobject 1
# 350 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_2
# 351 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 353 "data/maps/SandgemTown/scripts.pory"
	warp MAP_SANDGEM_PROFESSORS_LAB, 6, 12
# 355 "data/maps/SandgemTown/scripts.pory"
	release
	return

SandgemTown_EventScript_LucasDawnScene_3:
# 211 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 212 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 213 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 214 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_2
# 215 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_4:
# 217 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_3
# 218 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_5:
# 220 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_4
# 221 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_6:
# 223 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_4
# 224 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 225 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 226 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_6
# 227 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_7:
# 229 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 230 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 231 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 232 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_7
# 233 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_9:
# 239 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_0
# 242 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_EventScript_LucasDawnScene_8

SandgemTown_EventScript_LucasDawnScene_14:
# 252 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_7
# 253 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_8
# 254 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_12

SandgemTown_EventScript_LucasDawnScene_15:
# 256 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_9
# 257 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_9
# 258 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_12

SandgemTown_EventScript_LucasDawnScene_16:
# 260 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_10
# 261 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_11
# 262 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_12

SandgemTown_EventScript_LucasDawnScene_17:
# 264 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_12
# 265 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_13
# 266 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_12

SandgemTown_EventScript_LucasDawnScene_18:
# 268 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_14
# 269 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_15
# 270 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_12

SandgemTown_EventScript_LucasDawnScene_20:
# 274 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_2
# 277 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_EventScript_LucasDawnScene_19

SandgemTown_EventScript_LucasDawnScene_24:
# 321 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_6
# 326 "data/maps/SandgemTown/scripts.pory"
	closemessage
	goto SandgemTown_EventScript_LucasDawnScene_23


SandgemTown_EventScript_Woman::
# 359 "data/maps/SandgemTown/scripts.pory"
	lock
# 361 "data/maps/SandgemTown/scripts.pory"
	faceplayer
# 362 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_Woman_Text_0
# 366 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 368 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_Youngster::
# 372 "data/maps/SandgemTown/scripts.pory"
	lock
# 374 "data/maps/SandgemTown/scripts.pory"
	faceplayer
# 375 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_Youngster_Text_0
# 381 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 383 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_Man::
# 388 "data/maps/SandgemTown/scripts.pory"
	lock
# 390 "data/maps/SandgemTown/scripts.pory"
	faceplayer
# 391 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_Man_Text_0
# 395 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 397 "data/maps/SandgemTown/scripts.pory"
	release
	return


# 39 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_0:
# 39 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 77 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_1:
# 77 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_down
	step_end

# 78 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_2:
# 78 "data/maps/SandgemTown/scripts.pory"
	walk_up
	step_end

# 86 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_3:
# 86 "data/maps/SandgemTown/scripts.pory"
	walk_down
# 86 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 86 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 86 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 86 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 86 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 86 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 86 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 86 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 86 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 86 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 87 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_4:
# 87 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 87 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 87 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 87 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 87 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 87 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 87 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 87 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 87 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 87 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 87 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 112 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_5:
# 112 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_right
	step_end

# 113 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_6:
# 113 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_left
	step_end

# 134 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_7:
# 134 "data/maps/SandgemTown/scripts.pory"
	walk_down
	step_end

# 137 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_8:
# 137 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 137 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 137 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 137 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 137 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 140 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_9:
# 140 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 140 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 140 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 140 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 140 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 140 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 140 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 140 "data/maps/SandgemTown/scripts.pory"
	walk_up
	step_end

# 202 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_0:
# 202 "data/maps/SandgemTown/scripts.pory"
	emote_exclamation_mark
# 202 "data/maps/SandgemTown/scripts.pory"
	delay_16
# 202 "data/maps/SandgemTown/scripts.pory"
	delay_16
# 202 "data/maps/SandgemTown/scripts.pory"
	delay_16
	step_end

# 206 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_1:
# 206 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 206 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 214 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_2:
# 214 "data/maps/SandgemTown/scripts.pory"
	face_down
	step_end

# 217 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_3:
# 217 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 217 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 220 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_4:
# 220 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 225 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_5:
# 225 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 226 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_6:
# 226 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 226 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_down
	step_end

# 252 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_7:
# 252 "data/maps/SandgemTown/scripts.pory"
	walk_down
# 252 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 252 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 252 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 252 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 252 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 253 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_8:
# 253 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 253 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 253 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 253 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 253 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 253 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 256 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_9:
# 256 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 256 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 256 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 256 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 256 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 260 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_10:
# 260 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 260 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 260 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 260 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 260 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 260 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 261 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_11:
# 261 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 261 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 261 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 261 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 261 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 261 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 264 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_12:
# 264 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 264 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 264 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 264 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 264 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 264 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 264 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 265 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_13:
# 265 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 265 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 265 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 265 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 265 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 265 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 265 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 268 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_14:
# 268 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 268 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 268 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 268 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 268 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 268 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 268 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 268 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 269 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_15:
# 269 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 269 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 269 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 269 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 269 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 269 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 269 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 269 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 290 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_16:
# 290 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
# 290 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 307 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_17:
# 307 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 307 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 307 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
	step_end

# 310 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_18:
# 310 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 312 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_19:
# 312 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 312 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 312 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 312 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 312 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 312 "data/maps/SandgemTown/scripts.pory"
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
# 71 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Well, I'll be. . .\n"
	.string "The professor had TMs. . .?\p"
	.string "Next thing, he'll tell me he battled\n"
	.string "when he was young.$"

SandgemTown_ON_FRAME_Text_4:
# 81 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hey, {PLAYER}!\n"
	.string "I want to show you a few things.\l"
	.string "So, follow me!$"

SandgemTown_ON_FRAME_Text_5:
# 90 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}This building with the red roof is\n"
	.string "the Pokémon Center.\p"
	.string "You can get your Pokémon healed if\n"
	.string "it's been hurt in battle.\p"
	.string "You'll find a Pokémon Center in most\n"
	.string "towns.$"

SandgemTown_ON_FRAME_Text_6:
# 102 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Over here, the building with the blue\n"
	.string "roof is the Poké Mart.\p"
	.string "It's a shop where you can buy and\n"
	.string "sell all sorts of items.\p"
	.string "{PLAYER}, since you're a rookie\n"
	.string "Trainer, you won't be able to buy\l"
	.string "very much stuff.\p"
	.string "Don't worry about it, OK?$"

SandgemTown_ON_FRAME_Text_7:
# 121 "data/maps/SandgemTown/scripts.pory"
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

SandgemTown_EventScript_LucasDawnScene_Text_0:
# 239 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hi! I've been waiting for you!\n"
	.string "Please, come with me!\l"
	.string "The prof's waiting to see you.$"

SandgemTown_EventScript_LucasDawnScene_Text_1:
# 244 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Oh! There you are!\n"
	.string "Please, come with me!\l"
	.string "The professor is waiting!$"

SandgemTown_EventScript_LucasDawnScene_Text_2:
# 274 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}See? This is our Pokémon Research\n"
	.string "Lab.\p"
	.string "We'll just go ahead and. . .$"

SandgemTown_EventScript_LucasDawnScene_Text_3:
# 279 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}This is it!\n"
	.string "Our Pokémon Research Lab!\p"
	.string "Let's go. . .$"

SandgemTown_EventScript_LucasDawnScene_Text_4:
# 295 "data/maps/SandgemTown/scripts.pory"
	.string "THUD! !$"

SandgemTown_EventScript_LucasDawnScene_Text_5:
# 299 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_BARRY}What the. . .\p"
	.string "Oh, it's you, {PLAYER}!\p"
	.string "That old guy. . . He's not so scary so\n"
	.string "much as he is totally out there!\p"
	.string "Aww, it doesn't matter, {PLAYER}.\n"
	.string "I'm out of here. See you later!$"

SandgemTown_EventScript_LucasDawnScene_Text_6:
# 321 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}What was that?!\p"
	.string "Your friend always seems to be\n"
	.string "in such a rush.\p"
	.string "Anyway. . .\n"
	.string "Let's go in.$"

SandgemTown_EventScript_LucasDawnScene_Text_7:
# 328 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Wow, what was that?!\p"
	.string "Your friend sure seems to be really\n"
	.string "impatient.\p"
	.string "Well, anyway. . .\n"
	.string "Let's go inside.$"

SandgemTown_EventScript_Woman_Text_0:
# 362 "data/maps/SandgemTown/scripts.pory"
	.string "So I don't forget what's happened,\n"
	.string "till now, I'd better save this. . .\p"
	.string "There!\n"
	.string "Now I can take a break.$"

SandgemTown_EventScript_Youngster_Text_0:
# 375 "data/maps/SandgemTown/scripts.pory"
	.string "Oh, wow!\n"
	.string "Pokémon are so cool!\p"
	.string "You can make yours battle and make\n"
	.string "them stronger!\p"
	.string "I wish I had some!\n"
	.string "It's so cool!$"

SandgemTown_EventScript_Man_Text_0:
# 391 "data/maps/SandgemTown/scripts.pory"
	.string "That thing you have!\p"
	.string "It's a Pokédex, isn't it?!\p"
	.string "You're off to see all kinds of\n"
	.string "Pokémon now! Lucky you!$"
