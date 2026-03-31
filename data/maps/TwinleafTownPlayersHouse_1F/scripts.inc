TwinleafTownPlayersHouse_1F_MapScripts::
# 6 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 3, TwinleafTownPlayersHouse_1F_ON_FRAME
	.2byte 0


TwinleafTownPlayersHouse_1F_ON_FRAME::
# 12 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lockall
# 14 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_0
# 15 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement LOCALID_MOM
# 16 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_ExclamationMark
# 17 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_1
# 18 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 19 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 21 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 48
# 22 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_2
# 23 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement LOCALID_MOM
# 25 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 26 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_1F_ON_FRAME_Text_0
# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_3
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement LOCALID_MOM
# 35 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 10
# 37 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setmetatile 5, 8, METATILE_BuildingSinnoh_NonExit, FALSE
# 38 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	special DrawWholeMapView
# 40 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	releaseall
# 42 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 43 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 4
	return


TwinleafTown_PlayersHouse1F_EventScript_Mom::
# 47 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 49 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_2
# 51 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_3
# 54 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_BarryWaiting
TwinleafTown_PlayersHouse1F_EventScript_Mom_1:
# 62 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return

TwinleafTown_PlayersHouse1F_EventScript_Mom_2:
# 50 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_HowImpatient
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1

TwinleafTown_PlayersHouse1F_EventScript_Mom_3:
# 52 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_ByeBye
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1


TwinleafTown_PlayersHouse1F_HowImpatient::
# 66 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 67 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 70 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_HowImpatient_Text_0
# 75 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 76 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Cooking::
# 80 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 81 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Cooking_Text_0
# 84 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 85 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Dessert::
# 89 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 90 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Dessert_Text_0
# 93 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 94 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Spotless::
# 98 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 99 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Spotless_Text_0
# 102 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 103 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ContestDigest::
# 107 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 108 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ContestDigest_Text_0
# 115 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 116 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_EventScript_ExitHouse::
# 120 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 121 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 122 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement LOCALID_MOM
# 123 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 124 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_0
# 125 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 126 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 128 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 129 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0
# 137 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 139 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setmetatile 5, 8, METATILE_BuildingSinnoh_Exit, FALSE
# 140 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	special DrawWholeMapView
# 142 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 144 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ByeBye::
# 148 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 149 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 151 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 152 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ByeBye_Text_0
# 155 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 156 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_BarryWaiting::
# 160 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 161 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 163 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 164 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_BarryWaiting_Text_0
# 167 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 168 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


# 14 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_0:
# 14 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 17 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_1:
# 17 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_down
	step_end

# 22 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_2:
# 22 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 22 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 22 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 22 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 22 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 22 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_3:
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 121 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0:
# 121 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_down
	step_end

TwinleafTownPlayersHouse_1F_ON_FRAME_Text_0:
# 26 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "Barry already left.\p"
	.string "I don't know what it was about, but\n"
	.string "he sure was in a hurry!$"

TwinleafTown_PlayersHouse1F_HowImpatient_Text_0:
# 70 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "You know how impatient\n"
	.string "Barry is.\p"
	.string "He took off before I could even\n"
	.string "ask what it was about.$"

TwinleafTown_PlayersHouse1F_Cooking_Text_0:
# 81 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "This is where Mom does all her\n"
	.string "delicious cooking.$"

TwinleafTown_PlayersHouse1F_Dessert_Text_0:
# 90 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's favorite dessert is in\n"
	.string "the refrigerator.$"

TwinleafTown_PlayersHouse1F_Spotless_Text_0:
# 99 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's kitchen is spotless!\n"
	.string "You can see your face on the floor!$"

TwinleafTown_PlayersHouse1F_ContestDigest_Text_0:
# 108 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "MC: Here we are!\n"
	.string "It's the Contest Digest!\p"
	.string "The winner of today's Normal Rank\n"
	.string "Smart Contest is. . .\p"
	.string "Westley, who won with his bright spark\n"
	.string "of a Pokémon!$"

TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0:
# 129 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass.\n"
	.string "Wild Pokémon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokémon, but you don't so. . .\p"
	.string "Well, take care, sweetie!$"

TwinleafTown_PlayersHouse1F_ByeBye_Text_0:
# 152 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Bye-Bye, Nic!\n"
	.string "You take care now!$"

TwinleafTown_PlayersHouse1F_BarryWaiting_Text_0:
# 164 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "What is it, dear?\n"
	.string "Isn't Barry waiting for you?$"
