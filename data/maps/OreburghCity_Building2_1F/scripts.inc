OreburghCity_Building2_1F_MapScripts::
	.byte 0


OreburghCity_Building2_1F_EventScript_Man::
# 4 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	lock
# 5 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	faceplayer
# 6 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	msgbox OreburghCity_Building2_1F_EventScript_Man_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	release
	return


OreburghCity_Building2_1F_EventScript_Woman::
# 16 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	lock
# 17 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	faceplayer
# 21 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	goto_if_unset FLAG_DID_KAZZA_TRADE, OreburghCity_Building2_1F_EventScript_Woman_2
# 25 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	msgbox OreburghCity_Building2_1F_EventScript_Woman_Text_0, MSGBOX_AUTOCLOSE
OreburghCity_Building2_1F_EventScript_Woman_1:
# 29 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	release
	return

OreburghCity_Building2_1F_EventScript_Woman_2:
# 22 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	ingame_trade INGAME_TRADE_PLUSLE, KazzaTrade, KazzaTradeDecline, KazzaTradeWrongPokemon, KazzaTradeCompleted
# 23 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	setflag FLAG_DID_KAZZA_TRADE
	goto OreburghCity_Building2_1F_EventScript_Woman_1


OreburghCity_Building2_1F_EventScript_OldWoman::
# 33 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	lock
# 34 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	faceplayer
# 35 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	msgbox OreburghCity_Building2_1F_EventScript_OldWoman_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	release
	return


OreburghCity_Building2_1F_EventScript_Man_Text_0:
# 6 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	.string "When you trade a Pokémon, the item it's\n"
	.string "holding is traded as well.\p"
	.string "That's pretty cool, huh?\p"
	.string "It means you can send an item as a gift\n"
	.string "along with your Pokémon in a trade!$"

OreburghCity_Building2_1F_EventScript_Woman_Text_0:
# 25 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	.string "Thanks to Pokémon, I got to be\n"
	.string "friends with you!$"

OreburghCity_Building2_1F_EventScript_OldWoman_Text_0:
# 35 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	.string "A Pokémon obtained in a trade grows\n"
	.string "quickly.\p"
	.string "But if a Pokémon grows too much, it may\n"
	.string "ignore the Trainer.\p"
	.string "Of course, it won't matter if you have\n"
	.string "lots of Gym Badges.$"

KazzaTrade::
# 44 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	.string "Listen, Listen. Do you have a Pokémon\ncalled MACHOP?\pWould you be willing to trade your\nMACHOP for my ABRA?$"

KazzaTradeDecline::
# 48 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	.string "Oh, OK. . .\nWell, I can't make you trade me.\pBut if you change your mind,\nI'll be right here waiting!$"

KazzaTradeWrongPokemon::
# 52 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	.string "What I asked for was a MACHOP. . .$"

KazzaTradeCompleted::
# 56 "data/maps/OreburghCity_Building2_1F/scripts.pory"
	.string "Be nice to my ABRA!\pI'll be sure to look after your MACHOP\nin return!$"
