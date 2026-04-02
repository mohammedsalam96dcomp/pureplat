TwinleafTownPlayersHouse_1F_MapScripts::
# 7 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 3, TwinleafTownPlayersHouse_1F_ON_FRAME
	.2byte 0


TwinleafTownPlayersHouse_1F_ON_FRAME::
# 13 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lockall
# 15 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_0
# 16 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 17 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 18 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_1
# 19 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 20 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 21 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 22 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 48
# 23 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_2
# 24 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 26 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 27 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_1F_ON_FRAME_Text_0
# 32 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_3
# 35 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 36 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 10
# 41 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	releaseall
# 43 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 4
	return


TwinleafTown_PlayersHouse1F_EventScript_Mom::
# 47 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 49 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 4
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_2
# 51 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 5
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_3
# 53 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 6
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_4
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

TwinleafTown_PlayersHouse1F_EventScript_Mom_4:
# 54 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_BarryWaiting
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
# 125 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 126 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 127 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 128 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_0
# 129 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 130 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 132 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 133 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0
# 141 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 146 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 5
# 147 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_BARRY_STATE, 1
# 149 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ByeBye::
# 153 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 154 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 156 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 157 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ByeBye_Text_0
# 160 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 161 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
# 162 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 6
	return


TwinleafTown_PlayersHouse1F_BarryWaiting::
# 166 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 167 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 169 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 170 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_BarryWaiting_Text_0
# 173 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 174 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


# 15 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_0:
# 15 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 18 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_1:
# 18 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_down
	step_end

# 23 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_2:
# 23 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 23 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 23 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 23 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 23 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 23 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_3:
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 34 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 125 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0:
# 125 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_down
	step_end

TwinleafTownPlayersHouse_1F_ON_FRAME_Text_0:
# 27 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
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
# 133 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass.\n"
	.string "Wild Pokémon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokémon, but you don't so. . .\p"
	.string "Well, take care, sweetie!$"

TwinleafTown_PlayersHouse1F_ByeBye_Text_0:
# 157 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Bye-Bye, Nic!\n"
	.string "You take care now!$"

TwinleafTown_PlayersHouse1F_BarryWaiting_Text_0:
# 170 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "What is it, dear?\n"
	.string "Isn't Barry waiting for you?$"
