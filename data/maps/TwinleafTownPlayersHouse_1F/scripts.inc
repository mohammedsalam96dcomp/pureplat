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
# 137 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_MOM_STATE, 5
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_7
TwinleafTown_PlayersHouse1F_EventScript_Mom_1:
# 141 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
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
	goto TwinleafTown_PlayersHouse1F_Heal
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_7:
# 138 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_GotPokedex
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1


TwinleafTown_PlayersHouse1F_HowImpatient::
# 145 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 146 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 148 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 149 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_HowImpatient_Text_0
# 154 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 155 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Cooking::
# 159 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 160 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Cooking_Text_0
# 163 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 164 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Dessert::
# 168 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 169 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Dessert_Text_0
# 172 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 173 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Spotless::
# 177 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 178 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Spotless_Text_0
# 181 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 182 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ContestDigest::
# 186 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 187 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ContestDigest_Text_0
# 194 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 195 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_EventScript_ExitHouse::
# 199 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 201 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 202 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 203 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 204 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_0
# 205 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 206 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 208 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 209 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0
# 217 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 219 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_BARRY_STATE, 1
# 220 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 2
# 222 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ByeBye::
# 226 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 227 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 229 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 230 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ByeBye_Text_0
# 233 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 234 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
# 235 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 3
	return


TwinleafTown_PlayersHouse1F_BarryWaiting::
# 239 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 240 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 242 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 243 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_BarryWaiting_Text_0
# 246 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 247 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_RunningShoes::
# 251 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 252 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 254 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 255 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_RunningShoes_Text_0
# 263 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 265 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Heal::
# 269 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 270 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 272 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 273 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Heal_Text_0
# 276 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 278 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 280 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_GotPokedex::
# 284 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 286 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	call TwinleafTown_PlayersHouse1F_Heal
# 288 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_0
# 295 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 296 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq TwinleafTown_PlayersHouse1F_GotPokedex_2
# 299 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq TwinleafTown_PlayersHouse1F_GotPokedex_3
# 301 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, DIR_EAST
	goto_if_eq TwinleafTown_PlayersHouse1F_GotPokedex_4
# 303 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq TwinleafTown_PlayersHouse1F_GotPokedex_5
TwinleafTown_PlayersHouse1F_GotPokedex_1:
# 307 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_ne TwinleafTown_PlayersHouse1F_GotPokedex_11
# 311 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1
# 312 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
TwinleafTown_PlayersHouse1F_GotPokedex_10:
# 315 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_1
# 321 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 322 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 324 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_2
# 334 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 336 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_DOOR
# 337 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_TWINLEAF_TOWN_BARRYS_MOM
# 338 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	addobject 2
# 339 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 341 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 342 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1
# 344 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_1
# 345 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 346 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 348 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_2
# 349 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 2
# 350 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq TwinleafTown_PlayersHouse1F_GotPokedex_15
TwinleafTown_PlayersHouse1F_GotPokedex_14:
# 355 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_3
# 359 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 360 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 362 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_4
# 374 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	switch VAR_TEMP_2
# 375 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse1F_GotPokedex_19
# 377 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse1F_GotPokedex_20
# 379 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 3, TwinleafTown_PlayersHouse1F_GotPokedex_21
# 381 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 4, TwinleafTown_PlayersHouse1F_GotPokedex_22
TwinleafTown_PlayersHouse1F_GotPokedex_17:
# 385 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 386 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 388 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_5
# 389 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 391 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	switch VAR_TEMP_2
# 392 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse1F_GotPokedex_25
# 394 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse1F_GotPokedex_26
# 396 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 3, TwinleafTown_PlayersHouse1F_GotPokedex_27
# 398 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 4, TwinleafTown_PlayersHouse1F_GotPokedex_28
TwinleafTown_PlayersHouse1F_GotPokedex_23:
# 401 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 2
# 403 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	switch VAR_TEMP_2
# 404 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse1F_GotPokedex_31
# 406 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse1F_GotPokedex_32
# 408 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 3, TwinleafTown_PlayersHouse1F_GotPokedex_33
# 410 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 4, TwinleafTown_PlayersHouse1F_GotPokedex_34
TwinleafTown_PlayersHouse1F_GotPokedex_29:
# 413 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 414 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 2
# 416 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_6
# 420 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	giveitem ITEM_PARCEL
# 421 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_7
# 428 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 430 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_DOOR
# 432 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	switch VAR_TEMP_2
# 433 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 1, TwinleafTown_PlayersHouse1F_GotPokedex_37
# 436 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 2, TwinleafTown_PlayersHouse1F_GotPokedex_38
# 439 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 3, TwinleafTown_PlayersHouse1F_GotPokedex_39
# 441 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 4, TwinleafTown_PlayersHouse1F_GotPokedex_40
TwinleafTown_PlayersHouse1F_GotPokedex_35:
# 444 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 2
# 445 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 447 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setflag FLAG_HIDE_TWINLEAF_TOWN_BARRYS_MOM
# 448 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	removeobject 2
# 450 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 4
# 451 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_ROUTE202_STATE, 2
# 452 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return

