OreburghCity_House1_MapScripts::
	.byte 0


OreburghCity_House1_EventScript_Mom::
# 4 "data/maps/OreburghCity_House1/scripts.pory"
	lock
# 5 "data/maps/OreburghCity_House1/scripts.pory"
	faceplayer
# 6 "data/maps/OreburghCity_House1/scripts.pory"
	msgbox OreburghCity_House1_EventScript_Mom_Text_0, MSGBOX_AUTOCLOSE
# 10 "data/maps/OreburghCity_House1/scripts.pory"
	release
	return


OreburghCity_House1_EventScript_Youngster::
# 14 "data/maps/OreburghCity_House1/scripts.pory"
	lock
# 15 "data/maps/OreburghCity_House1/scripts.pory"
	faceplayer
# 16 "data/maps/OreburghCity_House1/scripts.pory"
	msgbox OreburghCity_House1_EventScript_Youngster_Text_0, MSGBOX_AUTOCLOSE
# 22 "data/maps/OreburghCity_House1/scripts.pory"
	release
	return


OreburghCity_House1_EventScript_PIKACHU::
# 26 "data/maps/OreburghCity_House1/scripts.pory"
	lock
# 27 "data/maps/OreburghCity_House1/scripts.pory"
	faceplayer
# 28 "data/maps/OreburghCity_House1/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 29 "data/maps/OreburghCity_House1/scripts.pory"
	msgbox OreburghCity_House1_EventScript_PIKACHU_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/OreburghCity_House1/scripts.pory"
	waitmoncry
# 31 "data/maps/OreburghCity_House1/scripts.pory"
	release
	return


OreburghCity_House1_EventScript_Mom_Text_0:
# 6 "data/maps/OreburghCity_House1/scripts.pory"
	.string "You know how Pokémon have different\n"
	.string "natures like we have personalities?\p"
	.string "I don't think its surprising to see\n"
	.string "Pokémon in different colors.$"

OreburghCity_House1_EventScript_Youngster_Text_0:
# 16 "data/maps/OreburghCity_House1/scripts.pory"
	.string "Have you ever seen or heard about\n"
	.string "differently colored Pokémon?\p"
	.string "For instance, a regular PIKACHU has\n"
	.string "a yellow, body, correct?\p"
	.string "Well, the different-colored PIKACHU\n"
	.string "has a sort of orange body.$"

OreburghCity_House1_EventScript_PIKACHU_Text_0:
# 29 "data/maps/OreburghCity_House1/scripts.pory"
	.string "Pikaaah!$"
