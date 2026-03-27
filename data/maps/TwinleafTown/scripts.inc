TwinleafTown_MapScripts::
	.byte 0


TwinleafTown_EventScript_PlayersHouseSign::
# 6 "data/maps/TwinleafTown/scripts.pory"
	lock
# 7 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 8 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_PlayersHouseSign_Text_0
# 9 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_RivalsHouseSign::
# 14 "data/maps/TwinleafTown/scripts.pory"
	lock
# 15 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 16 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_RivalsHouseSign_Text_0
# 17 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_TwinleafSign::
# 22 "data/maps/TwinleafTown/scripts.pory"
	lock
# 23 "data/maps/TwinleafTown/scripts.pory"
	faceplayer
# 24 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TwinleafSign_Text_0
# 26 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_PlayersHouseSign_Text_0:
# 8 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_EventScript_RivalsHouseSign_Text_0:
# 16 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

TwinleafTown_EventScript_TwinleafSign_Text_0:
# 24 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"
