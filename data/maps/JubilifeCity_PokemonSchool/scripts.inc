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
	msgbox JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_Text_2, MSGBOX_AUTOCLOSE
JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_1:
# 91 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
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
# 96 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	trainerbattle_single TRAINER_HARRISON, JubilifeCity_PokemonSchool_EventScripts_Harrison_Text_0, JubilifeCity_PokemonSchool_EventScripts_Harrison_Text_1, JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy
	return


JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy::
# 107 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 108 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_DEFEATED_TRAINER_SCHOOL_GIRL, JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_2
# 126 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_Text_1, MSGBOX_AUTOCLOSE
JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_1:
# 129 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	setflag FLAG_DEFEATED_TRAINER_SCHOOL_BOY
# 130 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_2:
# 109 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POTION_SCHOOL, JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_5
# 123 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox GotPotion, MSGBOX_AUTOCLOSE
	goto JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_1

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_5:
# 110 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_Text_0
# 115 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	giveitem ITEM_POTION
# 116 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_8
# 119 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_POTION_SCHOOL
# 120 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox GotPotion, MSGBOX_AUTOCLOSE
	goto JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_1

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_8:
# 117 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	call Common_EventScript_BagIsFull
	goto JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_1


JubilifeCity_PokemonSchool_EventScripts_Christine::
# 134 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	trainerbattle_single TRAINER_CHRISTINE, JubilifeCity_PokemonSchool_EventScripts_Christine_Text_0, JubilifeCity_PokemonSchool_EventScripts_Christine_Text_1, JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl
	return


JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl::
# 143 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 144 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_DEFEATED_TRAINER_SCHOOL_BOY, JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_2
# 150 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_Text_0, MSGBOX_AUTOCLOSE
JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_1:
# 157 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	setflag FLAG_DEFEATED_TRAINER_SCHOOL_GIRL
# 158 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_2:
# 145 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_Text_2, MSGBOX_AUTOCLOSE
	goto JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_1


JubilifeCity_PokemonSchool_SignScript_ChockFull::
# 172 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 173 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_ChockFull_Text_0
# 175 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_SignScript_PictureBooks::
# 179 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 180 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_PictureBooks_Text_0
# 181 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_SignScript_Notebook::
# 185 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 186 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Notebook_Text_0
# 198 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_SignScript_Board::
# 202 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 203 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_0
JubilifeCity_PokemonSchool_SignScript_Board_2:
# 206 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	message JubilifeCity_PokemonSchool_SignScript_Board_Text_1
# 207 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	multichoicegrid 0, 0, MULTI_STATUS, 2, 0
# 208 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 209 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 0, JubilifeCity_PokemonSchool_SignScript_Board_5
# 217 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 1, JubilifeCity_PokemonSchool_SignScript_Board_6
# 222 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 2, JubilifeCity_PokemonSchool_SignScript_Board_7
# 229 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 3, JubilifeCity_PokemonSchool_SignScript_Board_8
# 236 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 4, JubilifeCity_PokemonSchool_SignScript_Board_9
# 243 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 5, JubilifeCity_PokemonSchool_SignScript_Board_10
# 246 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, JubilifeCity_PokemonSchool_SignScript_Board_11
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

# 252 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return

JubilifeCity_PokemonSchool_SignScript_Board_5:
# 210 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_2
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

JubilifeCity_PokemonSchool_SignScript_Board_6:
# 218 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_3
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

JubilifeCity_PokemonSchool_SignScript_Board_7:
# 223 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_4
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

JubilifeCity_PokemonSchool_SignScript_Board_8:
# 230 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_5
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

JubilifeCity_PokemonSchool_SignScript_Board_9:
# 237 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_6
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

JubilifeCity_PokemonSchool_SignScript_Board_10:
# 244 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	closemessage
	end

JubilifeCity_PokemonSchool_SignScript_Board_11:
# 247 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	closemessage
	end


JubilifeCity_PokemonSchool_EventScript_Barry::
# 258 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 259 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	faceplayer
# 260 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScript_Barry_Text_0
# 270 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 271 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScript_Barry_Text_1
# 272 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	waitfanfare
# 273 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	removeitem ITEM_PARCEL, 1
# 274 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScript_Barry_Text_2
# 281 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 282 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScript_Barry_Text_3, MSGBOX_AUTOCLOSE
# 292 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 295 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq JubilifeCity_PokemonSchool_EventScript_Barry_2
# 299 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_PokemonSchool_EventScript_Barry_Movement_2
# 300 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	applymovement 1, JubilifeCity_PokemonSchool_EventScript_Barry_Movement_3
JubilifeCity_PokemonSchool_EventScript_Barry_1:
# 302 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	waitmovement 1
# 304 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	playse SE_EXIT
# 305 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	setflag FLAG_HIDE_BARRY_POKEMON_SCHOOL
# 306 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	removeobject 1
# 307 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	waitse
# 309 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	clearflag FLAG_HIDE_POKETCH_EMPLOYEE_JUBILIFE
# 310 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	clearflag FLAG_HIDE_POKETCH_CLOWNS
# 311 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	setvar VAR_JUBILIFE_CITY_STATE, 3
# 313 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return

