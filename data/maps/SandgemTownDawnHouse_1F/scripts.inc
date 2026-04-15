SandgemTownDawnHouse_1F_MapScripts::
	.byte 0


SandgemTownDawnHouse1F_EventScript_Grandpa::
# 5 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	lock
# 7 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	faceplayer
# 8 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	msgbox SandgemTownDawnHouse1F_EventScript_Grandpa_Text_0
# 14 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	closemessage
# 16 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	release
	return


SandgemTownDawnHouse1F_EventScript_Sister::
# 20 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	lock
# 22 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	checkplayergender
# 23 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	faceplayer
# 24 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	msgbox SandgemTownDawnHouse1F_EventScript_Sister_Text_0
# 30 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SandgemTownDawnHouse1F_EventScript_Sister_2
# 34 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	msgbox SandgemTownDawnHouse1F_EventScript_Sister_Text_2
SandgemTownDawnHouse1F_EventScript_Sister_1:
# 37 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	closemessage
# 39 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	release
	return

SandgemTownDawnHouse1F_EventScript_Sister_2:
# 31 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	msgbox SandgemTownDawnHouse1F_EventScript_Sister_Text_1
	goto SandgemTownDawnHouse1F_EventScript_Sister_1


SandgemTownDawnHouse1F_EventScript_Grandpa_Text_0:
# 8 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	.string "Ah, so that Rowan fellow is back?\n"
	.string "He's quite the remarkable man.\p"
	.string "He's been studying Pokémon since way,\n"
	.string "way back.\p"
	.string "My son and grandchild help Rowan\n"
	.string "with his studies now.$"

SandgemTownDawnHouse1F_EventScript_Sister_Text_0:
# 24 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	.string "Who are you?\p"
	.string ". . .\p"
	.string "Oh. . .\n"
	.string "You're {PLAYER}?\p"
	.string "You're doing that Pokédex thingy\n"
	.string "for the professor!$"

SandgemTownDawnHouse1F_EventScript_Sister_Text_1:
# 31 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	.string "Wow! That's the same as my big\n"
	.string "sister! Go for it!$"

SandgemTownDawnHouse1F_EventScript_Sister_Text_2:
# 34 "data/maps/SandgemTownDawnHouse_1F/scripts.pory"
	.string "Wow! That's the same as my big\n"
	.string "brother! Go for it!$"
