TwinleafTown_MapScripts::
	.byte 0


TwinleafTown_Technology::
# 7 "data/maps/TwinleafTown/scripts.pory"
	lock
# 8 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 9 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_Technology_Text_0
# 12 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_WildPokemon::
# 16 "data/maps/TwinleafTown/scripts.pory"
	lock
# 17 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 18 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_WildPokemon_Text_0
# 22 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_EventScript_PlayersHouseSign::
# 26 "data/maps/TwinleafTown/scripts.pory"
	lock
# 27 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_PlayersHouseSign_Text_0
# 28 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_RivalsHouseSign::
# 33 "data/maps/TwinleafTown/scripts.pory"
	lock
# 34 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_RivalsHouseSign_Text_0
# 35 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_TwinleafSign::
# 40 "data/maps/TwinleafTown/scripts.pory"
	lock
# 41 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TwinleafSign_Text_0
# 43 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_GoSeeBarry1::
# 48 "data/maps/TwinleafTown/scripts.pory"
	lock
# 49 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 50 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_GoSeeBarry
# 51 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_GoSeeBarry2::
# 55 "data/maps/TwinleafTown/scripts.pory"
	lock
# 56 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 2
# 57 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_GoSeeBarry
# 58 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_GoSeeBarry3::
# 62 "data/maps/TwinleafTown/scripts.pory"
	lock
# 63 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 3
# 64 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_GoSeeBarry
# 65 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_GoSeeBarry4::
# 69 "data/maps/TwinleafTown/scripts.pory"
	lock
# 70 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 4
# 71 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_GoSeeBarry
# 72 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_GoSeeBarry5::
# 76 "data/maps/TwinleafTown/scripts.pory"
	lock
# 77 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 5
# 78 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_GoSeeBarry
# 79 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_GoSeeBarry6::
# 83 "data/maps/TwinleafTown/scripts.pory"
	lock
# 84 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 6
# 85 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_GoSeeBarry
# 86 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_GoSeeBarry7::
# 90 "data/maps/TwinleafTown/scripts.pory"
	lock
# 91 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 7
# 92 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_GoSeeBarry
# 93 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_GoSeeBarry8::
# 97 "data/maps/TwinleafTown/scripts.pory"
	lock
# 98 "data/maps/TwinleafTown/scripts.pory"
	setvar VAR_TEMP_1, 8
# 99 "data/maps/TwinleafTown/scripts.pory"
	goto TwinleafTown_GoSeeBarry
# 100 "data/maps/TwinleafTown/scripts.pory"
	release
	return


TwinleafTown_GoSeeBarry::
# 104 "data/maps/TwinleafTown/scripts.pory"
	lock
# 106 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, Common_Movement_ExclamationMark
# 107 "data/maps/TwinleafTown/scripts.pory"
	playse SE_PIN
# 108 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 109 "data/maps/TwinleafTown/scripts.pory"
	waitse
# 110 "data/maps/TwinleafTown/scripts.pory"
	delay 30
# 112 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 113 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_GoSeeBarry_3
# 115 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_GoSeeBarry_4
# 117 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_GoSeeBarry_5
# 119 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_GoSeeBarry_6
# 121 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_GoSeeBarry_7
# 123 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_GoSeeBarry_8
# 125 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_GoSeeBarry_9
# 127 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_GoSeeBarry_10
TwinleafTown_GoSeeBarry_1:
# 131 "data/maps/TwinleafTown/scripts.pory"
	waitmovement LOCALID_NPC3
# 132 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_GoSeeBarry_Movement_8
# 133 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 134 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_9
# 135 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 136 "data/maps/TwinleafTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TwinleafTown_GoSeeBarry_Movement_9
# 137 "data/maps/TwinleafTown/scripts.pory"
	waitmovement 0
# 139 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_GoSeeBarry_Text_0
# 143 "data/maps/TwinleafTown/scripts.pory"
	closemessage
# 145 "data/maps/TwinleafTown/scripts.pory"
	switch VAR_TEMP_1
# 146 "data/maps/TwinleafTown/scripts.pory"
	case 1, TwinleafTown_GoSeeBarry_13
# 148 "data/maps/TwinleafTown/scripts.pory"
	case 2, TwinleafTown_GoSeeBarry_14
# 150 "data/maps/TwinleafTown/scripts.pory"
	case 3, TwinleafTown_GoSeeBarry_15
# 152 "data/maps/TwinleafTown/scripts.pory"
	case 4, TwinleafTown_GoSeeBarry_16
# 154 "data/maps/TwinleafTown/scripts.pory"
	case 5, TwinleafTown_GoSeeBarry_17
# 156 "data/maps/TwinleafTown/scripts.pory"
	case 6, TwinleafTown_GoSeeBarry_18
# 158 "data/maps/TwinleafTown/scripts.pory"
	case 7, TwinleafTown_GoSeeBarry_19
# 160 "data/maps/TwinleafTown/scripts.pory"
	case 8, TwinleafTown_GoSeeBarry_20
TwinleafTown_GoSeeBarry_11:
# 163 "data/maps/TwinleafTown/scripts.pory"
	waitmovement LOCALID_NPC3
# 165 "data/maps/TwinleafTown/scripts.pory"
	release
	return

TwinleafTown_GoSeeBarry_3:
# 114 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_0
	goto TwinleafTown_GoSeeBarry_1

