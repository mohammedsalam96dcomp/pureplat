TwinleafTownBarrysHouse_1F_MapScripts::
	.byte 0


TwinleafTown_EventScript_BarrysMom::
# 10 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 12 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEDEX, TwinleafTown_EventScript_BarrysMom_2
# 20 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_TOWN_STATE, 3
	goto_if_eq TwinleafTown_EventScript_BarrysMom_3
# 22 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_TOWN_STATE, 4
	goto_if_eq TwinleafTown_EventScript_BarrysMom_4
# 24 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	compare VAR_TWINLEAF_TOWN_STATE, 7
	goto_if_eq TwinleafTown_EventScript_BarrysMom_5
TwinleafTown_EventScript_BarrysMom_1:
# 34 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return

TwinleafTown_EventScript_BarrysMom_2:
# 13 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 14 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_BarrysMom_Text_0
	goto TwinleafTown_EventScript_BarrysMom_1

TwinleafTown_EventScript_BarrysMom_3:
# 21 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	goto TwinleafTown_EventScript_SitStill
	goto TwinleafTown_EventScript_BarrysMom_1

TwinleafTown_EventScript_BarrysMom_4:
# 23 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	goto TwinleafTown_EventScript_RocketedOff
	goto TwinleafTown_EventScript_BarrysMom_1

TwinleafTown_EventScript_BarrysMom_5:
# 25 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	compare VAR_LAKE_VERITY_STATE, 3
	goto_if_eq TwinleafTown_EventScript_BarrysMom_10
# 31 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	goto TwinleafTown_EventScript_Route201
	goto TwinleafTown_EventScript_BarrysMom_1

TwinleafTown_EventScript_BarrysMom_10:
# 26 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 27 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_BarrysMom_Text_1
	goto TwinleafTown_EventScript_BarrysMom_1


TwinleafTown_EventScript_SitStill::
# 38 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 39 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 41 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	setspeaker SP_NAME_BARRYMOM
# 42 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_SitStill_Text_0
# 50 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return


TwinleafTown_EventScript_RocketedOff::
# 54 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 56 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 57 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	setspeaker SP_NAME_BARRYMOM
# 58 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_RocketedOff_Text_0
# 65 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return


TwinleafTown_EventScript_Route201::
# 69 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	lock
# 71 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	faceplayer
# 72 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	setspeaker SP_NAME_BARRYMOM
# 73 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	msgbox TwinleafTown_EventScript_Route201_Text_0
# 77 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	release
	return


TwinleafTown_EventScript_BarrysMom_Text_0:
# 14 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_BARRYMOM}My Barry took\n"
	.string "off like a rocket as usual.\p"
	.string "He was shouting something about\n"
	.string "becoming the greatest Trainer ever. . .\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

TwinleafTown_EventScript_BarrysMom_Text_1:
# 27 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_BARRYMOM}Oh, you've\n"
	.string "become friends with a Pokémon, too.$"

TwinleafTown_EventScript_SitStill_Text_0:
# 42 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "Oh, hi,\n"
	.string "{PLAYER}.\p"
	.string "Did you come calling on Barry?\p"
	.string "He was gone for a second, but then\n"
	.string "he came running right back home.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

TwinleafTown_EventScript_RocketedOff_Text_0:
# 58 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "That kid rocketed\n"
	.string "off again like usual.\p"
	.string "I'd guess he would be out on\n"
	.string "Route 201 by now?\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"

TwinleafTown_EventScript_Route201_Text_0:
# 73 "data/maps/TwinleafTownBarrysHouse_1F/scripts.pory"
	.string "My Barry should\n"
	.string "be out on Route 201 by now.\p"
	.string "He just can't sit still, that boy.\n"
	.string "I wonder who he takes after?$"
