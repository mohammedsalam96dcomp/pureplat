Route202_MapScripts::
# 4 "data/maps/Route202/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route202_EventScript_OnTransition
	.byte 0


Route202_EventScript_OnTransition::
# 8 "data/maps/Route202/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


Route202_EventScript_GoSeeMom1::
# 13 "data/maps/Route202/scripts.pory"
	lock
# 14 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_GoSeeMom
# 16 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_GoSeeMom2::
# 20 "data/maps/Route202/scripts.pory"
	lock
# 21 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 2
# 22 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_GoSeeMom
# 23 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_GoSeeMom3::
# 27 "data/maps/Route202/scripts.pory"
	lock
# 28 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 3
# 29 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_GoSeeMom
# 30 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_GoSeeMom4::
# 34 "data/maps/Route202/scripts.pory"
	lock
# 35 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 4
# 36 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_GoSeeMom
# 37 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_GoSeeMom5::
# 41 "data/maps/Route202/scripts.pory"
	lock
# 42 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 5
# 43 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_GoSeeMom
# 44 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_GoSeeMom::
# 48 "data/maps/Route202/scripts.pory"
	lock
# 50 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 51 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_0
# 52 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 53 "data/maps/Route202/scripts.pory"
	waitse
# 55 "data/maps/Route202/scripts.pory"
	switch VAR_TEMP_1
# 56 "data/maps/Route202/scripts.pory"
	case 1, Route202_EventScript_GoSeeMom_3
# 58 "data/maps/Route202/scripts.pory"
	case 2, Route202_EventScript_GoSeeMom_4
# 60 "data/maps/Route202/scripts.pory"
	case 3, Route202_EventScript_GoSeeMom_5
# 62 "data/maps/Route202/scripts.pory"
	case 4, Route202_EventScript_GoSeeMom_6
# 64 "data/maps/Route202/scripts.pory"
	case 5, Route202_EventScript_GoSeeMom_7
Route202_EventScript_GoSeeMom_1:
# 68 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 70 "data/maps/Route202/scripts.pory"
	compare VAR_ROUTE202_DAWN_STATE, 1
	goto_if_eq Route202_EventScript_GoSeeMom_9
# 81 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_GoSeeMom_Text_1
# 85 "data/maps/Route202/scripts.pory"
	closemessage
Route202_EventScript_GoSeeMom_8:
# 88 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route202_EventScript_GoSeeMom_Movement_6
# 89 "data/maps/Route202/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route202_EventScript_GoSeeMom_Movement_7
# 92 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_7
# 93 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 95 "data/maps/Route202/scripts.pory"
	switch VAR_TEMP_1
# 96 "data/maps/Route202/scripts.pory"
	case 1, Route202_EventScript_GoSeeMom_14
# 98 "data/maps/Route202/scripts.pory"
	case 2, Route202_EventScript_GoSeeMom_15
# 100 "data/maps/Route202/scripts.pory"
	case 3, Route202_EventScript_GoSeeMom_16
# 102 "data/maps/Route202/scripts.pory"
	case 4, Route202_EventScript_GoSeeMom_17
# 104 "data/maps/Route202/scripts.pory"
	case 5, Route202_EventScript_GoSeeMom_18
Route202_EventScript_GoSeeMom_12:
# 107 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 109 "data/maps/Route202/scripts.pory"
	setvar VAR_ROUTE202_DAWN_STATE, 2
# 110 "data/maps/Route202/scripts.pory"
	release
	return

Route202_EventScript_GoSeeMom_3:
# 57 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_1
	goto Route202_EventScript_GoSeeMom_1

Route202_EventScript_GoSeeMom_4:
# 59 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_2
	goto Route202_EventScript_GoSeeMom_1

Route202_EventScript_GoSeeMom_5:
# 61 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_3
	goto Route202_EventScript_GoSeeMom_1

Route202_EventScript_GoSeeMom_6:
# 63 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_4
	goto Route202_EventScript_GoSeeMom_1

Route202_EventScript_GoSeeMom_7:
# 65 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_5
	goto Route202_EventScript_GoSeeMom_1

Route202_EventScript_GoSeeMom_9:
# 71 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_GoSeeMom_Text_0
# 79 "data/maps/Route202/scripts.pory"
	closemessage
	goto Route202_EventScript_GoSeeMom_8

Route202_EventScript_GoSeeMom_14:
# 97 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_8
	goto Route202_EventScript_GoSeeMom_12

