JubilifeCity_PokemonSchool_MapScripts::
	.byte 0


JubilifeCity_PokemonSchool_EventScripts_Items::
# 8 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 9 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	faceplayer
# 10 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_Items_Text_0, MSGBOX_AUTOCLOSE
# 15 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_EventScripts_Essay::
# 19 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 20 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	faceplayer
# 21 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_Essay_Text_0, MSGBOX_AUTOCLOSE
# 23 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_EventScripts_Types::
# 27 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 28 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	faceplayer
# 29 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_Types_Text_0, MSGBOX_AUTOCLOSE
# 34 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_EventScripts_Pace::
# 38 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 39 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	faceplayer
# 40 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_Pace_Text_0, MSGBOX_AUTOCLOSE
# 44 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_EventScripts_SchoolBoy::
# 48 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 49 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	faceplayer
# 51 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_DEFEATED_TRAINER_SCHOOL_BOY, JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_2
# 61 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy
JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_1:
# 64 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return

JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_2:
# 52 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_Text_0, MSGBOX_YESNO
# 54 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_5
# 57 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_Text_1, MSGBOX_AUTOCLOSE
	goto JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_1

JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_5:
# 55 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto JubilifeCity_PokemonSchool_EventScripts_Harrison
	goto JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_1


JubilifeCity_PokemonSchool_EventScripts_SchoolGirl::
# 68 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 69 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	faceplayer
# 71 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_DEFEATED_TRAINER_SCHOOL_GIRL, JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_2
# 85 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_TrainerSchool_Text_ChristinePostBattle, MSGBOX_AUTOCLOSE
JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_1:
# 88 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return

JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_2:
# 72 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_Text_0, MSGBOX_YESNO
# 76 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_5
# 79 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_Text_1, MSGBOX_AUTOCLOSE
	goto JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_1

JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_5:
# 77 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto JubilifeCity_PokemonSchool_EventScripts_Christine
	goto JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_1


JubilifeCity_PokemonSchool_EventScripts_Harrison::
# 93 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	trainerbattle_single TRAINER_HARRISON, JubilifeCity_TrainerSchool_Text_HarrisonIntro, JubilifeCity_TrainerSchool_Text_HarrisonDefeated, JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy
	return


JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy::
# 104 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 105 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_DEFEATED_TRAINER_SCHOOL_GIRL, JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_2
# 119 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_TrainerSchool_Text_HarrisonPostBattle, MSGBOX_AUTOCLOSE
JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_1:
# 121 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	setflag FLAG_DEFEATED_TRAINER_SCHOOL_BOY
# 122 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_2:
# 106 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POTION_SCHOOL, JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_5
# 116 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox GotPotion, MSGBOX_AUTOCLOSE
	goto JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_1

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_5:
# 107 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_TrainerSchool_Text_HarrisonEventText
# 108 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	giveitem ITEM_POTION
# 109 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_8
# 112 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_POTION_SCHOOL
# 113 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox GotPotion, MSGBOX_AUTOCLOSE
	goto JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_1

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_8:
# 110 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	call Common_EventScript_BagIsFull
	goto JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_1


JubilifeCity_PokemonSchool_EventScripts_Christine::
# 126 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	trainerbattle_single TRAINER_CHRISTINE, JubilifeCity_TrainerSchool_Text_ChristineIntro, JubilifeCity_TrainerSchool_Text_ChristineDefeated, JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl
	return


JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl::
# 135 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 136 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_DEFEATED_TRAINER_SCHOOL_BOY, JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_2
# 139 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_Text_0, MSGBOX_AUTOCLOSE
JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_1:
# 146 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	setflag FLAG_DEFEATED_TRAINER_SCHOOL_GIRL
# 147 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_2:
# 137 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_TrainerSchool_Text_ChristinePostBattle, MSGBOX_AUTOCLOSE
	goto JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_1


JubilifeCity_PokemonSchool_SignScript_ChockFull::
# 161 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 162 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_ChockFull_Text_0
# 164 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_SignScript_PictureBooks::
# 168 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 169 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_PictureBooks_Text_0
# 170 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_SignScript_Notebook::
# 174 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 175 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Notebook_Text_0
# 187 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_SignScript_Board::
# 191 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 192 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_0
JubilifeCity_PokemonSchool_SignScript_Board_2:
# 195 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	message JubilifeCity_PokemonSchool_SignScript_Board_Text_1
# 196 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	multichoicegrid 0, 0, MULTI_STATUS, 2, 0
# 197 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 198 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 0, JubilifeCity_PokemonSchool_SignScript_Board_5
# 206 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 1, JubilifeCity_PokemonSchool_SignScript_Board_6
# 211 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 2, JubilifeCity_PokemonSchool_SignScript_Board_7
# 218 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 3, JubilifeCity_PokemonSchool_SignScript_Board_8
# 225 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 4, JubilifeCity_PokemonSchool_SignScript_Board_9
# 232 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 5, JubilifeCity_PokemonSchool_SignScript_Board_10
# 235 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, JubilifeCity_PokemonSchool_SignScript_Board_11
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

