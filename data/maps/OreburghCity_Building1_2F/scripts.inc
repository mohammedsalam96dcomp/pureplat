OreburghCity_Building1_2F_MapScripts::
	.byte 0


OreburghCity_Building1_2F_EventScript_Lass::
# 4 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	lock
# 5 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	faceplayer
# 6 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OREBURGH_CITY_DUSK_BALL, OreburghCity_Building1_2F_EventScript_Lass_2
# 12 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	msgbox OreburghCity_Building1_2F_EventScript_Lass_Text_1, MSGBOX_AUTOCLOSE
OreburghCity_Building1_2F_EventScript_Lass_1:
# 17 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	release
	return

OreburghCity_Building1_2F_EventScript_Lass_2:
# 7 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	msgbox OreburghCity_Building1_2F_EventScript_Lass_Text_0
# 9 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	giveitem ITEM_DUSK_BALL, 1
# 10 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	setflag FLAG_RECEIVED_OREBURGH_CITY_DUSK_BALL
	goto OreburghCity_Building1_2F_EventScript_Lass_1


OreburghCity_Building1_2F_EventScript_Worker::
# 21 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	lock
# 22 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	faceplayer
# 23 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	msgbox OreburghCity_Building1_2F_EventScript_Worker_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	release
	return


OreburghCity_Building1_2F_EventScript_Woman::
# 31 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	lock
# 32 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	faceplayer
# 33 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	msgbox OreburghCity_Building1_2F_EventScript_Woman_Text_0, MSGBOX_AUTOCLOSE
# 37 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	release
	return


OreburghCity_Building1_2F_EventScript_Yellow::
# 41 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	lock
# 42 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	faceplayer
# 43 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 44 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	msgbox OreburghCity_Building1_2F_EventScript_Yellow_Text_0, MSGBOX_AUTOCLOSE
# 45 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	waitmoncry
# 46 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	release
	return


OreburghCity_Building1_2F_EventScript_Lass_Text_0:
# 7 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	.string "Are you catching Pokémon?\n"
	.string "Here, take this if you'd like.$"

OreburghCity_Building1_2F_EventScript_Lass_Text_1:
# 12 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	.string "The Dusk Ball is a Poké Ball designed\n"
	.string "for use in darkness.\p"
	.string "It works better if you use it at\n"
	.string "night or in a cave.$"

OreburghCity_Building1_2F_EventScript_Worker_Text_0:
# 23 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	.string "Giving nicknames to Pokémon is\n"
	.string "the way to go.\p"
	.string "It makes you feel as if they're your\n"
	.string "very own.$"

OreburghCity_Building1_2F_EventScript_Woman_Text_0:
# 33 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	.string "But he named our PSYDUCK “Yellow”\n"
	.string "just because of its color. . .\p"
	.string "I don't understand the logic behind\n"
	.string "that at all.$"

OreburghCity_Building1_2F_EventScript_Yellow_Text_0:
# 44 "data/maps/OreburghCity_Building1_2F/scripts.pory"
	.string "Duuuck?$"
