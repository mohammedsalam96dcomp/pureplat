TwinleafTownPlayersHouse_1F_MapScripts::
# 15 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 20 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_TOWN_STATE, 2, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT
# 17 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_TOWN_STATE, 6, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON
	.2byte 0

TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 21 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_TOWN_STATE, 5, TwinleafTownPlayersHouse_1F_ON_WARP
	.2byte 0


TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT::
# 26 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lockall
# 28 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_0
# 29 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 30 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1
# 32 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 35 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 48
# 36 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_2
# 37 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 39 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 40 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Text_0
# 45 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 47 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_3
# 48 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 49 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 10
# 51 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 1
# 52 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 3
# 54 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON::
# 59 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 61 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_0
# 62 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 30
# 64 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_1
# 65 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_2
# 66 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_3
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 71 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_4
# 72 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_5
# 73 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 74 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 76 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Text_0
# 106 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 108 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_201_KID
# 109 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 7
# 110 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 111 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 4
# 112 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_ROUTE201_STATE, 2
# 114 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTownPlayersHouse_1F_ON_WARP::
# 118 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setobjectxy 1, 1, 3
# 119 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 121 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 6
# 122 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_EventScript_Mom::
# 127 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 129 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_2
# 131 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 1
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_3
# 133 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 2
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_4
# 135 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 3
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_5
# 137 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 4
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_6
# 144 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 5
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_7
TwinleafTown_PlayersHouse1F_EventScript_Mom_1:
# 148 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return

TwinleafTown_PlayersHouse1F_EventScript_Mom_2:
# 130 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_RunningShoes
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_3:
# 132 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_HowImpatient
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_4:
# 134 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_ByeBye
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_5:
# 136 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_BarryWaiting
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_6:
# 138 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_14
# 142 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_Heal
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_7:
# 145 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_GotPokedex
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_14:
# 139 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_Mom_FlavorText
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1


TwinleafTown_PlayersHouse1F_HowImpatient::
# 152 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 153 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 155 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 156 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_HowImpatient_Text_0
# 161 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 162 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Cooking::
# 166 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 167 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Cooking_Text_0
# 170 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 171 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Dessert::
# 175 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 176 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Dessert_Text_0
# 179 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 180 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Spotless::
# 184 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 185 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Spotless_Text_0
# 188 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 189 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ContestDigest::
# 193 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 194 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ContestDigest_Text_0
# 201 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 202 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_EventScript_ExitHouse::
# 206 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 208 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 209 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 210 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 211 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_0
# 212 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 213 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 215 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 216 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0
# 224 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 226 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_BARRY_STATE, 1
# 227 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 2
# 229 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ByeBye::
# 233 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 234 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 236 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 237 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ByeBye_Text_0
# 240 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 241 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
# 242 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 3
	return