TwinleafTown_PlayersHouse1F_GotPokedex_2:
# 297 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto TwinleafTown_PlayersHouse1F_GotPokedex_1

TwinleafTown_PlayersHouse1F_GotPokedex_3:
# 300 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_2, 2
	goto TwinleafTown_PlayersHouse1F_GotPokedex_1

TwinleafTown_PlayersHouse1F_GotPokedex_4:
# 302 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_2, 3
	goto TwinleafTown_PlayersHouse1F_GotPokedex_1

TwinleafTown_PlayersHouse1F_GotPokedex_5:
# 304 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_2, 4
	goto TwinleafTown_PlayersHouse1F_GotPokedex_1

TwinleafTown_PlayersHouse1F_GotPokedex_11:
# 308 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_0
# 309 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
	goto TwinleafTown_PlayersHouse1F_GotPokedex_10

TwinleafTown_PlayersHouse1F_GotPokedex_15:
# 351 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_3
# 352 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
	goto TwinleafTown_PlayersHouse1F_GotPokedex_14

TwinleafTown_PlayersHouse1F_GotPokedex_19:
# 376 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_0
	goto TwinleafTown_PlayersHouse1F_GotPokedex_17

TwinleafTown_PlayersHouse1F_GotPokedex_20:
# 378 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1
	goto TwinleafTown_PlayersHouse1F_GotPokedex_17

TwinleafTown_PlayersHouse1F_GotPokedex_21:
# 380 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_4
	goto TwinleafTown_PlayersHouse1F_GotPokedex_17

TwinleafTown_PlayersHouse1F_GotPokedex_22:
# 382 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_3
	goto TwinleafTown_PlayersHouse1F_GotPokedex_17

TwinleafTown_PlayersHouse1F_GotPokedex_25:
	goto TwinleafTown_PlayersHouse1F_GotPokedex_23

TwinleafTown_PlayersHouse1F_GotPokedex_26:
# 395 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_5
	goto TwinleafTown_PlayersHouse1F_GotPokedex_23

TwinleafTown_PlayersHouse1F_GotPokedex_27:
	goto TwinleafTown_PlayersHouse1F_GotPokedex_23

TwinleafTown_PlayersHouse1F_GotPokedex_28:
# 399 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_6
	goto TwinleafTown_PlayersHouse1F_GotPokedex_23

TwinleafTown_PlayersHouse1F_GotPokedex_31:
# 405 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_7
	goto TwinleafTown_PlayersHouse1F_GotPokedex_29

TwinleafTown_PlayersHouse1F_GotPokedex_32:
# 407 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_7
	goto TwinleafTown_PlayersHouse1F_GotPokedex_29

TwinleafTown_PlayersHouse1F_GotPokedex_33:
# 409 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
	goto TwinleafTown_PlayersHouse1F_GotPokedex_29

TwinleafTown_PlayersHouse1F_GotPokedex_34:
# 411 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
	goto TwinleafTown_PlayersHouse1F_GotPokedex_29

TwinleafTown_PlayersHouse1F_GotPokedex_37:
# 434 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 435 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_8
	goto TwinleafTown_PlayersHouse1F_GotPokedex_35

TwinleafTown_PlayersHouse1F_GotPokedex_38:
# 437 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 438 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_9
	goto TwinleafTown_PlayersHouse1F_GotPokedex_35

TwinleafTown_PlayersHouse1F_GotPokedex_39:
# 440 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_8
	goto TwinleafTown_PlayersHouse1F_GotPokedex_35

