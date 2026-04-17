TwinleafTownPlayersHouse_1F_MapScripts::
# 13 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 18 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_TOWN_STATE, 2, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT
# 15 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_TOWN_STATE, 6, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON
	.2byte 0

TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 19 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_TOWN_STATE, 5, TwinleafTownPlayersHouse_1F_ON_WARP
	.2byte 0


TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT::
# 24 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lockall
# 26 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_0
# 27 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 28 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 29 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1
# 30 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 32 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 48
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_2
# 35 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 37 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 38 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Text_0
# 43 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 45 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_3
# 46 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 47 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 10
# 49 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 1
# 50 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 3
# 52 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	releaseall
	return


TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON::
# 57 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 59 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_0
# 60 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 61 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 30
# 62 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_1
# 63 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_2
# 64 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 66 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_3
# 67 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_4
# 70 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_5
# 71 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 72 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 74 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Text_0
# 104 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 106 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_201_KID
# 107 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 7
# 108 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 109 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 4
# 110 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_ROUTE201_STATE, 2
# 112 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTownPlayersHouse_1F_ON_WARP::
# 116 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setobjectxy 1, 1, 3
# 117 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 119 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_TOWN_STATE, 6
# 120 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_EventScript_Mom::
# 125 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 127 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_2
# 129 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 1
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_3
# 131 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 2
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_4
# 133 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 3
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_5
# 135 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 4
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_6
# 142 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 5
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_7
TwinleafTown_PlayersHouse1F_EventScript_Mom_1:
# 146 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return

TwinleafTown_PlayersHouse1F_EventScript_Mom_2:
# 128 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_RunningShoes
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_3:
# 130 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_HowImpatient
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_4:
# 132 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_ByeBye
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_5:
# 134 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_BarryWaiting
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_6:
# 136 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_14
# 140 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_Heal
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_7:
# 143 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_GotPokedex
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_14:
# 137 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_Mom_FlavorText
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1


TwinleafTown_PlayersHouse1F_HowImpatient::
# 150 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 151 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 153 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 154 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_HowImpatient_Text_0
# 159 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 160 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Cooking::
# 164 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 165 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Cooking_Text_0
# 168 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 169 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Dessert::
# 173 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 174 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Dessert_Text_0
# 177 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 178 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Spotless::
# 182 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 183 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Spotless_Text_0
# 186 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 187 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ContestDigest::
# 191 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 192 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ContestDigest_Text_0
# 199 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 200 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_EventScript_ExitHouse::
# 204 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 206 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 207 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 208 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 209 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_0
# 210 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 211 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 213 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 214 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0
# 222 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 224 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_BARRY_STATE, 1
# 225 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 2
# 227 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ByeBye::
# 231 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 232 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 234 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 235 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ByeBye_Text_0
# 238 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 239 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
# 240 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 3
	return


