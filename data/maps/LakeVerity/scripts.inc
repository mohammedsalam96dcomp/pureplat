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
# 17 "data/maps/LakeVerity/scripts.pory"
	clearflag FLAG_HIDE_LAKE_VERITY_CYRUS
# 18 "data/maps/LakeVerity/scripts.pory"
	addobject 2
# 20 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerity_ON_FRAME_Movement_0
# 21 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, LakeVerity_ON_FRAME_Movement_0
# 22 "data/maps/LakeVerity/scripts.pory"
	waitmovement 1
# 24 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_ON_FRAME_Text_0
# 25 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 27 "data/maps/LakeVerity/scripts.pory"
	special SpawnCameraObject
# 28 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LakeVerity_ON_FRAME_Movement_1
# 29 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 31 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_ON_FRAME_Text_1
# 37 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 38 "data/maps/LakeVerity/scripts.pory"
	setobjectxyperm 1, 11, 27
# 39 "data/maps/LakeVerity/scripts.pory"
	delay 10
# 41 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LakeVerity_ON_FRAME_Movement_2
# 42 "data/maps/LakeVerity/scripts.pory"
	applymovement 2, LakeVerity_ON_FRAME_Movement_3
# 43 "data/maps/LakeVerity/scripts.pory"
	waitmovement 2
# 45 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_ON_FRAME_Text_2
# 47 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 48 "data/maps/LakeVerity/scripts.pory"
	special RemoveCameraObject
# 50 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerity_ON_FRAME_Movement_4
# 51 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, LakeVerity_ON_FRAME_Movement_5
# 52 "data/maps/LakeVerity/scripts.pory"
	waitmovement 1
# 54 "data/maps/LakeVerity/scripts.pory"
	delay 8
# 56 "data/maps/LakeVerity/scripts.pory"
	applymovement 2, LakeVerity_ON_FRAME_Movement_6
# 57 "data/maps/LakeVerity/scripts.pory"
	waitmovement 2
# 59 "data/maps/LakeVerity/scripts.pory"
	playse SE_EXIT
# 60 "data/maps/LakeVerity/scripts.pory"
	setflag FLAG_HIDE_LAKE_VERITY_CYRUS
# 61 "data/maps/LakeVerity/scripts.pory"
	removeobject 2
# 62 "data/maps/LakeVerity/scripts.pory"
	waitse
# 64 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerity_ON_FRAME_Movement_7
# 65 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, LakeVerity_ON_FRAME_Movement_8
# 66 "data/maps/LakeVerity/scripts.pory"
	waitmovement 1
# 68 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_ON_FRAME_Text_3
# 70 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 72 "data/maps/LakeVerity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LakeVerity_ON_FRAME_Movement_4
# 73 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, LakeVerity_ON_FRAME_Movement_9
# 74 "data/maps/LakeVerity/scripts.pory"
	waitmovement 1
# 75 "data/maps/LakeVerity/scripts.pory"
	delay 8
# 77 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_ON_FRAME_Text_4
# 79 "data/maps/LakeVerity/scripts.pory"
	playmoncry SPECIES_MESPRIT, CRY_MODE_NORMAL
# 80 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_ON_FRAME_Text_5
# 81 "data/maps/LakeVerity/scripts.pory"
	waitmoncry
# 82 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 84 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 85 "data/maps/LakeVerity/scripts.pory"
	playse SE_PIN
# 86 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 87 "data/maps/LakeVerity/scripts.pory"
	waitse
# 88 "data/maps/LakeVerity/scripts.pory"
	delay 30
# 90 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, LakeVerity_ON_FRAME_Movement_10
# 91 "data/maps/LakeVerity/scripts.pory"
	waitmovement 1
# 92 "data/maps/LakeVerity/scripts.pory"
	delay 8
# 93 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, LakeVerity_ON_FRAME_Movement_11
# 94 "data/maps/LakeVerity/scripts.pory"
	waitmovement 1
# 95 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, LakeVerity_ON_FRAME_Movement_12
# 96 "data/maps/LakeVerity/scripts.pory"
	waitmovement 1
# 98 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_ON_FRAME_Text_6
# 104 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 106 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 107 "data/maps/LakeVerity/scripts.pory"
	playse SE_PIN
# 108 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 109 "data/maps/LakeVerity/scripts.pory"
	waitse
# 110 "data/maps/LakeVerity/scripts.pory"
	delay 30
# 112 "data/maps/LakeVerity/scripts.pory"
	msgbox LakeVerity_ON_FRAME_Text_7
# 129 "data/maps/LakeVerity/scripts.pory"
	closemessage
# 131 "data/maps/LakeVerity/scripts.pory"
	applymovement 1, LakeVerity_ON_FRAME_Movement_13
# 132 "data/maps/LakeVerity/scripts.pory"
	waitmovement 0
# 134 "data/maps/LakeVerity/scripts.pory"
	playse SE_EXIT
# 135 "data/maps/LakeVerity/scripts.pory"
	setflag FLAG_HIDE_LAKE_VERITY_BARRY
# 136 "data/maps/LakeVerity/scripts.pory"
	removeobject 1
# 137 "data/maps/LakeVerity/scripts.pory"
	waitse
# 139 "data/maps/LakeVerity/scripts.pory"
	setmetatile 10, 28, METATILE_GeneralSinnoh_GrassSouthWarp, FALSE