TwinleafTown_PlayersHouse1F_BarryWaiting::
# 246 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 247 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 249 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 250 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_BarryWaiting_Text_0
# 253 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 254 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_RunningShoes::
# 258 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 259 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 261 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 262 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_RunningShoes_Text_0
# 270 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 272 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Heal::
# 276 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 277 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 279 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 280 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Heal_Text_0
# 283 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 285 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 287 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_3, 1
# 289 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_GotPokedex::
# 293 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 295 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	call TwinleafTown_PlayersHouse1F_Heal
# 297 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_0
# 304 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 305 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq TwinleafTown_PlayersHouse1F_GotPokedex_2
# 308 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq TwinleafTown_PlayersHouse1F_GotPokedex_3
# 310 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq TwinleafTown_PlayersHouse1F_GotPokedex_4
# 312 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq TwinleafTown_PlayersHouse1F_GotPokedex_5
TwinleafTown_PlayersHouse1F_GotPokedex_1:
# 316 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_ne TwinleafTown_PlayersHouse1F_GotPokedex_11
# 320 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1
# 321 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
TwinleafTown_PlayersHouse1F_GotPokedex_10:
# 324 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_1
# 330 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 331 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 333 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_2
# 343 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 345 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_DOOR
# 346 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_TWINLEAF_TOWN_BARRYS_MOM
# 347 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	addobject 2
# 348 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 350 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 351 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1
# 353 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_1
# 354 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 355 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 357 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_2
# 358 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 2
# 359 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq TwinleafTown_PlayersHouse1F_GotPokedex_15
TwinleafTown_PlayersHouse1F_GotPokedex_14:
# 364 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_3
# 368 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 369 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 371 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_4
# 383 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	switch VAR_TEMP_2
# 384 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse1F_GotPokedex_19
# 386 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse1F_GotPokedex_20
# 388 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 3, TwinleafTown_PlayersHouse1F_GotPokedex_21
# 390 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 4, TwinleafTown_PlayersHouse1F_GotPokedex_22
TwinleafTown_PlayersHouse1F_GotPokedex_17:
# 394 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 395 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 397 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_5
# 398 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 400 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	switch VAR_TEMP_2
# 401 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse1F_GotPokedex_25
# 403 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse1F_GotPokedex_26
# 405 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 3, TwinleafTown_PlayersHouse1F_GotPokedex_27
# 407 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 4, TwinleafTown_PlayersHouse1F_GotPokedex_28
TwinleafTown_PlayersHouse1F_GotPokedex_23:
# 410 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 2
# 412 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	switch VAR_TEMP_2
# 413 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse1F_GotPokedex_31
# 415 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse1F_GotPokedex_32
# 417 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 3, TwinleafTown_PlayersHouse1F_GotPokedex_33
# 419 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 4, TwinleafTown_PlayersHouse1F_GotPokedex_34
TwinleafTown_PlayersHouse1F_GotPokedex_29:
# 422 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 423 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 2
# 425 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_6
# 429 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	giveitem ITEM_PARCEL
# 430 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_7
# 437 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 439 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_DOOR
# 441 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	switch VAR_TEMP_2
# 442 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse1F_GotPokedex_37
# 445 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse1F_GotPokedex_38
# 448 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 3, TwinleafTown_PlayersHouse1F_GotPokedex_39
# 450 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 4, TwinleafTown_PlayersHouse1F_GotPokedex_40
TwinleafTown_PlayersHouse1F_GotPokedex_35:
# 453 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 2
# 454 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 456 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setflag FLAG_HIDE_TWINLEAF_TOWN_BARRYS_MOM
# 457 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	removeobject 2
# 459 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 4
# 460 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_3, 1
# 461 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_ROUTE202_STATE, 2
# 462 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return

TwinleafTown_PlayersHouse1F_GotPokedex_2:
# 306 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto TwinleafTown_PlayersHouse1F_GotPokedex_1

TwinleafTown_PlayersHouse1F_GotPokedex_3:
# 309 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_2, 2
	goto TwinleafTown_PlayersHouse1F_GotPokedex_1

TwinleafTown_PlayersHouse1F_GotPokedex_4:
# 311 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_2, 3
	goto TwinleafTown_PlayersHouse1F_GotPokedex_1

TwinleafTown_PlayersHouse1F_GotPokedex_5:
# 313 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_2, 4
	goto TwinleafTown_PlayersHouse1F_GotPokedex_1

TwinleafTown_PlayersHouse1F_GotPokedex_11:
# 317 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_0
# 318 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
	goto TwinleafTown_PlayersHouse1F_GotPokedex_10

TwinleafTown_PlayersHouse1F_GotPokedex_15:
# 360 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_3
# 361 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
	goto TwinleafTown_PlayersHouse1F_GotPokedex_14

TwinleafTown_PlayersHouse1F_GotPokedex_19:
# 385 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_0
	goto TwinleafTown_PlayersHouse1F_GotPokedex_17

TwinleafTown_PlayersHouse1F_GotPokedex_20:
# 387 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1
	goto TwinleafTown_PlayersHouse1F_GotPokedex_17

TwinleafTown_PlayersHouse1F_GotPokedex_21:
# 389 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_4
	goto TwinleafTown_PlayersHouse1F_GotPokedex_17

