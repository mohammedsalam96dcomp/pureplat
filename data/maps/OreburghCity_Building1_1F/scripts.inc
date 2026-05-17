OreburghCity_Building1_1F_MapScripts::
	.byte 0


OreburghCity_Building1_1F_EventScript_Breeder::
# 4 "data/maps/OreburghCity_Building1_1F/scripts.pory"
	lock
# 5 "data/maps/OreburghCity_Building1_1F/scripts.pory"
	faceplayer
# 6 "data/maps/OreburghCity_Building1_1F/scripts.pory"
	msgbox OreburghCity_Building1_1F_EventScript_Breeder_Text_0, MSGBOX_AUTOCLOSE
# 9 "data/maps/OreburghCity_Building1_1F/scripts.pory"
	release
	return


OreburghCity_Building1_1F_EventScript_Man::
# 13 "data/maps/OreburghCity_Building1_1F/scripts.pory"
	lock
# 14 "data/maps/OreburghCity_Building1_1F/scripts.pory"
	faceplayer
# 15 "data/maps/OreburghCity_Building1_1F/scripts.pory"
	msgbox OreburghCity_Building1_1F_EventScript_Man_Text_0, MSGBOX_AUTOCLOSE
# 22 "data/maps/OreburghCity_Building1_1F/scripts.pory"
	release
	return


OreburghCity_Building1_1F_EventScript_Youngster::
# 26 "data/maps/OreburghCity_Building1_1F/scripts.pory"
	lock
# 27 "data/maps/OreburghCity_Building1_1F/scripts.pory"
	faceplayer
# 28 "data/maps/OreburghCity_Building1_1F/scripts.pory"
	msgbox OreburghCity_Building1_1F_EventScript_Youngster_Text_0, MSGBOX_AUTOCLOSE
# 34 "data/maps/OreburghCity_Building1_1F/scripts.pory"
	release
	return


OreburghCity_Building1_1F_EventScript_Breeder_Text_0:
# 6 "data/maps/OreburghCity_Building1_1F/scripts.pory"
	.string "Roark lets us train our Pokémon in\n"
	.string "the mine.$"

OreburghCity_Building1_1F_EventScript_Man_Text_0:
# 15 "data/maps/OreburghCity_Building1_1F/scripts.pory"
	.string "There are eight Gym Leaders in the\n"
	.string "Sinnoh region.\p"
	.string "The objective for Trainers is to get\n"
	.string "Gym Badges from them all.\p"
	.string "That means you have to defeeat all of\n"
	.string "them in battles at their Gyms!$"

OreburghCity_Building1_1F_EventScript_Youngster_Text_0:
# 28 "data/maps/OreburghCity_Building1_1F/scripts.pory"
	.string "A Gym Leader isnt like just any Trainer\n"
	.string "you meet.\p"
	.string "Obviously, they're a lot tougher.\n"
	.string "A lot.\p"
	.string "I'd take as many Pokémon as possible\n"
	.string "if I were you.$"
