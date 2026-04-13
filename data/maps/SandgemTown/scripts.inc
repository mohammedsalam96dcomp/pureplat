SandgemTown_MapScripts::
# 2 "data/maps/SandgemTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SandgemTown_EventScript_OnTransition
	.byte 0


SandgemTown_EventScript_OnTransition::
# 7 "data/maps/SandgemTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return

