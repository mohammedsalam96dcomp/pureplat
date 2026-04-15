SandgemTownHouse1_MapScripts::
	.byte 0


SandgemTownHouse1_EventScript_Man::
# 6 "data/maps/SandgemTownHouse1/scripts.pory"
	lock
# 8 "data/maps/SandgemTownHouse1/scripts.pory"
	faceplayer
# 9 "data/maps/SandgemTownHouse1/scripts.pory"
	msgbox SandgemTownHouse1_EventScript_Man_Text_0
# 15 "data/maps/SandgemTownHouse1/scripts.pory"
	closemessage
# 17 "data/maps/SandgemTownHouse1/scripts.pory"
	release
	return


SandgemTownHouse1_EventScript_Woman::
# 22 "data/maps/SandgemTownHouse1/scripts.pory"
	lock
# 24 "data/maps/SandgemTownHouse1/scripts.pory"
	faceplayer
# 25 "data/maps/SandgemTownHouse1/scripts.pory"
	msgbox SandgemTownHouse1_EventScript_Woman_Text_0
# 28 "data/maps/SandgemTownHouse1/scripts.pory"
	closemessage
# 30 "data/maps/SandgemTownHouse1/scripts.pory"
	release
	return


SandgemTownHouse1_EventScript_Man_Text_0:
# 9 "data/maps/SandgemTownHouse1/scripts.pory"
	.string "Pokémon grow steadily stronger from\n"
	.string "battling against other Pokémon.\p"
	.string "At first, you should take it easy,\n"
	.string "though.\p"
	.string "Heal your Pokémon regularly at Pokémon\n"
	.string "Centers while you're leveling them up.$"

SandgemTownHouse1_EventScript_Woman_Text_0:
# 25 "data/maps/SandgemTownHouse1/scripts.pory"
	.string "A good Trainer is one that takes care\n"
	.string "not to let their Pokémon faint from\l"
	.string "losing HP.$"
