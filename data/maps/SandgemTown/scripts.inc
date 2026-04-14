SandgemTown_MapScripts::
# 12 "data/maps/SandgemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SandgemTown_EventScript_OnTransition
# 7 "data/maps/SandgemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SandgemTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 14 "data/maps/SandgemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SandgemTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SandgemTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/SandgemTown/scripts.pory"
	map_script_2 VAR_SANDGEM_TOWN_STATE, 2, SandgemTown_ON_FRAME
	.2byte 0

SandgemTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 15 "data/maps/SandgemTown/scripts.pory"
	map_script_2 VAR_SANDGEM_TOWN_STATE, 2, SandgemTown_ON_WARP
	.2byte 0


SandgemTown_ON_FRAME::
# 20 "data/maps/SandgemTown/scripts.pory"
	lock
# 22 "data/maps/SandgemTown/scripts.pory"
	delay 8
# 24 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_HIDE_SANDGEM_TOWN_ROWAN
# 25 "data/maps/SandgemTown/scripts.pory"
	addobject 3
# 27 "data/maps/SandgemTown/scripts.pory"
	playse SE_DOOR
# 28 "data/maps/SandgemTown/scripts.pory"
	waitse
# 30 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_0
# 31 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 33 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 34 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 35 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 36 "data/maps/SandgemTown/scripts.pory"
	waitse
# 37 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 38 "data/maps/SandgemTown/scripts.pory"
	delay 48
# 40 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_0
# 41 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 43 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_1
# 45 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 46 "data/maps/SandgemTown/scripts.pory"
	giveitem ITEM_TM_RETURN
# 47 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_2
# 60 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 62 "data/maps/SandgemTown/scripts.pory"
	applymovement 3, SandgemTown_ON_FRAME_Movement_0
# 63 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 65 "data/maps/SandgemTown/scripts.pory"
	playse SE_DOOR
# 66 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_ROWAN
# 67 "data/maps/SandgemTown/scripts.pory"
	removeobject 3
# 68 "data/maps/SandgemTown/scripts.pory"
	waitse
# 70 "data/maps/SandgemTown/scripts.pory"
	delay 10
# 72 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_3
# 76 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 78 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_1
# 79 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 80 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 82 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_4
# 85 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 87 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_3
# 88 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_4
# 89 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 91 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_5
# 97 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 99 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_5
# 100 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_5
# 101 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 103 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_6
# 111 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 113 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_6
# 114 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_7
# 115 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 117 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 118 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 119 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 120 "data/maps/SandgemTown/scripts.pory"
	waitse
# 122 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_ON_FRAME_Text_7
# 133 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 135 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_8
# 136 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 137 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_1
# 138 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_9
# 139 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 140 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_7
# 141 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_10
# 142 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 144 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_DAWN
# 145 "data/maps/SandgemTown/scripts.pory"
	removeobject 1
# 147 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_SANDGEM_TOWN_STATE, 3
# 148 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_ROUTE202_STATE, 1
# 149 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_ROUTE202_DAWN_STATE, 1
# 150 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 5
# 151 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_OnTransition::
# 155 "data/maps/SandgemTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


SandgemTown_ON_WARP::
# 159 "data/maps/SandgemTown/scripts.pory"
	addobject 1
# 160 "data/maps/SandgemTown/scripts.pory"
	turnobject 1, DIR_NORTH
	return


SandgemTown_EventScript_LucasDawnScene1::
# 165 "data/maps/SandgemTown/scripts.pory"
	lock
# 166 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 167 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 168 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene2::
# 172 "data/maps/SandgemTown/scripts.pory"
	lock
# 173 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 2
# 174 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 175 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene3::
# 179 "data/maps/SandgemTown/scripts.pory"
	lock
# 180 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 3
# 181 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 182 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene4::
# 186 "data/maps/SandgemTown/scripts.pory"
	lock
# 187 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 4
# 188 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 189 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene5::
# 193 "data/maps/SandgemTown/scripts.pory"
	lock
