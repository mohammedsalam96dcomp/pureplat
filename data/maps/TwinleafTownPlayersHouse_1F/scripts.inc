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
# 297 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_ne TwinleafTown_PlayersHouse1F_GotPokedex_2
# 301 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1
# 302 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
TwinleafTown_PlayersHouse1F_GotPokedex_1:
# 305 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_1
# 311 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 312 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 314 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_2
# 324 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 326 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_DOOR
# 327 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_TWINLEAF_TOWN_BARRYS_MOM
# 328 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	addobject 2
# 329 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 331 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 332 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_BARRYLEFT_Movement_1
# 334 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_1
# 335 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 336 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 338 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_2
# 339 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 2
# 341 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_3
# 344 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 345 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 347 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_4
# 359 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 360 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 362 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_5
# 364 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 365 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 2
# 367 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_6
# 371 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	giveitem ITEM_PARCEL
# 372 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_GotPokedex_Text_7
# 379 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 381 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_DOOR
# 382 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 2, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_3
# 383 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 2
# 384 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 386 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setflag FLAG_HIDE_TWINLEAF_TOWN_BARRYS_MOM
# 387 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	removeobject 2
# 389 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_MOM_STATE, 4
# 391 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return

TwinleafTown_PlayersHouse1F_GotPokedex_2:
# 298 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_GotPokedex_Movement_0
# 299 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
	goto TwinleafTown_PlayersHouse1F_GotPokedex_1


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

# 298 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_0:
# 298 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_up
	step_end

# 334 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_1:
# 334 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_down
# 334 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	emote_exclamation_mark
# 334 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay_16
# 334 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay_16
	step_end

# 338 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_2:
# 338 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 338 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_right
	step_end

# 382 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_GotPokedex_Movement_3:
# 382 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 382 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
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
# 305 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Gee, a journey full of adventure. . .\n"
	.string "I envy you, kiddo.\p"
	.string "Plus, you're not alone.\n"
	.string "You have your Pokémon with you.\l"
	.string "I wish I could go instead!$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_2:
# 314 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
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
# 341 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_BARRYMOM}Excuse me.\n"
	.string "Is my little Barry here?$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_4:
# 347 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
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
# 362 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Won't you {PLAYER}?$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_6:
# 367 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_BARRYMOM}Oh, really?\n"
	.string "You'd do that for me?\p"
	.string "{PLAYER}, please take this to\n"
	.string "Barry for me.$"

TwinleafTown_PlayersHouse1F_GotPokedex_Text_7:
# 372 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Bye-bye, {PLAYER}!\n"
	.string "Enjoy your adventure!\p"
	.string "{SPEAKER NAME_BARRYMOM}Let me think. . .\p"
	.string "Knowing my boy, he would probably\n"
	.string "head straight to Jubilife City. . .\p"
	.string "OK, please take that to my\n"
	.string "Barry.$"
