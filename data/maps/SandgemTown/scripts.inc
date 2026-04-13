SandgemTown_MapScripts::
# 5 "data/maps/SandgemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SandgemTown_EventScript_OnTransition
	.byte 0


SandgemTown_EventScript_OnTransition::
# 10 "data/maps/SandgemTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


SandgemTown_EventScript_LucasDawnScene1::
# 15 "data/maps/SandgemTown/scripts.pory"
	lock
# 16 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 17 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 18 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene2::
# 22 "data/maps/SandgemTown/scripts.pory"
	lock
# 23 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 2
# 24 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 25 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene3::
# 29 "data/maps/SandgemTown/scripts.pory"
	lock
# 30 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 3
# 31 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 32 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene4::
# 36 "data/maps/SandgemTown/scripts.pory"
	lock
# 37 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 4
# 38 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 39 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene5::
# 43 "data/maps/SandgemTown/scripts.pory"
	lock
# 44 "data/maps/SandgemTown/scripts.pory"
	setvar VAR_TEMP_1, 5
# 45 "data/maps/SandgemTown/scripts.pory"
	goto SandgemTown_EventScript_LucasDawnScene
# 46 "data/maps/SandgemTown/scripts.pory"
	release
	return


SandgemTown_EventScript_LucasDawnScene::
# 50 "data/maps/SandgemTown/scripts.pory"
	lock
# 52 "data/maps/SandgemTown/scripts.pory"
	playse SE_PIN
# 53 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_0
# 54 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 55 "data/maps/SandgemTown/scripts.pory"
	waitse
# 57 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 58 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 60 "data/maps/SandgemTown/scripts.pory"
	switch VAR_TEMP_1
# 61 "data/maps/SandgemTown/scripts.pory"
	case 1, SandgemTown_EventScript_LucasDawnScene_3
# 67 "data/maps/SandgemTown/scripts.pory"
	case 2, SandgemTown_EventScript_LucasDawnScene_4
# 70 "data/maps/SandgemTown/scripts.pory"
	case 3, SandgemTown_EventScript_LucasDawnScene_5
# 73 "data/maps/SandgemTown/scripts.pory"
	case 4, SandgemTown_EventScript_LucasDawnScene_6
# 79 "data/maps/SandgemTown/scripts.pory"
	case 5, SandgemTown_EventScript_LucasDawnScene_7
SandgemTown_EventScript_LucasDawnScene_1:
# 87 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_0
# 90 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 92 "data/maps/SandgemTown/scripts.pory"
	switch VAR_TEMP_1
# 93 "data/maps/SandgemTown/scripts.pory"
	case 1, SandgemTown_EventScript_LucasDawnScene_10
# 97 "data/maps/SandgemTown/scripts.pory"
	case 2, SandgemTown_EventScript_LucasDawnScene_11
# 101 "data/maps/SandgemTown/scripts.pory"
	case 3, SandgemTown_EventScript_LucasDawnScene_12
# 105 "data/maps/SandgemTown/scripts.pory"
	case 4, SandgemTown_EventScript_LucasDawnScene_13
# 109 "data/maps/SandgemTown/scripts.pory"
	case 5, SandgemTown_EventScript_LucasDawnScene_14
SandgemTown_EventScript_LucasDawnScene_8:
# 115 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_1
# 118 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 120 "data/maps/SandgemTown/scripts.pory"
	clearflag FLAG_HIDE_SANDGEM_TOWN_RIVAL
# 121 "data/maps/SandgemTown/scripts.pory"
	addobject 2
# 123 "data/maps/SandgemTown/scripts.pory"
	playse SE_DOOR
# 124 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_18
# 125 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 126 "data/maps/SandgemTown/scripts.pory"
	waitse
# 128 "data/maps/SandgemTown/scripts.pory"
	playse SE_WALL_HIT
# 129 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_2
# 130 "data/maps/SandgemTown/scripts.pory"
	waitse
# 131 "data/maps/SandgemTown/scripts.pory"
	playbgm MUS_GSC_ROUTE38, 0
# 133 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_3
# 139 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 141 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_19
# 142 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 144 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_20
# 145 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_20
# 146 "data/maps/SandgemTown/scripts.pory"
	applymovement 2, SandgemTown_EventScript_LucasDawnScene_Movement_21
# 147 "data/maps/SandgemTown/scripts.pory"
	waitmovement 2
# 149 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_RIVAL
# 150 "data/maps/SandgemTown/scripts.pory"
	removeobject 2
# 151 "data/maps/SandgemTown/scripts.pory"
	delay 10
# 152 "data/maps/SandgemTown/scripts.pory"
	fadedefaultbgm
# 154 "data/maps/SandgemTown/scripts.pory"
	msgbox SandgemTown_EventScript_LucasDawnScene_Text_4
# 159 "data/maps/SandgemTown/scripts.pory"
	closemessage
# 161 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_2
# 162 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 164 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_6
# 165 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 167 "data/maps/SandgemTown/scripts.pory"
	playse SE_DOOR
# 168 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_2
# 169 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_2
# 170 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 171 "data/maps/SandgemTown/scripts.pory"
	setflag FLAG_HIDE_SANDGEM_TOWN_DAWN
# 172 "data/maps/SandgemTown/scripts.pory"
	removeobject 1
# 174 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_2
# 175 "data/maps/SandgemTown/scripts.pory"
	waitmovement 0
