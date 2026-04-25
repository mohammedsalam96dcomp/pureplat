# 1 "data/maps/JubilifecityBuilding1F/scripts.pory"

# 2 "data/maps/JubilifecityBuilding1F/scripts.pory"
JubilifecityBuilding1F_MapScripts::
# 3 "data/maps/JubilifecityBuilding1F/scripts.pory"
	.byte 0

JubilifeBuilding1F_EventScript_AceTrainerM::
# 7 "data/maps/JubilifecityBuilding1F/scripts.pory"
	lock
# 8 "data/maps/JubilifecityBuilding1F/scripts.pory"
	faceplayer
# 9 "data/maps/JubilifecityBuilding1F/scripts.pory"
	msgbox JubilifeBuilding1F_EventScript_AceTrainerM_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/JubilifecityBuilding1F/scripts.pory"
	release
	return


JubilifeBuilding1F_EventScript_AceTrainerF::
# 18 "data/maps/JubilifecityBuilding1F/scripts.pory"
	lock
# 19 "data/maps/JubilifecityBuilding1F/scripts.pory"
	faceplayer
# 20 "data/maps/JubilifecityBuilding1F/scripts.pory"
	msgbox JubilifeBuilding1F_EventScript_AceTrainerF_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/JubilifecityBuilding1F/scripts.pory"
	release
	return


JubilifeBuilding1F_EventScript_AceTrainerM_Text_0:
# 9 "data/maps/JubilifecityBuilding1F/scripts.pory"
	.string "Pokémon are wonderful, deeply\n"
	.string "mysterious creatures.\p"
	.string "But to Trainers, the key thing is to do\n"
	.string "battle with their Pokémon.\p"
	.string "That's what it boils down to.$"

JubilifeBuilding1F_EventScript_AceTrainerF_Text_0:
# 20 "data/maps/JubilifecityBuilding1F/scripts.pory"
	.string "Hello there, Trainer!\p"
	.string "If you get stumped and don't know\n"
	.string "what to do. . .\p"
	.string "Talk to people!\n"
	.string "Talk to everyone you see!\p"
	.string "Go places!\n"
	.string "Go everywhere you can!\p"
	.string "You'll find many new places by\n"
	.string "doing just that.$"