Route202_EventScript_GoSeeMom_15:
# 99 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_9
	goto Route202_EventScript_GoSeeMom_12

Route202_EventScript_GoSeeMom_16:
# 101 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_10
	goto Route202_EventScript_GoSeeMom_12

Route202_EventScript_GoSeeMom_17:
# 103 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_11
	goto Route202_EventScript_GoSeeMom_12

Route202_EventScript_GoSeeMom_18:
# 105 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_12
	goto Route202_EventScript_GoSeeMom_12


Route202_EventScript_CatchingTutorial1::
# 114 "data/maps/Route202/scripts.pory"
	lock
# 115 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 1
# 116 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_CatchingTutorial
# 117 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_CatchingTutorial2::
# 121 "data/maps/Route202/scripts.pory"
	lock
# 122 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 2
# 123 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_CatchingTutorial
# 124 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_CatchingTutorial3::
# 128 "data/maps/Route202/scripts.pory"
	lock
# 129 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 3
# 130 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_CatchingTutorial
# 131 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_CatchingTutorial4::
# 135 "data/maps/Route202/scripts.pory"
	lock
# 136 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 4
# 137 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_CatchingTutorial
# 138 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_CatchingTutorial5::
# 142 "data/maps/Route202/scripts.pory"
	lock
# 143 "data/maps/Route202/scripts.pory"
	setvar VAR_TEMP_1, 5
# 144 "data/maps/Route202/scripts.pory"
	goto Route202_EventScript_CatchingTutorial
# 145 "data/maps/Route202/scripts.pory"
	release
	return


Route202_EventScript_CatchingTutorial::
# 149 "data/maps/Route202/scripts.pory"
	lock
# 151 "data/maps/Route202/scripts.pory"
	playse SE_PIN
# 152 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_0
# 153 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 154 "data/maps/Route202/scripts.pory"
	waitse
# 156 "data/maps/Route202/scripts.pory"
	switch VAR_TEMP_1
# 157 "data/maps/Route202/scripts.pory"
	case 1, Route202_EventScript_CatchingTutorial_3
# 159 "data/maps/Route202/scripts.pory"
	case 2, Route202_EventScript_CatchingTutorial_4
# 161 "data/maps/Route202/scripts.pory"
	case 3, Route202_EventScript_CatchingTutorial_5
# 163 "data/maps/Route202/scripts.pory"
	case 4, Route202_EventScript_CatchingTutorial_6
# 165 "data/maps/Route202/scripts.pory"
	case 5, Route202_EventScript_CatchingTutorial_7
Route202_EventScript_CatchingTutorial_1:
# 169 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 171 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_CatchingTutorial_Text_0
# 175 "data/maps/Route202/scripts.pory"
	closemessage
# 177 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route202_EventScript_CatchingTutorial_Movement_0
# 178 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_CatchingTutorial_Movement_0
# 179 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 181 "data/maps/Route202/scripts.pory"
	special SavePlayerParty
# 182 "data/maps/Route202/scripts.pory"
	special LoadWallyZigzagoon
# 183 "data/maps/Route202/scripts.pory"
	special StartWallyTutorialBattle
# 184 "data/maps/Route202/scripts.pory"
	waitstate
# 186 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_CatchingTutorial_Movement_1
# 187 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 189 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_CatchingTutorial_Text_1
# 201 "data/maps/Route202/scripts.pory"
	closemessage
# 202 "data/maps/Route202/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 203 "data/maps/Route202/scripts.pory"
	msgbox Route202_EventScript_CatchingTutorial_Text_2
# 208 "data/maps/Route202/scripts.pory"
	closemessage
# 210 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_CatchingTutorial_Movement_2
# 211 "data/maps/Route202/scripts.pory"
	waitmovement 1
# 213 "data/maps/Route202/scripts.pory"
	setflag FLAG_HIDE_ROUTE_202_DAWN
# 214 "data/maps/Route202/scripts.pory"
	removeobject 1
# 216 "data/maps/Route202/scripts.pory"
	special LoadPlayerParty
# 218 "data/maps/Route202/scripts.pory"
	setvar VAR_ROUTE202_STATE, 3
# 220 "data/maps/Route202/scripts.pory"
	release
	return

Route202_EventScript_CatchingTutorial_3:
# 158 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_1
	goto Route202_EventScript_CatchingTutorial_1

Route202_EventScript_CatchingTutorial_4:
# 160 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_2
	goto Route202_EventScript_CatchingTutorial_1