# 177 "data/maps/SandgemTown/scripts.pory"
	warp MAP_SANDGEM_PROFESSORS_LAB, 6, 12
# 179 "data/maps/SandgemTown/scripts.pory"
	release
	return

SandgemTown_EventScript_LucasDawnScene_3:
# 62 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 63 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 64 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_2
# 65 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_3
# 66 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_4:
# 68 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_4
# 69 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_5:
# 71 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 72 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_6:
# 74 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_5
# 75 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 76 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_6
# 77 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_7
# 78 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_7:
# 80 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_1
# 81 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
# 82 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_6
# 83 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_8
# 84 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_1

SandgemTown_EventScript_LucasDawnScene_10:
# 94 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_9
# 95 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_10
# 96 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_8

SandgemTown_EventScript_LucasDawnScene_11:
# 98 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_11
# 99 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_11
# 100 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_8

SandgemTown_EventScript_LucasDawnScene_12:
# 102 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_12
# 103 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_13
# 104 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_8

SandgemTown_EventScript_LucasDawnScene_13:
# 106 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_14
# 107 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_15
# 108 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_8

SandgemTown_EventScript_LucasDawnScene_14:
# 110 "data/maps/SandgemTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemTown_EventScript_LucasDawnScene_Movement_16
# 111 "data/maps/SandgemTown/scripts.pory"
	applymovement 1, SandgemTown_EventScript_LucasDawnScene_Movement_17
# 112 "data/maps/SandgemTown/scripts.pory"
	waitmovement 1
	goto SandgemTown_EventScript_LucasDawnScene_8


# 53 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_0:
# 53 "data/maps/SandgemTown/scripts.pory"
	emote_exclamation_mark
# 53 "data/maps/SandgemTown/scripts.pory"
	delay_16
# 53 "data/maps/SandgemTown/scripts.pory"
	delay_16
# 53 "data/maps/SandgemTown/scripts.pory"
	delay_16
	step_end

# 57 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_1:
# 57 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 57 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 64 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_2:
# 64 "data/maps/SandgemTown/scripts.pory"
	walk_up
	step_end

# 65 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_3:
# 65 "data/maps/SandgemTown/scripts.pory"
	face_down
	step_end

# 68 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_4:
# 68 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 68 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 71 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_5:
# 71 "data/maps/SandgemTown/scripts.pory"
	walk_left
	step_end

# 76 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_6:
# 76 "data/maps/SandgemTown/scripts.pory"
	face_up
	step_end

# 77 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_7:
# 77 "data/maps/SandgemTown/scripts.pory"
	walk_left
# 77 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_down
	step_end

# 83 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_8:
# 83 "data/maps/SandgemTown/scripts.pory"
	walk_down
	step_end

# 94 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_9:
# 94 "data/maps/SandgemTown/scripts.pory"
	walk_down
# 94 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 94 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 94 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 94 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 94 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 95 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_10:
# 95 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 95 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 95 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 95 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 95 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 95 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 98 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_11:
# 98 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 98 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 98 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 98 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 98 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 102 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_12:
# 102 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 102 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 102 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 102 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 102 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 102 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 103 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_13:
# 103 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 103 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 103 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 103 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 103 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 103 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 106 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_14:
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 106 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 107 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_15:
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 107 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 110 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_16:
# 110 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 110 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 110 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 110 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 110 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 110 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 110 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 110 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 111 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_17:
# 111 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 111 "data/maps/SandgemTown/scripts.pory"
	walk_up
# 111 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 111 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 111 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 111 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 111 "data/maps/SandgemTown/scripts.pory"
	walk_right
# 111 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_up
	step_end

# 124 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_18:
# 124 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
# 124 "data/maps/SandgemTown/scripts.pory"
	walk_in_place_faster_down
	step_end

# 141 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_19:
# 141 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 141 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 141 "data/maps/SandgemTown/scripts.pory"
	walk_fast_down
	step_end

# 144 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_20:
# 144 "data/maps/SandgemTown/scripts.pory"
	face_right
	step_end

# 146 "data/maps/SandgemTown/scripts.pory"
SandgemTown_EventScript_LucasDawnScene_Movement_21:
# 146 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 146 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 146 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 146 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 146 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
# 146 "data/maps/SandgemTown/scripts.pory"
	walk_fast_right
	step_end

SandgemTown_EventScript_LucasDawnScene_Text_0:
# 87 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Hi! I've been waiting for you!\n"
	.string "Please, come with me.\l"
	.string "The prof's waiting to see you.$"

SandgemTown_EventScript_LucasDawnScene_Text_1:
# 115 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}See? This is our Pokémon Research\n"
	.string "Lab.\p"
	.string "We'll just go ahead and. . .$"

SandgemTown_EventScript_LucasDawnScene_Text_2:
# 129 "data/maps/SandgemTown/scripts.pory"
	.string "THUD! !$"

SandgemTown_EventScript_LucasDawnScene_Text_3:
# 133 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_BARRY}What the. . .\p"
	.string "Oh, it's you, {PLAYER}!\p"
	.string "That old guy. . . He's not so scary so\n"
	.string "much as he is totally out there!\p"
	.string "Aww, it doesn't matter, {PLAYER}.\n"
	.string "I'm out of here. See you later!$"

SandgemTown_EventScript_LucasDawnScene_Text_4:
# 154 "data/maps/SandgemTown/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}What was that?!\p"
	.string "Your friend always seems to be\n"
	.string "in such a rush.\p"
	.string "Anyway. . .\n"
	.string "Let's go in.$"