TwinleafTown_PlayersHouse1F_GotPokedex_22:
# 391 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_3
	goto TwinleafTown_PlayersHouse1F_GotPokedex_17

TwinleafTown_PlayersHouse1F_GotPokedex_25:
	goto TwinleafTown_PlayersHouse1F_GotPokedex_23

TwinleafTown_PlayersHouse1F_GotPokedex_26:
# 404 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_5
	goto TwinleafTown_PlayersHouse1F_GotPokedex_23

TwinleafTown_PlayersHouse1F_GotPokedex_27:
	goto TwinleafTown_PlayersHouse1F_GotPokedex_23

TwinleafTown_PlayersHouse1F_GotPokedex_28:
# 408 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_6
	goto TwinleafTown_PlayersHouse1F_GotPokedex_23

TwinleafTown_PlayersHouse1F_GotPokedex_31:
# 414 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_7
	goto TwinleafTown_PlayersHouse1F_GotPokedex_29

TwinleafTown_PlayersHouse1F_GotPokedex_32:
# 416 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_7
	goto TwinleafTown_PlayersHouse1F_GotPokedex_29

TwinleafTown_PlayersHouse1F_GotPokedex_33:
# 418 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
	goto TwinleafTown_PlayersHouse1F_GotPokedex_29

TwinleafTown_PlayersHouse1F_GotPokedex_34:
# 420 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
	goto TwinleafTown_PlayersHouse1F_GotPokedex_29

TwinleafTown_PlayersHouse1F_GotPokedex_37:
# 443 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 444 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_8
	goto TwinleafTown_PlayersHouse1F_GotPokedex_35

TwinleafTown_PlayersHouse1F_GotPokedex_38:
# 446 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 447 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_9
	goto TwinleafTown_PlayersHouse1F_GotPokedex_35

TwinleafTown_PlayersHouse1F_GotPokedex_39:
# 449 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_8
	goto TwinleafTown_PlayersHouse1F_GotPokedex_35

TwinleafTown_PlayersHouse1F_GotPokedex_40:
# 451 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_10
	goto TwinleafTown_PlayersHouse1F_GotPokedex_35


TwinleafTown_PlayersHouse1F_Mom_FlavorText::
# 469 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 471 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	random 4
# 473 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	switch VAR_RESULT
# 474 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 0, TwinleafTown_PlayersHouse1F_Mom_FlavorText_3
# 480 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse1F_Mom_FlavorText_4
# 487 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse1F_Mom_FlavorText_5
# 494 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 3, TwinleafTown_PlayersHouse1F_Mom_FlavorText_6
TwinleafTown_PlayersHouse1F_Mom_FlavorText_1:
# 500 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return

TwinleafTown_PlayersHouse1F_Mom_FlavorText_3:
# 475 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 476 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Mom_FlavorText_Text_0
	goto TwinleafTown_PlayersHouse1F_Mom_FlavorText_1

TwinleafTown_PlayersHouse1F_Mom_FlavorText_4:
# 481 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 482 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Mom_FlavorText_Text_1
	goto TwinleafTown_PlayersHouse1F_Mom_FlavorText_1

TwinleafTown_PlayersHouse1F_Mom_FlavorText_5:
# 488 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 489 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Mom_FlavorText_Text_2
	goto TwinleafTown_PlayersHouse1F_Mom_FlavorText_1

TwinleafTown_PlayersHouse1F_Mom_FlavorText_6:
# 495 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 496 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Mom_FlavorText_Text_3
	goto TwinleafTown_PlayersHouse1F_Mom_FlavorText_1


# 28 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_0:
# 28 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1:
# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_down
	step_end

# 36 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_2:
# 36 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 36 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 36 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 36 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 36 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 36 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 47 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_3:
# 47 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 47 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 47 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 47 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 47 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 47 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 47 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 61 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_0:
# 61 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 61 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_up
	step_end

# 64 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_1:
# 64 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 65 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_2:
# 65 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_right
	step_end

# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_3:
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 71 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_4:
# 71 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 71 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 71 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 71 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 71 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_left
	step_end

# 72 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_5:
# 72 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 72 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 72 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 72 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 72 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 208 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0:
# 208 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_down
	step_end

# 317 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_0:
# 317 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_up
	step_end

# 353 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_1:
# 353 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_down
# 353 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	emote_exclamation_mark
# 353 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay_16
# 353 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay_16
	step_end

# 357 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_2:
# 357 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 357 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_right
	step_end

# 360 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_3:
# 360 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_left
	step_end

# 389 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_4:
# 389 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_right
	step_end

# 404 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_5:
# 404 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 404 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 408 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_6:
# 408 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 408 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 414 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_7:
# 414 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_left
	step_end

# 444 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_8:
# 444 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
	step_end

# 447 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_9:
# 447 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 447 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 447 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
	step_end

# 451 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_10:
# 451 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 451 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 451 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
	step_end

TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Text_0:
# 40 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "Barry already left.\p"
	.string "I don't know what it was about, but\n"
	.string "he sure was in a hurry!$"

TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Text_0:
# 76 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}What's the matter, dear?\p"
	.string ". . .\p"
	.string "Wow.\n"
	.string "That's what happened to you?\p"
	.string "You and Barry are lucky to have\n"
	.string "met Prof. Rowan.\p"
	.string "Imagine if you didn't. . .\p"
	.string "I wouldn't like to think what the wild\n"
	.string "Pokémon might have done to you two.\p"
	.string "{PLAYER}, go see Prof. Rowan, and\n"
	.string "thank him properly for your Pokémon.\p"
	.string "His lab is in Sandgem Town, isn't it?\p"
	.string "Now that you have your own Pokémon,\n"
	.string "the tall grass won't be so threatening.\p"
	.string "Oh, I know!\n"
	.string "{PLAYER}, put these on.\p"
	.string "{PLAYER} received a pair of\n"
	.string "{COLOR RED}Running Shoes{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}!\p"
	.string "Going to Sandgem Town is like an\n"
	.string "adventure in itself, right?\p"
	.string "With those Running Shoes, you can\n"
	.string "get to faraway places much faster.\p"
	.string "OK. . .\n"
	.string "Let me read the instructions. . .\p"
	.string "“Press the B Button and dash\n"
	.string "about faster than ever before!\p"
	.string "Put on the Running Shoes and\n"
	.string "blaze new trails of adventure!”\p"
	.string "Well, isn't that just nifty!$"

TwinleafTown_PlayersHouse1F_HowImpatient_Text_0:
# 156 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "You know how impatient\n"
	.string "Barry is.\p"
	.string "He took off before I could even\n"
	.string "ask what it was about.$"

TwinleafTown_PlayersHouse1F_Cooking_Text_0:
# 167 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "This is where Mom does all her\n"
	.string "delicious cooking.$"

TwinleafTown_PlayersHouse1F_Dessert_Text_0:
# 176 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's favorite dessert is in\n"
	.string "the refrigerator.$"

TwinleafTown_PlayersHouse1F_Spotless_Text_0:
# 185 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's kitchen is spotless!\n"
	.string "You can see your face on the floor!$"

TwinleafTown_PlayersHouse1F_ContestDigest_Text_0:
# 194 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "MC: Here we are!\n"
	.string "It's the Contest Digest!\p"
	.string "The winner of today's Normal Rank\n"
	.string "Smart Contest is. . .\p"
	.string "Westley, who won with his bright spark\n"
	.string "of a Pokémon!$"

TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0:
# 216 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass.\n"
	.string "Wild Pokémon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokémon, but you don't so. . .\p"
	.string "Well, take care, sweetie!$"

TwinleafTown_PlayersHouse1F_ByeBye_Text_0:
# 237 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Bye-Bye, {PLAYER}!\n"
	.string "You take care now!$"

TwinleafTown_PlayersHouse1F_BarryWaiting_Text_0:
# 250 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "What is it, dear?\n"
	.string "Isn't Barry waiting for you?$"