JubilifeCity_PokemonSchool_EventScript_Barry_2:
# 296 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JubilifeCity_PokemonSchool_EventScript_Barry_Movement_0
# 297 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	applymovement 1, JubilifeCity_PokemonSchool_EventScript_Barry_Movement_1
	goto JubilifeCity_PokemonSchool_EventScript_Barry_1


# 296 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
JubilifeCity_PokemonSchool_EventScript_Barry_Movement_0:
# 296 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_in_place_right
# 296 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_in_place_down
	step_end

# 297 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
JubilifeCity_PokemonSchool_EventScript_Barry_Movement_1:
# 297 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_right
# 297 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 297 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 297 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 297 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 297 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 297 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
	step_end

# 299 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
JubilifeCity_PokemonSchool_EventScript_Barry_Movement_2:
# 299 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_in_place_down
	step_end

# 300 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
JubilifeCity_PokemonSchool_EventScript_Barry_Movement_3:
# 300 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 300 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 300 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_right
# 300 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 300 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 300 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	walk_fast_down
# 300 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
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

JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_Text_2:
# 85 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "I wonder if we could have done better\n"
	.string "against you?\p"
	.string "Like if I used Potions right when we\n"
	.string "needed to.$"

JubilifeCity_PokemonSchool_EventScripts_Harrison_Text_0:
# 98 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Go!\n"
	.string "My Pokémon, go!$"

JubilifeCity_PokemonSchool_EventScripts_Harrison_Text_1:
# 99 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Ugh. . .\n"
	.string "I didn't use items effectively.$"

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_Text_0:
# 110 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Whew! You're really good!\p"
	.string "We've been studying every day. but\n"
	.string "we were no match for you at all!\p"
	.string "You'd be able to use this Potion\n"
	.string "properly. Here you go!$"

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_Text_1:
# 126 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "It's hard to win if you don't have\n"
	.string "some Pokémon to choose from.$"

JubilifeCity_PokemonSchool_EventScripts_Christine_Text_0:
# 136 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "I need to try the things I learned\n"
	.string "before I forget them!$"

JubilifeCity_PokemonSchool_EventScripts_Christine_Text_1:
# 137 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "I like to study alot. . .\n"
	.string "I thought I could win. . .$"

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_Text_0:
# 150 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "We were actually confident that we\n"
	.string "would do pretty good.\p"
	.string "But I'm completely impressed by how\n"
	.string "tough you are.\p"
	.string "If you'd like, talk to my friend and\n"
	.string "get a nice item from him.$"

JubilifeCity_PokemonSchool_SignScript_ChockFull_Text_0:
# 173 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "It's chock-full of Pokémon books and\n"
	.string "photo collections.$"

JubilifeCity_PokemonSchool_SignScript_PictureBooks_Text_0:
# 180 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "It's lined with Pokémon picture books.$"

JubilifeCity_PokemonSchool_SignScript_Notebook_Text_0:
# 186 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
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
# 203 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "The blackboard lists status changes\n"
	.string "that may affect Pokémon in battle.$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_1:
# 206 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Which would you like to read about?$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_2:
# 210 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon is poisoned, it will\n"
	.string "steadily lose HP.\p"
	.string "The effects of poison remain after\n"
	.string "a battle.\p"
	.string "A poisoned Pokémon's HP will drop\n"
	.string "while it is traveling.\p"
	.string "Heal a poisoning using an Antidote.$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_3:
# 218 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "A burn reduces the Attack stat and\n"
	.string "steadily reduces the victim's HP.\p"
	.string "A burn lingers after battle.\n"
	.string "Cure a burn using a Burn Heal.$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_4:
# 223 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon becomes paralyzed,\n"
	.string "its Speed stat drops.\p"
	.string "In addition, it may not be able to\n"
	.string "move while it is in battle.\p"
	.string "Paralysis remains after battle.\n"
	.string "Cure it using a Paralyz Heal.$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_5:
# 230 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon is frozen, it becomes\n"
	.string "completely helpless.\p"
	.string "The Pokémon may thaw out on its own,\n"
	.string "but if a battle ends while it is\l"
	.string "frozen, it will stay frozen.\p"
	.string "Thaw it out using an Ice Heal.$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_6:
# 237 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon falls asleep, it will be\n"
	.string "unable to attack.\p"
	.string "The Pokémon may wake up on its own,\n"
	.string "but if a battle ends while it is\l"
	.string "sleeping, it will stay asleep.\p"
	.string "Wake it up using an Awakening.$"

JubilifeCity_PokemonSchool_EventScript_Barry_Text_0:
# 260 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
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
# 271 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "{SPEAKER NAME_NONE}{PLAYER} delivered the Parcel.$"

JubilifeCity_PokemonSchool_EventScript_Barry_Text_2:
# 274 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "{SPEAKER NAME_BARRY}So, what is this. . .?\p"
	.string "Score!\n"
	.string "It's a Town Map!\p"
	.string "Huh?!\n"
	.string "Why are there two in here?\p"
	.string "I like it a lot, but I don't need two.\n"
	.string "Here, {PLAYER}, you take one!$"

JubilifeCity_PokemonSchool_EventScript_Barry_Text_3:
# 282 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
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
# 162 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "When a Potion is used, it restores the\n"
	.string "HP, the health, of a Pokémon.\p"
	.string "Being a good Trainer isn't only about\n"
	.string "ordering your Pokémon around.\p"
	.string "A superior Trainer knows how to use\n"
	.string "items to the full advantage!$"
