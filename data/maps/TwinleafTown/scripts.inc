TwinleafTown_MapScripts::
	.byte 0


TwinleafTown_EventScript_PlayersHouseSign::
# 6 "data/maps/TwinleafTown/scripts.pory"
	lock
# 7 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_PlayersHouseSign_Text_0
# 8 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_RivalsHouseSign::
# 13 "data/maps/TwinleafTown/scripts.pory"
	lock
# 14 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_RivalsHouseSign_Text_0
# 15 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_TwinleafSign::
# 20 "data/maps/TwinleafTown/scripts.pory"
	lock
# 21 "data/maps/TwinleafTown/scripts.pory"
	msgbox TwinleafTown_EventScript_TwinleafSign_Text_0
# 23 "data/maps/TwinleafTown/scripts.pory"
	release
	end


TwinleafTown_EventScript_PlayersHouseSign_Text_0:
# 7 "data/maps/TwinleafTown/scripts.pory"
	.string "{PLAYER}'s House$"

TwinleafTown_EventScript_RivalsHouseSign_Text_0:
# 14 "data/maps/TwinleafTown/scripts.pory"
	.string "Barry's House$"

TwinleafTown_EventScript_TwinleafSign_Text_0:
# 21 "data/maps/TwinleafTown/scripts.pory"
	.string "Twinleaf Town\n"
	.string "Fresh and Free!$"