TwinleafTown_PlayersHouse1F_BarryWaiting::
# 244 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 245 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 247 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 248 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_BarryWaiting_Text_0
# 251 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 252 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_RunningShoes::
# 256 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 257 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 259 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 260 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_RunningShoes_Text_0
# 268 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 270 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Heal::
# 274 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 275 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 277 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 278 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Heal_Text_0
# 281 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 283 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 285 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_3, 1
# 287 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_GotPokedex::
# 291 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 293 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	call TwinleafTown_PlayersHouse1F_Heal
# 295 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_0
# 302 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 303 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq TwinleafTown_PlayersHouse1F_GotPokedex_2
# 306 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq TwinleafTown_PlayersHouse1F_GotPokedex_3
# 308 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq TwinleafTown_PlayersHouse1F_GotPokedex_4
# 310 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq TwinleafTown_PlayersHouse1F_GotPokedex_5
TwinleafTown_PlayersHouse1F_GotPokedex_1:
# 314 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_ne TwinleafTown_PlayersHouse1F_GotPokedex_11
# 318 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1
# 319 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
TwinleafTown_PlayersHouse1F_GotPokedex_10:
# 322 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_1
# 328 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 329 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 331 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_2
# 341 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 343 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_DOOR
# 344 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_TWINLEAF_TOWN_BARRYS_MOM
# 345 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	addobject 2
# 346 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 348 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 349 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1
# 351 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_1
# 352 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 353 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 355 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_2
# 356 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 2
# 357 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq TwinleafTown_PlayersHouse1F_GotPokedex_15
TwinleafTown_PlayersHouse1F_GotPokedex_14:
# 362 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_3
# 366 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 367 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 369 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_4
# 381 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	switch VAR_TEMP_2
# 382 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse1F_GotPokedex_19
# 384 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse1F_GotPokedex_20
# 386 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 3, TwinleafTown_PlayersHouse1F_GotPokedex_21
# 388 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 4, TwinleafTown_PlayersHouse1F_GotPokedex_22
TwinleafTown_PlayersHouse1F_GotPokedex_17:
# 392 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 393 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 395 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_5
# 396 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 398 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	switch VAR_TEMP_2
# 399 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse1F_GotPokedex_25
# 401 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse1F_GotPokedex_26
# 403 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 3, TwinleafTown_PlayersHouse1F_GotPokedex_27
# 405 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 4, TwinleafTown_PlayersHouse1F_GotPokedex_28
TwinleafTown_PlayersHouse1F_GotPokedex_23:
# 408 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 2
# 410 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	switch VAR_TEMP_2
# 411 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse1F_GotPokedex_31
# 413 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse1F_GotPokedex_32
# 415 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 3, TwinleafTown_PlayersHouse1F_GotPokedex_33
# 417 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 4, TwinleafTown_PlayersHouse1F_GotPokedex_34
TwinleafTown_PlayersHouse1F_GotPokedex_29:
# 420 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 421 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 2
# 423 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_6
# 427 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	giveitem ITEM_PARCEL
# 428 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_7
# 435 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 437 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_DOOR
# 439 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	switch VAR_TEMP_2
# 440 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse1F_GotPokedex_37
# 443 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse1F_GotPokedex_38
# 446 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 3, TwinleafTown_PlayersHouse1F_GotPokedex_39
# 448 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 4, TwinleafTown_PlayersHouse1F_GotPokedex_40
TwinleafTown_PlayersHouse1F_GotPokedex_35:
# 451 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 2
# 452 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 454 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setflag FLAG_HIDE_TWINLEAF_TOWN_BARRYS_MOM
# 455 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	removeobject 2
# 457 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 4
# 458 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_3, 1
# 459 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_ROUTE202_STATE, 2
# 460 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return

TwinleafTown_PlayersHouse1F_GotPokedex_2:
# 304 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto TwinleafTown_PlayersHouse1F_GotPokedex_1

TwinleafTown_PlayersHouse1F_GotPokedex_3:
# 307 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_2, 2
	goto TwinleafTown_PlayersHouse1F_GotPokedex_1

TwinleafTown_PlayersHouse1F_GotPokedex_4:
# 309 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_2, 3
	goto TwinleafTown_PlayersHouse1F_GotPokedex_1

TwinleafTown_PlayersHouse1F_GotPokedex_5:
# 311 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_2, 4
	goto TwinleafTown_PlayersHouse1F_GotPokedex_1

TwinleafTown_PlayersHouse1F_GotPokedex_11:
# 315 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_0
# 316 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
	goto TwinleafTown_PlayersHouse1F_GotPokedex_10

TwinleafTown_PlayersHouse1F_GotPokedex_15:
# 358 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_3
# 359 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
	goto TwinleafTown_PlayersHouse1F_GotPokedex_14

TwinleafTown_PlayersHouse1F_GotPokedex_19:
# 383 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_0
	goto TwinleafTown_PlayersHouse1F_GotPokedex_17

TwinleafTown_PlayersHouse1F_GotPokedex_20:
# 385 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1
	goto TwinleafTown_PlayersHouse1F_GotPokedex_17

TwinleafTown_PlayersHouse1F_GotPokedex_21:
# 387 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_4
	goto TwinleafTown_PlayersHouse1F_GotPokedex_17

TwinleafTown_PlayersHouse1F_GotPokedex_22:
# 389 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_3
	goto TwinleafTown_PlayersHouse1F_GotPokedex_17

TwinleafTown_PlayersHouse1F_GotPokedex_25:
	goto TwinleafTown_PlayersHouse1F_GotPokedex_23

TwinleafTown_PlayersHouse1F_GotPokedex_26:
# 402 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_5
	goto TwinleafTown_PlayersHouse1F_GotPokedex_23

TwinleafTown_PlayersHouse1F_GotPokedex_27:
	goto TwinleafTown_PlayersHouse1F_GotPokedex_23

TwinleafTown_PlayersHouse1F_GotPokedex_28:
# 406 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_6
	goto TwinleafTown_PlayersHouse1F_GotPokedex_23

