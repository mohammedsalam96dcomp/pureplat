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


JubilifeCity_PokemonSchool_SignScript_ChockFull::
# 170 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 171 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_ChockFull_Text_0
# 173 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_SignScript_PictureBooks::
# 177 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 178 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_PictureBooks_Text_0
# 179 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_SignScript_Notebook::
# 183 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 184 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Notebook_Text_0
# 196 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return


JubilifeCity_PokemonSchool_SignScript_Board::
# 200 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	lock
# 201 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_0
JubilifeCity_PokemonSchool_SignScript_Board_2:
# 204 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	message JubilifeCity_PokemonSchool_SignScript_Board_Text_1
# 205 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	multichoicegrid 0, 0, MULTI_STATUS, 2, 0
# 206 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 207 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 0, JubilifeCity_PokemonSchool_SignScript_Board_5
# 215 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 1, JubilifeCity_PokemonSchool_SignScript_Board_6
# 220 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 2, JubilifeCity_PokemonSchool_SignScript_Board_7
# 227 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 3, JubilifeCity_PokemonSchool_SignScript_Board_8
# 234 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 4, JubilifeCity_PokemonSchool_SignScript_Board_9
# 241 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case 5, JubilifeCity_PokemonSchool_SignScript_Board_10
# 244 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, JubilifeCity_PokemonSchool_SignScript_Board_11
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

# 250 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	release
	return

JubilifeCity_PokemonSchool_SignScript_Board_5:
# 208 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_2
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

JubilifeCity_PokemonSchool_SignScript_Board_6:
# 216 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_3
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

JubilifeCity_PokemonSchool_SignScript_Board_7:
# 221 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_4
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

JubilifeCity_PokemonSchool_SignScript_Board_8:
# 228 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_5
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

JubilifeCity_PokemonSchool_SignScript_Board_9:
# 235 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	msgbox JubilifeCity_PokemonSchool_SignScript_Board_Text_6
	goto JubilifeCity_PokemonSchool_SignScript_Board_2

JubilifeCity_PokemonSchool_SignScript_Board_10:
# 242 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	closemessage
	end

JubilifeCity_PokemonSchool_SignScript_Board_11:
# 245 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	closemessage
	end


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

JubilifeCity_PokemonSchool_SignScript_ChockFull_Text_0:
# 171 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "It's chock-full of Pokémon books and\n"
	.string "photo collections.$"

JubilifeCity_PokemonSchool_SignScript_PictureBooks_Text_0:
# 178 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "It's lined with Pokémon picture books.$"

JubilifeCity_PokemonSchool_SignScript_Notebook_Text_0:
# 184 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
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
# 201 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "The blackboard lists status changes\n"
	.string "that may affect Pokémon in battle.$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_1:
# 204 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "Which would you like to read about?$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_2:
# 208 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon is poisoned, it will\n"
	.string "steadily lose HP.\p"
	.string "The effects of poison remain after\n"
	.string "a battle.\p"
	.string "A poisoned Pokémon's HP will drop\n"
	.string "while it is traveling.\p"
	.string "Heal a poisoning using an Antidote.$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_3:
# 216 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "A burn reduces the Attack stat and\n"
	.string "steadily reduces the victim's HP.\p"
	.string "A burn lingers after battle.\n"
	.string "Cure a burn using a Burn Heal.$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_4:
# 221 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon becomes paralyzed,\n"
	.string "its Speed stat drops.\p"
	.string "In addition, it may not be able to\n"
	.string "move while it is in battle.\p"
	.string "Paralysis remains after battle.\n"
	.string "Cure it using a Paralyz Heal.$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_5:
# 228 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon is frozen, it becomes\n"
	.string "completely helpless.\p"
	.string "The Pokémon may thaw out on its own,\n"
	.string "but if a battle ends while it is\l"
	.string "frozen, it will stay frozen.\p"
	.string "Thaw it out using an Ice Heal.$"

JubilifeCity_PokemonSchool_SignScript_Board_Text_6:
# 235 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "If a Pokémon falls asleep, it will be\n"
	.string "unable to attack.\p"
	.string "The Pokémon may wake up on its own,\n"
	.string "but if a battle ends while it is\l"
	.string "sleeping, it will stay asleep.\p"
	.string "Wake it up using an Awakening.$"

GotPotion::
# 160 "data/maps/JubilifeCity_PokemonSchool/scripts.pory"
	.string "When a Potion is used, it restores the\n"
	.string "HP, the health, of a Pokémon.\p"
	.string "Being a good Trainer isn't only about\n"
	.string "ordering your Pokémon around.\p"
	.string "A superior Trainer knows how to use\n"
	.string "items to the full advantage!$"
