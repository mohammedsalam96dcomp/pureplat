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
# 55 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 7
	goto_if_eq TwinleafTown_PlayersHouse1F_EventScript_Mom_5
TwinleafTown_PlayersHouse1F_EventScript_Mom_1:
# 64 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
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

TwinleafTown_PlayersHouse1F_EventScript_Mom_5:
# 56 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_BarryWaiting
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1


TwinleafTown_PlayersHouse1F_HowImpatient::
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 69 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 71 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 72 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_HowImpatient_Text_0
# 77 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 78 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Cooking::
# 82 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 83 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Cooking_Text_0
# 86 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 87 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Dessert::
# 91 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 92 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Dessert_Text_0
# 95 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 96 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Spotless::
# 100 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 101 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Spotless_Text_0
# 104 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 105 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ContestDigest::
# 109 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 110 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ContestDigest_Text_0
# 117 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 118 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_EventScript_ExitHouse::
# 122 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 127 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement 1, TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0
# 128 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 1
# 129 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 130 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_0
# 131 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 132 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 8
# 134 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 135 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0
# 143 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 148 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 5
# 149 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_BARRY_STATE, 1
# 151 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ByeBye::
# 155 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 156 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 158 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 159 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ByeBye_Text_0
# 162 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 163 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
# 164 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 6
	return


TwinleafTown_PlayersHouse1F_BarryWaiting::
# 168 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 169 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 171 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 172 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_BarryWaiting_Text_0
# 175 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 176 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
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

# 127 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Movement_0:
# 127 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_down
	step_end

TwinleafTownPlayersHouse_1F_ON_FRAME_Text_0:
# 27 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "Barry already left.\p"
	.string "I don't know what it was about, but\n"
	.string "he sure was in a hurry!$"

TwinleafTown_PlayersHouse1F_HowImpatient_Text_0:
# 72 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "You know how impatient\n"
	.string "Barry is.\p"
	.string "He took off before I could even\n"
	.string "ask what it was about.$"

TwinleafTown_PlayersHouse1F_Cooking_Text_0:
# 83 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "This is where Mom does all her\n"
	.string "delicious cooking.$"

TwinleafTown_PlayersHouse1F_Dessert_Text_0:
# 92 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's favorite dessert is in\n"
	.string "the refrigerator.$"

TwinleafTown_PlayersHouse1F_Spotless_Text_0:
# 101 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's kitchen is spotless!\n"
	.string "You can see your face on the floor!$"

TwinleafTown_PlayersHouse1F_ContestDigest_Text_0:
# 110 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "MC: Here we are!\n"
	.string "It's the Contest Digest!\p"
	.string "The winner of today's Normal Rank\n"
	.string "Smart Contest is. . .\p"
	.string "Westley, who won with his bright spark\n"
	.string "of a Pokémon!$"

TwinleafTown_PlayersHouse1F_EventScript_ExitHouse_Text_0:
# 135 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Oh, yes!\n"
	.string "{PLAYER}!\p"
	.string "Don't go into the tall grass.\n"
	.string "Wild Pokémon might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "Pokémon, but you don't so. . .\p"
	.string "Well, take care, sweetie!$"

TwinleafTown_PlayersHouse1F_ByeBye_Text_0:
# 159 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Bye-Bye, Nic!\n"
	.string "You take care now!$"

TwinleafTown_PlayersHouse1F_BarryWaiting_Text_0:
# 172 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "What is it, dear?\n"
	.string "Isn't Barry waiting for you?$"
