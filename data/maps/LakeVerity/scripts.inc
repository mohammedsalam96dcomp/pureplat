LakeVerity_MapScripts::
# 5 "data/maps/LakeVerity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LakeVerity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 9 "data/maps/LakeVerity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LakeVerity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

LakeVerity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/LakeVerity/scripts.pory"
	map_script_2 VAR_LAKE_VERITY_STATE, 1, LakeVerity_ON_FRAME
	.2byte 0

LakeVerity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/LakeVerity/scripts.pory"
	map_script_2 VAR_ROUTE201_STATE, 3, LakeVerity_ON_WARP
	.2byte 0


LakeVerity_ON_FRAME::
# 15 "data/maps/LakeVerity/scripts.pory"
	lock
# 19 "data/maps/LakeVerity/scripts.pory"
	setmetatile 10, 28, METATILE_GeneralSinnoh_GrassSouthWarp, FALSE
# 21 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerity_ON_FRAME_Movement_0
# 22 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, LakeVerity_ON_FRAME_Movement_0
# 23 "data/maps/LakeVerity/scripts.pory"
	waitmovement 1
# 25 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_ON_FRAME_Text_0
# 26 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 28 "data/maps/LakeVerity/scripts.pory"
	special SpawnCameraObject
# 29 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LakeVerity_ON_FRAME_Movement_1
# 30 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 32 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_ON_FRAME_Text_1
# 38 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 39 "data/maps/LakeVerity/scripts.pory"
	setobjectxyperm 1, 11, 27
# 40 "data/maps/LakeVerity/scripts.pory"
	delay 10
# 42 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LakeVerity_ON_FRAME_Movement_2
# 43 "data/maps/LakeVerity/scripts.pory"
	applymovement 2, LakeVerity_ON_FRAME_Movement_3
# 44 "data/maps/LakeVerity/scripts.pory"
	waitmovement 2
# 46 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_ON_FRAME_Text_2
# 48 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 49 "data/maps/LakeVerity/scripts.pory"
	special RemoveCameraObject
# 51 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerity_ON_FRAME_Movement_4
# 52 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, LakeVerity_ON_FRAME_Movement_5
# 53 "data/maps/LakeVerity/scripts.pory"
	waitmovement 1
# 55 "data/maps/LakeVerity/scripts.pory"
	delay 8
# 57 "data/maps/LakeVerity/scripts.pory"
	applymovement 2, LakeVerity_ON_FRAME_Movement_6
# 58 "data/maps/LakeVerity/scripts.pory"
	waitmovement 2
# 60 "data/maps/LakeVerity/scripts.pory"
	playse SE_EXIT
# 61 "data/maps/LakeVerity/scripts.pory"
	setflag FLAG_HIDE_LAKE_VERITY_CYRUS
# 62 "data/maps/LakeVerity/scripts.pory"
	removeobject 2
# 63 "data/maps/LakeVerity/scripts.pory"
	waitse
# 65 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerity_ON_FRAME_Movement_7
# 66 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, LakeVerity_ON_FRAME_Movement_8
# 67 "data/maps/LakeVerity/scripts.pory"
	waitmovement 1
# 69 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_ON_FRAME_Text_3
# 71 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 73 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerity_ON_FRAME_Movement_4
# 74 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, LakeVerity_ON_FRAME_Movement_9
# 75 "data/maps/LakeVerity/scripts.pory"
	waitmovement 1
# 76 "data/maps/LakeVerity/scripts.pory"
	delay 8
# 78 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_ON_FRAME_Text_4
# 80 "data/maps/LakeVerity/scripts.pory"
	playmoncry SPECIES_MESPRIT, CRY_MODE_NORMAL
# 81 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_ON_FRAME_Text_5
# 82 "data/maps/LakeVerity/scripts.pory"
	waitmoncry
# 83 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 85 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 86 "data/maps/LakeVerity/scripts.pory"
	playse SE_PIN
# 87 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 88 "data/maps/LakeVerity/scripts.pory"
	waitse
# 89 "data/maps/LakeVerity/scripts.pory"
	delay 30
# 91 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, LakeVerity_ON_FRAME_Movement_10
# 92 "data/maps/LakeVerity/scripts.pory"
	waitmovement 1
# 93 "data/maps/LakeVerity/scripts.pory"
	delay 8
# 94 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, LakeVerity_ON_FRAME_Movement_11
# 95 "data/maps/LakeVerity/scripts.pory"
	waitmovement 1
# 96 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, LakeVerity_ON_FRAME_Movement_12
# 97 "data/maps/LakeVerity/scripts.pory"
	waitmovement 1
# 99 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_ON_FRAME_Text_6
# 105 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 107 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 108 "data/maps/LakeVerity/scripts.pory"
	playse SE_PIN
# 109 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 110 "data/maps/LakeVerity/scripts.pory"
	waitse
# 111 "data/maps/LakeVerity/scripts.pory"
	delay 30
# 113 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_ON_FRAME_Text_7
# 130 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 132 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, LakeVerity_ON_FRAME_Movement_13
# 133 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 135 "data/maps/LakeVerity/scripts.pory"
	playse SE_EXIT
# 136 "data/maps/LakeVerity/scripts.pory"
	setflag FLAG_HIDE_LAKE_VERITY_BARRY
# 137 "data/maps/LakeVerity/scripts.pory"
	removeobject 1
# 138 "data/maps/LakeVerity/scripts.pory"
	waitse
# 140 "data/maps/LakeVerity/scripts.pory"
	setvar VAR_LAKE_VERITY_STATE, 3
# 141 "data/maps/LakeVerity/scripts.pory"
	setvar VAR_SANDGEM_TOWN_STATE, 1
