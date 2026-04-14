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
	delay 30
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
	release
	return


SandgemTown_EventScript_OnTransition::
# 152 "data/maps/SandgemTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


SandgemTown_ON_WARP::
# 156 "data/maps/SandgemTown/scripts.pory"
	turnobject 1, DIR_NORTH
	return


SandgemTown_EventScript_LucasDawnScene1::
# 161 "data/maps/SandgemTown/scripts.pory"
	lock
# 162 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 163 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 164 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene2::
# 168 "data/maps/SandgemTown/scripts.pory"
	lock
# 169 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 2
# 170 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 171 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene3::
# 175 "data/maps/SandgemTown/scripts.pory"
	lock
# 176 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 3
# 177 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 178 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene4::
# 182 "data/maps/SandgemTown/scripts.pory"
	lock
# 183 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 4
# 184 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 185 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene5::
# 189 "data/maps/SandgemTown/scripts.pory"
	lock
# 190 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 5
# 191 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 192 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene::
# 196 "data/maps/SandgemTown/scripts.pory"
	lock
# 198 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 199 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_0
# 200 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 201 "data/maps/SandgemTown/scripts.pory"
	waitse
# 203 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 204 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 206 "data/maps/SandgemTown/scripts.pory"
	switch VAR_TEMP_1
# 207 "data/maps/SandgemTown/scripts.pory"
	case 1, SandgemTown_EventScript_LucasDawnScene_3
# 213 "data/maps/SandgemTown/scripts.pory"
	case 2, SandgemTown_EventScript_LucasDawnScene_4
# 216 "data/maps/SandgemTown/scripts.pory"
	case 3, SandgemTown_EventScript_LucasDawnScene_5
# 219 "data/maps/SandgemTown/scripts.pory"
	case 4, SandgemTown_EventScript_LucasDawnScene_6
# 225 "data/maps/SandgemTown/scripts.pory"
	case 5, SandgemTown_EventScript_LucasDawnScene_7
SandgemTown_EventScript_LucasDawnScene_1:
# 233 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_0
# 236 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 238 "data/maps/SandgemTown/scripts.pory"
	switch VAR_TEMP_1
# 239 "data/maps/SandgemTown/scripts.pory"
	case 1, SandgemTown_EventScript_LucasDawnScene_10
# 243 "data/maps/SandgemTown/scripts.pory"
	case 2, SandgemTown_EventScript_LucasDawnScene_11
# 247 "data/maps/SandgemTown/scripts.pory"
	case 3, SandgemTown_EventScript_LucasDawnScene_12
# 251 "data/maps/SandgemTown/scripts.pory"
	case 4, SandgemTown_EventScript_LucasDawnScene_13
# 255 "data/maps/SandgemTown/scripts.pory"
	case 5, SandgemTown_EventScript_LucasDawnScene_14
SandgemTown_EventScript_LucasDawnScene_8:
# 261 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_1
# 264 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 266 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_HIDE_SANDGEM_TOWN_RIVAL
# 267 "data/maps/SandgemTown/scripts.pory"
	addobject 2
# 269 "data/maps/SandgemTown/scripts.pory"
	playse SE_DOOR
# 270 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_16
# 271 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 272 "data/maps/SandgemTown/scripts.pory"
	waitse
# 274 "data/maps/SandgemTown/scripts.pory"
	playse SE_WALL_HIT
# 275 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_2
# 276 "data/maps/SandgemTown/scripts.pory"
	waitse
# 277 "data/maps/SandgemTown/scripts.pory"
	playbgm MUS_GSC_ROUTE38, 0
# 279 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_3
# 285 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 287 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_17
# 288 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 290 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_18
# 291 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_18
# 292 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_19
# 293 "data/maps/SandgemTown/scripts.pory"
	waitmovement 2
# 295 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_RIVAL
# 296 "data/maps/SandgemTown/scripts.pory"
	removeobject 2
# 297 "data/maps/SandgemTown/scripts.pory"
	delay 10
# 298 "data/maps/SandgemTown/scripts.pory"
	fadedefaultbgm
# 300 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_4
# 305 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 307 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 308 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 309 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_4
# 310 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 311 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 313 "data/maps/SandgemTown/scripts.pory"
	playse SE_DOOR
# 314 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 315 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_2
# 316 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 317 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_DAWN
# 318 "data/maps/SandgemTown/scripts.pory"
	removeobject 1
