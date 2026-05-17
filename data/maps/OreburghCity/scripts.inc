OreburghCity_MapScripts::
	.byte 0


OreburghCity_EventScript_GuideToGym::
# 5 "data/maps/OreburghCity/scripts.pory"
	lock
# 7 "data/maps/OreburghCity/scripts.pory"
	playse SE_PIN
# 8 "data/maps/OreburghCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OreburghCity_EventScript_GuideToGym_Movement_0
# 9 "data/maps/OreburghCity/scripts.pory"
	applymovement 1, OreburghCity_EventScript_GuideToGym_Movement_1
# 10 "data/maps/OreburghCity/scripts.pory"
	waitmovement 1
# 11 "data/maps/OreburghCity/scripts.pory"
	waitse
# 13 "data/maps/OreburghCity/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 15 "data/maps/OreburghCity/scripts.pory"
	compare VAR_TEMP_2, 13
	goto_if_eq OreburghCity_EventScript_GuideToGym_2
# 17 "data/maps/OreburghCity/scripts.pory"
	compare VAR_TEMP_2, 14
	goto_if_eq OreburghCity_EventScript_GuideToGym_3
# 20 "data/maps/OreburghCity/scripts.pory"
	applymovement 1, OreburghCity_EventScript_GuideToGym_Movement_4
OreburghCity_EventScript_GuideToGym_1:
# 22 "data/maps/OreburghCity/scripts.pory"
	waitmovement 1
# 24 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_EventScript_GuideToGym_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/OreburghCity/scripts.pory"
	compare VAR_TEMP_2, 13
	goto_if_eq OreburghCity_EventScript_GuideToGym_8
# 33 "data/maps/OreburghCity/scripts.pory"
	compare VAR_TEMP_2, 14
	goto_if_eq OreburghCity_EventScript_GuideToGym_9
# 37 "data/maps/OreburghCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OreburghCity_EventScript_GuideToGym_Movement_9
# 38 "data/maps/OreburghCity/scripts.pory"
	applymovement 1, OreburghCity_EventScript_GuideToGym_Movement_10
OreburghCity_EventScript_GuideToGym_7:
# 40 "data/maps/OreburghCity/scripts.pory"
	waitmovement 1
# 42 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_EventScript_GuideToGym_Text_1, MSGBOX_AUTOCLOSE
# 45 "data/maps/OreburghCity/scripts.pory"
	setobjectxyperm 1, 28, 22
# 46 "data/maps/OreburghCity/scripts.pory"
	setvar VAR_OREBURGH_CITY_STATE, 2
# 47 "data/maps/OreburghCity/scripts.pory"
	release
	return

OreburghCity_EventScript_GuideToGym_2:
# 16 "data/maps/OreburghCity/scripts.pory"
	applymovement 1, OreburghCity_EventScript_GuideToGym_Movement_2
	goto OreburghCity_EventScript_GuideToGym_1

OreburghCity_EventScript_GuideToGym_3:
# 18 "data/maps/OreburghCity/scripts.pory"
	applymovement 1, OreburghCity_EventScript_GuideToGym_Movement_3
	goto OreburghCity_EventScript_GuideToGym_1

OreburghCity_EventScript_GuideToGym_8:
# 31 "data/maps/OreburghCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OreburghCity_EventScript_GuideToGym_Movement_5
# 32 "data/maps/OreburghCity/scripts.pory"
	applymovement 1, OreburghCity_EventScript_GuideToGym_Movement_6
	goto OreburghCity_EventScript_GuideToGym_7

OreburghCity_EventScript_GuideToGym_9:
# 34 "data/maps/OreburghCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OreburghCity_EventScript_GuideToGym_Movement_7
# 35 "data/maps/OreburghCity/scripts.pory"
	applymovement 1, OreburghCity_EventScript_GuideToGym_Movement_8
	goto OreburghCity_EventScript_GuideToGym_7


OreburghCity_EventScript_Youngster::
# 51 "data/maps/OreburghCity/scripts.pory"
	lock
# 52 "data/maps/OreburghCity/scripts.pory"
	faceplayer
# 53 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_EventScript_Youngster_Text_0, MSGBOX_AUTOCLOSE
# 56 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_EventScript_Worker::
# 60 "data/maps/OreburghCity/scripts.pory"
	lock
# 61 "data/maps/OreburghCity/scripts.pory"
	faceplayer
# 62 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_EventScript_Worker_Text_0, MSGBOX_AUTOCLOSE
# 66 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_EventScript_Rival::
# 70 "data/maps/OreburghCity/scripts.pory"
	lock
# 71 "data/maps/OreburghCity/scripts.pory"
	faceplayer
# 72 "data/maps/OreburghCity/scripts.pory"
	compare VAR_OREBURGH_CITY_STATE, 2
	goto_if_eq OreburghCity_EventScript_Rival_2
