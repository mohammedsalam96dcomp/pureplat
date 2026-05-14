JubilfeCityGate_MapScripts::
	.byte 0


JubilifeCite_Gate_EvenScript_Officer::
# 4 "data/maps/JubilfeCityGate/scripts.pory"
	lock
# 5 "data/maps/JubilfeCityGate/scripts.pory"
	faceplayer
# 6 "data/maps/JubilfeCityGate/scripts.pory"
	msgbox JubilifeCite_Gate_EvenScript_Officer_Text_0, MSGBOX_AUTOCLOSE
# 8 "data/maps/JubilfeCityGate/scripts.pory"
	release
	return


JubilifeCite_Gate_EvenScript_Fisherman::
# 12 "data/maps/JubilfeCityGate/scripts.pory"
	lock
# 13 "data/maps/JubilfeCityGate/scripts.pory"
	faceplayer
# 15 "data/maps/JubilfeCityGate/scripts.pory"
	checkitem ITEM_OLD_ROD, 1
# 17 "data/maps/JubilfeCityGate/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCite_Gate_EvenScript_Fisherman_1
# 20 "data/maps/JubilfeCityGate/scripts.pory"
	msgbox JubilifeCite_Gate_EvenScript_Fisherman_Text_0, MSGBOX_YESNO
# 23 "data/maps/JubilfeCityGate/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCite_Gate_EvenScript_Fisherman_4
# 31 "data/maps/JubilfeCityGate/scripts.pory"
	msgbox JubilifeCite_Gate_EvenScript_Fisherman_Text_2
	return

JubilifeCite_Gate_EvenScript_Fisherman_1:
# 18 "data/maps/JubilfeCityGate/scripts.pory"
	goto JubilifeCite_Gate_EvenScript_Fisherman_Tips
	return

JubilifeCite_Gate_EvenScript_Fisherman_4:
# 24 "data/maps/JubilfeCityGate/scripts.pory"
	msgbox JubilifeCite_Gate_EvenScript_Fisherman_Text_1
# 28 "data/maps/JubilfeCityGate/scripts.pory"
	giveitem ITEM_OLD_ROD
# 29 "data/maps/JubilfeCityGate/scripts.pory"
	call JubilifeCite_Gate_EvenScript_Fisherman_Tips
	return


JubilifeCite_Gate_EvenScript_Fisherman_Tips::
# 40 "data/maps/JubilfeCityGate/scripts.pory"
	lock
# 42 "data/maps/JubilfeCityGate/scripts.pory"
	msgbox JubilifeCite_Gate_EvenScript_Fisherman_Tips_Text_0, MSGBOX_YESNO
# 46 "data/maps/JubilfeCityGate/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JubilifeCite_Gate_EvenScript_Fisherman_Tips_1
# 53 "data/maps/JubilfeCityGate/scripts.pory"
	msgbox JubilifeCite_Gate_EvenScript_Fisherman_Tips_Text_2, MSGBOX_AUTOCLOSE
	return

JubilifeCite_Gate_EvenScript_Fisherman_Tips_1:
# 47 "data/maps/JubilfeCityGate/scripts.pory"
	msgbox JubilifeCite_Gate_EvenScript_Fisherman_Tips_Text_1, MSGBOX_AUTOCLOSE
	return


JubilifeCite_Gate_EvenScript_Officer_Text_0:
# 6 "data/maps/JubilfeCityGate/scripts.pory"
	.string "Route 218 up ahead is a great fishing\n"
	.string "hole that's almost unknown to people.$"

JubilifeCite_Gate_EvenScript_Fisherman_Text_0:
# 20 "data/maps/JubilfeCityGate/scripts.pory"
	.string "Yes, sir!\n"
	.string "An Old Rod is a good thing!\p"
	.string "You think so too, am I right?$"

JubilifeCite_Gate_EvenScript_Fisherman_Text_1:
# 24 "data/maps/JubilfeCityGate/scripts.pory"
	.string "Yes! Good answer!\n"
	.string "We can be friends!\p"
	.string "Here you go.\n"
	.string "That's my Old Rod!$"

JubilifeCite_Gate_EvenScript_Fisherman_Text_2:
# 31 "data/maps/JubilfeCityGate/scripts.pory"
	.string "Oh, really?\n"
	.string "You don't like to fish?$"

JubilifeCite_Gate_EvenScript_Fisherman_Tips_Text_0:
# 42 "data/maps/JubilfeCityGate/scripts.pory"
	.string "You should fish wherever there is\n"
	.string "a body of water.\p"
	.string "Oh, and by the way, did you need\n"
	.string "any tips on using that fishing rod?$"

JubilifeCite_Gate_EvenScript_Fisherman_Tips_Text_1:
# 47 "data/maps/JubilfeCityGate/scripts.pory"
	.string "First, you face any body of water,\n"
	.string "then you use your fishing rod.\p"
	.string "Next, you focus!\n"
	.string "If a Pokémon bites, “!” appears.\l"
	.string "That's your cue to reel it in!$"

JubilifeCite_Gate_EvenScript_Fisherman_Tips_Text_2:
# 53 "data/maps/JubilfeCityGate/scripts.pory"
	.string "When you're fishing for Pokémon,\n"
	.string "the first hurdle is getting a bite.\p"
	.string "When you reel the Pokémon in, you've\n"
	.string "got to battle it.\p"
	.string "So, fishing gives you twice the fun!$"