TwinleafTown_PlayersHouse1F_GotPokedex_31:
# 412 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_7
	goto TwinleafTown_PlayersHouse1F_GotPokedex_29

TwinleafTown_PlayersHouse1F_GotPokedex_32:
# 414 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_7
	goto TwinleafTown_PlayersHouse1F_GotPokedex_29

TwinleafTown_PlayersHouse1F_GotPokedex_33:
# 416 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
	goto TwinleafTown_PlayersHouse1F_GotPokedex_29

TwinleafTown_PlayersHouse1F_GotPokedex_34:
# 418 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
	goto TwinleafTown_PlayersHouse1F_GotPokedex_29

TwinleafTown_PlayersHouse1F_GotPokedex_37:
# 441 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 442 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_8
	goto TwinleafTown_PlayersHouse1F_GotPokedex_35

TwinleafTown_PlayersHouse1F_GotPokedex_38:
# 444 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 445 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_9
	goto TwinleafTown_PlayersHouse1F_GotPokedex_35

TwinleafTown_PlayersHouse1F_GotPokedex_39:
# 447 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_8
	goto TwinleafTown_PlayersHouse1F_GotPokedex_35

TwinleafTown_PlayersHouse1F_GotPokedex_40:
# 449 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_10
	goto TwinleafTown_PlayersHouse1F_GotPokedex_35


TwinleafTown_PlayersHouse1F_Mom_FlavorText::
# 467 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 469 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	random 4
# 471 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	switch VAR_RESULT
# 472 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 0, TwinleafTown_PlayersHouse1F_Mom_FlavorText_3
# 478 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse1F_Mom_FlavorText_4
# 485 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse1F_Mom_FlavorText_5
# 492 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 3, TwinleafTown_PlayersHouse1F_Mom_FlavorText_6
TwinleafTown_PlayersHouse1F_Mom_FlavorText_1:
# 498 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return

TwinleafTown_PlayersHouse1F_Mom_FlavorText_3:
# 473 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 474 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Mom_FlavorText_Text_0
	goto TwinleafTown_PlayersHouse1F_Mom_FlavorText_1

TwinleafTown_PlayersHouse1F_Mom_FlavorText_4:
# 479 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 480 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Mom_FlavorText_Text_1
	goto TwinleafTown_PlayersHouse1F_Mom_FlavorText_1

TwinleafTown_PlayersHouse1F_Mom_FlavorText_5:
# 486 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 487 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Mom_FlavorText_Text_2
	goto TwinleafTown_PlayersHouse1F_Mom_FlavorText_1

TwinleafTown_PlayersHouse1F_Mom_FlavorText_6:
# 493 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 494 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Mom_FlavorText_Text_3
	goto TwinleafTown_PlayersHouse1F_Mom_FlavorText_1


# 26 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_0:
# 26 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 29 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1:
# 29 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_down
	step_end

# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_2:
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 45 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_3:
# 45 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 45 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 45 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 45 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 45 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 45 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 45 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 59 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_0:
# 59 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 59 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_up
	step_end

# 62 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_1:
# 62 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 63 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_2:
# 63 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_right
	step_end

# 66 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_3:
# 66 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 66 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 66 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 66 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_4:
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_left
	step_end

# 70 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Movement_5:
# 70 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 70 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 70 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 70 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 70 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 206 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0:
# 206 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_down
	step_end

# 315 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_0:
# 315 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_up
	step_end

# 351 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_1:
# 351 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_down
# 351 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	emote_exclamation_mark
# 351 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay_16
# 351 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay_16
	step_end

# 355 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_2:
# 355 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 355 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_right
	step_end

# 358 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_3:
# 358 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_left
	step_end

# 387 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_4:
# 387 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_right
	step_end

# 402 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_5:
# 402 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 402 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 406 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_6:
# 406 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 406 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 412 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_7:
# 412 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_left
	step_end

# 442 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_8:
# 442 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
	step_end

# 445 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_9:
# 445 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 445 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 445 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
	step_end

# 449 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_10:
# 449 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 449 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 449 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
	step_end

TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Text_0:
# 38 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "Barry already left.\p"
	.string "I don't know what it was about, but\n"
	.string "he sure was in a hurry!$"

TwinleafTownPlayersHouse_1F_ON_FRAME_GOTPOKEMON_Text_0:
# 74 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
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
	.string "Press the B Button and dash\n"
	.string "about faster than ever before!\p"
	.string "Put on the Running Shoes and\n"
	.string "blaze new trails of adventure!\p"
	.string "Well, isn't that just nifty!$"

