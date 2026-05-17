OreburghCity_House3_MapScripts::
	.byte 0


OreburghCity_House2_EventScript_Worker::
# 4 "data/maps/OreburghCity_House3/scripts.pory"
	lock
# 5 "data/maps/OreburghCity_House3/scripts.pory"
	faceplayer
# 6 "data/maps/OreburghCity_House3/scripts.pory"
	msgbox OreburghCity_House2_EventScript_Worker_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/OreburghCity_House3/scripts.pory"
	release
	return


OreburghCity_House2_EventScript_Worker_Text_0:
# 6 "data/maps/OreburghCity_House3/scripts.pory"
	.string "You're taking a tour of our coal mine?\p"
	.string "Wonderful!\n"
	.string "That's excellent of you.\p"
	.string "It's always good to learn about new\n"
	.string "things and broaden your horizons!$"
