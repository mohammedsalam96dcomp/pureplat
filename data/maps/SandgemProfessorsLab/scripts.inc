SandgemProfessorsLab_MapScripts::
# 5 "data/maps/SandgemProfessorsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SandgemProfessorsLab_EventScript_OnTransition
# 7 "data/maps/SandgemProfessorsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SandgemProfessorsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SandgemProfessorsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/SandgemProfessorsLab/scripts.pory"
	map_script_2 VAR_SANDGEM_TOWN_STATE, 1, SandgemProfessorsLab_MapScripts_ON_FRAME
	.2byte 0


SandgemProfessorsLab_EventScript_OnTransition::
# 14 "data/maps/SandgemProfessorsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


SandgemProfessorsLab_MapScripts_ON_FRAME::
# 18 "data/maps/SandgemProfessorsLab/scripts.pory"
	lock
# 20 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement 2, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_0
# 21 "data/maps/SandgemProfessorsLab/scripts.pory"
	waitmovement 0
# 23 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement 2, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_1
# 24 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_1
# 25 "data/maps/SandgemProfessorsLab/scripts.pory"
	waitmovement 2
# 27 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement 2, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_2
# 28 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_3
# 29 "data/maps/SandgemProfessorsLab/scripts.pory"
	waitmovement 2
# 31 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_MapScripts_ON_FRAME_Text_0
# 34 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 36 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_4
# 37 "data/maps/SandgemProfessorsLab/scripts.pory"
	waitmovement 0
# 39 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_MapScripts_ON_FRAME_Text_1
# 44 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 46 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_5
# 47 "data/maps/SandgemProfessorsLab/scripts.pory"
	waitmovement 0
# 49 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_MapScripts_ON_FRAME_Text_2, MSGBOX_YESNO
# 55 "data/maps/SandgemProfessorsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SandgemProfessorsLab_MapScripts_ON_FRAME_2
SandgemProfessorsLab_MapScripts_ON_FRAME_1:
# 69 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_MapScripts_ON_FRAME_Text_4
# 83 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 85 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement 2, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_6
# 86 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_7
# 87 "data/maps/SandgemProfessorsLab/scripts.pory"
	waitmovement 2
# 89 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_MapScripts_ON_FRAME_Text_5
# 93 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 95 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement 2, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_8
# 96 "data/maps/SandgemProfessorsLab/scripts.pory"
	waitmovement 0
# 98 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_9
# 99 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement 1, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_10
# 100 "data/maps/SandgemProfessorsLab/scripts.pory"
	waitmovement 1
# 102 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_MapScripts_ON_FRAME_Text_6
SandgemProfessorsLab_MapScripts_ON_FRAME_5:
# 119 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_MapScripts_ON_FRAME_Text_7, MSGBOX_YESNO
# 123 "data/maps/SandgemProfessorsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne SandgemProfessorsLab_MapScripts_ON_FRAME_9
# 136 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_MapScripts_ON_FRAME_Text_9
# 138 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 140 "data/maps/SandgemProfessorsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 141 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_MapScripts_ON_FRAME_Text_10
# 143 "data/maps/SandgemProfessorsLab/scripts.pory"
	waitfanfare
# 144 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 145 "data/maps/SandgemProfessorsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 147 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_MapScripts_ON_FRAME_Text_11
# 154 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 156 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement 2, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_6
# 157 "data/maps/SandgemProfessorsLab/scripts.pory"
	waitmovement 2
# 159 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_MapScripts_ON_FRAME_Text_12
# 173 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 175 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_7
# 176 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement 2, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_6
# 177 "data/maps/SandgemProfessorsLab/scripts.pory"
	waitmovement 2
# 179 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_MapScripts_ON_FRAME_Text_13
# 184 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 186 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement 2, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_11
# 187 "data/maps/SandgemProfessorsLab/scripts.pory"
	waitmovement 2
# 188 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_12
# 189 "data/maps/SandgemProfessorsLab/scripts.pory"
	applymovement 2, SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_11
# 190 "data/maps/SandgemProfessorsLab/scripts.pory"
	waitmovement 2
# 192 "data/maps/SandgemProfessorsLab/scripts.pory"
	setflag FLAG_HIDE_ROWANS_LAB_DAWN
# 193 "data/maps/SandgemProfessorsLab/scripts.pory"
	removeobject 2
# 194 "data/maps/SandgemProfessorsLab/scripts.pory"
	setvar VAR_SANDGEM_TOWN_STATE, 2
# 196 "data/maps/SandgemProfessorsLab/scripts.pory"
	release
	return