TwinleafTown_PlayersHouse1F_HowImpatient_Text_0:
# 154 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "You know how impatient\n"
	.string "Barry is.\p"
	.string "He took off before I could even\n"
	.string "ask what it was about.$"

TwinleafTown_PlayersHouse1F_Cooking_Text_0:
# 165 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "This is where Mom does all her\n"
	.string "delicious cooking.$"

TwinleafTown_PlayersHouse1F_Dessert_Text_0:
# 174 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's favorite dessert is in\n"
	.string "the refrigerator.$"

TwinleafTown_PlayersHouse1F_Spotless_Text_0:
# 183 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's kitchen is spotless!\n"
	.string "You can see your face on the floor!$"

TwinleafTown_PlayersHouse1F_ContestDigest_Text_0:
# 192 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "MC: Here we are!\n"
	.string "It's the Contest Digest!\p"
	.string "The winner of today's Normal Rank\n"
	.string "Smart Contest is. . .\p"
	.string "Westley, who won with his bright spark\n"
	.string "of a Pokémon!$"

TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0:
# 214 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass.\n"
	.string "Wild Pokémon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokémon, but you don't so. . .\p"
	.string "Well, take care, sweetie!$"

TwinleafTown_PlayersHouse1F_ByeBye_Text_0:
# 235 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Bye-Bye, {PLAYER}!\n"
	.string "You take care now!$"

TwinleafTown_PlayersHouse1F_BarryWaiting_Text_0:
# 248 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "What is it, dear?\n"
	.string "Isn't Barry waiting for you?$"

TwinleafTown_PlayersHouse1F_RunningShoes_Text_0:
# 260 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "I'll read you the instructions\n"
	.string "for the Running Shoes. . .\p"
	.string "Press the B Button and dash\n"
	.string "about faster than ever before!\p"
	.string "Put on the Running Shoes and\n"
	.string "blaze new trails of adventure!\p"
	.string "Well, isn't that just nifty!$"

TwinleafTown_PlayersHouse1F_Heal_Text_0:
# 278 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Welcome home {PLAYER}.\n"
	.string "Are you and your Pokémon healthy?\l"
	.string "Take a quick rest, dear.$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_0:
# 295 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}What is it {PLAYER}?\p"
	.string ". . .\p"
	.string "Wow. Professor Rowan asked you\n"
	.string "to do something that big.\p"
	.string "OK, dear, go for it!\n"
	.string "Your mom's got your back!$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_1:
# 322 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Gee, a journey full of adventure. . .\n"
	.string "I envy you, kiddo.\p"
	.string "Plus, you're not alone.\n"
	.string "You have your Pokémon with you.\l"
	.string "I wish I could go instead!$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_2:
# 331 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
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
# 362 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_BARRYMOM}Excuse me.\n"
	.string "Is my little Barry here?$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_4:
# 369 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
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
# 395 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Won't you {PLAYER}?$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_6:
# 423 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_BARRYMOM}Oh, really?\n"
	.string "You'd do that for me?\p"
	.string "{PLAYER}, please take this to\n"
	.string "Barry for me.$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_7:
# 428 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Bye-bye, {PLAYER}!\n"
	.string "Enjoy your adventure!\p"
	.string "{SPEAKER NAME_BARRYMOM}Let me think. . .\p"
	.string "Knowing my boy, he would probably\n"
	.string "head straight to Jubilife City. . .\p"
	.string "OK, please take that to my\n"
	.string "Barry.$"

TwinleafTown_PlayersHouse1F_Mom_FlavorText_Text_0:
# 474 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}.\p"
	.string "Seeing you reminds me so much of your\n"
	.string "father.\p"
	.string "You two are so alike!$"

TwinleafTown_PlayersHouse1F_Mom_FlavorText_Text_1:
# 480 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}.\p"
	.string "Listen. Always treat your Pokémon\n"
	.string "with kindness.\p"
	.string "Your Pokémon work hard, not for\n"
	.string "themselves, but for you!$"

TwinleafTown_PlayersHouse1F_Mom_FlavorText_Text_2:
# 487 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}While you're gone, I go and\n"
	.string "visit Barry's mom.\p"
	.string "We talk about this and that.\p"
	.string "Well, actually all we do is talk about\n"
	.string "you two.$"

TwinleafTown_PlayersHouse1F_Mom_FlavorText_Text_3:
# 494 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}!\p"
	.string "You and your Pokémon are looking good!\n"
	.string "Nothing can stop you now!$"
