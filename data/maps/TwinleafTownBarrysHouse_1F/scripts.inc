TwinleafTownBarrysHouse_1F_MapScripts::
	.byte 0


TwinleafTown_EventScript_BarrysMom::
# 10 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 11 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_TOWN_STATE, 3
	goto_if_eq TwinleafTown_EventScript_BarrysMom_2
# 13 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_TOWN_STATE, 4
	goto_if_eq TwinleafTown_EventScript_BarrysMom_3
# 15 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_TOWN_STATE, 8
	goto_if_eq TwinleafTown_EventScript_BarrysMom_4
TwinleafTown_EventScript_BarrysMom_1:
# 18 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return

TwinleafTown_EventScript_BarrysMom_2:
# 12 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	goto TwinleafTown_EventScript_SitStill
	goto TwinleafTown_EventScript_BarrysMom_1

TwinleafTown_EventScript_BarrysMom_3:
# 14 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	goto TwinleafTown_EventScript_RocketedOff
	goto TwinleafTown_EventScript_BarrysMom_1

TwinleafTown_EventScript_BarrysMom_4:
# 16 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	goto TwinleafTown_EventScript_Route201
	goto TwinleafTown_EventScript_BarrysMom_1


TwinleafTown_EventScript_SitStill::
# 22 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 23 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 25 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	setspeaker SP_NAME_BARRYMOM
# 26 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_SitStill_Text_0
# 34 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return


TwinleafTown_EventScript_RocketedOff::
# 38 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 40 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 41 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	setspeaker SP_NAME_BARRYMOM
# 42 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_RocketedOff_Text_0
# 49 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return


TwinleafTown_EventScript_Route201::
# 53 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 55 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 56 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	setspeaker SP_NAME_BARRYMOM
# 57 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_Route201_Text_0
# 62 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return


TwinleafTown_EventScript_SitStill_Text_0:
# 26 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "Oh, hi,\n"
	.string "{PLAYER}.\p"
	.string "Did you come calling on Barry?\p"
	.string "He was gone for a second, but then\n"
	.string "he came running right back home.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

TwinleafTown_EventScript_RocketedOff_Text_0:
# 42 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "That kid rocketed\n"
	.string "off again like usual.\p"
	.string "I'd guess he would be out on\n"
	.string "Route 201 by now?\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

TwinleafTown_EventScript_Route201_Text_0:
# 57 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "My Barry should\n"
	.string "be out on Route 201 by now.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"
