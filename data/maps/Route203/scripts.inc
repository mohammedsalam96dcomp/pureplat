Route203_MapScripts::
# 4 "data/maps/Route203/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JubilifeCity_EventScript_OnTransition
	.byte 0


Route203_EventScript_RivalBattle::
# 8 "data/maps/Route203/scripts.pory"
	lock
# 10 "data/maps/Route203/scripts.pory"
	playse SE_PIN
# 11 "data/maps/Route203/scripts.pory"
	applymovement 1, Route203_EventScript_RivalBattle_Movement_0
# 12 "data/maps/Route203/scripts.pory"
	waitmovement 1
# 13 "data/maps/Route203/scripts.pory"
	waitse
# 15 "data/maps/Route203/scripts.pory"
	playbgm MUS_DP_RIVAL, 0
# 16 "data/maps/Route203/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 18 "data/maps/Route203/scripts.pory"
	compare VAR_TEMP_2, 22
	goto_if_eq Route203_EventScript_RivalBattle_2
# 20 "data/maps/Route203/scripts.pory"
	compare VAR_TEMP_2, 23
	goto_if_eq Route203_EventScript_RivalBattle_3
# 22 "data/maps/Route203/scripts.pory"
	compare VAR_TEMP_2, 24
	goto_if_eq Route203_EventScript_RivalBattle_4
# 25 "data/maps/Route203/scripts.pory"
	applymovement 1, Route203_EventScript_RivalBattle_Movement_4
Route203_EventScript_RivalBattle_1:
# 27 "data/maps/Route203/scripts.pory"
	waitmovement 1
# 29 "data/maps/Route203/scripts.pory"
	msgbox Route203_EventScript_RivalBattle_Text_1, MSGBOX_AUTOCLOSE
# 37 "data/maps/Route203/scripts.pory"
	switch VAR_STARTER_MON
# 38 "data/maps/Route203/scripts.pory"
	case 0, Route203_EventScript_RivalBattle_11
# 40 "data/maps/Route203/scripts.pory"
	case 1, Route203_EventScript_RivalBattle_12
# 42 "data/maps/Route203/scripts.pory"
	case 2, Route203_EventScript_RivalBattle_13
Route203_EventScript_RivalBattle_9:
# 46 "data/maps/Route203/scripts.pory"
	msgbox Route203_EventScript_RivalBattle_Text_2, MSGBOX_AUTOCLOSE
# 57 "data/maps/Route203/scripts.pory"
	applymovement 1, Route203_EventScript_RivalBattle_Movement_5
# 58 "data/maps/Route203/scripts.pory"
	waitmovement 1
# 60 "data/maps/Route203/scripts.pory"
	setflag FLAG_HIDE_ROUTE_203_BARRY
# 61 "data/maps/Route203/scripts.pory"
	removeobject 1
# 62 "data/maps/Route203/scripts.pory"
	setvar VAR_ROUTE203_STATE, 2
# 64 "data/maps/Route203/scripts.pory"
	release
	return

Route203_EventScript_RivalBattle_2:
# 19 "data/maps/Route203/scripts.pory"
	applymovement 1, Route203_EventScript_RivalBattle_Movement_1
	goto Route203_EventScript_RivalBattle_1

Route203_EventScript_RivalBattle_3:
# 21 "data/maps/Route203/scripts.pory"
	applymovement 1, Route203_EventScript_RivalBattle_Movement_2
	goto Route203_EventScript_RivalBattle_1

Route203_EventScript_RivalBattle_4:
# 23 "data/maps/Route203/scripts.pory"
	applymovement 1, Route203_EventScript_RivalBattle_Movement_3
	goto Route203_EventScript_RivalBattle_1

Route203_EventScript_RivalBattle_11:
# 39 "data/maps/Route203/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE_203_TURTWIG, Rival_Route_203_TurtwigDefeat
	goto Route203_EventScript_RivalBattle_9

Route203_EventScript_RivalBattle_12:
# 41 "data/maps/Route203/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE_203_CHIMCHAR, Rival_Route_203_ChimcharDefeat
	goto Route203_EventScript_RivalBattle_9

Route203_EventScript_RivalBattle_13:
# 43 "data/maps/Route203/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE_203_PIPLUP, Rival_Route_203_PiplupDefeat
	goto Route203_EventScript_RivalBattle_9


Route203_EventScript_Michael::
# 68 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_MICHAEL, Route203_Text_MichaelIntro, Route203_Text_MichaelDefeated
# 73 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_MichaelPostBattle, MSGBOX_AUTOCLOSE
	end


Route203_EventScript_Lass::
# 78 "data/maps/Route203/scripts.pory"
	lock
# 79 "data/maps/Route203/scripts.pory"
	faceplayer
# 80 "data/maps/Route203/scripts.pory"
	msgbox Route203_EventScript_Lass_Text_0, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route203/scripts.pory"
	release
	return


