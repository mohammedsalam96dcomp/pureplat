TwinleafTownPlayersHouse_1F_MapScripts::
# 4 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TwinleafTownPlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	map_script_2 VAR_TWINLEAF_INTRO_STATE, 3, TwinleafTownPlayersHouse_1F_ON_FRAME
	.2byte 0


TwinleafTownPlayersHouse_1F_ON_FRAME::
# 10 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lockall
# 12 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_0
# 13 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement LOCALID_MOM
# 14 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_ExclamationMark
# 15 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_1
# 16 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 17 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitse
# 19 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 48
# 20 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_2
# 21 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement LOCALID_MOM
# 23 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 24 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTownPlayersHouse_1F_ON_FRAME_Text_0
# 29 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_3
# 32 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	waitmovement LOCALID_MOM
# 33 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	delay 10
# 35 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	releaseall
# 36 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setvar VAR_TWINLEAF_INTRO_STATE, 4
	return


TwinleafTown_PlayersHouse1F_EventScript_Mom::
# 40 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 41 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	switch VAR_TWINLEAF_INTRO_STATE
# 42 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	case 4, TwinleafTown_PlayersHouse1F_EventScript_Mom_3
TwinleafTown_PlayersHouse1F_EventScript_Mom_1:
# 45 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return

TwinleafTown_PlayersHouse1F_EventScript_Mom_3:
# 43 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	goto TwinleafTown_PlayersHouse1F_HowImpatient
	goto TwinleafTown_PlayersHouse1F_EventScript_Mom_1


TwinleafTown_PlayersHouse1F_HowImpatient::
# 49 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 50 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	faceplayer
# 52 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	setspeaker SP_NAME_MOM
# 53 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_HowImpatient_Text_0
# 58 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 59 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Cooking::
# 63 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 64 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Cooking_Text_0
# 67 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 68 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Dessert::
# 72 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 73 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Dessert_Text_0
# 76 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 77 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_Spotless::
# 81 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 82 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_Spotless_Text_0
# 85 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 86 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


TwinleafTown_PlayersHouse1F_ContestDigest::
# 90 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	lock
# 91 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	msgbox TwinleafTown_PlayersHouse1F_ContestDigest_Text_0
# 98 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	closemessage
# 99 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	release
	return


# 12 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_0:
# 12 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

# 15 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_1:
# 15 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	face_down
	step_end

# 20 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_2:
# 20 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 20 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 20 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 20 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_right
# 20 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
# 20 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
TwinleafTownPlayersHouse_1F_ON_FRAME_Movement_3:
# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_left
# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_down
# 31 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	walk_in_place_up
	step_end

TwinleafTownPlayersHouse_1F_ON_FRAME_Text_0:
# 24 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Hey, {PLAYER}!\p"
	.string "Barry already left.\p"
	.string "I don't know what it was about, but\n"
	.string "he sure was in a hurry!$"

TwinleafTown_PlayersHouse1F_HowImpatient_Text_0:
# 53 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "You know how impatient\n"
	.string "Barry is.\p"
	.string "He took off before I could even\n"
	.string "ask what it was about.$"

TwinleafTown_PlayersHouse1F_Cooking_Text_0:
# 64 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "This is where Mom does all her\n"
	.string "delicious cooking.$"

TwinleafTown_PlayersHouse1F_Dessert_Text_0:
# 73 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's favorite dessert is in\n"
	.string "the refrigerator.$"

TwinleafTown_PlayersHouse1F_Spotless_Text_0:
# 82 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "Mom's kitchen is spotless!\n"
	.string "You can see your face on the floor!$"

TwinleafTown_PlayersHouse1F_ContestDigest_Text_0:
# 91 "data/maps/TwinleafTownPlayersHouse_1F/scripts.pory"
	.string "MC: Here we are!\n"
	.string "It's the Contest Digest!\p"
	.string "The winner of today's Normal Rank\n"
	.string "Smart Contest is. . .\p"
	.string "Westley, who won with his bright spark\n"
	.string "of a Pokemon!$"
