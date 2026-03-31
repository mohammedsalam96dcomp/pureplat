TwinleafTownPlayersHouse_1F_MapScripts::
# 5 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 3, TwinleafTownPlayersHouse_1F_ON_FRAME
	.2byte 0


TwinleafTownPlayersHouse_1F_ON_FRAME::
# 11 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lockall
# 13 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_0
# 14 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement LOCALID_MOM
# 15 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_ExclamationMark
# 16 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_1
# 17 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 18 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 19 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 20 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 48
# 21 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_2
# 22 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement LOCALID_MOM
# 24 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 25 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_1F_ON_FRAME_Text_0
# 30 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 32 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_3
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement LOCALID_MOM
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 10
# 36 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setmetatile 5, 8, METATILE_BuildingSinnoh_NonExit, FALSE
# 37 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	special DrawWholeMapView
# 39 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	releaseall
# 40 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 4
	return


TwinleafTown_PlayersHouse1F_EventScript_Mom::
# 44 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 45 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	switch VAR_TWINLEAF_INTRO_STATE
# 46 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 4, TwinleafTown_PlayersHouse1F_EventScript_Mom_3
# 48 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 5, TwinleafTown_PlayersHouse1F_EventScript_Mom_4
TwinleafTown_PlayersHouse1F_EventScript_Mom_1:
# 51 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return

TwinleafTown_PlayersHouse1F_EventScript_Mom_3:
# 47 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_HowImpatient
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_4:
# 49 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_ByeBye
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1


TwinleafTown_PlayersHouse1F_HowImpatient::
# 55 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 56 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 58 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 59 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_HowImpatient_Text_0
# 64 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 65 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Cooking::
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 70 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Cooking_Text_0
# 73 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 74 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Dessert::
# 78 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 79 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Dessert_Text_0
# 82 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 83 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Spotless::
# 87 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 88 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Spotless_Text_0
# 91 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 92 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ContestDigest::
# 96 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 97 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ContestDigest_Text_0
# 104 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 105 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_EventScript_ExitHouse::
# 109 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 110 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 111 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement LOCALID_MOM
# 112 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 113 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_0
# 114 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 115 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 117 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 118 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0
# 126 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 128 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setmetatile 5, 8, METATILE_BuildingSinnoh_Exit, FALSE
# 129 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	special DrawWholeMapView
# 131 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 5
# 132 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ByeBye::
# 136 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 137 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 139 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 140 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ByeBye_Text_0
# 143 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 144 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


# 13 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_0:
# 13 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 16 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_1:
# 16 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_down
	step_end

# 21 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_2:
# 21 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 21 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 21 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 21 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 21 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 21 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 32 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_3:
# 32 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 32 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 32 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 32 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 32 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 32 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 32 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 110 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0:
# 110 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_down
	step_end

TwinleafTownPlayersHouse_1F_ON_FRAME_Text_0:
# 25 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "Barry already left.\p"
	.string "I don't know what it was about, but\n"
	.string "he sure was in a hurry!$"

TwinleafTown_PlayersHouse1F_HowImpatient_Text_0:
# 59 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "You know how impatient\n"
	.string "Barry is.\p"
	.string "He took off before I could even\n"
	.string "ask what it was about.$"

TwinleafTown_PlayersHouse1F_Cooking_Text_0:
# 70 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "This is where Mom does all her\n"
	.string "delicious cooking.$"

TwinleafTown_PlayersHouse1F_Dessert_Text_0:
# 79 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's favorite dessert is in\n"
	.string "the refrigerator.$"

TwinleafTown_PlayersHouse1F_Spotless_Text_0:
# 88 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's kitchen is spotless!\n"
	.string "You can see your face on the floor!$"

TwinleafTown_PlayersHouse1F_ContestDigest_Text_0:
# 97 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "MC: Here we are!\n"
	.string "It's the Contest Digest!\p"
	.string "The winner of today's Normal Rank\n"
	.string "Smart Contest is. . .\p"
	.string "Westley, who won with his bright spark\n"
	.string "of a Pokemon!$"

TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0:
# 118 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass.\n"
	.string "Wild Pokemon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokemon, but you don't so. . .\p"
	.string "Well, take care, sweetie!$"

TwinleafTown_PlayersHouse1F_ByeBye_Text_0:
# 140 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Bye-Bye, Nic!\n"
	.string "You take care now!$"
