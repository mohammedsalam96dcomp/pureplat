JubilifeCity_Mart_MapScripts::
	.byte 0


Jubilife_Mart_EventScript_Clerk::
# 4 "data/maps/JubilifeCity_Mart/scripts.pory"
	lock
# 5 "data/maps/JubilifeCity_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/JubilifeCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/JubilifeCity_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/JubilifeCity_Mart/scripts.pory"
	pokemart JubilifeCity_Mart
# 9 "data/maps/JubilifeCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 10 "data/maps/JubilifeCity_Mart/scripts.pory"
	release
	end


	.align 2
# 14 "data/maps/JubilifeCity_Mart/scripts.pory"
JubilifeCity_Mart:
# 15 "data/maps/JubilifeCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 16 "data/maps/JubilifeCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 17 "data/maps/JubilifeCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 18 "data/maps/JubilifeCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

Jubilife_Mart_EventScript_Beauty::
# 22 "data/maps/JubilifeCity_Mart/scripts.pory"
	lock
# 24 "data/maps/JubilifeCity_Mart/scripts.pory"
	faceplayer
# 25 "data/maps/JubilifeCity_Mart/scripts.pory"
	msgbox Jubilife_Mart_EventScript_Beauty_Text_0, MSGBOX_AUTOCLOSE
# 31 "data/maps/JubilifeCity_Mart/scripts.pory"
	release
	return


Jubilife_Mart_EventScript_Guitarist::
# 35 "data/maps/JubilifeCity_Mart/scripts.pory"
	lock
# 37 "data/maps/JubilifeCity_Mart/scripts.pory"
	faceplayer
# 38 "data/maps/JubilifeCity_Mart/scripts.pory"
	msgbox Jubilife_Mart_EventScript_Guitarist_Text_0, MSGBOX_AUTOCLOSE
# 42 "data/maps/JubilifeCity_Mart/scripts.pory"
	release
	return


Jubilife_Mart_EventScript_Breeder::
# 46 "data/maps/JubilifeCity_Mart/scripts.pory"
	lock
# 48 "data/maps/JubilifeCity_Mart/scripts.pory"
	faceplayer
# 49 "data/maps/JubilifeCity_Mart/scripts.pory"
	msgbox Jubilife_Mart_EventScript_Breeder_Text_0, MSGBOX_AUTOCLOSE
# 53 "data/maps/JubilifeCity_Mart/scripts.pory"
	release
	return


Jubilife_Mart_EventScript_Beauty_Text_0:
# 25 "data/maps/JubilifeCity_Mart/scripts.pory"
	.string "Potions are important, but sometimes,\n"
	.string "it's better to simply avoid battles.\p"
	.string "If you want to avoid wild Pokémon for a\n"
	.string "while, just use a Repel.\p"
	.string "After all, if you don't battle, your\n"
	.string "Pokémon can't lose HP.$"

Jubilife_Mart_EventScript_Guitarist_Text_0:
# 38 "data/maps/JubilifeCity_Mart/scripts.pory"
	.string "Aww, man.\n"
	.string "I wasted money on some Poké Balls.\p"
	.string "I should've lowered the HP of wild\n"
	.string "Pokémon more before throwing them.$"

Jubilife_Mart_EventScript_Breeder_Text_0:
# 49 "data/maps/JubilifeCity_Mart/scripts.pory"
	.string "The one thing you must remember is to\n"
	.string "pack some Potions.\p"
	.string "If all your Pokémon faint, it'll be\n"
	.string "lights out for you you, too!$"
