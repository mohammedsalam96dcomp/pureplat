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
# 10 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 8
	goto_if_eq TwinleafTown_EventScript_BarrysMom_4
TwinleafTown_EventScript_BarrysMom_1:
# 13 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
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

TwinleafTown_EventScript_BarrysMom_4:
# 11 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	goto TwinleafTown_EventScript_Route201
	goto TwinleafTown_EventScript_BarrysMom_1


TwinleafTown_EventScript_SitStill::
# 17 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 18 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 20 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	setspeaker SP_NAME_BARRYMOM
# 21 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_SitStill_Text_0
# 29 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return


TwinleafTown_EventScript_RocketedOff::
# 33 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 35 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 36 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	setspeaker SP_NAME_BARRYMOM
# 37 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_RocketedOff_Text_0
# 44 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return


TwinleafTown_EventScript_Route201::
# 48 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 50 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 51 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	setspeaker SP_NAME_BARRYMOM
# 52 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_Route201_Text_0
# 57 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return


TwinleafTown_EventScript_SitStill_Text_0:
# 21 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "Oh, hi,\n"
	.string "{PLAYER}.\p"
	.string "Did you come calling on Barry?\p"
	.string "He was gone for a second, but then\n"
	.string "he came running right back home.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

TwinleafTown_EventScript_RocketedOff_Text_0:
# 37 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "That kid rocketed\n"
	.string "off again like usual.\p"
	.string "I'd guess he would be out on\n"
	.string "Route 201 by now?\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

TwinleafTown_EventScript_Route201_Text_0:
# 52 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "My Barry should\n"
	.string "be out on Route 201 by now.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"