SandgemProfessorsLab_MapScripts_ON_FRAME_2:
# 56 "data/maps/SandgemProfessorsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 57 "data/maps/SandgemProfessorsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
SandgemProfessorsLab_MapScripts_ON_FRAME_7:
# 59 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_MapScripts_ON_FRAME_Text_3, MSGBOX_YESNO
# 61 "data/maps/SandgemProfessorsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne SandgemProfessorsLab_MapScripts_ON_FRAME_12
	goto SandgemProfessorsLab_MapScripts_ON_FRAME_1

SandgemProfessorsLab_MapScripts_ON_FRAME_9:
# 124 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_MapScripts_ON_FRAME_Text_8
	goto SandgemProfessorsLab_MapScripts_ON_FRAME_5

SandgemProfessorsLab_MapScripts_ON_FRAME_12:
# 62 "data/maps/SandgemProfessorsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto SandgemProfessorsLab_MapScripts_ON_FRAME_7


SandgemProfessorsLab_EventScript_Professor::
# 200 "data/maps/SandgemProfessorsLab/scripts.pory"
	lock
# 202 "data/maps/SandgemProfessorsLab/scripts.pory"
	compare VAR_SANDGEM_TOWN_STATE, 2
	goto_if_eq SandgemProfessorsLab_EventScript_Professor_2
SandgemProfessorsLab_EventScript_Professor_1:
# 209 "data/maps/SandgemProfessorsLab/scripts.pory"
	release
	return

SandgemProfessorsLab_EventScript_Professor_2:
# 203 "data/maps/SandgemProfessorsLab/scripts.pory"
	faceplayer
# 204 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_EventScript_Professor_Text_0
# 207 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
	goto SandgemProfessorsLab_EventScript_Professor_1


SandgemProfessorsLab_EventScript_RivalFather::
# 213 "data/maps/SandgemProfessorsLab/scripts.pory"
	lockall
# 215 "data/maps/SandgemProfessorsLab/scripts.pory"
	faceplayer
# 216 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_EventScript_RivalFather_Text_0
# 221 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 223 "data/maps/SandgemProfessorsLab/scripts.pory"
	releaseall
	return


SandgemProfessorsLab_EventScript_Roseanne::
# 227 "data/maps/SandgemProfessorsLab/scripts.pory"
	lockall
# 229 "data/maps/SandgemProfessorsLab/scripts.pory"
	faceplayer
# 230 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_EventScript_Roseanne_Text_0
# 236 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 238 "data/maps/SandgemProfessorsLab/scripts.pory"
	releaseall
	return


SandgemProfessorsLab_EventScript_Rule1::
# 243 "data/maps/SandgemProfessorsLab/scripts.pory"
	lockall
# 245 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_EventScript_Rule1_Text_0
# 247 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 249 "data/maps/SandgemProfessorsLab/scripts.pory"
	releaseall
	return


SandgemProfessorsLab_EventScript_Rule2::
# 253 "data/maps/SandgemProfessorsLab/scripts.pory"
	lockall
# 255 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_EventScript_Rule2_Text_0
# 257 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 259 "data/maps/SandgemProfessorsLab/scripts.pory"
	releaseall
	return


SandgemProfessorsLab_EventScript_Research1::
# 263 "data/maps/SandgemProfessorsLab/scripts.pory"
	lockall
# 265 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_EventScript_Research1_Text_0
# 267 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 269 "data/maps/SandgemProfessorsLab/scripts.pory"
	releaseall
	return


SandgemProfessorsLab_EventScript_Research2::
# 273 "data/maps/SandgemProfessorsLab/scripts.pory"
	lockall
# 275 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_EventScript_Research2_Text_0
# 277 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 279 "data/maps/SandgemProfessorsLab/scripts.pory"
	releaseall
	return


SandgemProfessorsLab_EventScript_PC::
# 283 "data/maps/SandgemProfessorsLab/scripts.pory"
	lockall
# 285 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_EventScript_PC_Text_0
# 289 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 291 "data/maps/SandgemProfessorsLab/scripts.pory"
	releaseall
	return


SandgemProfessorsLab_EventScript_Refrigerator::
# 295 "data/maps/SandgemProfessorsLab/scripts.pory"
	lockall
# 297 "data/maps/SandgemProfessorsLab/scripts.pory"
	msgbox SandgemProfessorsLab_EventScript_Refrigerator_Text_0
# 299 "data/maps/SandgemProfessorsLab/scripts.pory"
	closemessage
# 301 "data/maps/SandgemProfessorsLab/scripts.pory"
	releaseall
	return


# 20 "data/maps/SandgemProfessorsLab/scripts.pory"
SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_0:
# 20 "data/maps/SandgemProfessorsLab/scripts.pory"
	delay_16
	step_end

