TwinleafTownHouse1_MapScripts::
	.byte 0


TwinleafTownHouse1_EventScript_Man::
# 5 "data/maps/TwinleafTownHouse1/scripts.pory"
	lock
# 6 "data/maps/TwinleafTownHouse1/scripts.pory"
	faceplayer
# 7 "data/maps/TwinleafTownHouse1/scripts.pory"
	compare VAR_LAKE_VERITY_STATE, 3
	goto_if_eq TwinleafTownHouse1_EventScript_Man_2
# 13 "data/maps/TwinleafTownHouse1/scripts.pory"
	msgbox TwinleafTownHouse1_EventScript_Man_Text_1
TwinleafTownHouse1_EventScript_Man_1:
# 16 "data/maps/TwinleafTownHouse1/scripts.pory"
	release
	return

TwinleafTownHouse1_EventScript_Man_2:
# 8 "data/maps/TwinleafTownHouse1/scripts.pory"
	msgbox TwinleafTownHouse1_EventScript_Man_Text_0
	goto TwinleafTownHouse1_EventScript_Man_1


TwinleafTownHouse1_EventScript_Man_Text_0:
# 8 "data/maps/TwinleafTownHouse1/scripts.pory"
	.string "I went on an adventure with some\n"
	.string "Pokémon a long time ago.\p"
	.string "It was only to Sandgem, the next town\n"
	.string "over, though. Yeah, good times. . .$"

TwinleafTownHouse1_EventScript_Man_Text_1:
# 13 "data/maps/TwinleafTownHouse1/scripts.pory"
	.string "You're off to hang with Barry\n"
	.string "again, right? You two sure are tight!$"