Route202_EventScript_CatchingTutorial_5:
# 162 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_3
	goto Route202_EventScript_CatchingTutorial_1

Route202_EventScript_CatchingTutorial_6:
# 164 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_4
	goto Route202_EventScript_CatchingTutorial_1

Route202_EventScript_CatchingTutorial_7:
# 166 "data/maps/Route202/scripts.pory"
	applymovement 1, Route202_EventScript_GoSeeMom_Movement_5
	goto Route202_EventScript_CatchingTutorial_1


# 51 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_0:
# 51 "data/maps/Route202/scripts.pory"
	walk_in_place_right
# 51 "data/maps/Route202/scripts.pory"
	emote_exclamation_mark
# 51 "data/maps/Route202/scripts.pory"
	delay_16
# 51 "data/maps/Route202/scripts.pory"
	delay_16
# 51 "data/maps/Route202/scripts.pory"
	delay_16
	step_end

# 57 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_1:
# 57 "data/maps/Route202/scripts.pory"
	walk_right
# 57 "data/maps/Route202/scripts.pory"
	walk_right
# 57 "data/maps/Route202/scripts.pory"
	walk_right
# 57 "data/maps/Route202/scripts.pory"
	walk_right
# 57 "data/maps/Route202/scripts.pory"
	walk_up
# 57 "data/maps/Route202/scripts.pory"
	walk_up
# 57 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 59 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_2:
# 59 "data/maps/Route202/scripts.pory"
	walk_right
# 59 "data/maps/Route202/scripts.pory"
	walk_right
# 59 "data/maps/Route202/scripts.pory"
	walk_right
# 59 "data/maps/Route202/scripts.pory"
	walk_right
# 59 "data/maps/Route202/scripts.pory"
	walk_up
# 59 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 61 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_3:
# 61 "data/maps/Route202/scripts.pory"
	walk_right
# 61 "data/maps/Route202/scripts.pory"
	walk_right
# 61 "data/maps/Route202/scripts.pory"
	walk_right
# 61 "data/maps/Route202/scripts.pory"
	walk_right
# 61 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 63 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_4:
# 63 "data/maps/Route202/scripts.pory"
	walk_right
# 63 "data/maps/Route202/scripts.pory"
	walk_right
# 63 "data/maps/Route202/scripts.pory"
	walk_right
# 63 "data/maps/Route202/scripts.pory"
	walk_right
# 63 "data/maps/Route202/scripts.pory"
	walk_down
# 63 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 65 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_5:
# 65 "data/maps/Route202/scripts.pory"
	walk_right
# 65 "data/maps/Route202/scripts.pory"
	walk_right
# 65 "data/maps/Route202/scripts.pory"
	walk_right
# 65 "data/maps/Route202/scripts.pory"
	walk_right
# 65 "data/maps/Route202/scripts.pory"
	walk_down
# 65 "data/maps/Route202/scripts.pory"
	walk_down
# 65 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 88 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_6:
# 88 "data/maps/Route202/scripts.pory"
	lock_facing_direction
	step_end

# 91 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_7:
# 91 "data/maps/Route202/scripts.pory"
	walk_right
	step_end

# 97 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_8:
# 97 "data/maps/Route202/scripts.pory"
	walk_left
# 97 "data/maps/Route202/scripts.pory"
	walk_left
# 97 "data/maps/Route202/scripts.pory"
	walk_left
# 97 "data/maps/Route202/scripts.pory"
	walk_left
# 97 "data/maps/Route202/scripts.pory"
	walk_left
# 97 "data/maps/Route202/scripts.pory"
	walk_left
# 97 "data/maps/Route202/scripts.pory"
	walk_down
# 97 "data/maps/Route202/scripts.pory"
	walk_down
# 97 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 99 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_9:
# 99 "data/maps/Route202/scripts.pory"
	walk_left
# 99 "data/maps/Route202/scripts.pory"
	walk_left
# 99 "data/maps/Route202/scripts.pory"
	walk_left
# 99 "data/maps/Route202/scripts.pory"
	walk_left
# 99 "data/maps/Route202/scripts.pory"
	walk_left
# 99 "data/maps/Route202/scripts.pory"
	walk_left
# 99 "data/maps/Route202/scripts.pory"
	walk_down
# 99 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 101 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_10:
# 101 "data/maps/Route202/scripts.pory"
	walk_left
# 101 "data/maps/Route202/scripts.pory"
	walk_left
# 101 "data/maps/Route202/scripts.pory"
	walk_left
# 101 "data/maps/Route202/scripts.pory"
	walk_left