TwinleafTown_GoSeeBarry_4:
# 116 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_1
	goto TwinleafTown_GoSeeBarry_1

TwinleafTown_GoSeeBarry_5:
# 118 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_2
	goto TwinleafTown_GoSeeBarry_1

TwinleafTown_GoSeeBarry_6:
# 120 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_3
	goto TwinleafTown_GoSeeBarry_1

TwinleafTown_GoSeeBarry_7:
# 122 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_4
	goto TwinleafTown_GoSeeBarry_1

TwinleafTown_GoSeeBarry_8:
# 124 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_5
	goto TwinleafTown_GoSeeBarry_1

TwinleafTown_GoSeeBarry_9:
# 126 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_6
	goto TwinleafTown_GoSeeBarry_1

TwinleafTown_GoSeeBarry_10:
# 128 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_7
	goto TwinleafTown_GoSeeBarry_1

TwinleafTown_GoSeeBarry_13:
# 147 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_10
	goto TwinleafTown_GoSeeBarry_11

TwinleafTown_GoSeeBarry_14:
# 149 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_11
	goto TwinleafTown_GoSeeBarry_11

TwinleafTown_GoSeeBarry_15:
# 151 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_12
	goto TwinleafTown_GoSeeBarry_11

TwinleafTown_GoSeeBarry_16:
# 153 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_13
	goto TwinleafTown_GoSeeBarry_11

TwinleafTown_GoSeeBarry_17:
# 155 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_14
	goto TwinleafTown_GoSeeBarry_11

TwinleafTown_GoSeeBarry_18:
# 157 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_15
	goto TwinleafTown_GoSeeBarry_11

TwinleafTown_GoSeeBarry_19:
# 159 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_16
	goto TwinleafTown_GoSeeBarry_11

TwinleafTown_GoSeeBarry_20:
# 161 "data/maps/TwinleafTown/scripts.pory"
	applymovement LOCALID_NPC3, TwinleafTown_GoSeeBarry_Movement_17
	goto TwinleafTown_GoSeeBarry_11


# 114 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_0:
# 114 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 114 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 114 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 114 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 114 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_left
	step_end

# 116 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_1:
# 116 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 116 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 116 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 116 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 118 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_2:
# 118 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 118 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 118 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 118 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 118 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 120 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_3:
# 120 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 120 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 120 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 120 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 120 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 120 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 122 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_4:
# 122 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 122 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 122 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 122 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 122 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 122 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 122 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 124 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_5:
# 124 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 124 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 124 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 124 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 124 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 124 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 124 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 124 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 126 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_6:
# 126 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 126 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 126 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 126 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 126 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 126 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 126 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 126 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 126 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 128 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_7:
# 128 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 128 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 128 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_up
# 128 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 128 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 128 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 128 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 128 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 128 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
# 128 "data/maps/TwinleafTown/scripts.pory"
	walk_fast_right
	step_end

# 132 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_8:
# 132 "data/maps/TwinleafTown/scripts.pory"
	lock_facing_direction
	step_end

# 134 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_9:
# 134 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 147 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_10:
# 147 "data/maps/TwinleafTown/scripts.pory"
	walk_right
# 147 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 147 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 147 "data/maps/TwinleafTown/scripts.pory"
	walk_left
	step_end

# 149 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_11:
# 149 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 149 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 149 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 151 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_12:
# 151 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 151 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 151 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 151 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 153 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_13:
# 153 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 153 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 153 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 153 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 153 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 155 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_14:
# 155 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 155 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 155 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 155 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 155 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 155 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 157 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_15:
# 157 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 157 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 157 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 157 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 157 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 157 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 157 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 159 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_16:
# 159 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 159 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 159 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 159 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 159 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 159 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 159 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 159 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

# 161 "data/maps/TwinleafTown/scripts.pory"
TwinleafTown_GoSeeBarry_Movement_17:
# 161 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 161 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 161 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 161 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 161 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 161 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 161 "data/maps/TwinleafTown/scripts.pory"
	walk_left
# 161 "data/maps/TwinleafTown/scripts.pory"
	walk_down
# 161 "data/maps/TwinleafTown/scripts.pory"
	walk_down
	step_end

TwinleafTown_Technology_Text_0:
# 9 "data/maps/TwinleafTown/scripts.pory"
	.string "Technology just blows me away!\p"
	.string "I mean now you can play with people\n"
	.string "around the world. . . wirelessly!$"

TwinleafTown_WildPokemon_Text_0:
# 18 "data/maps/TwinleafTown/scripts.pory"
	.string "It's true that wild Pokémon do attack\n"
	.string "people sometimes. . .\p"
	.string "But, Pokémon also open their hearts\n"
	.string "to you, so you can become friends.$"

TwinleafTown_EventScript_PlayersHouseSign_Text_0:
# 27 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_EventScript_RivalsHouseSign_Text_0:
# 34 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

TwinleafTown_EventScript_TwinleafSign_Text_0:
# 41 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"

TwinleafTown_GoSeeBarry_Text_0:
# 139 "data/maps/TwinleafTown/scripts.pory"
	.string "Hiya, {PLAYER}.\n"
	.string "Barry was looking for you.\p"
	.string "I think he's home now.\n"
	.string "Why don't you go check it out?$"