# 89 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_EventScript_Rival_Text_1, MSGBOX_AUTOCLOSE
OreburghCity_EventScript_Rival_1:
# 94 "data/maps/OreburghCity/scripts.pory"
	release
	return

OreburghCity_EventScript_Rival_2:
# 73 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_EventScript_Rival_Text_0, MSGBOX_AUTOCLOSE
# 87 "data/maps/OreburghCity/scripts.pory"
	setvar VAR_OREBURGH_CITY_STATE, 3
	goto OreburghCity_EventScript_Rival_1


OreburghCity_EventScript_Guitarist::
# 99 "data/maps/OreburghCity/scripts.pory"
	lock
# 100 "data/maps/OreburghCity/scripts.pory"
	faceplayer
# 101 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_EventScript_Guitarist_Text_0, MSGBOX_AUTOCLOSE
# 103 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_EventScript_Girl::
# 107 "data/maps/OreburghCity/scripts.pory"
	lock
# 108 "data/maps/OreburghCity/scripts.pory"
	faceplayer
# 109 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_EventScript_Girl_Text_0, MSGBOX_AUTOCLOSE
# 111 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_EventScript_Camper::
# 115 "data/maps/OreburghCity/scripts.pory"
	lock
# 116 "data/maps/OreburghCity/scripts.pory"
	faceplayer
# 117 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_EventScript_Camper_Text_0, MSGBOX_AUTOCLOSE
# 121 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_EventScript_BattleGirl1::
# 125 "data/maps/OreburghCity/scripts.pory"
	lock
# 126 "data/maps/OreburghCity/scripts.pory"
	faceplayer
# 127 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_EventScript_BattleGirl1_Text_0, MSGBOX_AUTOCLOSE
# 131 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_EventScript_Hiker::
# 135 "data/maps/OreburghCity/scripts.pory"
	lock
# 136 "data/maps/OreburghCity/scripts.pory"
	faceplayer
# 137 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_EventScript_Hiker_Text_0, MSGBOX_AUTOCLOSE
# 141 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_EventScript_BattleGirl2::
# 145 "data/maps/OreburghCity/scripts.pory"
	lock
# 146 "data/maps/OreburghCity/scripts.pory"
	faceplayer
# 147 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_EventScript_BattleGirl2_Text_0, MSGBOX_AUTOCLOSE
# 150 "data/maps/OreburghCity/scripts.pory"
	release
	return


OreburghCity_SignScript_AirVent::
# 154 "data/maps/OreburghCity/scripts.pory"
	lock
# 155 "data/maps/OreburghCity/scripts.pory"
	msgbox OreburghCity_SignScript_AirVent_Text_0
# 157 "data/maps/OreburghCity/scripts.pory"
	release
	return


# 8 "data/maps/OreburghCity/scripts.pory"
OreburghCity_EventScript_GuideToGym_Movement_0:
# 8 "data/maps/OreburghCity/scripts.pory"
	walk_in_place_down
	step_end

# 9 "data/maps/OreburghCity/scripts.pory"
OreburghCity_EventScript_GuideToGym_Movement_1:
# 9 "data/maps/OreburghCity/scripts.pory"
	emote_exclamation_mark
# 9 "data/maps/OreburghCity/scripts.pory"
	delay_16
# 9 "data/maps/OreburghCity/scripts.pory"
	delay_16
# 9 "data/maps/OreburghCity/scripts.pory"
	delay_16
	step_end

# 16 "data/maps/OreburghCity/scripts.pory"
OreburghCity_EventScript_GuideToGym_Movement_2:
# 16 "data/maps/OreburghCity/scripts.pory"
	walk_up
# 16 "data/maps/OreburghCity/scripts.pory"
	walk_up
	step_end

# 18 "data/maps/OreburghCity/scripts.pory"
OreburghCity_EventScript_GuideToGym_Movement_3:
# 18 "data/maps/OreburghCity/scripts.pory"
	walk_up
	step_end

# 20 "data/maps/OreburghCity/scripts.pory"
OreburghCity_EventScript_GuideToGym_Movement_4:
# 20 "data/maps/OreburghCity/scripts.pory"
	walk_in_place_up
	step_end

# 31 "data/maps/OreburghCity/scripts.pory"
OreburghCity_EventScript_GuideToGym_Movement_5:
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 31 "data/maps/OreburghCity/scripts.pory"
	walk_right
	step_end

# 32 "data/maps/OreburghCity/scripts.pory"
OreburghCity_EventScript_GuideToGym_Movement_6:
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 32 "data/maps/OreburghCity/scripts.pory"
	walk_in_place_left
	step_end

# 34 "data/maps/OreburghCity/scripts.pory"
OreburghCity_EventScript_GuideToGym_Movement_7:
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 34 "data/maps/OreburghCity/scripts.pory"
	walk_right
	step_end

