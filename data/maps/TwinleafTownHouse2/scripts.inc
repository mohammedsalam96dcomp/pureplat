TwinleafTownHouse2_MapScripts::
	.byte 0


TwinleafTownHouse2_EventScript_OldWoman::
# 5 "data/maps/TwinleafTownHouse2/scripts.pory"
	lock
# 6 "data/maps/TwinleafTownHouse2/scripts.pory"
	faceplayer
# 7 "data/maps/TwinleafTownHouse2/scripts.pory"
	msgbox TwinleafTownHouse2_EventScript_OldWoman_Text_0
# 14 "data/maps/TwinleafTownHouse2/scripts.pory"
	release
	return


TwinleafTownHouse2_EventScript_LittleGirl::
# 18 "data/maps/TwinleafTownHouse2/scripts.pory"
	lock
# 19 "data/maps/TwinleafTownHouse2/scripts.pory"
	faceplayer
# 20 "data/maps/TwinleafTownHouse2/scripts.pory"
	msgbox TwinleafTownHouse2_EventScript_LittleGirl_Text_0
# 22 "data/maps/TwinleafTownHouse2/scripts.pory"
	release
	return


TwinleafTownHouse2_EventScript_OldWoman_Text_0:
# 7 "data/maps/TwinleafTownHouse2/scripts.pory"
	.string "Did you hear?\p"
	.string "The Pokémon Professor returned\n"
	.string "to the next town over.\p"
	.string "They say he was gone for four long\n"
	.string "years.\p"
	.string "I wonder if he found some amazing\n"
	.string "Pokémon while he was gone?$"

TwinleafTownHouse2_EventScript_LittleGirl_Text_0:
# 20 "data/maps/TwinleafTownHouse2/scripts.pory"
	.string "Listen, listen, {PLAYER}.\n"
	.string "I want a cute Pokémon!$"
