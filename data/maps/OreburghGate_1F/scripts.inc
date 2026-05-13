OreburghGate_1F_MapScripts::
	.byte 0


OreburghGate_1F_EventScript_HikerTrigger::
# 5 "data/maps/OreburghGate_1F/scripts.pory"
	lock
# 7 "data/maps/OreburghGate_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OreburghGate_1F_EventScript_HikerTrigger_Movement_0
# 8 "data/maps/OreburghGate_1F/scripts.pory"
	applymovement 1, OreburghGate_1F_EventScript_HikerTrigger_Movement_1
# 9 "data/maps/OreburghGate_1F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 11 "data/maps/OreburghGate_1F/scripts.pory"
	playse SE_PIN
# 12 "data/maps/OreburghGate_1F/scripts.pory"
	applymovement 1, OreburghGate_1F_EventScript_HikerTrigger_Movement_2
# 13 "data/maps/OreburghGate_1F/scripts.pory"
	waitmovement 1
# 14 "data/maps/OreburghGate_1F/scripts.pory"
	waitse
# 16 "data/maps/OreburghGate_1F/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 18 "data/maps/OreburghGate_1F/scripts.pory"
	applymovement 1, OreburghGate_1F_EventScript_HikerTrigger_Movement_3
# 19 "data/maps/OreburghGate_1F/scripts.pory"
	waitmovement 1
# 21 "data/maps/OreburghGate_1F/scripts.pory"
	goto OreburghGate_1F_EventScript_HikerGivesRockSmash
# 22 "data/maps/OreburghGate_1F/scripts.pory"
	release
	return


OreburghGate_1F_EventScript_Hiker::
# 26 "data/maps/OreburghGate_1F/scripts.pory"
	lock
# 28 "data/maps/OreburghGate_1F/scripts.pory"
	faceplayer
# 29 "data/maps/OreburghGate_1F/scripts.pory"
	goto OreburghGate_1F_EventScript_HikerGivesRockSmash
# 30 "data/maps/OreburghGate_1F/scripts.pory"
	release
	return


OreburghGate_1F_EventScript_HikerGivesRockSmash::
# 34 "data/maps/OreburghGate_1F/scripts.pory"
	lock
# 36 "data/maps/OreburghGate_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_ROCK_SMASH, OreburghGate_1F_EventScript_HikerGivesRockSmash_2
# 50 "data/maps/OreburghGate_1F/scripts.pory"
	msgbox RockSmashText
OreburghGate_1F_EventScript_HikerGivesRockSmash_1:
# 52 "data/maps/OreburghGate_1F/scripts.pory"
	release
	return

OreburghGate_1F_EventScript_HikerGivesRockSmash_2:
# 37 "data/maps/OreburghGate_1F/scripts.pory"
	msgbox OreburghGate_1F_EventScript_HikerGivesRockSmash_Text_0
# 45 "data/maps/OreburghGate_1F/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH, 1
# 46 "data/maps/OreburghGate_1F/scripts.pory"
	msgbox RockSmashText
# 47 "data/maps/OreburghGate_1F/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 48 "data/maps/OreburghGate_1F/scripts.pory"
	setvar VAR_OREBURGH_GATE_STATE, 2
	goto OreburghGate_1F_EventScript_HikerGivesRockSmash_1


OreburghGate_1F_EventScript_Curtis::
# 69 "data/maps/OreburghGate_1F/scripts.pory"
	trainerbattle_single TRAINER_CURTIS, Camper_CurtisIntro, Camper_CurtisDefeat
# 74 "data/maps/OreburghGate_1F/scripts.pory"
	msgbox Camper_CurtisPostBattle, MSGBOX_AUTOCLOSE
	end


OreburghGate_1F_EventScript_Diana::
# 79 "data/maps/OreburghGate_1F/scripts.pory"
	trainerbattle_single TRAINER_DIANA, Picnicker_DianaIntro, Picnicker_DianaDefeat
# 84 "data/maps/OreburghGate_1F/scripts.pory"
	msgbox Picnicker_DianaPostBattle, MSGBOX_AUTOCLOSE
	end


# 7 "data/maps/OreburghGate_1F/scripts.pory"
OreburghGate_1F_EventScript_HikerTrigger_Movement_0:
# 7 "data/maps/OreburghGate_1F/scripts.pory"
	delay_16
# 7 "data/maps/OreburghGate_1F/scripts.pory"
	walk_in_place_up
	step_end

# 8 "data/maps/OreburghGate_1F/scripts.pory"
OreburghGate_1F_EventScript_HikerTrigger_Movement_1:
# 8 "data/maps/OreburghGate_1F/scripts.pory"
	walk_in_place_down
	step_end

# 12 "data/maps/OreburghGate_1F/scripts.pory"
OreburghGate_1F_EventScript_HikerTrigger_Movement_2:
# 12 "data/maps/OreburghGate_1F/scripts.pory"
	emote_exclamation_mark
# 12 "data/maps/OreburghGate_1F/scripts.pory"
	delay_16
# 12 "data/maps/OreburghGate_1F/scripts.pory"
	delay_16
	step_end

# 18 "data/maps/OreburghGate_1F/scripts.pory"
OreburghGate_1F_EventScript_HikerTrigger_Movement_3:
# 18 "data/maps/OreburghGate_1F/scripts.pory"
	walk_down
	step_end

OreburghGate_1F_EventScript_HikerGivesRockSmash_Text_0:
# 37 "data/maps/OreburghGate_1F/scripts.pory"
	.string "That sparkling new Pokétch!\n"
	.string "Your awkwardness as a traveler!\p"
	.string "Hmm. . . You're still a pretty new\n"
	.string "Trainer, aren't you?\p"
	.string "But it's all good! You're a new fellow\n"
	.string "friend of Pokémon!\p"
	.string "So, let me make a gift of this Hidden\n"
	.string "Machine to you!$"

RockSmashText::
# 55 "data/maps/OreburghGate_1F/scripts.pory"
	.string "That Hidden Machine, or HM for short,\n"
	.string "contains the hidden move Rock Smash.\p"
	.string "A Pokémon learning Rock Smash can\n"
	.string "smash small boulders in the field.\p"
	.string "But the Trainer has to have\n"
	.string "the Gym Badge from Oreburgh City.\p"
	.string "If you don't have that Badge, you\n"
	.string "can't make a Pokémon use the hidden\l"
	.string "move Rock Smash outside of battle.$"
