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


# 15 "data/maps/SandgemTownMart/scripts.pory"

# 16 "data/maps/SandgemTownMart/scripts.pory"
SandgemTown_Mart:
# 17 "data/maps/SandgemTownMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/SandgemTownMart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/SandgemTownMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 20 "data/maps/SandgemTownMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
