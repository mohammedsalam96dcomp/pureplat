OreburghSouth_MapScripts::
	.byte 0


OreburghCity_EventScript_Breeder::
# 4 "data/maps/OreburghSouth/scripts.pory"
	lock
# 5 "data/maps/OreburghSouth/scripts.pory"
	faceplayer
# 6 "data/maps/OreburghSouth/scripts.pory"
	msgbox OreburghCity_EventScript_Breeder_Text_0, MSGBOX_AUTOCLOSE
# 10 "data/maps/OreburghSouth/scripts.pory"
	release
	return


OreburghCity_EventScript_Worker1::
# 14 "data/maps/OreburghSouth/scripts.pory"
	lock
# 15 "data/maps/OreburghSouth/scripts.pory"
	faceplayer
# 16 "data/maps/OreburghSouth/scripts.pory"
	msgbox OreburghCity_EventScript_Worker1_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/OreburghSouth/scripts.pory"
	release
	return


OreburghCity_EventScript_Worker2::
# 23 "data/maps/OreburghSouth/scripts.pory"
	lock
# 24 "data/maps/OreburghSouth/scripts.pory"
	faceplayer
# 25 "data/maps/OreburghSouth/scripts.pory"
	msgbox OreburghCity_EventScript_Worker2_Text_0, MSGBOX_AUTOCLOSE
# 28 "data/maps/OreburghSouth/scripts.pory"
	release
	return


OreburghCity_EventScript_Breeder_Text_0:
# 6 "data/maps/OreburghSouth/scripts.pory"
	.string "Everyone's proud of the mine.\p"
	.string "They're digging for coal under the\n"
	.string "sea as we speak. . .\p"
	.string "It's amazing how they do it!$"

OreburghCity_EventScript_Worker1_Text_0:
# 16 "data/maps/OreburghSouth/scripts.pory"
	.string "Chop, Chop, MACHOP!\n"
	.string "Chop, chop away on the rocks!$"

OreburghCity_EventScript_Worker2_Text_0:
# 25 "data/maps/OreburghSouth/scripts.pory"
	.string "This pile of dirty sand is called\n"
	.string "a slag heap.\p"
	.string "It's the waste from sorting coal.$"
