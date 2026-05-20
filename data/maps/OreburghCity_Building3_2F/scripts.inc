OreburghCity_Building3_2F_MapScripts::
	.byte 0


OreburghCity_Building3_1F_EventScript_Youngster::
# 4 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	lock
# 5 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	faceplayer
# 6 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OREBURGH_GREAT_BALL, OreburghCity_Building3_1F_EventScript_Youngster_2
OreburghCity_Building3_1F_EventScript_Youngster_1:
# 14 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	msgbox OreburghCity_Building3_1F_EventScript_Youngster_Text_1, MSGBOX_AUTOCLOSE
# 18 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	release
	return

OreburghCity_Building3_1F_EventScript_Youngster_2:
# 7 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	msgbox OreburghCity_Building3_1F_EventScript_Youngster_Text_0
# 11 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	giveitem ITEM_GREAT_BALL, 1
# 12 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	setflag FLAG_RECEIVED_OREBURGH_GREAT_BALL
	goto OreburghCity_Building3_1F_EventScript_Youngster_1


OreburghCity_Building3_1F_EventScript_GentleMan::
# 23 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	lock
# 24 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	faceplayer
# 25 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	msgbox OreburghCity_Building3_1F_EventScript_GentleMan_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	release
	return


OreburghCity_Building3_1F_EventScript_Scientist::
# 33 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	lock
# 34 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	faceplayer
# 35 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	msgbox OreburghCity_Building3_1F_EventScript_Scientist_Text_0, MSGBOX_AUTOCLOSE
# 39 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	release
	return


OreburghCity_Building3_1F_EventScript_Youngster_Text_0:
# 7 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	.string "Wow. . . Your Pokémon's eyes are\n"
	.string "twinkling brightly!\p"
	.string "Seeing that makes me happy!\n"
	.string "Here, I want you to have this!$"

OreburghCity_Building3_1F_EventScript_Youngster_Text_1:
# 14 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	.string "You know how Pokémon stay inside\n"
	.string "their Poké Balls?\p"
	.string "I try to think about what would be\n"
	.string "the best Poké Balls for them.$"

OreburghCity_Building3_1F_EventScript_GentleMan_Text_0:
# 25 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	.string "The Oreburgh Mine is operated\n"
	.string "with the utmost care.\p"
	.string "We avoided causing any damage to\n"
	.string "the natural habitats of Pokémon.$"

OreburghCity_Building3_1F_EventScript_Scientist_Text_0:
# 35 "data/maps/OreburghCity_Building3_2F/scripts.pory"
	.string "Coal is carred out of Oreburgh Mine on\n"
	.string "a fully automated system.\p"
	.string "Machines do all the work automatically.\n"
	.string "So, it's all very easy.$"