TwinleafTown_PlayersHouse1F_RunningShoes_Text_0:
# 262 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "I'll read you the instructions\n"
	.string "for the Running Shoes. . .\p"
	.string "“Press the B Button and dash\n"
	.string "about faster than ever before!\p"
	.string "Put on the Running Shoes and\n"
	.string "blaze new trails of adventure!”\p"
	.string "Well, isn't that just nifty!$"

TwinleafTown_PlayersHouse1F_Heal_Text_0:
# 280 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Welcome home {PLAYER}.\n"
	.string "Are you and your Pokémon healthy?\l"
	.string "Take a quick rest, dear.$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_0:
# 297 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}What is it {PLAYER}?\p"
	.string ". . .\p"
	.string "Wow. Professor Rowan asked you\n"
	.string "to do something that big.\p"
	.string "OK, dear, go for it!\n"
	.string "Your mom's got your back!$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_1:
# 324 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Gee, a journey full of adventure. . .\n"
	.string "I envy you, kiddo.\p"
	.string "Plus, you're not alone.\n"
	.string "You have your Pokémon with you.\l"
	.string "I wish I could go instead!$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_2:
# 333 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}I'm just joking, dear!\n"
	.string "Yup, {PLAYER}!\p"
	.string "I'll be all right by myself, so you\n"
	.string "go and enjoy your adventure!\p"
	.string "When you're exposed to new things,\n"
	.string "and experience new sensations. . .\l"
	.string "It makes your mother happy, too.\p"
	.string ". . .But come back sometimes.\p"
	.string "I would like to see the kinds of\n"
	.string "Pokémon you've caught, dear.$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_3:
# 364 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_BARRYMOM}Excuse me.\n"
	.string "Is my little Barry here?$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_4:
# 371 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Oh?\n"
	.string "No, he's not. . .\p"
	.string "{SPEAKER NAME_BARRYMOM}Oh. . .\n"
	.string "Then, he must have left already. . .\l"
	.string "What to do. . .\p"
	.string "That boy shouted about going on an\n"
	.string "adventure, then he bolted.\p"
	.string "He's so headstrong and reckless. . .\n"
	.string "I at least wanted him to take this. . .\p"
	.string "{SPEAKER NAME_MOM}Not to worry, {PLAYER} will\n"
	.string "deliver that to him.$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_5:
# 397 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Won't you {PLAYER}?$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_6:
# 425 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_BARRYMOM}Oh, really?\n"
	.string "You'd do that for me?\p"
	.string "{PLAYER}, please take this to\n"
	.string "Barry for me.$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_7:
# 430 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Bye-bye, {PLAYER}!\n"
	.string "Enjoy your adventure!\p"
	.string "{SPEAKER NAME_BARRYMOM}Let me think. . .\p"
	.string "Knowing my boy, he would probably\n"
	.string "head straight to Jubilife City. . .\p"
	.string "OK, please take that to my\n"
	.string "Barry.$"

TwinleafTown_PlayersHouse1F_Mom_FlavorText_Text_0:
# 476 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}.\p"
	.string "Seeing you reminds me so much of your\n"
	.string "father.\p"
	.string "You two are so alike!$"

TwinleafTown_PlayersHouse1F_Mom_FlavorText_Text_1:
# 482 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}.\p"
	.string "Listen. Always treat your Pokémon\n"
	.string "with kindness.\p"
	.string "Your Pokémon work hard, not for\n"
	.string "themselves, but for you!$"

TwinleafTown_PlayersHouse1F_Mom_FlavorText_Text_2:
# 489 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}While you're gone, I go and\n"
	.string "visit Barry's mom.\p"
	.string "We talk about this and that.\p"
	.string "Well, actually all we do is talk about\n"
	.string "you two.$"

TwinleafTown_PlayersHouse1F_Mom_FlavorText_Text_3:
# 496 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}!\p"
	.string "You and your Pokémon are looking good!\n"
	.string "Nothing can stop you now!$"