Route203_EventScript_Dallas::
# 88 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_DALLAS, Route203_Text_DallasIntro, Route203_Text_DallasDefeated
# 93 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_DallasPostBattle, MSGBOX_AUTOCLOSE
	end


Route203_EventScript_Sebastian::
# 98 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_SEBASTIAN, Route203_Text_SebastianIntro, Route203_Text_SebastianDefeated
# 103 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_SebastianPostBattle, MSGBOX_AUTOCLOSE
	end


Route203_EventScript_Kaitlin::
# 108 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_KAITLIN, Route203_Text_KaitlinIntro, Route203_Text_KaitlinDefeated
# 113 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_KaitlinPostBattle, MSGBOX_AUTOCLOSE
	end


Route203_EventScript_Madeline::
# 118 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_MADELINE, Route203_Text_MadelineIntro, Route203_Text_MadelineDefeated
# 123 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_MadelinePostBattle, MSGBOX_AUTOCLOSE
	end


# 11 "data/maps/Route203/scripts.pory"
Route203_EventScript_RivalBattle_Movement_0:
# 11 "data/maps/Route203/scripts.pory"
	delay_16
# 11 "data/maps/Route203/scripts.pory"
	emote_exclamation_mark
# 11 "data/maps/Route203/scripts.pory"
	delay_16
# 11 "data/maps/Route203/scripts.pory"
	delay_16
	step_end

# 19 "data/maps/Route203/scripts.pory"
Route203_EventScript_RivalBattle_Movement_1:
# 19 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 19 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 19 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 19 "data/maps/Route203/scripts.pory"
	walk_fast_left
	step_end

# 21 "data/maps/Route203/scripts.pory"
Route203_EventScript_RivalBattle_Movement_2:
# 21 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 21 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 21 "data/maps/Route203/scripts.pory"
	walk_fast_down
# 21 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 21 "data/maps/Route203/scripts.pory"
	walk_fast_left
	step_end

# 23 "data/maps/Route203/scripts.pory"
Route203_EventScript_RivalBattle_Movement_3:
# 23 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 23 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 23 "data/maps/Route203/scripts.pory"
	walk_fast_down
# 23 "data/maps/Route203/scripts.pory"
	walk_fast_down
# 23 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 23 "data/maps/Route203/scripts.pory"
	walk_fast_left
	step_end

# 25 "data/maps/Route203/scripts.pory"
Route203_EventScript_RivalBattle_Movement_4:
# 25 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 25 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 25 "data/maps/Route203/scripts.pory"
	walk_fast_down
# 25 "data/maps/Route203/scripts.pory"
	walk_fast_down
# 25 "data/maps/Route203/scripts.pory"
	walk_fast_down
# 25 "data/maps/Route203/scripts.pory"
	walk_fast_left
# 25 "data/maps/Route203/scripts.pory"
	walk_fast_left
	step_end

# 57 "data/maps/Route203/scripts.pory"
Route203_EventScript_RivalBattle_Movement_5:
# 57 "data/maps/Route203/scripts.pory"
	walk_fast_right
# 57 "data/maps/Route203/scripts.pory"
	walk_fast_right
# 57 "data/maps/Route203/scripts.pory"
	walk_fast_right
# 57 "data/maps/Route203/scripts.pory"
	walk_fast_right
# 57 "data/maps/Route203/scripts.pory"
	walk_fast_right
# 57 "data/maps/Route203/scripts.pory"
	walk_fast_right
# 57 "data/maps/Route203/scripts.pory"
	walk_fast_right
# 57 "data/maps/Route203/scripts.pory"
	delay_16
	step_end

Route203_EventScript_RivalBattle_Text_0:
# 29 "data/maps/Route203/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Hey! {PLAYER}!$"

Route203_EventScript_RivalBattle_Text_1:
# 30 "data/maps/Route203/scripts.pory"
	.string "Tell me you got a little tougher!\p"
	.string "Me? Do you even need to ask?\n"
	.string "Of course I got tougher!\p"
	.string "Come on!\n"
	.string "I'll demonstrate it to you!$"

Route203_EventScript_RivalBattle_Text_2:
# 46 "data/maps/Route203/scripts.pory"
	.string "{SPEAKER NAME_BARRY}Waah!\n"
	.string "What do you mean I lost?!\p"
	.string "Well, that's it!\n"
	.string "That's the last time I'll ever lose!\p"
	.string "I'm going to be the world's toughest\n"
	.string "Trainer, and you know it!\p"
	.string "The first thing to do is take on\n"
	.string "the Oreburgh City Pokémon Gym!\p"
	.string "I'm gonna toughen up for that,\n"
	.string "totally!$"

Route203_EventScript_Lass_Text_0:
# 80 "data/maps/Route203/scripts.pory"
	.string "Your favorite Pokémon should be placed\n"
	.string "at the top left of your party list.\p"
	.string "That way, it will be the first to go out\n"
	.string "in a battle.$"
