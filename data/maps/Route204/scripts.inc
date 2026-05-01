Route204_MapScripts::
	.byte 0


Route204_EventScript_Sarah::
# 6 "data/maps/Route204/scripts.pory"
	trainerbattle_single TRAINER_SARAH, Route204_Text_SarahIntro, Route204_Text_SarahDefeated
# 11 "data/maps/Route204/scripts.pory"
	msgbox Route204_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
	end


Route204_EventScript_Tyler::
# 16 "data/maps/Route204/scripts.pory"
	trainerbattle_single TRAINER_TYLER, Route204_Text_TylerIntro, Route204_Text_TylerDefeated
# 21 "data/maps/Route204/scripts.pory"
	msgbox Route204_Text_TylerPostBattle, MSGBOX_AUTOCLOSE
	end


Route204_EventScript_Samantha::
# 26 "data/maps/Route204/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, Route204_Text_SamanthaIntro, Route204_Text_SamanthaDefeated
# 31 "data/maps/Route204/scripts.pory"
	msgbox Route204_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
	end


Route204_EventScript_Youngster::
# 36 "data/maps/Route204/scripts.pory"
	lock
# 38 "data/maps/Route204/scripts.pory"
	faceplayer
# 39 "data/maps/Route204/scripts.pory"
	msgbox Route204_EventScript_Youngster_Text_0, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route204/scripts.pory"
	release
	return


Route204_EventScript_Youngster_Text_0:
# 39 "data/maps/Route204/scripts.pory"
	.string "There are boulders blocking the way\n"
	.string "inside the cavern. . .\p"
	.string "I think a Pokémon's hidden move will be\n"
	.string "able to smash those boulders, though.$"
