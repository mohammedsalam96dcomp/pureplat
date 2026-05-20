OreburghCity_Building3_1F_MapScripts::
	.byte 0


OreburghCity_Building3_1F_EventScript_AceTrainer::
# 4 "data/maps/OreburghCity_Building3_1F/scripts.pory"
	lock
# 5 "data/maps/OreburghCity_Building3_1F/scripts.pory"
	faceplayer
# 6 "data/maps/OreburghCity_Building3_1F/scripts.pory"
	msgbox OreburghCity_Building3_1F_EventScript_AceTrainer_Text_0, MSGBOX_AUTOCLOSE
# 8 "data/maps/OreburghCity_Building3_1F/scripts.pory"
	release
	return


OreburghCity_Building3_1F_EventScript_Hiker::
# 12 "data/maps/OreburghCity_Building3_1F/scripts.pory"
	lock
# 13 "data/maps/OreburghCity_Building3_1F/scripts.pory"
	faceplayer
# 14 "data/maps/OreburghCity_Building3_1F/scripts.pory"
	msgbox OreburghCity_Building3_1F_EventScript_Hiker_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/OreburghCity_Building3_1F/scripts.pory"
	release
	return


OreburghCity_Building3_1F_EventScript_Balding_Man::
# 21 "data/maps/OreburghCity_Building3_1F/scripts.pory"
	lock
# 22 "data/maps/OreburghCity_Building3_1F/scripts.pory"
	faceplayer
# 23 "data/maps/OreburghCity_Building3_1F/scripts.pory"
	msgbox OreburghCity_Building3_1F_EventScript_Balding_Man_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/OreburghCity_Building3_1F/scripts.pory"
	release
	return


OreburghCity_Building3_1F_EventScript_AceTrainer_Text_0:
# 6 "data/maps/OreburghCity_Building3_1F/scripts.pory"
	.string "You remind me so much of the time\n"
	.string "I got my first Pokémon.$"

OreburghCity_Building3_1F_EventScript_Hiker_Text_0:
# 14 "data/maps/OreburghCity_Building3_1F/scripts.pory"
	.string "I always have a rotten time trying\n"
	.string "to decide which moves my Pokémon\l"
	.string "should learn.$"

OreburghCity_Building3_1F_EventScript_Balding_Man_Text_0:
# 23 "data/maps/OreburghCity_Building3_1F/scripts.pory"
	.string "Hiya! Your Pokémon could use some\n"
	.string "toughening up.\p"
	.string "Why not try training in\n"
	.string "the Oreburgh Mine?$"
