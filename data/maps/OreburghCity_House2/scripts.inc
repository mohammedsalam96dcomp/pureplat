OreburghCity_House2_MapScripts::
	.byte 0


OreburghCity_House2_EventScript_Girl::
# 4 "data/maps/OreburghCity_House2/scripts.pory"
	lock
# 5 "data/maps/OreburghCity_House2/scripts.pory"
	faceplayer
# 6 "data/maps/OreburghCity_House2/scripts.pory"
	msgbox OreburghCity_House2_EventScript_Girl_Text_0, MSGBOX_AUTOCLOSE
# 9 "data/maps/OreburghCity_House2/scripts.pory"
	release
	return


OreburghCity_House2_EventScript_Hiker::
# 13 "data/maps/OreburghCity_House2/scripts.pory"
	lock
# 14 "data/maps/OreburghCity_House2/scripts.pory"
	faceplayer
# 15 "data/maps/OreburghCity_House2/scripts.pory"
	msgbox OreburghCity_House2_EventScript_Hiker_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/OreburghCity_House2/scripts.pory"
	release
	return


OreburghCity_House2_EventScript_Girl_Text_0:
# 6 "data/maps/OreburghCity_House2/scripts.pory"
	.string "Roark is a user of Rock-type Pokémon.\p"
	.string "Don't you think Rock-Type Pokémon are\n"
	.string "nice? I like how lumpy they are!$"

OreburghCity_House2_EventScript_Hiker_Text_0:
# 15 "data/maps/OreburghCity_House2/scripts.pory"
	.string "Roark is our town's Gym Leader.\p"
	.string "He may be young, but he keeps the\n"
	.string "mine running safely and efficiently.$"
