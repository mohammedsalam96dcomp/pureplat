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
	compare VAR_TWINLEAF_TOWN_STATE, 7
	goto_if_eq TwinleafTown_EventScript_BarrysMom_4
TwinleafTown_EventScript_BarrysMom_1:
# 25 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
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
	compare VAR_LAKE_VERITY_STATE, 3
	goto_if_eq TwinleafTown_EventScript_BarrysMom_8
# 22 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	goto TwinleafTown_EventScript_Route201
	goto TwinleafTown_EventScript_BarrysMom_1

TwinleafTown_EventScript_BarrysMom_8:
# 17 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 18 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_BarrysMom_Text_0
	goto TwinleafTown_EventScript_BarrysMom_1


TwinleafTown_EventScript_SitStill::
# 29 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 30 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 32 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	setspeaker SP_NAME_BARRYMOM
# 33 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_SitStill_Text_0
# 41 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return


TwinleafTown_EventScript_RocketedOff::
# 45 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 47 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 48 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	setspeaker SP_NAME_BARRYMOM
# 49 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_RocketedOff_Text_0
# 56 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return


TwinleafTown_EventScript_Route201::
# 60 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 62 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 63 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	setspeaker SP_NAME_BARRYMOM
# 64 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_Route201_Text_0
# 68 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return


TwinleafTown_EventScript_BarrysMom_Text_0:
# 18 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_BARRYMOM}Oh, you've\n"
	.string "become friends with a Pokémon, too.$"

TwinleafTown_EventScript_SitStill_Text_0:
# 33 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "Oh, hi,\n"
	.string "{PLAYER}.\p"
	.string "Did you come calling on Barry?\p"
	.string "He was gone for a second, but then\n"
	.string "he came running right back home.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

TwinleafTown_EventScript_RocketedOff_Text_0:
# 49 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "That kid rocketed\n"
	.string "off again like usual.\p"
	.string "I'd guess he would be out on\n"
	.string "Route 201 by now?\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

TwinleafTown_EventScript_Route201_Text_0:
# 64 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "My Barry should\n"
	.string "be out on Route 201 by now.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"