# 23 "data/maps/SandgemProfessorsLab/scripts.pory"
SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_1:
# 23 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_up
# 23 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_up
# 23 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_up
# 23 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_up
# 23 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_up
	step_end

# 27 "data/maps/SandgemProfessorsLab/scripts.pory"
SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_2:
# 27 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_right
# 27 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_in_place_left
	step_end

# 28 "data/maps/SandgemProfessorsLab/scripts.pory"
SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_3:
# 28 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_up
	step_end

# 36 "data/maps/SandgemProfessorsLab/scripts.pory"
SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_4:
# 36 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_in_place_right
# 36 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_in_place_up
	step_end

# 46 "data/maps/SandgemProfessorsLab/scripts.pory"
SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_5:
# 46 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_in_place_up
# 46 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_in_place_right
# 46 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_in_place_up
	step_end

# 85 "data/maps/SandgemProfessorsLab/scripts.pory"
SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_6:
# 85 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_in_place_left
	step_end

# 86 "data/maps/SandgemProfessorsLab/scripts.pory"
SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_7:
# 86 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_in_place_right
	step_end

# 95 "data/maps/SandgemProfessorsLab/scripts.pory"
SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_8:
# 95 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_in_place_left
# 95 "data/maps/SandgemProfessorsLab/scripts.pory"
	delay_16
# 95 "data/maps/SandgemProfessorsLab/scripts.pory"
	delay_16
	step_end

# 98 "data/maps/SandgemProfessorsLab/scripts.pory"
SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_9:
# 98 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_in_place_up
	step_end

# 99 "data/maps/SandgemProfessorsLab/scripts.pory"
SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_10:
# 99 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_in_place_down
	step_end

# 186 "data/maps/SandgemProfessorsLab/scripts.pory"
SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_11:
# 186 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_down
# 186 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_down
# 186 "data/maps/SandgemProfessorsLab/scripts.pory"
	walk_down
	step_end

# 188 "data/maps/SandgemProfessorsLab/scripts.pory"
SandgemProfessorsLab_MapScripts_ON_FRAME_Movement_12:
# 188 "data/maps/SandgemProfessorsLab/scripts.pory"
	face_down
	step_end

SandgemProfessorsLab_MapScripts_ON_FRAME_Text_0:
# 31 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}Well, well, look who's here.\p"
	.string "{PLAYER}, was it?\n"
	.string "Let's have a look at your Pokémon.$"

SandgemProfessorsLab_MapScripts_ON_FRAME_Text_1:
# 39 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}. . .\p"
	.string "Hmm. . .\n"
	.string "I see. . .\p"
	.string "This Pokémon seems to be rather\n"
	.string "happy.$"

SandgemProfessorsLab_MapScripts_ON_FRAME_Text_2:
# 49 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}Hm!\p"
	.string "Entrusting you with that X\n"
	.string "was no mistake, it seems!\p"
	.string "Well, would you like to give\n"
	.string "it a nickname?$"

SandgemProfessorsLab_MapScripts_ON_FRAME_Text_3:
# 59 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}Hmm, OK, I see. . .\n"
	.string "And you're happy with that nickname?$"

SandgemProfessorsLab_MapScripts_ON_FRAME_Text_4:
# 69 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}When I first saw you two\n"
	.string "about to step into the tall grass\l"
	.string "without Pokémon, I was shocked.\p"
	.string "I was astounded by these foolhardy\n"
	.string "children.\p"
	.string "But now, you've astounded me in an\n"
	.string "entirely different way.\p"
	.string "Already, there is bond growing\n"
	.string "between you and that Pokémon.\p"
	.string "I feel privileged to have met you.\p"
	.string "I'm sure X feels the same\n"
	.string "way about you.\p"
	.string "That's why I'll ask you to cherish that\n"
	.string "X of yours.$"

SandgemProfessorsLab_MapScripts_ON_FRAME_Text_5:
# 89 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}Boy, am I glad you're kind\n"
	.string "toward Pokémon.\p"
	.string "If you weren't well. . .\n"
	.string "I don't even want to think about it.$"

SandgemProfessorsLab_MapScripts_ON_FRAME_Text_6:
# 102 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}Er-hem!\n"
	.string "Let's move on to the main topic.\p"
	.string "There is something I want you to do\n"
	.string "for me.\p"
	.string "Allow me to properly introduce myself\n"
	.string "first.\p"
	.string "My name, as you know, is Rowan.\n"
	.string "I study Pokémon.\p"
	.string "First of all, I want to know exactly\n"
	.string "what kinds of Pokémon live in the\l"
	.string "Sinnoh region.\p"
	.string "To do so, it is necessary to collect\n"
	.string "data using the Pokédex.\p"
	.string "This is what I wish to ask of you.$"

