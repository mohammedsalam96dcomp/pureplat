# 1 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 2 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_MapScripts::
# 3 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition
# 4 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.byte 0
# 5 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 6 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_OnTransition:
# 7 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 8 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 9 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 10 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 11 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryAttendant::
# 12 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 13 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 14 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 15 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	checkitem ITEM_SS_TICKET
# 16 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_OutsideWest_EventScript_NoSSTicket
# 17 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
# 18 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 19 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 20 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 21 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 22 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination::
# 23 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, FALSE
# 24 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 25 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_FerryToSlateport
# 26 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_FerryToLilycove
# 27 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 28 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 29 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 30 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 31 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_NoSSTicket::
# 32 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
# 33 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 34 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 35 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 36 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToSlateport::
# 37 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
# 38 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 39 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 40 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 41 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 42 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 43 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 45 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToLilycove::
# 46 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
# 47 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 48 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 49 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 50 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 51 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 52 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 53 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 54 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination::
# 55 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
# 56 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 57 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 58 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 59 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 60 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BoardFerry::
# 61 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 62 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 63 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 64 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 30
# 65 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	hideobjectat LOCALID_FRONTIER_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
# 66 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, LOCALID_FRONTIER_SS_TIDAL
# 67 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 68 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 69 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 70 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CancelFerrySelect::
# 71 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
# 72 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 73 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 74 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 75 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign::
# 76 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
# 77 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 78 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 79 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleFactorySign::
# 80 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
# 81 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 82 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 83 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattlePikeSign::
# 84 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
# 85 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 86 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 87 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused. Of note, Battle Tower is in the East section in the final release
# 88 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC1::
# 89 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
# 90 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 91 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 92 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 93 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC2::
# 94 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
# 95 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 96 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 97 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy1::
# 98 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends, MSGBOX_NPC
# 99 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 100 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 101 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman2::
# 102 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 103 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 104 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
# 105 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 106 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_FISHERMAN_2, Common_Movement_FaceAwayPlayer
# 107 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 108 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 109 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 110 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 111 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man1::
# 113 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere, MSGBOX_NPC
# 114 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 115 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 116 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac1::
# 117 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 118 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 119 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 120 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 121 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac2::
# 122 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 123 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 124 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 125 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 126 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk::
# 127 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterRight
# 128 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 129 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons, MSGBOX_DEFAULT
# 130 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterLeft
# 131 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 132 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons, MSGBOX_DEFAULT
# 133 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 134 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 25
# 135 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_WalkInPlaceFasterUp
# 136 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_WalkInPlaceFasterUp
# 137 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 138 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 139 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 140 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 141 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper::
# 142 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 143 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 144 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 20
# 145 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 146 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory
# 147 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 148 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 149 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons, MSGBOX_DEFAULT
# 150 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 151 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 152 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 153 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperFaceFactory::
# 154 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_CAMPER, Common_Movement_WalkInPlaceFasterUp
# 155 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 156 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 157 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 158 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory::
# 159 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 160 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 161 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl::
# 162 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 163 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 164 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
# 165 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 166 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_GirlShudderNorth
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_GirlShudderSouth
# 168 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_GirlShudderWest
# 169 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_GirlShudderEast
# 170 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 171 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 172 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 173 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 174 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderNorth::
# 175 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth
# 176 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 177 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 178 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 179 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderSouth::
# 180 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth
# 181 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 182 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 183 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 184 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderWest::
# 185 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest
# 186 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 188 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 189 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderEast::
# 190 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast
# 191 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 192 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 193 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 194 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderNorth:
# 195 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 196 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_down
# 197 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 198 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 199 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderSouth:
# 200 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 201 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_up
# 202 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 203 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 204 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderWest:
# 205 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 206 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_right
# 207 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 208 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 209 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderEast:
# 210 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 211 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_faster_left
# 212 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 213 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 214 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman2::
# 215 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 216 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 217 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
# 218 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	random 2
# 219 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors
# 220 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors
# 221 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 222 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 223 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors::
# 224 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge, MSGBOX_DEFAULT
# 225 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 226 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 227 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 228 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors::
# 229 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge, MSGBOX_DEFAULT
# 230 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 231 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 232 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 233 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman1::
# 234 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling, MSGBOX_NPC
# 235 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 236 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 237 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 238 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC3::
# 239 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
# 240 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 241 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 242 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Gentleman::
# 243 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome, MSGBOX_NPC
# 244 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 245 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 246 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Lass::
# 247 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol, MSGBOX_NPC
# 248 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 249 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 250 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ExpertM::
# 251 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe, MSGBOX_NPC
# 252 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 253 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 254 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man2::
# 255 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo, MSGBOX_NPC
# 256 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 257 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 258 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman1::
# 259 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier, MSGBOX_NPC
# 260 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 261 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 262 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan1::
# 263 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople, MSGBOX_NPC
# 264 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 265 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 266 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan2::
# 267 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike, MSGBOX_NPC
# 268 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 269 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 270 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman3::
# 271 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 272 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet, MSGBOX_DEFAULT
# 273 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 274 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 275 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 276 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy2::
# 277 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 278 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering, MSGBOX_DEFAULT
# 279 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 280 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 281 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 282 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_OldMan::
# 283 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine, MSGBOX_NPC
# 284 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 285 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 286 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man4::
# 287 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 288 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 289 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_DEFAULT
# 290 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 291 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MAN_4, Common_Movement_FaceOriginalDirection
# 292 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 293 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 294 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 295 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 296 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_PokefanF::
# 297 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
# 298 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 299 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 300 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign:
# 301 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE DOME!\n"
# 302 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Your path to the invincible superstar!$"
# 303 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 304 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleFactorySign:
# 305 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE FACTORY!\n"
# 306 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Seek out the toughest POKéMON!$"
# 307 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 308 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattlePikeSign:
# 309 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE PIKE!\n"
# 310 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Choose one of three paths!$"
# 311 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 312 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThisIsBattleTower:
# 313 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE TOWER.\p"
# 314 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "TRAINERS bring their best-raised\n"
# 315 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "POKéMON for elimination-style matches.$"
# 316 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 317 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MayISeeYourTicket:
# 318 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 319 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "May I see your TICKET?$"
# 320 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 321 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard:
# 322 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
# 323 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm terribly sorry.\p"
# 324 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You must have a TICKET to board\n"
# 325 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the ferry.$"
# 326 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 327 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo:
# 328 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
# 329 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 330 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "And where would you like to go?$"
# 331 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 332 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SlateportItIs:
# 333 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"
# 334 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 335 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LilycoveItIs:
# 336 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"
# 337 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 338 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime:
# 339 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please sail with us another time!$"
# 340 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 341 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_PleaseBoardFerry:
# 342 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 343 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "departure.$"
# 344 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 345 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo:
# 346 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Then, where would you like to go?$"
# 347 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 348 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends:
# 349 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm the best out of all my friends.\n"
# 350 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But here…\l"
# 351 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've been useless!$"
# 352 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 353 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_CantFindBattleTower:
# 354 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I want to go to the BATTLE TOWER,\n"
# 355 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "but I can't find it even though I have\l"
# 356 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a map of the BATTLE FRONTIER.\p"
# 357 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This place is just too big!$"
# 358 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 359 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere:
# 360 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I wanted to take a challenge as soon\n"
# 361 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "as I arrived here.\p"
# 362 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But on the way, I got seasick…\n"
# 363 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Urrrrp…$"
# 364 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 365 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere:
# 366 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's not as if just anyone can come\n"
# 367 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "here, you know?\p"
# 368 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Only those TRAINERS who've been\n"
# 369 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "recognized as tough are brought here.\p"
# 370 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's why many TRAINERS don't even\n"
# 371 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "know about the BATTLE FRONTIER.$"
# 372 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 373 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons:
# 374 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hey, bro…\p"
# 375 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Are you sure we can make challenges\n"
# 376 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "even if we don't have any POKéMON?$"
# 377 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 378 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons:
# 379 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Uh…\n"
# 380 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure it'll be okay.\p"
# 381 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I think…\p"
# 382 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But remember that big scary guy?\n"
# 383 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "He said, “I'll lend you POKéMON!”$"
# 384 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 385 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons:
# 386 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's the BATTLE FACTORY.\n"
# 387 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You can rent strong POKéMON there.\p"
# 388 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But it makes me wonder.\n"
# 389 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Who's raising those rental POKéMON?$"
# 390 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 391 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper:
# 392 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm scared of going into the BATTLE\n"
# 393 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "PIKE because of SEVIPER…\p"
# 394 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "B-but I came all the way here, so I will\n"
# 395 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "try to conquer everything!\l"
# 396 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "…Shudder…$"
# 397 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 398 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors:
# 399 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let's play rock, paper, scissors!\n"
# 400 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "One, two, three!\p"
# 401 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… … … … … …$"
# 402 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 403 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge:
# 404 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Yay! I won!\n"
# 405 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I will take the BATTLE PIKE challenge!$"
# 406 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 407 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge:
# 408 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, no…\n"
# 409 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I lost.\p"
# 410 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I guess I'm not very lucky today.\n"
# 411 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll put off my BATTLE PIKE challenge\l"
# 412 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "until tomorrow.$"
# 413 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 414 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling:
# 415 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I believe I'm the only person here who,\n"
# 416 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "for some unknown reason, would choose\l"
# 417 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "fishing over battling.\p"
# 418 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? You can't catch anything here?\n"
# 419 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's disappointing…$"
# 420 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 421 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol:
# 422 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Today, I'm going to keep battling, no\n"
# 423 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "matter what, until I get a Symbol.$"
# 424 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 425 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome:
# 426 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh? You're off to challenge\n"
# 427 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the BATTLE DOME?\p"
# 428 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll wish you the best of luck.\n"
# 429 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let us both win our way up and meet\l"
# 430 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in challenges.$"
# 431 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 432 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa:
# 433 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Grandpa, over here!\n"
# 434 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The BATTLE DOME is here!\l"
# 435 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Go get 'em, Grandpa!$"
# 436 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 437 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe:
# 438 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ah, so this here is the BATTLE DOME?\n"
# 439 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I won't let GENTLEMEN beat me!\p"
# 440 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But where is the entrance?$"
# 441 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo:
# 443 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There used to be nothing here not all\n"
# 444 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "that long ago.\p"
# 445 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But, now look at this place! Amazing!\n"
# 446 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll bring my mother out to see this.$"
# 447 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 448 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier:
# 449 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've finally arrived at the BATTLE\n"
# 450 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "FRONTIER!\p"
# 451 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure to grab attention with\n"
# 452 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "my looks and ability!$"
# 453 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 454 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople:
# 455 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…\p"
# 456 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It looks like this square's filled with\n"
# 457 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "tough people.\p"
# 458 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…$"
# 459 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 460 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike:
# 461 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 462 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A while back, I met this older girl\n"
# 463 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "at the BATTLE PIKE.\p"
# 464 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She had these eyes that were scary\n"
# 465 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in a real ornery way.\p"
# 466 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 467 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She got all furious: “Will you quit\n"
# 468 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "eating!” Then she whaled on me.\p"
# 469 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It was a hair-raising kind of\n"
# 470 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "scary experience, sure enough.\p"
# 471 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…$"
# 472 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 473 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet:
# 474 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? Will you listen to yourself?\n"
# 475 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's nothing!\p"
# 476 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Why, the last time I cheered for him,\n"
# 477 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "our eyes met and sparks flew!$"
# 478 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 479 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering:
# 480 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Whaaaaaat?!\n"
# 481 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pfft!\p"
# 482 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That only happened because\n"
# 483 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I happened to be sitting next to you!\p"
# 484 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE only looked our way\n"
# 485 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "because my cheering was so loud!$"
# 486 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 487 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceIsMine:
# 488 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, shush!\n"
# 489 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Keep that racket down!\p"
# 490 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You fair-weather fans should stick\n"
# 491 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "to cheering for some GYM LEADER!\p"
# 492 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The DOME ACE is mine!\n"
# 493 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The only idol for me!$"
# 494 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 495 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers:
# 496 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Those people squabbling over there…\p"
# 497 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's hard to believe, but they once\n"
# 498 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "were TRAINERS, and good ones, too.\p"
# 499 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They used to be incredibly tough,\n"
# 500 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "and they were famous, too.\p"
# 501 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But they were obliterated by this\n"
# 502 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "certain TRAINER at a tournament.\p"
# 503 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They were so thoroughly whipped,\n"
# 504 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "they became smitten by the TRAINER.\p"
# 505 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Now they're just fans of the TRAINER.\n"
# 506 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They go cheer for their idol at the\l"
# 507 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "BATTLE DOME every day now.$"
# 508 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 509 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier:
# 510 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I heard a rumor that someone saw\n"
# 511 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a POKéMON with an unusually long tail\l"
# 512 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "somewhere in the BATTLE FRONTIER.\p"
# 513 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It must be adorable. I'm sure of it…\p"
# 514 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, challenges can wait. I feel driven\n"
# 515 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "to find the delightful creature!$"
