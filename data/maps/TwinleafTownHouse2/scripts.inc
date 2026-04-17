TwinleafTownHouse2_MapScripts::
	.byte 0


TwinleafTownHouse2_EventScript_OldWoman::
# 5 "data/maps/TwinleafTownHouse2/scripts.pory"
	lock
# 6 "data/maps/TwinleafTownHouse2/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEDEX, TwinleafTownHouse2_EventScript_OldWoman_2
# 11 "data/maps/TwinleafTownHouse2/scripts.pory"
	faceplayer
# 12 "data/maps/TwinleafTownHouse2/scripts.pory"
	msgbox TwinleafTownHouse2_EventScript_OldWoman_Text_1
TwinleafTownHouse2_EventScript_OldWoman_1:
# 20 "data/maps/TwinleafTownHouse2/scripts.pory"
	release
	return

TwinleafTownHouse2_EventScript_OldWoman_2:
# 7 "data/maps/TwinleafTownHouse2/scripts.pory"
	faceplayer
# 8 "data/maps/TwinleafTownHouse2/scripts.pory"
	msgbox TwinleafTownHouse2_EventScript_OldWoman_Text_0
	goto TwinleafTownHouse2_EventScript_OldWoman_1


TwinleafTownHouse2_EventScript_LittleGirl::
# 24 "data/maps/TwinleafTownHouse2/scripts.pory"
	lock
# 25 "data/maps/TwinleafTownHouse2/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEDEX, TwinleafTownHouse2_EventScript_LittleGirl_2
# 30 "data/maps/TwinleafTownHouse2/scripts.pory"
	faceplayer
# 31 "data/maps/TwinleafTownHouse2/scripts.pory"
	msgbox TwinleafTownHouse2_EventScript_LittleGirl_Text_1
TwinleafTownHouse2_EventScript_LittleGirl_1:
# 34 "data/maps/TwinleafTownHouse2/scripts.pory"
	release
	return

TwinleafTownHouse2_EventScript_LittleGirl_2:
# 26 "data/maps/TwinleafTownHouse2/scripts.pory"
	faceplayer
# 27 "data/maps/TwinleafTownHouse2/scripts.pory"
	msgbox TwinleafTownHouse2_EventScript_LittleGirl_Text_0
	goto TwinleafTownHouse2_EventScript_LittleGirl_1


TwinleafTownHouse2_EventScript_OldWoman_Text_0:
# 8 "data/maps/TwinleafTownHouse2/scripts.pory"
	.string "Well! Professor Rowan gave you a \n"
	.string "Pokédex, did he?$"

TwinleafTownHouse2_EventScript_OldWoman_Text_1:
# 12 "data/maps/TwinleafTownHouse2/scripts.pory"
	.string "Did you hear?\p"
	.string "The Pokémon Professor returned\n"
	.string "to the next town over.\p"
	.string "They say he was gone for four long\n"
	.string "years.\p"
	.string "I wonder if he found some amazing\n"
	.string "Pokémon while he was gone?$"

TwinleafTownHouse2_EventScript_LittleGirl_Text_0:
# 27 "data/maps/TwinleafTownHouse2/scripts.pory"
	.string "Listen, listen, {PLAYER}.\p"
	.string "Do you think I can be friends with\nPokémon like you are?$"

TwinleafTownHouse2_EventScript_LittleGirl_Text_1:
# 31 "data/maps/TwinleafTownHouse2/scripts.pory"
	.string "Listen, listen, {PLAYER}.\n"
	.string "I want a cute Pokémon!$"
