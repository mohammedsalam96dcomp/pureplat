# 1 "data/maps/JubilifeCity_Condo_1F/scripts.pory"

# 2 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
JubilifeCity_Condo_1F_MapScripts::
# 3 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	.byte 0

JubilifeCondo1F_EventScript_QuickClaw::
# 6 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	lock
# 7 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	faceplayer
# 8 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_QUICK_CLAW, JubilifeCondo1F_EventScript_QuickClaw_2
# 15 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	msgbox JubilifeCondo1F_EventScript_QuickClaw_Text_1, MSGBOX_AUTOCLOSE
JubilifeCondo1F_EventScript_QuickClaw_1:
# 25 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	release
	return

JubilifeCondo1F_EventScript_QuickClaw_2:
# 9 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	msgbox JubilifeCondo1F_EventScript_QuickClaw_Text_0
# 12 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 13 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
	goto JubilifeCondo1F_EventScript_QuickClaw_1


JubilifeCondo1F_EventScript_OldWoman::
# 29 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	lock
# 30 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	faceplayer
# 31 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	msgbox JubilifeCondo1F_EventScript_OldWoman_Text_0, MSGBOX_AUTOCLOSE
# 37 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	release
	return


JubilifeCondo1F_EventScript_Pikachu::
# 41 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	lock
# 42 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	faceplayer
# 43 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 44 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	msgbox JubilifeCondo1F_EventScript_Pikachu_Text_0, MSGBOX_AUTOCLOSE
# 45 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	waitmoncry
# 46 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	release
	return


JubilifeCondo1F_EventScript_QuickClaw_Text_0:
# 9 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	.string "Oh, your Pokémon is quite adorable!\p"
	.string "Here, try making it hold this\n"
	.string "Quick Claw.$"

JubilifeCondo1F_EventScript_QuickClaw_Text_1:
# 15 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	.string "A Pokémon holding that Quick Claw can\n"
	.string "sometimes attack first, even if it is\l"
	.string "normally a little bit slow.\p"
	.string "There are other items that are only\n"
	.string "useful when given to a Pokémon.\p"
	.string "Try finding other items that you can\n"
	.string "make your Pokémon hold.\p"
	.string ". . .I sound like I'm a teacher or\n"
	.string "something.$"

JubilifeCondo1F_EventScript_OldWoman_Text_0:
# 31 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	.string "Oh, hello, darlings.\n"
	.string "Isn't my Pokétch quite fetching?\p"
	.string "It's the latest design that just came\n"
	.string "out. I obtained it instantly, of course.\p"
	.string "A Trainer would be simply lost without\n"
	.string "a Pokétch, after all.$"

JubilifeCondo1F_EventScript_Pikachu_Text_0:
# 44 "data/maps/JubilifeCity_Condo_1F/scripts.pory"
	.string "Piika pi!$"
