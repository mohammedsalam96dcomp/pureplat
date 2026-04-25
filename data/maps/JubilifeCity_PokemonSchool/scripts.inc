JubilifeCity_PokemonSchool_MapScripts::
	.byte 0


JubilifeCity_PokemonSchool_EventScripts_Items::
# 6 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 7 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	faceplayer
# 8 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_Items_Text_0, MSGBOX_AUTOCLOSE
# 13 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_EventScripts_Essay::
# 17 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 18 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	faceplayer
# 19 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_Essay_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_EventScripts_Types::
# 25 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 26 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	faceplayer
# 27 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_Types_Text_0, MSGBOX_AUTOCLOSE
# 32 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_EventScripts_Pace::
# 36 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 37 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	faceplayer
# 38 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_Pace_Text_0, MSGBOX_AUTOCLOSE
# 42 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_EventScripts_SchoolBoy::
# 46 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 47 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	faceplayer
# 49 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_DEFEATED_TRAINER_SCHOOL_BOY, JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_2
# 59 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy
JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_1:
# 62 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return

JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_2:
# 50 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_Text_0, MSGBOX_YESNO
# 52 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_5
# 55 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_Text_1, MSGBOX_AUTOCLOSE
	goto JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_1

JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_5:
# 53 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto JubilifeCity_PokemonSchool_EventScripts_Harrison
	goto JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_1


JubilifeCity_PokemonSchool_EventScripts_SchoolGirl::
# 66 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 67 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	faceplayer
# 69 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_DEFEATED_TRAINER_SCHOOL_GIRL, JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_2
# 83 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_Text_2, MSGBOX_AUTOCLOSE
JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_1:
# 89 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return

JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_2:
# 70 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_Text_0, MSGBOX_YESNO
# 74 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_5
# 77 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_Text_1, MSGBOX_AUTOCLOSE
	goto JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_1

JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_5:
# 75 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto JubilifeCity_PokemonSchool_EventScripts_Christine
	goto JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_1


JubilifeCity_PokemonSchool_EventScripts_Harrison::
# 94 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	trainerbattle_single TRAINER_HARRISON, JubilifeCity_PokemonSchool_EventScripts_Harrison_Text_0, JubilifeCity_PokemonSchool_EventScripts_Harrison_Text_1, JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy
	return


JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy::
# 105 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 106 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_DEFEATED_TRAINER_SCHOOL_GIRL, JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_2
# 124 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_Text_1, MSGBOX_AUTOCLOSE
JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_1:
# 127 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	setflag FLAG_DEFEATED_TRAINER_SCHOOL_BOY
# 128 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_2:
# 107 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POTION_SCHOOL, JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_5
# 121 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox GotPotion, MSGBOX_AUTOCLOSE
	goto JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_1

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_5:
# 108 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_Text_0
# 113 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	giveitem ITEM_POTION
# 114 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_8
# 117 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_POTION_SCHOOL
# 118 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox GotPotion, MSGBOX_AUTOCLOSE
	goto JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_1

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_8:
# 115 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	call Common_EventScript_BagIsFull
	goto JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_1


JubilifeCity_PokemonSchool_EventScripts_Christine::
# 132 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	trainerbattle_single TRAINER_CHRISTINE, JubilifeCity_PokemonSchool_EventScripts_Christine_Text_0, JubilifeCity_PokemonSchool_EventScripts_Christine_Text_1, JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl
	return


JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl::
# 141 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 142 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_DEFEATED_TRAINER_SCHOOL_BOY, JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_2
# 148 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_Text_0, MSGBOX_AUTOCLOSE
JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_1:
# 155 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	setflag FLAG_DEFEATED_TRAINER_SCHOOL_GIRL
# 156 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_2:
# 143 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_Text_2, MSGBOX_AUTOCLOSE
	goto JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_1


JubilifeCity_PokemonSchool_EventScripts_Items_Text_0:
# 8 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Pokémon are smart enough to use\n"
	.string "items they're hiding.\p"
	.string "But they won't know what to do with\n"
	.string "man-made items like Potions and\l"
	.string "Antidotes.$"

JubilifeCity_PokemonSchool_EventScripts_Essay_Text_0:
# 19 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "I wrote an essay in my notebook on\n"
	.string "what makes a true Pokémon Trainer.$"

JubilifeCity_PokemonSchool_EventScripts_Types_Text_0:
# 27 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "We learned about Pokémon types\n"
	.string "today. Umm. . .\p"
	.string "Grass is weak to Fire,\p"
	.string "Fire is weak to Water,\p"
	.string "and Water is weak to Grass!$"

JubilifeCity_PokemonSchool_EventScripts_Pace_Text_0:
# 38 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "It's perfectly fine for Trainers and\n"
	.string "Pokémon to develop at their own pace.\p"
	.string "If there is anything you're not familiar\n"
	.string "with, you can look it up here.$"

JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_Text_0:
# 50 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Doing it is the best way to learn!\n"
	.string "Can we get a battle with you?$"

JubilifeCity_PokemonSchool_EventScripts_SchoolBoy_Text_1:
# 55 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Aww! But battling is the best way\n"
	.string "to learn about Pokémon!$"

JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_Text_0:
# 70 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "I just became friends with my\n"
	.string "Pokémon.\p"
	.string "I'm not sure if we can do this\n"
	.string "properly, but may we battle?$"

JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_Text_1:
# 77 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Boo!\n"
	.string "Where's your sense of adventure?\p"
	.string "Don't be shy about talking to people\n"
	.string "and getting into battles!$"

JubilifeCity_PokemonSchool_EventScripts_SchoolGirl_Text_2:
# 83 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "I wonder if we could have done better\n"
	.string "against you?\p"
	.string "Like if I used Potions right when we\n"
	.string "needed to.$"

JubilifeCity_PokemonSchool_EventScripts_Harrison_Text_0:
# 96 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Go!\n"
	.string "My Pokémon, go!$"

JubilifeCity_PokemonSchool_EventScripts_Harrison_Text_1:
# 97 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Ugh. . .\n"
	.string "I didn't use items effectively.$"

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_Text_0:
# 108 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Whew! You're really good!\p"
	.string "We've been studying every day. but\n"
	.string "we were no match for you at all!\p"
	.string "You'd be able to use this Potion\n"
	.string "properly. Here you go!$"

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolBoy_Text_1:
# 124 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "It's hard to win if you don't have\n"
	.string "some Pokémon to choose from.$"

JubilifeCity_PokemonSchool_EventScripts_Christine_Text_0:
# 134 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "I need to try the things I learned\n"
	.string "before I forget them!$"

JubilifeCity_PokemonSchool_EventScripts_Christine_Text_1:
# 135 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "I like to study alot. . .\n"
	.string "I thought I could win. . .$"

JubilifeCity_PokemonSchool_EventScripts_DefeatedSchoolGirl_Text_0:
# 148 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "We were actually confident that we\n"
	.string "would do pretty good.\p"
	.string "But I'm completely impressed by how\n"
	.string "tough you are.\p"
	.string "If you'd like, talk to my friend and\n"
	.string "get a nice item from him.$"

GotPotion::
# 160 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "When a Potion is used, it restores the\n"
	.string "HP, the health, of a Pokémon.\p"
	.string "Being a good Trainer isn't only about\n"
	.string "ordering your Pokémon around.\p"
	.string "A superior Trainer knows how to use\n"
	.string "items to the full advantage!$"