# 140 "data/maps/LakeVerity/scripts.pory"
	setvar VAR_LAKE_VERITY_STATE, 3
# 142 "data/maps/LakeVerity/scripts.pory"
	setvar VAR_SANDGEM_TOWN_STATE, 1
# 144 "data/maps/LakeVerity/scripts.pory"
	release
	return


LakeVerity_ON_WARP::
# 150 "data/maps/LakeVerity/scripts.pory"
	destroyfollowernpc
# 152 "data/maps/LakeVerity/scripts.pory"
	setmetatile 10, 28, METATILE_GeneralSinnoh_GrassSouth, FALSE
# 153 "data/maps/LakeVerity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 154 "data/maps/LakeVerity/scripts.pory"
	setvar VAR_LAKE_VERITY_STATE, 1
# 155 "data/maps/LakeVerity/scripts.pory"
	setvar VAR_ROUTE201_STATE, 4
	return


# 20 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_0:
# 20 "data/maps/LakeVerity/scripts.pory"
	walk_up
	step_end

# 28 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_1:
# 28 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 28 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 28 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 28 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 28 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 28 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 28 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 28 "data/maps/LakeVerity/scripts.pory"
	walk_up
# 28 "data/maps/LakeVerity/scripts.pory"
	walk_up
	step_end

# 41 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_2:
# 41 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 41 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 41 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 41 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 41 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 41 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_down
# 41 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 41 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 41 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 41 "data/maps/LakeVerity/scripts.pory"
	walk_down
	step_end

# 42 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_3:
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
	walk_left
# 42 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 42 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 42 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 42 "data/maps/LakeVerity/scripts.pory"
	walk_down
	step_end

# 50 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_4:
# 50 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_right
	step_end

# 51 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_5:
# 51 "data/maps/LakeVerity/scripts.pory"
	walk_right
# 51 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_left
	step_end

# 56 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_6:
# 56 "data/maps/LakeVerity/scripts.pory"
	walk_down
# 56 "data/maps/LakeVerity/scripts.pory"
	walk_down
	step_end

# 64 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_7:
# 64 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_down
	step_end

# 65 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_8:
# 65 "data/maps/LakeVerity/scripts.pory"
	walk_left
# 65 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_down
	step_end

# 73 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_9:
# 73 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_left
	step_end

# 90 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_10:
# 90 "data/maps/LakeVerity/scripts.pory"
	walk_fast_up
# 90 "data/maps/LakeVerity/scripts.pory"
	walk_fast_up
# 90 "data/maps/LakeVerity/scripts.pory"
	walk_fast_up
	step_end

# 93 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_11:
# 93 "data/maps/LakeVerity/scripts.pory"
	face_left
# 93 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 93 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 93 "data/maps/LakeVerity/scripts.pory"
	face_up
# 93 "data/maps/LakeVerity/scripts.pory"
	delay_16
# 93 "data/maps/LakeVerity/scripts.pory"
	delay_16
	step_end

# 95 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_12:
# 95 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 95 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 95 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 95 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_faster_left
# 95 "data/maps/LakeVerity/scripts.pory"
	walk_in_place_faster_left
	step_end

# 131 "data/maps/LakeVerity/scripts.pory"
LakeVerity_ON_FRAME_Movement_13:
# 131 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
# 131 "data/maps/LakeVerity/scripts.pory"
	walk_fast_down
	step_end

LakeVerity_ON_FRAME_Text_0:
# 24 "data/maps/LakeVerity/scripts.pory"
	.string "{SPEAKER NAME_BARRY}What's going on. . .?$"

LakeVerity_ON_FRAME_Text_1:
# 31 "data/maps/LakeVerity/scripts.pory"
	.string "{SPEAKER NAME_CYRUS}. . .The flowing time. . .\n"
	.string ". . .The expanding space. . .\p"
	.string "I will make it all mine one day. . .\n"
	.string "Cyrus is my name. Remember it. . .\p"
	.string "Until then, sleep while you can,\n"
	.string "legendary Pokémon of the lake bed. . .$"

LakeVerity_ON_FRAME_Text_2:
# 45 "data/maps/LakeVerity/scripts.pory"
	.string "{SPEAKER NAME_CYRUS}Allow me to pass.\n"
	.string "Step aside.$"

LakeVerity_ON_FRAME_Text_3:
# 68 "data/maps/LakeVerity/scripts.pory"
	.string "{SPEAKER NAME_BARRY}What was that about?\n"
	.string "Weird guy. . .$"

LakeVerity_ON_FRAME_Text_4:
# 77 "data/maps/LakeVerity/scripts.pory"
	.string "{SPEAKER NAME_BARRY}OK, {PLAYER}!\n"
	.string "Let's catch that legendary Pokémon!$"

LakeVerity_ON_FRAME_Text_5:
# 80 "data/maps/LakeVerity/scripts.pory"
	.string "{SPEAKER NAME_NONE}Kyauuun!$"

LakeVerity_ON_FRAME_Text_6:
# 98 "data/maps/LakeVerity/scripts.pory"
	.string "{SPEAKER NAME_BARRY}!\n"
	.string "Did you hear that, {PLAYER}?!\p"
	.string "That was the legendary Pokémon crying!\n"
	.string "That had to be it!\p"
	.string "OK! This is our chance!\n"
	.string "Let's catch it!$"

LakeVerity_ON_FRAME_Text_7:
# 112 "data/maps/LakeVerity/scripts.pory"
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