# 35 "data/maps/OreburghCity/scripts.pory"
OreburghCity_EventScript_GuideToGym_Movement_8:
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 35 "data/maps/OreburghCity/scripts.pory"
	walk_in_place_left
	step_end

# 37 "data/maps/OreburghCity/scripts.pory"
OreburghCity_EventScript_GuideToGym_Movement_9:
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 37 "data/maps/OreburghCity/scripts.pory"
	walk_right
	step_end

# 38 "data/maps/OreburghCity/scripts.pory"
OreburghCity_EventScript_GuideToGym_Movement_10:
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_down
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_right
# 38 "data/maps/OreburghCity/scripts.pory"
	walk_in_place_left
	step_end

OreburghCity_EventScript_GuideToGym_Text_0:
# 24 "data/maps/OreburghCity/scripts.pory"
	.string "Howdy, Trainer!\p"
	.string "Huh? Uh-oh!\n"
	.string "You don't have a single Gym Badge?\p"
	.string "You'd better do something about that!\n"
	.string "I'll take you to the Pokémon Gym.$"

OreburghCity_EventScript_GuideToGym_Text_1:
# 42 "data/maps/OreburghCity/scripts.pory"
	.string "Huh?\n"
	.string "There's someone there.$"

OreburghCity_EventScript_Youngster_Text_0:
# 53 "data/maps/OreburghCity/scripts.pory"
	.string "Is that guy in front of the Gym\n"
	.string "your friend?\p"
	.string "He's sort of twitchy and impatient.$"

OreburghCity_EventScript_Worker_Text_0:
# 62 "data/maps/OreburghCity/scripts.pory"
	.string "These vents exchange the hot air\n"
	.string "down below with the fresh air outside.\p"
	.string "Looking down them gives me the urge\n"
	.string "to start yelling into 'em! Hello!$"

OreburghCity_EventScript_Rival_Text_0:
# 73 "data/maps/OreburghCity/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hunh?\p"
	.string "Oh, it's you, {PLAYER}!\n"
	.string "You finally got here?\l"
	.string "You're slow like always.\p"
	.string "But anyway, the Gym Leader's tough!\n"
	.string "Like, seriously serious!\p"
	.string "If the Gym Leader's this tough,\n"
	.string "I wonder how he compares to my dad. . .\p"
	.string "Huh?\n"
	.string "I just drifted there.\p"
	.string "Anyway, the Gym Leader's gone off\n"
	.string "to the coal mine.\p"
	.string "If you want to take on the Gym Leader,\n"
	.string "you'd better go off to the mine!$"

OreburghCity_EventScript_Rival_Text_1:
# 89 "data/maps/OreburghCity/scripts.pory"
	.string "{SPEAKER NAME_BARRY}I told you, the Gym\n"
	.string "Leader went down to the Oreburgh Mine.\p"
	.string "If you want to take on the Gym Leader,\n"
	.string "you'd better go off to the mine!$"

OreburghCity_EventScript_Guitarist_Text_0:
# 101 "data/maps/OreburghCity/scripts.pory"
	.string "Have you seen the vents?\n"
	.string "They release steam from down below.$"

OreburghCity_EventScript_Girl_Text_0:
# 109 "data/maps/OreburghCity/scripts.pory"
	.string "The Gym Leader went off to work in\n"
	.string "the mine.$"

OreburghCity_EventScript_Camper_Text_0:
# 117 "data/maps/OreburghCity/scripts.pory"
	.string "When I run around with my Running\n"
	.string "Shoes on, I'm the center of attention!\p"
	.string ". . .At least that's what it feels like.\n"
	.string "There's always someone looking at me.$"

OreburghCity_EventScript_BattleGirl1_Text_0:
# 127 "data/maps/OreburghCity/scripts.pory"
	.string "TMs are single use only, but HMs\n"
	.string "can be used over and over.\p"
	.string "It's tricky trying to decide which\n"
	.string "Pokémon should learn what moves.$"

OreburghCity_EventScript_Hiker_Text_0:
# 137 "data/maps/OreburghCity/scripts.pory"
	.string "Up ahead there's a huge mountain\n"
	.string "that towers above everything.\p"
	.string "It divides Sinnoh into two distinct\n"
	.string "halves.$"

OreburghCity_EventScript_BattleGirl2_Text_0:
# 147 "data/maps/OreburghCity/scripts.pory"
	.string "Natural time capsules buried many,\n"
	.string "many years ago. . .\p"
	.string "That's what Fossils are.$"

OreburghCity_SignScript_AirVent_Text_0:
# 155 "data/maps/OreburghCity/scripts.pory"
	.string "It's an air vent that exchanges\n"
	.string "the underground tunnels' air.$"