# 194 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 5
# 195 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 196 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene::
# 200 "data/maps/SandgemTown/scripts.pory"
	lock
# 202 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 203 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_0
# 204 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 205 "data/maps/SandgemTown/scripts.pory"
	waitse
# 207 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 208 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 210 "data/maps/SandgemTown/scripts.pory"
	switch VAR_TEMP_1
# 211 "data/maps/SandgemTown/scripts.pory"
	case 1, SandgemTown_EventScript_LucasDawnScene_3
# 217 "data/maps/SandgemTown/scripts.pory"
	case 2, SandgemTown_EventScript_LucasDawnScene_4
# 220 "data/maps/SandgemTown/scripts.pory"
	case 3, SandgemTown_EventScript_LucasDawnScene_5
# 223 "data/maps/SandgemTown/scripts.pory"
	case 4, SandgemTown_EventScript_LucasDawnScene_6
# 229 "data/maps/SandgemTown/scripts.pory"
	case 5, SandgemTown_EventScript_LucasDawnScene_7
SandgemTown_EventScript_LucasDawnScene_1:
# 237 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_0
# 240 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 242 "data/maps/SandgemTown/scripts.pory"
	switch VAR_TEMP_1
# 243 "data/maps/SandgemTown/scripts.pory"
	case 1, SandgemTown_EventScript_LucasDawnScene_10
# 247 "data/maps/SandgemTown/scripts.pory"
	case 2, SandgemTown_EventScript_LucasDawnScene_11
# 251 "data/maps/SandgemTown/scripts.pory"
	case 3, SandgemTown_EventScript_LucasDawnScene_12
# 255 "data/maps/SandgemTown/scripts.pory"
	case 4, SandgemTown_EventScript_LucasDawnScene_13
# 259 "data/maps/SandgemTown/scripts.pory"
	case 5, SandgemTown_EventScript_LucasDawnScene_14
SandgemTown_EventScript_LucasDawnScene_8:
# 265 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_1
# 268 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 270 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_HIDE_SANDGEM_TOWN_RIVAL
# 271 "data/maps/SandgemTown/scripts.pory"
	addobject 2
# 273 "data/maps/SandgemTown/scripts.pory"
	playse SE_DOOR
# 274 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_16
# 275 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 276 "data/maps/SandgemTown/scripts.pory"
	waitse
# 278 "data/maps/SandgemTown/scripts.pory"
	playse SE_WALL_HIT
# 279 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_2
# 280 "data/maps/SandgemTown/scripts.pory"
	waitse
# 281 "data/maps/SandgemTown/scripts.pory"
	playbgm MUS_GSC_ROUTE38, 0
# 283 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_3
# 289 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 291 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_17
# 292 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 294 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_18
# 295 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_18
# 296 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_19
# 297 "data/maps/SandgemTown/scripts.pory"
	waitmovement 2
# 299 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_RIVAL
# 300 "data/maps/SandgemTown/scripts.pory"
	removeobject 2
# 301 "data/maps/SandgemTown/scripts.pory"
	delay 10
# 302 "data/maps/SandgemTown/scripts.pory"
	fadedefaultbgm
# 304 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_4
# 309 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 311 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 312 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 313 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_4
# 314 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 315 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 317 "data/maps/SandgemTown/scripts.pory"
	playse SE_DOOR
# 318 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 319 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_2
# 320 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 321 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_DAWN
# 322 "data/maps/SandgemTown/scripts.pory"
	removeobject 1
# 324 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_2
# 325 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 327 "data/maps/SandgemTown/scripts.pory"
	warp MAP_SANDGEM_PROFESSORS_LAB, 6, 12
# 329 "data/maps/SandgemTown/scripts.pory"
	release
	return

