TwinleafTownBarrysHouse_1F_MapScripts::
	.byte 0


TwinleafTown_EventScript_BarrysMom::
# 5 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 6 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 5
	goto_if_eq TwinleafTown_EventScript_BarrysMom_2
# 8 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 6
	goto_if_eq TwinleafTown_EventScript_BarrysMom_3
TwinleafTown_EventScript_BarrysMom_1:
# 11 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return

TwinleafTown_EventScript_BarrysMom_2:
# 7 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	goto TwinleafTown_EventScript_SitStill
	goto TwinleafTown_EventScript_BarrysMom_1

TwinleafTown_EventScript_BarrysMom_3:
# 9 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	goto TwinleafTown_EventScript_RocketedOff
	goto TwinleafTown_EventScript_BarrysMom_1


TwinleafTown_EventScript_SitStill::
# 15 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 16 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 18 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	setspeaker SP_NAME_BARRYMOM
# 19 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_SitStill_Text_0
# 27 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return


TwinleafTown_EventScript_RocketedOff::
# 31 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 33 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 34 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	setspeaker SP_NAME_BARRYMOM
# 35 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_RocketedOff_Text_0
# 42 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return


TwinleafTown_EventScript_SitStill_Text_0:
# 19 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "Oh, hi,\n"
	.string "{PLAYER}.\p"
	.string "Did you come calling on Barry?\p"
	.string "He was gone for a second, but then\n"
	.string "he came running right back home.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

TwinleafTown_EventScript_RocketedOff_Text_0:
# 35 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "That kid rocketed\n"
	.string "off again like usual.\p"
	.string "I'd guess he would be out on\n"
	.string "Route 201 by now?\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"
