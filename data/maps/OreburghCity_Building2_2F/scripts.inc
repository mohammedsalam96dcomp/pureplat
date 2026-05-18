OreburghCity_Building2_2F_MapScripts::
	.byte 0


OreburghCity_Building2_2F_EventScript_Guitarist::
# 4 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	lock
# 5 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	faceplayer
# 6 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	msgbox OreburghCity_Building2_2F_EventScript_Guitarist_Text_0, MSGBOX_AUTOCLOSE
# 8 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	release
	return


OreburghCity_Building2_2F_EventScript_FatMan::
# 12 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	lock
# 13 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	faceplayer
# 15 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	goto_if_unset FLAG_SHOWN_GEODUDE, OreburghCity_Building2_2F_EventScript_FatMan_2
# 34 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	msgbox OreburghCity_Building2_2F_EventScript_FatMan_Text_2, MSGBOX_AUTOCLOSE
OreburghCity_Building2_2F_EventScript_FatMan_1:
# 38 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	release
	return

OreburghCity_Building2_2F_EventScript_FatMan_2:
# 16 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	msgbox OreburghCity_Building2_2F_EventScript_FatMan_Text_0
# 20 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	checkspecies SPECIES_GEODUDE, NO_PARTY_SCREEN
# 21 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OreburghCity_Building2_2F_EventScript_FatMan_5
	goto OreburghCity_Building2_2F_EventScript_FatMan_1

OreburghCity_Building2_2F_EventScript_FatMan_5:
# 22 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	msgbox OreburghCity_Building2_2F_EventScript_FatMan_Text_1
# 30 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	giveitem ITEM_HEAL_BALL, 1
# 31 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	setflag FLAG_SHOWN_GEODUDE
	goto OreburghCity_Building2_2F_EventScript_FatMan_1


OreburghCity_Building2_2F_EventScript_Woman::
# 42 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	lock
# 43 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	faceplayer
# 44 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	msgbox OreburghCity_Building2_2F_EventScript_Woman_Text_0, MSGBOX_AUTOCLOSE
# 48 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	release
	return


OreburghCity_Building2_2F_EventScript_Guitarist_Text_0:
# 6 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	.string "All Pokémon have a special power\n"
	.string "called an ability.$"

OreburghCity_Building2_2F_EventScript_FatMan_Text_0:
# 16 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	.string "The view is good from the second floor,\n"
	.string "but it's a pain going outside.\p"
	.string "If you don't mind, how about showing me\n"
	.string "a Pokémon called GEODUDE?$"

OreburghCity_Building2_2F_EventScript_FatMan_Text_1:
# 22 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	.string "Oh! That Pokémon!\n"
	.string "That's a GEODUDE!\p"
	.string "Wow, that's cool. . .\n"
	.string "It's so cute. . .\p"
	.string "That does it!\n"
	.string "I'll go out and catch Pokémon, too!\p"
	.string "Thank you, my friend!\n"
	.string "This is a token of my thanks!$"

OreburghCity_Building2_2F_EventScript_FatMan_Text_2:
# 34 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	.string "Yeah, there are so many kinds of\n"
	.string "Pokémon out in the world.\p"
	.string "I want to see them all now!$"

OreburghCity_Building2_2F_EventScript_Woman_Text_0:
# 44 "data/maps/OreburghCity_Building2_2F/scripts.pory"
	.string "My favorite Pokémon ability is my\n"
	.string "PACHIRISU's Pickup.\p"
	.string "My darling picks up a lot of dropped\n"
	.string "items without me noticing!$"