SandgemTown_EventScript_LucasDawnScene_3:
# 212 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 213 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 214 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 215 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_2
# 216 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_4:
# 218 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_3
# 219 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_5:
# 221 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_4
# 222 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_6:
# 224 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_4
# 225 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 226 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 227 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_6
# 228 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_7:
# 230 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 231 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 232 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 233 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_8
# 234 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_10:
# 244 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_7
# 245 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_8
# 246 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_8

SandgemTown_EventScript_LucasDawnScene_11:
# 248 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_9
# 249 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_9
# 250 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_8

SandgemTown_EventScript_LucasDawnScene_12:
# 252 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_10
# 253 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_11
# 254 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_8

SandgemTown_EventScript_LucasDawnScene_13:
# 256 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_12
# 257 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_13
# 258 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_8

SandgemTown_EventScript_LucasDawnScene_14:
# 260 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_14
# 261 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_15
# 262 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_8


SandgemTown_EventScript_Woman::
# 333 "data/maps/SandgemTown/scripts.pory"
	lock
# 335 "data/maps/SandgemTown/scripts.pory"
	faceplayer
# 336 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_Woman_Text_0
# 340 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 342 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_Youngster::
# 346 "data/maps/SandgemTown/scripts.pory"
	lock
# 348 "data/maps/SandgemTown/scripts.pory"
	faceplayer
# 349 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_Youngster_Text_0
# 355 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 357 "data/maps/SandgemTown/scripts.pory"
	release
	return


# 40 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_0:
# 40 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 78 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_1:
# 78 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_down
	step_end

# 79 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_2:
# 79 "data/maps/SandgemTown/scripts.pory"
	walk_up
	step_end

# 87 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_3:
# 87 "data/maps/SandgemTown/scripts.pory"
	walk_down
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

# 88 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_4:
# 88 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 88 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 88 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 88 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 88 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 88 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 88 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 88 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 88 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 88 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 88 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 99 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_5:
# 99 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 99 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 99 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 99 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 99 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 99 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 99 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 99 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 99 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 99 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 99 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 99 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 113 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_6:
# 113 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_right
	step_end

# 114 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_7:
# 114 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_left
	step_end

# 135 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_8:
# 135 "data/maps/SandgemTown/scripts.pory"
	walk_down
	step_end

# 138 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_9:
# 138 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 138 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 138 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 138 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 138 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 138 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 141 "data/maps/SandgemTown/scripts.pory"
SandgemTown_ON_FRAME_Movement_10:
# 141 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 141 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 141 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 141 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 141 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 141 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 141 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 141 "data/maps/SandgemTown/scripts.pory"
	walk_up
	step_end

# 203 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_0:
# 203 "data/maps/SandgemTown/scripts.pory"
	emote_exclamation_mark
# 203 "data/maps/SandgemTown/scripts.pory"
	delay_16
# 203 "data/maps/SandgemTown/scripts.pory"
	delay_16
# 203 "data/maps/SandgemTown/scripts.pory"
	delay_16
	step_end

# 207 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_1:
# 207 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 207 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 215 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_2:
# 215 "data/maps/SandgemTown/scripts.pory"
	face_down
	step_end

# 218 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_3:
# 218 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 218 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 221 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_4:
# 221 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 226 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_5:
# 226 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 227 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_6:
# 227 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 227 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_down
	step_end

# 244 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_7:
# 244 "data/maps/SandgemTown/scripts.pory"
	walk_down
# 244 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 244 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 244 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 244 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 244 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 245 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_8:
# 245 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 245 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 245 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 245 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 245 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 245 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 248 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_9:
# 248 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 248 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 248 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 248 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 248 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 252 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_10:
# 252 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 252 "data/maps/SandgemTown/scripts.pory"
	walk_up
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
SandgemTown_EventScript_LucasDawnScene_Movement_11:
# 253 "data/maps/SandgemTown/scripts.pory"
	walk_up
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
SandgemTown_EventScript_LucasDawnScene_Movement_12:
# 256 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 256 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 256 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 256 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 256 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 256 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 256 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 257 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_13:
# 257 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 257 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 257 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 257 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 257 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 257 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 257 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 260 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_14:
# 260 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 260 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 260 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 260 "data/maps/SandgemTown/scripts.pory"
	walk_right
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
SandgemTown_EventScript_LucasDawnScene_Movement_15:
# 261 "data/maps/SandgemTown/scripts.pory"
	walk_up
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
	walk_right
