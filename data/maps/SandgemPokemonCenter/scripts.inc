SandgemPokemonCenter_MapScripts::
# 2 "data/maps/SandgemPokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SandgemPokemonCenter_OnTransition
# 3 "data/maps/SandgemPokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


SandgemPokemonCenter_OnTransition::
# 7 "data/maps/SandgemPokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SANDGEM_TOWN
	return


SandgemTown_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/SandgemPokemonCenter/scripts.pory"
	setvar VAR_0x800B, LOCALID_SANDGEM_NURSE
# 12 "data/maps/SandgemPokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/SandgemPokemonCenter/scripts.pory"
	waitmessage
# 14 "data/maps/SandgemPokemonCenter/scripts.pory"
	waitbuttonpress
# 15 "data/maps/SandgemPokemonCenter/scripts.pory"
	release
	end


SandgemTown_PokemonCenter_1F_EventScript_OldMan::
# 20 "data/maps/SandgemPokemonCenter/scripts.pory"
	lock
# 22 "data/maps/SandgemPokemonCenter/scripts.pory"
	faceplayer
# 23 "data/maps/SandgemPokemonCenter/scripts.pory"
	msgbox SandgemTown_PokemonCenter_1F_EventScript_OldMan_Text_0
# 28 "data/maps/SandgemPokemonCenter/scripts.pory"
	release
	return


SandgemTown_PokemonCenter_1F_EventScript_Man::
# 32 "data/maps/SandgemPokemonCenter/scripts.pory"
	lock
# 34 "data/maps/SandgemPokemonCenter/scripts.pory"
	faceplayer
# 35 "data/maps/SandgemPokemonCenter/scripts.pory"
	msgbox SandgemTown_PokemonCenter_1F_EventScript_Man_Text_0
# 39 "data/maps/SandgemPokemonCenter/scripts.pory"
	release
	return


SandgemTown_PokemonCenter_1F_EventScript_OldMan_Text_0:
# 23 "data/maps/SandgemPokemonCenter/scripts.pory"
	.string "Do you see that PC over there?\n"
	.string "That fancy blue one?\p"
	.string "If you've got Pokémon with you,\n"
	.string "it's free to use.$"

SandgemTown_PokemonCenter_1F_EventScript_Man_Text_0:
# 35 "data/maps/SandgemPokemonCenter/scripts.pory"
	.string "Talk to that nice lady at the counter\n"
	.string "and hand her your Pokémon.\p"
	.string "She'll heal your Pokémon to perfect\n"
	.string "health in no time at all!$"