SandgemProfessorsLab_MapScripts_ON_FRAME_Text_7:
# 119 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}I want to entrust you with this\n"
	.string "Pokédex.\p"
	.string "Will you use it to record data on all\n"
	.string "the Pokémon in Sinnoh for me?$"

SandgemProfessorsLab_MapScripts_ON_FRAME_Text_8:
# 124 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}. . .\p"
	.string ". . .\p"
	.string ". . .\p"
	.string ". . .\p"
	.string "I can stand here without speaking for\n"
	.string "hours. I'm a very patient man.\p"
	.string "Let me ask you again, {PLAYER}.$"

SandgemProfessorsLab_MapScripts_ON_FRAME_Text_9:
# 136 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}Hm!\p"
	.string "Good answer!$"

SandgemProfessorsLab_MapScripts_ON_FRAME_Text_10:
# 141 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "{PLAYER} obtained\n"
	.string "the Pokédex.$"

SandgemProfessorsLab_MapScripts_ON_FRAME_Text_11:
# 147 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}That Pokédex is a very\n"
	.string "high-tech device.\p"
	.string "It will automatically record data on\n"
	.string "every kind of Pokémon you encounter.\p"
	.string "{PLAYER}, I ask that you go\n"
	.string "everywhere and meet every kind of\l"
	.string "Pokémon in this region!$"

SandgemProfessorsLab_MapScripts_ON_FRAME_Text_12:
# 159 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}I've got the same kind of\n"
	.string "Pokédex as you.\p"
	.string "{SPEAKER NAME_PROFESSOR}When you walked up Route 201\n"
	.string "with your Pokémon, what did you feel?\p"
	.string "I've lived for 60 long years.\n"
	.string "Even now, I get a thrill when\p"
	.string "I'm with a Pokémon.\p"
	.string "Now you should know that there are\n"
	.string "countless Pokémon in this world.\p"
	.string "That means there are just as many\n"
	.string "thrills waiting for you out there!\p"
	.string "Now go!\p"
	.string "{PLAYER}, your grand adventure\n"
	.string "begins right now!$"

SandgemProfessorsLab_MapScripts_ON_FRAME_Text_13:
# 179 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "{SPEAKER NAME_RIVAL}The professor asked me to help,\n"
	.string "so I'm filling the Pokédex pages, too.\p"
	.string "That makes us comrades working toward\n"
	.string "the same goal.\p"
	.string "I'll teach you stuff later, OK?$"

SandgemProfessorsLab_EventScript_Professor_Text_0:
# 204 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "{SPEAKER NAME_PROFESSOR}Go on!\p"
	.string "{PLAYER}, your grand adventure\n"
	.string "begins right now!$"

SandgemProfessorsLab_EventScript_RivalFather_Text_0:
# 216 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "I'm {RIVAL}'s father.\p"
	.string "I'll be happy to assist you on your\n"
	.string "quest for the professor.\p"
	.string "Hahaha. Eh. . .\n"
	.string "I'm sure we can count on you!$"

SandgemProfessorsLab_EventScript_Roseanne_Text_0:
# 230 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "Professor Rowan invented a new\n"
	.string "Pokédex while working alongside a\l"
	.string "professor from the Kanto region.\p"
	.string "Oh, my name is Roseanne.\p"
	.string "It's an honor to be an assistant to\n"
	.string "our professor!$"

SandgemProfessorsLab_EventScript_Rule1_Text_0:
# 245 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "Adventure Rule No. 1\n"
	.string "The START Button opens the menu.$"

SandgemProfessorsLab_EventScript_Rule2_Text_0:
# 255 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "Adventure Rule No. 2\n"
	.string "Record your progress with SAVE.$"

SandgemProfessorsLab_EventScript_Research1_Text_0:
# 265 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "It's crammed full of books with all\n"
	.string "sorts of Pokémon information.$"

SandgemProfessorsLab_EventScript_Research2_Text_0:
# 275 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "There's a lot of reference material\n"
	.string "and research reports on Pokémon.$"

SandgemProfessorsLab_EventScript_PC_Text_0:
# 285 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "{PLAYER} checked the PC.\p"
	.string "The screen is filled with special terms\n"
	.string "and academic writing that is impossible\l"
	.string "to figure out.$"

SandgemProfessorsLab_EventScript_Refrigerator_Text_0:
# 297 "data/maps/SandgemProfessorsLab/scripts.pory"
	.string "The refrigerator is filled with\n"
	.string "tasty sweets! Mmm. . .$"