TwinleafTown_PlayersHouse1F_GotPokedex_40:
# 442 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_10
	goto TwinleafTown_PlayersHouse1F_GotPokedex_35


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

# 201 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0:
# 201 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_down
	step_end

# 308 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_0:
# 308 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_up
	step_end

# 344 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_1:
# 344 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_down
# 344 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	emote_exclamation_mark
# 344 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay_16
# 344 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay_16
	step_end

# 348 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_2:
# 348 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 348 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_right
	step_end

# 351 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_3:
# 351 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_left
	step_end

# 380 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_4:
# 380 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_right
	step_end

# 395 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_5:
# 395 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 395 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 399 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_6:
# 399 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 399 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 405 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_7:
# 405 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_left
	step_end

# 435 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_8:
# 435 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
	step_end

# 438 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_9:
# 438 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 438 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 438 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
	step_end

# 442 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_10:
# 442 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 442 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 442 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
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
	.string "Running Shoes!\p"
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
# 149 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "You know how impatient\n"
	.string "Barry is.\p"
	.string "He took off before I could even\n"
	.string "ask what it was about.$"

TwinleafTown_PlayersHouse1F_Cooking_Text_0:
# 160 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "This is where Mom does all her\n"
	.string "delicious cooking.$"

TwinleafTown_PlayersHouse1F_Dessert_Text_0:
# 169 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's favorite dessert is in\n"
	.string "the refrigerator.$"

TwinleafTown_PlayersHouse1F_Spotless_Text_0:
# 178 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's kitchen is spotless!\n"
	.string "You can see your face on the floor!$"

TwinleafTown_PlayersHouse1F_ContestDigest_Text_0:
# 187 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "MC: Here we are!\n"
	.string "It's the Contest Digest!\p"
	.string "The winner of today's Normal Rank\n"
	.string "Smart Contest is. . .\p"
	.string "Westley, who won with his bright spark\n"
	.string "of a Pokémon!$"

TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0:
# 209 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass.\n"
	.string "Wild Pokémon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokémon, but you don't so. . .\p"
	.string "Well, take care, sweetie!$"

TwinleafTown_PlayersHouse1F_ByeBye_Text_0:
# 230 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Bye-Bye, {PLAYER}!\n"
	.string "You take care now!$"

TwinleafTown_PlayersHouse1F_BarryWaiting_Text_0:
# 243 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "What is it, dear?\n"
	.string "Isn't Barry waiting for you?$"

TwinleafTown_PlayersHouse1F_RunningShoes_Text_0:
# 255 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "I'll read you the instructions\n"
	.string "for the Running Shoes. . .\p"
	.string "Press the B Button and dash\n"
	.string "about faster than ever before!\p"
	.string "Put on the Running Shoes and\n"
	.string "blaze new trails of adventure!\p"
	.string "Well, isn't that just nifty!$"

TwinleafTown_PlayersHouse1F_Heal_Text_0:
# 273 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Welcome home {PLAYER}.\n"
	.string "Are you and your Pokémon healthy?\l"
	.string "Take a quick rest, dear.$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_0:
# 288 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}What is it {PLAYER}?\p"
	.string ". . .\p"
	.string "Wow. Professor Rowan asked you\n"
	.string "to do something that big.\p"
	.string "OK, dear, go for it!\n"
	.string "Your mom's got your back!$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_1:
# 315 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Gee, a journey full of adventure. . .\n"
	.string "I envy you, kiddo.\p"
	.string "Plus, you're not alone.\n"
	.string "You have your Pokémon with you.\l"
	.string "I wish I could go instead!$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_2:
# 324 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
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
# 355 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_BARRYMOM}Excuse me.\n"
	.string "Is my little Barry here?$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_4:
# 362 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
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
# 388 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Won't you {PLAYER}?$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_6:
# 416 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_BARRYMOM}Oh, really?\n"
	.string "You'd do that for me?\p"
	.string "{PLAYER}, please take this to\n"
	.string "Barry for me.$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_7:
# 421 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Bye-bye, {PLAYER}!\n"
	.string "Enjoy your adventure!\p"
	.string "{SPEAKER NAME_BARRYMOM}Let me think. . .\p"
	.string "Knowing my boy, he would probably\n"
	.string "head straight to Jubilife City. . .\p"
	.string "OK, please take that to my\n"
	.string "Barry.$"