# 241 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return

JubilifeCity_PokemonSchool_SignScript_Board_5:
# 199 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_2
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

JubilifeCity_PokemonSchool_SignScript_Board_6:
# 207 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_3
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

JubilifeCity_PokemonSchool_SignScript_Board_7:
# 212 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_4
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

JubilifeCity_PokemonSchool_SignScript_Board_8:
# 219 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_5
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

JubilifeCity_PokemonSchool_SignScript_Board_9:
# 226 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_6
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

JubilifeCity_PokemonSchool_SignScript_Board_10:
# 233 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	closemessage
	end

JubilifeCity_PokemonSchool_SignScript_Board_11:
# 236 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	closemessage
	end


JubilifeCity_PokemonSchool_EventScript_Barry::
# 247 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 248 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	faceplayer
# 249 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScript_Barry_Text_0
# 260 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScript_Barry_Text_1
# 262 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	removeitem ITEM_PARCEL, 1
# 263 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScript_Barry_Text_2
# 270 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 271 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScript_Barry_Text_3, MSGBOX_AUTOCLOSE
# 281 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 284 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq JubilifeCity_PokemonSchool_EventScript_Barry_2
# 288 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_PokemonSchool_EventScript_Barry_Movement_2
# 289 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	applymovement 1, JubilifeCity_PokemonSchool_EventScript_Barry_Movement_3
JubilifeCity_PokemonSchool_EventScript_Barry_1:
# 291 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	waitmovement 1
# 293 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	playse SE_EXIT
# 294 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	setflag FLAG_HIDE_BARRY_POKEMON_SCHOOL
# 295 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	removeobject 1
# 296 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	waitse
# 298 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	clearflag FLAG_HIDE_POKETCH_EMPLOYEE_JUBILIFE
# 299 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	clearflag FLAG_HIDE_POKETCH_CLOWNS
# 300 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	setvar VAR_JUBILIFE_CITY_STATE, 3
# 302 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return

JubilifeCity_PokemonSchool_EventScript_Barry_2:
# 285 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_PokemonSchool_EventScript_Barry_Movement_0
# 286 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	applymovement 1, JubilifeCity_PokemonSchool_EventScript_Barry_Movement_1
	goto JubilifeCity_PokemonSchool_EventScript_Barry_1


# 285 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
JubilifeCity_PokemonSchool_EventScript_Barry_Movement_0:
# 285 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_in_place_right
# 285 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_in_place_down
	step_end

# 286 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
JubilifeCity_PokemonSchool_EventScript_Barry_Movement_1:
# 286 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_right
# 286 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 286 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 286 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 286 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 286 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 286 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
	step_end

# 288 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
JubilifeCity_PokemonSchool_EventScript_Barry_Movement_2:
# 288 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_in_place_down
	step_end

# 289 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
JubilifeCity_PokemonSchool_EventScript_Barry_Movement_3:
# 289 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 289 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 289 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_right
# 289 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 289 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 289 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 289 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
	step_end

JubilifeCity_PokemonSchool_EventScripts_Items_Text_0:
# 10 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Pokémon are smart enough to use\n"
	.string "items they're hiding.\p"
	.string "But they won't know what to do with\n"
	.string "man-made items like Potions and\l"
	.string "Antidotes.$"

JubilifeCity_PokemonSchool_EventScripts_Essay_Text_0:
# 21 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "I wrote an essay in my notebook on\n"
	.string "what makes a true Pokémon Trainer.$"

JubilifeCity_PokemonSchool_EventScripts_Types_Text_0:
# 29 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "We learned about Pokémon types\n"
	.string "today. Umm. . .\p"
	.string "Grass is weak to Fire,\p"
	.string "Fire is weak to Water,\p"
	.string "and Water is weak to Grass!$"

JubilifeCity_PokemonSchool_EventScripts_Pace_Text_0:
# 40 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "It's perfectly fine for Trainers and\n"
	.string "Pokémon to develop at their own pace.\p"
	.string "If there is anything you're not familiar\n"
	.string "with, you can look it up here.$"

JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_Text_0:
# 52 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Doing it is the best way to learn!\n"
	.string "Can we get a battle with you?$"

JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_Text_1:
# 57 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Aww! But battling is the best way\n"
	.string "to learn about Pokémon!$"

JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_Text_0:
# 72 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "I just became friends with my\n"
	.string "Pokémon.\p"
	.string "I'm not sure if we can do this\n"
	.string "properly, but may we battle?$"

JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_Text_1:
# 79 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Boo!\n"
	.string "Where's your sense of adventure?\p"
	.string "Don't be shy about talking to people\n"
	.string "and getting into battles!$"

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_Text_0:
# 139 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "We were actually confident that we\n"
	.string "would do pretty good.\p"
	.string "But I'm completely impressed by how\n"
	.string "tough you are.\p"
	.string "If you'd like, talk to my friend and\n"
	.string "get a nice item from him.$"

JubilifeCity_PokemonSchool_SignScript_ChockFull_Text_0:
# 162 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "It's chock-full of Pokémon books and\n"
	.string "photo collections.$"

JubilifeCity_PokemonSchool_SignScript_PictureBooks_Text_0:
# 169 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "It's lined with Pokémon picture books.$"

JubilifeCity_PokemonSchool_SignScript_Notebook_Text_0:
# 175 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "It's a notebook filled with writing.\n"
	.string "Let's see. . .\p"
	.string "Pokémon are to be caught using\n"
	.string "Poké Balls.\p"
	.string "Up to six Pokémon can accompany\n"
	.string "a Trainer.\p"
	.string "A Trainer is someone who catches\n"
	.string "Pokémon, raises them, and battles\l"
	.string "with them.\p"
	.string "A Trainer's mission is to defeat the\n"
	.string "strong Trainers who await challengers\l"
	.string "in Pokémon Gyms.$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_0:
# 192 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "The blackboard lists status changes\n"
	.string "that may affect Pokémon in battle.$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_1:
# 195 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Which would you like to read about?$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_2:
# 199 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon is poisoned, it will\n"
	.string "steadily lose HP.\p"
	.string "The effects of poison remain after\n"
	.string "a battle.\p"
	.string "A poisoned Pokémon's HP will drop\n"
	.string "while it is traveling.\p"
	.string "Heal a poisoning using an Antidote.$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_3:
# 207 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "A burn reduces the Attack stat and\n"
	.string "steadily reduces the victim's HP.\p"
	.string "A burn lingers after battle.\n"
	.string "Cure a burn using a Burn Heal.$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_4:
# 212 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon becomes paralyzed,\n"
	.string "its Speed stat drops.\p"
	.string "In addition, it may not be able to\n"
	.string "move while it is in battle.\p"
	.string "Paralysis remains after battle.\n"
	.string "Cure it using a Paralyz Heal.$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_5:
# 219 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon is frozen, it becomes\n"
	.string "completely helpless.\p"
	.string "The Pokémon may thaw out on its own,\n"
	.string "but if a battle ends while it is\l"
	.string "frozen, it will stay frozen.\p"
	.string "Thaw it out using an Ice Heal.$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_6:
# 226 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon falls asleep, it will be\n"
	.string "unable to attack.\p"
	.string "The Pokémon may wake up on its own,\n"
	.string "but if a battle ends while it is\l"
	.string "sleeping, it will stay asleep.\p"
	.string "Wake it up using an Awakening.$"

JubilifeCity_PokemonSchool_EventScript_Barry_Text_0:
# 249 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey, {PLAYER}!\n"
	.string "Did you come to study, too?\p"
	.string "I went ahead and memorized everything\n"
	.string "that was up on the blackboard.\p"
	.string "After all, it's the Trainer's job to\n"
	.string "avoid having their precious Pokémon\l"
	.string "hurt in battle, right?\p"
	.string "So {PLAYER}, what brings you?\n"
	.string "Huh?\l"
	.string "You've got something for me?$"

JubilifeCity_PokemonSchool_EventScript_Barry_Text_1:
# 260 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "{SPEAKER NAME_NONE}{PLAYER} delivered the Parcel.$"

JubilifeCity_PokemonSchool_EventScript_Barry_Text_2:
# 263 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "{SPEAKER NAME_BARRY}So, what is this. . .?\p"
	.string "Score!\n"
	.string "It's a Town Map!\p"
	.string "Huh?!\n"
	.string "Why are there two in here?\p"
	.string "I like it a lot, but I don't need two.\n"
	.string "Here, {PLAYER}, you take one!$"

JubilifeCity_PokemonSchool_EventScript_Barry_Text_3:
# 271 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hmm. . .\p"
	.string "Well, according to the Town Map,\n"
	.string "I guess Oreburgh City is where\l"
	.string "I should be going next.\p"
	.string "There's a Gym, so it'd be perfect for\n"
	.string "raising the Pokémon I just caught.\p"
	.string "Well, I'm on the road to becoming\n"
	.string "the greatest Trainer of all time!\p"
	.string "See you around!$"

GotPotion::
# 151 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "When a Potion is used, it restores the\n"
	.string "HP, the health, of a Pokémon.\p"
	.string "Being a good Trainer isn't only about\n"
	.string "ordering your Pokémon around.\p"
	.string "A superior Trainer knows how to use\n"
	.string "items to the full advantage!$"
