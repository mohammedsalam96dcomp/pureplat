VerityLakeFront_MapScripts::
	.byte 0


VerityLakeFront_EventScript_EnterLakeVerity::
# 6 "data/maps/VerityLakeFront/scripts.pory"
	lock
# 7 "data/maps/VerityLakeFront/scripts.pory"
	facefollowernpc
# 9 "data/maps/VerityLakeFront/scripts.pory"
	msgbox VerityLakeFront_EventScript_EnterLakeVerity_Text_0
# 15 "data/maps/VerityLakeFront/scripts.pory"
	closemessage
# 17 "data/maps/VerityLakeFront/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VerityLakeFront_EventScript_EnterLakeVerity_Movement_0
# 18 "data/maps/VerityLakeFront/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, VerityLakeFront_EventScript_EnterLakeVerity_Movement_0
# 19 "data/maps/VerityLakeFront/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 21 "data/maps/VerityLakeFront/scripts.pory"
	warp MAP_LAKE_VERITY, 10, 28
# 23 "data/maps/VerityLakeFront/scripts.pory"
	release
	return


# 17 "data/maps/VerityLakeFront/scripts.pory"
VerityLakeFront_EventScript_EnterLakeVerity_Movement_0:
# 17 "data/maps/VerityLakeFront/scripts.pory"
	walk_up
	step_end

VerityLakeFront_EventScript_EnterLakeVerity_Text_0:
# 9 "data/maps/VerityLakeFront/scripts.pory"
	.string "{SPEAKER NAME_BARRY}All right!\n"
	.string "We're at the lake!\p"
	.string "Get ready, because we're capturing\n"
	.string "that legendary Pokémon.\p"
	.string "Trust me on this one. It's here.\n"
	.string "It even says so on the sign!$"
