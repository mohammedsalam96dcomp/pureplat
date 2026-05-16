SandgemTownMart_MapScripts::
	.byte 0


SandgemTown_Mart_EventScript_Clerk::
# 5 "data/maps/SandgemTownMart/scripts.pory"
	lock
# 6 "data/maps/SandgemTownMart/scripts.pory"
	faceplayer
# 7 "data/maps/SandgemTownMart/scripts.pory"
	message gText_HowMayIServeYou
# 8 "data/maps/SandgemTownMart/scripts.pory"
	waitmessage
# 9 "data/maps/SandgemTownMart/scripts.pory"
	pokemart SandgemTown_Mart
# 10 "data/maps/SandgemTownMart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 11 "data/maps/SandgemTownMart/scripts.pory"
	release
	end


	.align 2
# 15 "data/maps/SandgemTownMart/scripts.pory"
SandgemTown_Mart:
# 16 "data/maps/SandgemTownMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 17 "data/maps/SandgemTownMart/scripts.pory"
	.2byte ITEM_POTION
# 18 "data/maps/SandgemTownMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 19 "data/maps/SandgemTownMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

SandgemTown_Mart_EventScript_SchoolKid::
# 23 "data/maps/SandgemTownMart/scripts.pory"
	lock
# 25 "data/maps/SandgemTownMart/scripts.pory"
	faceplayer
# 26 "data/maps/SandgemTownMart/scripts.pory"
	msgbox SandgemTown_Mart_EventScript_SchoolKid_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/SandgemTownMart/scripts.pory"
	release
	return


SandgemTown_Mart_EventScript_Man::
# 33 "data/maps/SandgemTownMart/scripts.pory"
	lock
# 35 "data/maps/SandgemTownMart/scripts.pory"
	faceplayer
# 36 "data/maps/SandgemTownMart/scripts.pory"
	msgbox SandgemTown_Mart_EventScript_Man_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/SandgemTownMart/scripts.pory"
	release
	return


SandgemTown_Mart_EventScript_SchoolKid_Text_0:
# 26 "data/maps/SandgemTownMart/scripts.pory"
	.string "If you come across a Pokémon you've\n"
	.string "just gotta have, toss a Poké Ball!\p"
	.string "Never leave home without one!$"

SandgemTown_Mart_EventScript_Man_Text_0:
# 36 "data/maps/SandgemTownMart/scripts.pory"
	.string "If a Pokémon loses all its HP,\n"
	.string "it can't battle anymore.\p"
	.string "I'm buying lots of Potions to avoid\n"
	.string "having that happen!$"