# 101 "data/maps/Route202/scripts.pory"
	walk_left
# 101 "data/maps/Route202/scripts.pory"
	walk_left
# 101 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 103 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_11:
# 103 "data/maps/Route202/scripts.pory"
	walk_left
# 103 "data/maps/Route202/scripts.pory"
	walk_left
# 103 "data/maps/Route202/scripts.pory"
	walk_left
# 103 "data/maps/Route202/scripts.pory"
	walk_left
# 103 "data/maps/Route202/scripts.pory"
	walk_left
# 103 "data/maps/Route202/scripts.pory"
	walk_left
# 103 "data/maps/Route202/scripts.pory"
	walk_up
# 103 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 105 "data/maps/Route202/scripts.pory"
Route202_EventScript_GoSeeMom_Movement_12:
# 105 "data/maps/Route202/scripts.pory"
	walk_left
# 105 "data/maps/Route202/scripts.pory"
	walk_left
# 105 "data/maps/Route202/scripts.pory"
	walk_left
# 105 "data/maps/Route202/scripts.pory"
	walk_left
# 105 "data/maps/Route202/scripts.pory"
	walk_left
# 105 "data/maps/Route202/scripts.pory"
	walk_left
# 105 "data/maps/Route202/scripts.pory"
	walk_up
# 105 "data/maps/Route202/scripts.pory"
	walk_up
# 105 "data/maps/Route202/scripts.pory"
	face_right
	step_end

# 177 "data/maps/Route202/scripts.pory"
Route202_EventScript_CatchingTutorial_Movement_0:
# 177 "data/maps/Route202/scripts.pory"
	walk_left
# 177 "data/maps/Route202/scripts.pory"
	walk_left
	step_end

# 186 "data/maps/Route202/scripts.pory"
Route202_EventScript_CatchingTutorial_Movement_1:
# 186 "data/maps/Route202/scripts.pory"
	walk_in_place_right
	step_end

# 210 "data/maps/Route202/scripts.pory"
Route202_EventScript_CatchingTutorial_Movement_2:
# 210 "data/maps/Route202/scripts.pory"
	walk_left
# 210 "data/maps/Route202/scripts.pory"
	walk_left
# 210 "data/maps/Route202/scripts.pory"
	walk_left
# 210 "data/maps/Route202/scripts.pory"
	walk_left
# 210 "data/maps/Route202/scripts.pory"
	walk_left
# 210 "data/maps/Route202/scripts.pory"
	walk_left
# 210 "data/maps/Route202/scripts.pory"
	walk_left
# 210 "data/maps/Route202/scripts.pory"
	walk_left
	step_end

Route202_EventScript_GoSeeMom_Text_0:
# 71 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}{PLAYER}?!\p"
	.string "Did you tell your family that you're\n"
	.string "helping the professor?\p"
	.string ". . .I bet you didn't, did you?\p"
	.string "I know that you're eager to\n"
	.string "see all kinds of Pokémon.\p"
	.string "But you shouldn't make your mom\n"
	.string "worry like that.$"

Route202_EventScript_GoSeeMom_Text_1:
# 81 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Why don't you go to tell your\n"
	.string "family that the professor asked for\l"
	.string "your help?\p"
	.string "You should do it right away.$"

Route202_EventScript_CatchingTutorial_Text_0:
# 171 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}{PLAYER}, do you know\n"
	.string "how to catch a Pokémon?\p"
	.string "I'll demonstrate how to catch\n"
	.string "one, so just watch, OK?$"

Route202_EventScript_CatchingTutorial_Text_1:
# 189 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}And that's how it's done.\p"
	.string "Actually, I should have lowered the\n"
	.string "target's HP some more.\p"
	.string "Yup, the important thing is to lower\n"
	.string "the Pokémon's HP as much as possible.\p"
	.string "See, a healthy Pokémon isn't easy to\n"
	.string "catch.\p"
	.string "Oh, yeah. They also get easier to\n"
	.string "catch if you make one of your\l"
	.string "Pokémon put them to sleep or such.\p"
	.string "Here, {PLAYER}, I'll give you\n"
	.string "ten Poké Balls to get you started.$"

Route202_EventScript_CatchingTutorial_Text_2:
# 203 "data/maps/Route202/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}If you have lots of Pokémon with you,\n"
	.string "you'll be able to travel farther.\p"
	.string "That way, you'll have a better shot\n"
	.string "at meeting more Pokémon.\p"
	.string "See you around!$"
