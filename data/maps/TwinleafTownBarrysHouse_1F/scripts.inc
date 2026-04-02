TwinleafTownBarrysHouse_1F_MapScripts::
	.byte 0


TwinleafTown_EventScript_BarrysMom::
# 5 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 6 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_INTRO_STATE, 6
	goto_if_eq TwinleafTown_EventScript_BarrysMom_2
TwinleafTown_EventScript_BarrysMom_1:
# 9 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return

TwinleafTown_EventScript_BarrysMom_2:
# 7 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	goto TwinleafTown_EventScript_SitStill
	goto TwinleafTown_EventScript_BarrysMom_1


TwinleafTown_EventScript_SitStill::
# 13 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 14 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 16 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	setspeaker SP_NAME_BARRYMOM
# 17 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_SitStill_Text_0
# 24 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return


TwinleafTown_EventScript_SitStill_Text_0:
# 17 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "Oh, hi,\n"
	.string "{PLAYER}.\p"
	.string "Did you come calling on Barry?\p"
	.string "He was gone for a second, but then\n"
	.string "he came running right back home.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"
