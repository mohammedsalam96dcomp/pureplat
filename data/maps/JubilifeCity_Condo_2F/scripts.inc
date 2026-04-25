# 1 "data/maps/JubilifeCity_Condo_2F/scripts.pory"

# 2 "data/maps/JubilifeCity_Condo_2F/scripts.pory"
JubilifeCity_Condo_2F_MapScripts::
# 3 "data/maps/JubilifeCity_Condo_2F/scripts.pory"
	.byte 0

JubilifeCondo2F_EventScript_Man::
# 7 "data/maps/JubilifeCity_Condo_2F/scripts.pory"
	lock
# 8 "data/maps/JubilifeCity_Condo_2F/scripts.pory"
	faceplayer
# 9 "data/maps/JubilifeCity_Condo_2F/scripts.pory"
	msgbox JubilifeCondo2F_EventScript_Man_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/JubilifeCity_Condo_2F/scripts.pory"
	release
	return


JubilifeCondo2F_EventScript_BugCatcher::
# 21 "data/maps/JubilifeCity_Condo_2F/scripts.pory"
	lock
# 22 "data/maps/JubilifeCity_Condo_2F/scripts.pory"
	faceplayer
# 23 "data/maps/JubilifeCity_Condo_2F/scripts.pory"
	msgbox JubilifeCondo2F_EventScript_BugCatcher_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/JubilifeCity_Condo_2F/scripts.pory"
	release
	return


JubilifeCondo2F_EventScript_Man_Text_0:
# 9 "data/maps/JubilifeCity_Condo_2F/scripts.pory"
	.string "Did you buy some Heal Balls at the\n"
	.string "Poké Mart?\p"
	.string "A Heal Ball completely heals the\n"
	.string "Pokémon it captures on the spot.\p"
	.string "That means you can catch a Pokémon\n"
	.string "and have it battle-ready right away.\p"
	.string "Of course, if your team has six\n"
	.string "Pokémon in it, it won't do any good.$"

JubilifeCondo2F_EventScript_BugCatcher_Text_0:
# 23 "data/maps/JubilifeCity_Condo_2F/scripts.pory"
	.string "I like how Pokémon can use attacks.\n"
	.string "That makes things fun and different.\p"
	.string "Sometimes, when they get stronger,\n"
	.string "Pokémon learn new moves.\p"
	.string "That keeps things fresh and fun when\n"
	.string "using moves.$"