# 320 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_ON_FRAME_Movement_2
# 321 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 323 "data/maps/SandgemTown/scripts.pory"
	warp MAP_SANDGEM_PROFESSORS_LAB, 6, 12
# 325 "data/maps/SandgemTown/scripts.pory"
	release
	return

SandgemTown_EventScript_LucasDawnScene_3:
# 208 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 209 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 210 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_2
# 211 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_2
# 212 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_4:
# 214 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_3
# 215 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_5:
# 217 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_4
# 218 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_6:
# 220 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_4
# 221 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 222 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 223 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_6
# 224 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_7:
# 226 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 227 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 228 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 229 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_ON_FRAME_Movement_8
# 230 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_10:
# 240 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_7
# 241 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_8
# 242 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_8

SandgemTown_EventScript_LucasDawnScene_11:
# 244 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_9
# 245 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_9
# 246 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_8

SandgemTown_EventScript_LucasDawnScene_12:
# 248 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_10
# 249 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_11
# 250 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_8

SandgemTown_EventScript_LucasDawnScene_13:
# 252 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_12
# 253 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_13
# 254 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_8

SandgemTown_EventScript_LucasDawnScene_14:
# 256 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_14
# 257 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_15
# 258 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_8


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

# 199 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_0:
# 199 "data/maps/SandgemTown/scripts.pory"
	emote_exclamation_mark
# 199 "data/maps/SandgemTown/scripts.pory"
	delay_16
# 199 "data/maps/SandgemTown/scripts.pory"
	delay_16
# 199 "data/maps/SandgemTown/scripts.pory"
	delay_16
	step_end

# 203 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_1:
# 203 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 203 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 211 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_2:
# 211 "data/maps/SandgemTown/scripts.pory"
	face_down
	step_end

# 214 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_3:
# 214 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 214 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 217 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_4:
# 217 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 222 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_5:
# 222 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 223 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_6:
# 223 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 223 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_down
	step_end

# 240 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_7:
# 240 "data/maps/SandgemTown/scripts.pory"
	walk_down
# 240 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 240 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 240 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 240 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 240 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 241 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_8:
# 241 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 241 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 241 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 241 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 241 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 241 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 244 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_9:
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

# 248 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_10:
# 248 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 248 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 248 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 248 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 248 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 248 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 249 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_11:
# 249 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 249 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 249 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 249 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 249 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 249 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 252 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_12:
# 252 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 252 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 252 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 252 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 252 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 252 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 252 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 253 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_13:
# 253 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 253 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 253 "data/maps/SandgemTown/scripts.pory"
	walk_up
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
SandgemTown_EventScript_LucasDawnScene_Movement_14:
# 256 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 256 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 256 "data/maps/SandgemTown/scripts.pory"
	walk_up
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

# 257 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_15:
# 257 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 257 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 257 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 257 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 257 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 257 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 257 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 257 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 270 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_16:
# 270 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
# 270 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 287 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_17:
# 287 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 287 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 287 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
	step_end

# 290 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_18:
# 290 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 292 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_19:
# 292 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 292 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 292 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 292 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 292 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 292 "data/maps/SandgemTown/scripts.pory"
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
# 233 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hi! I've been waiting for you!\n"
	.string "Please, come with me.\l"
	.string "The prof's waiting to see you.$"

SandgemTown_EventScript_LucasDawnScene_Text_1:
# 261 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}See? This is our Pokémon Research\n"
	.string "Lab.\p"
	.string "We'll just go ahead and. . .$"

SandgemTown_EventScript_LucasDawnScene_Text_2:
# 275 "data/maps/SandgemTown/scripts.pory"
	.string "THUD! !$"

SandgemTown_EventScript_LucasDawnScene_Text_3:
# 279 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_BARRY}What the. . .\p"
	.string "Oh, it's you, {PLAYER}!\p"
	.string "That old guy. . . He's not so scary so\n"
	.string "much as he is totally out there!\p"
	.string "Aww, it doesn't matter, {PLAYER}.\n"
	.string "I'm out of here. See you later!$"

SandgemTown_EventScript_LucasDawnScene_Text_4:
# 300 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}What was that?!\p"
	.string "Your friend always seems to be\n"
	.string "in such a rush.\p"
	.string "Anyway. . .\n"
	.string "Let's go in.$"