# 142 "data/maps/LakeVerity/scripts.pory"
	clearflag FLAG_HIDE_SANDGEM_TOWN_DAWN
# 143 "data/maps/LakeVerity/scripts.pory"
	release
	return


LakeVerity_ON_WARP::
# 147 "data/maps/LakeVerity/scripts.pory"
	destroyfollowernpc
# 149 "data/maps/LakeVerity/scripts.pory"
	setmetatile 10, 28, METATILE_GeneralSinnoh_GrassSouth, FALSE
# 150 "data/maps/LakeVerity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 151 "data/maps/LakeVerity/scripts.pory"
	setvar VAR_LAKE_VERITY_STATE, 1
# 152 "data/maps/LakeVerity/scripts.pory"
	setvar VAR_ROUTE201_STATE, 4
	return


# 21 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_0:
# 21 "data/maps/LakeVerity/scripts.pory"
	walk_up
	step_end

# 29 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_1:
# 29 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 29 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 29 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 29 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 29 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 29 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 29 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 29 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 29 "data/maps/LakeVerity/scripts.pory"
	walk_up
	step_end

# 42 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_2:
# 42 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 42 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 42 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 42 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 42 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 42 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_down
# 42 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 42 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 42 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 42 "data/maps/LakeVerity/scripts.pory"
	walk_down
	step_end

# 43 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_3:
# 43 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 43 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 43 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 43 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 43 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 43 "data/maps/LakeVerity/scripts.pory"
	walk_left
# 43 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 43 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 43 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 43 "data/maps/LakeVerity/scripts.pory"
	walk_down
	step_end

# 51 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_4:
# 51 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_right
	step_end

# 52 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_5:
# 52 "data/maps/LakeVerity/scripts.pory"
	walk_right
# 52 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_left
	step_end

# 57 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_6:
# 57 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 57 "data/maps/LakeVerity/scripts.pory"
	walk_down
	step_end

# 65 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_7:
# 65 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_down
	step_end

# 66 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_8:
# 66 "data/maps/LakeVerity/scripts.pory"
	walk_left
# 66 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_down
	step_end

# 74 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_9:
# 74 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_left
	step_end

# 91 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_10:
# 91 "data/maps/LakeVerity/scripts.pory"
	walk_fast_up
# 91 "data/maps/LakeVerity/scripts.pory"
	walk_fast_up
# 91 "data/maps/LakeVerity/scripts.pory"
	walk_fast_up
	step_end

# 94 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_11:
# 94 "data/maps/LakeVerity/scripts.pory"
	face_left
# 94 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 94 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 94 "data/maps/LakeVerity/scripts.pory"
	face_up
# 94 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 94 "data/maps/LakeVerity/scripts.pory"
	delay_16
	step_end

# 96 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_12:
# 96 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 96 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 96 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 96 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_faster_left
# 96 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 132 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_13:
# 132 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 132 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
	step_end

LakeVerity_ON_FRAME_Text_0:
# 25 "data/maps/LakeVerity/scripts.pory"
	.string "{SPEAKER NAME_BARRY}What's going on. . .?$"

LakeVerity_ON_FRAME_Text_1:
# 32 "data/maps/LakeVerity/scripts.pory"
	.string "{SPEAKER NAME_CYRUS}. . .The flowing time. . .\n"
	.string ". . .The expanding space. . .\p"
	.string "I will make it all mine one day. . .\n"
	.string "Cyrus is my name. Remember it. . .\p"
	.string "Until then, sleep while you can,\n"
	.string "legendary Pokémon of the lake bed. . .$"

LakeVerity_ON_FRAME_Text_2:
# 46 "data/maps/LakeVerity/scripts.pory"
	.string "{SPEAKER NAME_CYRUS}Allow me to pass.\n"
	.string "Step aside.$"

LakeVerity_ON_FRAME_Text_3:
# 69 "data/maps/LakeVerity/scripts.pory"
	.string "{SPEAKER NAME_BARRY}What was that about?\n"
	.string "Weird guy. . .$"

LakeVerity_ON_FRAME_Text_4:
# 78 "data/maps/LakeVerity/scripts.pory"
	.string "{SPEAKER NAME_BARRY}OK, {PLAYER}!\n"
	.string "Let's catch that legendary Pokémon!$"

LakeVerity_ON_FRAME_Text_5:
# 81 "data/maps/LakeVerity/scripts.pory"
	.string "{SPEAKER NAME_NONE}Kyauuun!$"

LakeVerity_ON_FRAME_Text_6:
# 99 "data/maps/LakeVerity/scripts.pory"
	.string "{SPEAKER NAME_BARRY}!\n"
	.string "Did you hear that, {PLAYER}?!\p"
	.string "That was the legendary Pokémon crying!\n"
	.string "That had to be it!\p"
	.string "OK! This is our chance!\n"
	.string "Let's catch it!$"

LakeVerity_ON_FRAME_Text_7:
# 113 "data/maps/LakeVerity/scripts.pory"
	.string "{SPEAKER NAME_BARRY}. . .Wait!\n"
	.string "What. . .?!\p"
	.string "We don't have anything on us!\p"
	.string "You know, Poké Balls!\n"
	.string "P-O-K-accent-E Balls!\p"
	.string "If we don't have those, we can't catch\n"
	.string "Pokémon or take them around with us!\p"
	.string ". . .Do you think Prof. Rowan'd give us\n"
	.string "some if we asked him?\p"
	.string "You know, you remember what he said\n"
	.string "don't you?\p"
	.string "He said to visit him at his lab if we\n"
	.string "needed anything.\p"
	.string "OK, {PLAYER}!\n"
	.string "I'll race you!\p"
	.string "First one to the professor's lab in\n"
	.string "Sandgem Town rules!$"
