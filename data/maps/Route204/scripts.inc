Route204_MapScripts::
	.byte 0


Route204_EventScript_Sarah::
# 6 "data/maps/Route204/scripts.pory"
	trainerbattle_single TRAINER_SARAH, Route204_EventScript_Sarah_Text_0, Route204_EventScript_Sarah_Text_1
# 11 "data/maps/Route204/scripts.pory"
	msgbox Route204_EventScript_Sarah_Text_2, MSGBOX_AUTOCLOSE
	end


Route204_EventScript_Tyler::
# 16 "data/maps/Route204/scripts.pory"
	trainerbattle_single TRAINER_TYLER, Route204_EventScript_Tyler_Text_0, Route204_EventScript_Tyler_Text_1
# 21 "data/maps/Route204/scripts.pory"
	msgbox Route204_EventScript_Tyler_Text_2, MSGBOX_AUTOCLOSE
	end


Route204_EventScript_Samantha::
# 26 "data/maps/Route204/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, Route204_EventScript_Samantha_Text_0, Route204_EventScript_Samantha_Text_1
# 31 "data/maps/Route204/scripts.pory"
	msgbox Route204_EventScript_Samantha_Text_2, MSGBOX_AUTOCLOSE
	end


Route204_EventScript_Sarah_Text_0:
# 8 "data/maps/Route204/scripts.pory"
	.string "Oh, a weak-looking Trainer. . .\n"
	.string "Do you want to have a go?$"

Route204_EventScript_Sarah_Text_1:
# 9 "data/maps/Route204/scripts.pory"
	.string "Aww. . .\n"
	.string "I should have said no.$"

Route204_EventScript_Sarah_Text_2:
# 11 "data/maps/Route204/scripts.pory"
	.string "Oh, you're so mean!\nI just started training Pokémon!$"

Route204_EventScript_Tyler_Text_0:
# 18 "data/maps/Route204/scripts.pory"
	.string "I'll beat you with the MAGIKARP my dad\n"
	.string "gave me!$"

Route204_EventScript_Tyler_Text_1:
# 19 "data/maps/Route204/scripts.pory"
	.string "But they're Pokémon I got from my\n"
	.string "dad. . .$"

Route204_EventScript_Tyler_Text_2:
# 21 "data/maps/Route204/scripts.pory"
	.string "Who gave you your first Pokémon?\pYour first Pokémon is the one with\nthe most fond memories, I think.$"

Route204_EventScript_Samantha_Text_0:
# 28 "data/maps/Route204/scripts.pory"
	.string "May I please trouble you for a\n"
	.string "battle?$"

Route204_EventScript_Samantha_Text_1:
# 29 "data/maps/Route204/scripts.pory"
	.string "Oh...\n"
	.string "You’re so strong. . .$"

Route204_EventScript_Samantha_Text_2:
# 31 "data/maps/Route204/scripts.pory"
	.string "Maybe I could have won if my Pokémon\nwas holding a Berry. . .$"
