# 1 "data/maps/JubilifecityBuilding2F/scripts.pory"

# 2 "data/maps/JubilifecityBuilding2F/scripts.pory"
JubilifecityBuilding2F_MapScripts::
# 3 "data/maps/JubilifecityBuilding2F/scripts.pory"
	.byte 0

JubilifeBuilding2F_EventScript_Youngster::
# 7 "data/maps/JubilifecityBuilding2F/scripts.pory"
	lock
# 8 "data/maps/JubilifecityBuilding2F/scripts.pory"
	faceplayer
# 9 "data/maps/JubilifecityBuilding2F/scripts.pory"
	msgbox JubilifeBuilding2F_EventScript_Youngster_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/JubilifecityBuilding2F/scripts.pory"
	release
	return


JubilifeBuilding2F_EventScript_Breeder::
# 18 "data/maps/JubilifecityBuilding2F/scripts.pory"
	lock
# 19 "data/maps/JubilifecityBuilding2F/scripts.pory"
	faceplayer
# 20 "data/maps/JubilifecityBuilding2F/scripts.pory"
	msgbox JubilifeBuilding2F_EventScript_Breeder_Text_0, MSGBOX_AUTOCLOSE
# 24 "data/maps/JubilifecityBuilding2F/scripts.pory"
	release
	return


JubilifeBuilding2F_EventScript_Woman::
# 28 "data/maps/JubilifecityBuilding2F/scripts.pory"
	lock
# 29 "data/maps/JubilifecityBuilding2F/scripts.pory"
	faceplayer
# 30 "data/maps/JubilifecityBuilding2F/scripts.pory"
	msgbox JubilifeBuilding2F_EventScript_Woman_Text_0, MSGBOX_AUTOCLOSE
# 32 "data/maps/JubilifecityBuilding2F/scripts.pory"
	release
	return


JubilifeBuilding2F_EventScript_Youngster_Text_0:
# 9 "data/maps/JubilifecityBuilding2F/scripts.pory"
	.string "Did you know?\p"
	.string "Some kinds of Pokémon evolve when\n"
	.string "they get stronger from battling!\p"
	.string "When they evolve, they can take on\n"
	.string "completely different forms!$"

JubilifeBuilding2F_EventScript_Breeder_Text_0:
# 20 "data/maps/JubilifecityBuilding2F/scripts.pory"
	.string "Evolution makes Pokémon just that\n"
	.string "much more fascinating.\p"
	.string "The mysteries of evolution. . . Can that\n"
	.string "dandy Prof. Rowan unravel them?$"

JubilifeBuilding2F_EventScript_Woman_Text_0:
# 30 "data/maps/JubilifecityBuilding2F/scripts.pory"
	.string "Didn't Prof. Rowan conduct research\n"
	.string "with Prof. Oak of the Kanto region?$"