# 261 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 274 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_16:
# 274 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
# 274 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 291 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_17:
# 291 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 291 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 291 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
	step_end

# 294 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_18:
# 294 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 296 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_19:
# 296 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 296 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 296 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 296 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 296 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 296 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
	step_end

SandgemTown_ON_FRAME_Text_0:
# 30 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}{PLAYER}!$"

SandgemTown_ON_FRAME_Text_1:
# 43 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}I have something good here.\n"
	.string "You should take this as well.$"

SandgemTown_ON_FRAME_Text_2:
# 47 "data/maps/SandgemTown/scripts.pory"
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
# 72 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Well, I'll be. . .\n"
	.string "The professor had TMs. . .?\p"
	.string "Next thing, he'll tell me he battled\n"
	.string "when he was young.$"

SandgemTown_ON_FRAME_Text_4:
# 82 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hey, {PLAYER}!\n"
	.string "I want to show you a few things.\l"
	.string "So, follow me!$"

SandgemTown_ON_FRAME_Text_5:
# 91 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}This building with the red roof is\n"
	.string "the Pokémon Center.\p"
	.string "You can get your Pokémon healed if\n"
	.string "it's been hurt in battle.\p"
	.string "You'll find a Pokémon Center in most\n"
	.string "towns.$"

SandgemTown_ON_FRAME_Text_6:
# 103 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Over here, the building with the blue\n"
	.string "roof is the Poké Mart.\p"
	.string "It's a shop where you can buy and\n"
	.string "sell all sorts of items.\p"
	.string "{PLAYER}, since you're a rookie\n"
	.string "Trainer, you won't be able to buy\l"
	.string "very much stuff.\p"
	.string "Don't worry about it, OK?$"

SandgemTown_ON_FRAME_Text_7:
# 122 "data/maps/SandgemTown/scripts.pory"
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
# 237 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hi! I've been waiting for you!\n"
	.string "Please, come with me.\l"
	.string "The prof's waiting to see you.$"

SandgemTown_EventScript_LucasDawnScene_Text_1:
# 265 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}See? This is our Pokémon Research\n"
	.string "Lab.\p"
	.string "We'll just go ahead and. . .$"

SandgemTown_EventScript_LucasDawnScene_Text_2:
# 279 "data/maps/SandgemTown/scripts.pory"
	.string "THUD! !$"

SandgemTown_EventScript_LucasDawnScene_Text_3:
# 283 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_BARRY}What the. . .\p"
	.string "Oh, it's you, {PLAYER}!\p"
	.string "That old guy. . . He's not so scary so\n"
	.string "much as he is totally out there!\p"
	.string "Aww, it doesn't matter, {PLAYER}.\n"
	.string "I'm out of here. See you later!$"

SandgemTown_EventScript_LucasDawnScene_Text_4:
# 304 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}What was that?!\p"
	.string "Your friend always seems to be\n"
	.string "in such a rush.\p"
	.string "Anyway. . .\n"
	.string "Let's go in.$"

SandgemTown_EventScript_Woman_Text_0:
# 336 "data/maps/SandgemTown/scripts.pory"
	.string "So I don't forget what's happened,\n"
	.string "till now, I'd better save this. . .\p"
	.string "There!\n"
	.string "Now I can take a break.$"

SandgemTown_EventScript_Youngster_Text_0:
# 349 "data/maps/SandgemTown/scripts.pory"
	.string "Oh, wow!\n"
	.string "Pokémon are so cool!\p"
	.string "You can make yours battle and make\n"
	.string "them stronger!\p"
	.string "I wish I had some!\n"
	.string "It's so cool!$"
