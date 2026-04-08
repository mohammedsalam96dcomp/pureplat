# 1 "data/maps/ContestHall/scripts.pory"

# 2 "data/maps/ContestHall/scripts.pory"
ContestHall_MapScripts::
# 3 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ContestHall_OnWarp
# 4 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ContestHall_OnFrame
# 5 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ContestHall_OnTransition
# 6 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ContestHall_OnResume
# 7 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, ContestHall_OnReturn
# 8 "data/maps/ContestHall/scripts.pory"
	.byte 0
# 9 "data/maps/ContestHall/scripts.pory"

# 10 "data/maps/ContestHall/scripts.pory"
ContestHall_OnReturn:
# 11 "data/maps/ContestHall/scripts.pory"
	special LoadLinkContestPlayerPalettes
# 12 "data/maps/ContestHall/scripts.pory"
	end
# 13 "data/maps/ContestHall/scripts.pory"

# 14 "data/maps/ContestHall/scripts.pory"
ContestHall_OnTransition:
# 15 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_ReadyContestMusic
# 16 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_0, 1
# 17 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_AddRandomAudienceMembers
# 18 "data/maps/ContestHall/scripts.pory"
	end
# 19 "data/maps/ContestHall/scripts.pory"

# 20 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_ReadyContestMusic::
# 21 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_TryWaitForLink
# 22 "data/maps/ContestHall/scripts.pory"
	special GetContestMultiplayerId
# 23 "data/maps/ContestHall/scripts.pory"
	call_if_eq VAR_RESULT, 0, ContestHall_EventScript_SaveContestMusicPlayer1
# 24 "data/maps/ContestHall/scripts.pory"
	call_if_eq VAR_RESULT, 1, ContestHall_EventScript_SaveContestMusicPlayer2
# 25 "data/maps/ContestHall/scripts.pory"
	call_if_eq VAR_RESULT, 2, ContestHall_EventScript_SaveContestMusicPlayer3
# 26 "data/maps/ContestHall/scripts.pory"
	call_if_eq VAR_RESULT, 3, ContestHall_EventScript_SaveContestMusicPlayer4
# 27 "data/maps/ContestHall/scripts.pory"
	call_if_eq VAR_RESULT, 4, ContestHall_EventScript_SaveContestMusic
# 28 "data/maps/ContestHall/scripts.pory"
	return
# 29 "data/maps/ContestHall/scripts.pory"

# 30 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SaveContestMusicPlayer1::
# 31 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_LINK_CONTEST_P1
# 32 "data/maps/ContestHall/scripts.pory"
	return
# 33 "data/maps/ContestHall/scripts.pory"

# 34 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SaveContestMusicPlayer2::
# 35 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_LINK_CONTEST_P2
# 36 "data/maps/ContestHall/scripts.pory"
	return
# 37 "data/maps/ContestHall/scripts.pory"

# 38 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SaveContestMusicPlayer3::
# 39 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_LINK_CONTEST_P3
# 40 "data/maps/ContestHall/scripts.pory"
	return
# 41 "data/maps/ContestHall/scripts.pory"

# 42 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SaveContestMusicPlayer4::
# 43 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_LINK_CONTEST_P4
# 44 "data/maps/ContestHall/scripts.pory"
	return
# 45 "data/maps/ContestHall/scripts.pory"

# 46 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SaveContestMusic::
# 47 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_CONTEST
# 48 "data/maps/ContestHall/scripts.pory"
	return
# 49 "data/maps/ContestHall/scripts.pory"

# 50 "data/maps/ContestHall/scripts.pory"
ContestHall_OnResume:
# 51 "data/maps/ContestHall/scripts.pory"
	call_if_eq VAR_TEMP_9, 1, ContestHall_EventScript_ReShowAudience
# 52 "data/maps/ContestHall/scripts.pory"
	end
# 53 "data/maps/ContestHall/scripts.pory"

# 54 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_ReShowAudience::
# 55 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_CreateAudience
# 56 "data/maps/ContestHall/scripts.pory"
	return
# 57 "data/maps/ContestHall/scripts.pory"

# 58 "data/maps/ContestHall/scripts.pory"
ContestHall_OnFrame:
# 59 "data/maps/ContestHall/scripts.pory"
	map_script_2 VAR_CONTEST_HALL_STATE, 1, ContestHall_EventScript_Contest
# 60 "data/maps/ContestHall/scripts.pory"
	.2byte 0
# 61 "data/maps/ContestHall/scripts.pory"

# 62 "data/maps/ContestHall/scripts.pory"
ContestHall_OnWarp:
# 63 "data/maps/ContestHall/scripts.pory"
	map_script_2 VAR_CONTEST_HALL_STATE, 1, ContestHall_EventScript_SetContestObjects
# 64 "data/maps/ContestHall/scripts.pory"
	.2byte 0
# 65 "data/maps/ContestHall/scripts.pory"

# 66 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_Contest::
# 67 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_DoContest
# 68 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_SetExitWarp
# 69 "data/maps/ContestHall/scripts.pory"
	end
# 70 "data/maps/ContestHall/scripts.pory"

# 71 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetContestObjects::
# 72 "data/maps/ContestHall/scripts.pory"
	special LoadLinkContestPlayerPalettes
# 73 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_CreateAudience
# 74 "data/maps/ContestHall/scripts.pory"
	end
# 75 "data/maps/ContestHall/scripts.pory"

# 76 "data/maps/ContestHall/scripts.pory"
@ There are 8 audience member object events, 7 of which are given random gfx below (the 8th is the Artist)
# 77 "data/maps/ContestHall/scripts.pory"
@ The rest of the audience is created statically by ContestHall_EventScript_CreateAudience
# 78 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_AddRandomAudienceMembers::
# 79 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_GetRandomAudienceGfxId
# 80 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_SetRandomAudienceGfx
# 81 "data/maps/ContestHall/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, ContestHall_EventScript_AddRandomAudienceMembers
# 82 "data/maps/ContestHall/scripts.pory"
	return
# 83 "data/maps/ContestHall/scripts.pory"

# 84 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudienceGfx::
# 85 "data/maps/ContestHall/scripts.pory"
	switch VAR_TEMP_0
# 86 "data/maps/ContestHall/scripts.pory"
	case 1, ContestHall_EventScript_SetRandomAudience1
# 87 "data/maps/ContestHall/scripts.pory"
	case 2, ContestHall_EventScript_SetRandomAudience2
# 88 "data/maps/ContestHall/scripts.pory"
	case 3, ContestHall_EventScript_SetRandomAudience3
# 89 "data/maps/ContestHall/scripts.pory"
	case 4, ContestHall_EventScript_SetRandomAudience4
# 90 "data/maps/ContestHall/scripts.pory"
	case 5, ContestHall_EventScript_SetRandomAudience5
# 91 "data/maps/ContestHall/scripts.pory"
	case 6, ContestHall_EventScript_SetRandomAudience6
# 92 "data/maps/ContestHall/scripts.pory"
	case 7, ContestHall_EventScript_SetRandomAudience7
# 93 "data/maps/ContestHall/scripts.pory"
	end
# 94 "data/maps/ContestHall/scripts.pory"

# 95 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudience1::
# 96 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_4, VAR_TEMP_1
# 97 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
# 98 "data/maps/ContestHall/scripts.pory"
	return
# 99 "data/maps/ContestHall/scripts.pory"

# 100 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudience2::
# 101 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_5, VAR_TEMP_1
# 102 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
# 103 "data/maps/ContestHall/scripts.pory"
	return
# 104 "data/maps/ContestHall/scripts.pory"

# 105 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudience3::
# 106 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_6, VAR_TEMP_1
# 107 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
# 108 "data/maps/ContestHall/scripts.pory"
	return
# 109 "data/maps/ContestHall/scripts.pory"

# 110 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudience4::
# 111 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_7, VAR_TEMP_1
# 112 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
# 113 "data/maps/ContestHall/scripts.pory"
	return
# 114 "data/maps/ContestHall/scripts.pory"

# 115 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudience5::
# 116 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_8, VAR_TEMP_1
# 117 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
# 118 "data/maps/ContestHall/scripts.pory"
	return
# 119 "data/maps/ContestHall/scripts.pory"

# 120 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudience6::
# 121 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_9, VAR_TEMP_1
# 122 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
# 123 "data/maps/ContestHall/scripts.pory"
	return
# 124 "data/maps/ContestHall/scripts.pory"

# 125 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetRandomAudience7::
# 126 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_A, VAR_TEMP_1
# 127 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
# 128 "data/maps/ContestHall/scripts.pory"
	return
# 129 "data/maps/ContestHall/scripts.pory"

# 130 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_GetRandomAudienceGfxId::
# 131 "data/maps/ContestHall/scripts.pory"
	setvar VAR_RESULT, 32
# 132 "data/maps/ContestHall/scripts.pory"
	special GenerateContestRand
# 133 "data/maps/ContestHall/scripts.pory"
	addvar VAR_RESULT, 1
# 134 "data/maps/ContestHall/scripts.pory"
	switch VAR_RESULT
# 135 "data/maps/ContestHall/scripts.pory"
	case 1, ContestHall_EventScript_RandomAudienceNinjaBoy
# 136 "data/maps/ContestHall/scripts.pory"
	case 2, ContestHall_EventScript_RandomAudienceTwin
# 137 "data/maps/ContestHall/scripts.pory"
	case 3, ContestHall_EventScript_RandomAudienceBoy1
# 138 "data/maps/ContestHall/scripts.pory"
	case 4, ContestHall_EventScript_RandomAudienceGirl1
# 139 "data/maps/ContestHall/scripts.pory"
	case 5, ContestHall_EventScript_RandomAudienceGirl2
# 140 "data/maps/ContestHall/scripts.pory"
	case 6, ContestHall_EventScript_RandomAudienceLittleBoy
# 141 "data/maps/ContestHall/scripts.pory"
	case 7, ContestHall_EventScript_RandomAudienceGirl
# 142 "data/maps/ContestHall/scripts.pory"
	case 8, ContestHall_EventScript_RandomAudienceBoy3
# 143 "data/maps/ContestHall/scripts.pory"
	case 9, ContestHall_EventScript_RandomAudienceGirl3
# 144 "data/maps/ContestHall/scripts.pory"
	case 10, ContestHall_EventScript_RandomAudienceRichBoy
# 145 "data/maps/ContestHall/scripts.pory"
	case 11, ContestHall_EventScript_RandomAudienceFatMan
# 146 "data/maps/ContestHall/scripts.pory"
	case 12, ContestHall_EventScript_RandomAudiencePokefanF
# 147 "data/maps/ContestHall/scripts.pory"
	case 13, ContestHall_EventScript_RandomAudienceMan1
# 148 "data/maps/ContestHall/scripts.pory"
	case 14, ContestHall_EventScript_RandomAudienceWoman2
# 149 "data/maps/ContestHall/scripts.pory"
	case 15, ContestHall_EventScript_RandomAudienceExpertM
# 150 "data/maps/ContestHall/scripts.pory"
	case 16, ContestHall_EventScript_RandomAudienceExpertF
# 151 "data/maps/ContestHall/scripts.pory"
	case 17, ContestHall_EventScript_RandomAudiencePokefanM
# 152 "data/maps/ContestHall/scripts.pory"
	case 18, ContestHall_EventScript_RandomAudienceWoman4
# 153 "data/maps/ContestHall/scripts.pory"
	case 19, ContestHall_EventScript_RandomAudienceCook
# 154 "data/maps/ContestHall/scripts.pory"
	case 20, ContestHall_EventScript_RandomAudienceLass
# 155 "data/maps/ContestHall/scripts.pory"
	case 21, ContestHall_EventScript_RandomAudienceOldWoman
# 156 "data/maps/ContestHall/scripts.pory"
	case 22, ContestHall_EventScript_RandomAudienceCamper
# 157 "data/maps/ContestHall/scripts.pory"
	case 23, ContestHall_EventScript_RandomAudiencePicnicker
# 158 "data/maps/ContestHall/scripts.pory"
	case 24, ContestHall_EventScript_RandomAudienceMan3
# 159 "data/maps/ContestHall/scripts.pory"
	case 25, ContestHall_EventScript_RandomAudienceWoman5
# 160 "data/maps/ContestHall/scripts.pory"
	case 26, ContestHall_EventScript_RandomAudienceYoungster
# 161 "data/maps/ContestHall/scripts.pory"
	case 27, ContestHall_EventScript_RandomAudienceBugCatcher
# 162 "data/maps/ContestHall/scripts.pory"
	case 28, ContestHall_EventScript_RandomAudiencePsychicM
# 163 "data/maps/ContestHall/scripts.pory"
	case 29, ContestHall_EventScript_RandomAudienceSchoolKidM
# 164 "data/maps/ContestHall/scripts.pory"
	case 30, ContestHall_EventScript_RandomAudienceBlackBelt
# 165 "data/maps/ContestHall/scripts.pory"
	case 31, ContestHall_EventScript_RandomAudienceBeauty
# 166 "data/maps/ContestHall/scripts.pory"
	case 32, ContestHall_EventScript_RandomAudienceScientist1
# 167 "data/maps/ContestHall/scripts.pory"
	end
# 168 "data/maps/ContestHall/scripts.pory"

# 169 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceNinjaBoy::
# 170 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_NINJA_BOY
# 171 "data/maps/ContestHall/scripts.pory"
	return
# 172 "data/maps/ContestHall/scripts.pory"

# 173 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceTwin::
# 174 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_TWIN
# 175 "data/maps/ContestHall/scripts.pory"
	return
# 176 "data/maps/ContestHall/scripts.pory"

# 177 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceBoy1::
# 178 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BOY_1
# 179 "data/maps/ContestHall/scripts.pory"
	return
# 180 "data/maps/ContestHall/scripts.pory"

# 181 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceGirl1::
# 182 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_GIRL_1
# 183 "data/maps/ContestHall/scripts.pory"
	return
# 184 "data/maps/ContestHall/scripts.pory"

# 185 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceGirl2::
# 186 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_GIRL_2
# 187 "data/maps/ContestHall/scripts.pory"
	return
# 188 "data/maps/ContestHall/scripts.pory"

# 189 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceLittleBoy::
# 190 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_LITTLE_BOY
# 191 "data/maps/ContestHall/scripts.pory"
	return
# 192 "data/maps/ContestHall/scripts.pory"

# 193 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceGirl::
# 194 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_LITTLE_GIRL
# 195 "data/maps/ContestHall/scripts.pory"
	return
# 196 "data/maps/ContestHall/scripts.pory"

# 197 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceBoy3::
# 198 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BOY_3
# 199 "data/maps/ContestHall/scripts.pory"
	return
# 200 "data/maps/ContestHall/scripts.pory"

# 201 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceGirl3::
# 202 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_GIRL_3
# 203 "data/maps/ContestHall/scripts.pory"
	return
# 204 "data/maps/ContestHall/scripts.pory"

# 205 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceRichBoy::
# 206 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_RICH_BOY
# 207 "data/maps/ContestHall/scripts.pory"
	return
# 208 "data/maps/ContestHall/scripts.pory"

# 209 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceFatMan::
# 210 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_FAT_MAN
# 211 "data/maps/ContestHall/scripts.pory"
	return
# 212 "data/maps/ContestHall/scripts.pory"

# 213 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudiencePokefanF::
# 214 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_POKEFAN_F
# 215 "data/maps/ContestHall/scripts.pory"
	return
# 216 "data/maps/ContestHall/scripts.pory"

# 217 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceMan1::
# 218 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_MAN_1
# 219 "data/maps/ContestHall/scripts.pory"
	return
# 220 "data/maps/ContestHall/scripts.pory"

# 221 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceWoman2::
# 222 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_WOMAN_2
# 223 "data/maps/ContestHall/scripts.pory"
	return
# 224 "data/maps/ContestHall/scripts.pory"

# 225 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceExpertM::
# 226 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_EXPERT_M
# 227 "data/maps/ContestHall/scripts.pory"
	return
# 228 "data/maps/ContestHall/scripts.pory"

# 229 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceExpertF::
# 230 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_EXPERT_F
# 231 "data/maps/ContestHall/scripts.pory"
	return
# 232 "data/maps/ContestHall/scripts.pory"

# 233 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudiencePokefanM::
# 234 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_POKEFAN_M
# 235 "data/maps/ContestHall/scripts.pory"
	return
# 236 "data/maps/ContestHall/scripts.pory"

# 237 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceWoman4::
# 238 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_WOMAN_4
# 239 "data/maps/ContestHall/scripts.pory"
	return
# 240 "data/maps/ContestHall/scripts.pory"

# 241 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceCook::
# 242 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_COOK
# 243 "data/maps/ContestHall/scripts.pory"
	return
# 244 "data/maps/ContestHall/scripts.pory"

# 245 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceLass::
# 246 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_LASS
# 247 "data/maps/ContestHall/scripts.pory"
	return
# 248 "data/maps/ContestHall/scripts.pory"

# 249 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceOldWoman::
# 250 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_OLD_WOMAN
# 251 "data/maps/ContestHall/scripts.pory"
	return
# 252 "data/maps/ContestHall/scripts.pory"

# 253 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceCamper::
# 254 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_CAMPER
# 255 "data/maps/ContestHall/scripts.pory"
	return
# 256 "data/maps/ContestHall/scripts.pory"

# 257 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudiencePicnicker::
# 258 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_PICNICKER
# 259 "data/maps/ContestHall/scripts.pory"
	return
# 260 "data/maps/ContestHall/scripts.pory"

# 261 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceMan3::
# 262 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_MAN_3
# 263 "data/maps/ContestHall/scripts.pory"
	return
# 264 "data/maps/ContestHall/scripts.pory"

# 265 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceWoman5::
# 266 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_WOMAN_5
# 267 "data/maps/ContestHall/scripts.pory"
	return
# 268 "data/maps/ContestHall/scripts.pory"

# 269 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceYoungster::
# 270 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_YOUNGSTER
# 271 "data/maps/ContestHall/scripts.pory"
	return
# 272 "data/maps/ContestHall/scripts.pory"

# 273 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceBugCatcher::
# 274 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BUG_CATCHER
# 275 "data/maps/ContestHall/scripts.pory"
	return
# 276 "data/maps/ContestHall/scripts.pory"

# 277 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudiencePsychicM::
# 278 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_PSYCHIC_M
# 279 "data/maps/ContestHall/scripts.pory"
	return
# 280 "data/maps/ContestHall/scripts.pory"

# 281 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceSchoolKidM::
# 282 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_SCHOOL_KID_M
# 283 "data/maps/ContestHall/scripts.pory"
	return
# 284 "data/maps/ContestHall/scripts.pory"

# 285 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceBlackBelt::
# 286 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BLACK_BELT
# 287 "data/maps/ContestHall/scripts.pory"
	return
# 288 "data/maps/ContestHall/scripts.pory"

# 289 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceBeauty::
# 290 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BEAUTY
# 291 "data/maps/ContestHall/scripts.pory"
	return
# 292 "data/maps/ContestHall/scripts.pory"

# 293 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_RandomAudienceScientist1::
# 294 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_SCIENTIST_1
# 295 "data/maps/ContestHall/scripts.pory"
	return
# 296 "data/maps/ContestHall/scripts.pory"

# 297 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateAudience::
# 298 "data/maps/ContestHall/scripts.pory"
	specialvar VAR_RESULT, IsWirelessContest
# 299 "data/maps/ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ContestHall_EventScript_CreateWirelessContestAudience
# 300 "data/maps/ContestHall/scripts.pory"
	switch VAR_CONTEST_TYPE
# 301 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_NORMAL, ContestHall_EventScript_CreateNormalContestAudience
# 302 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_SUPER, ContestHall_EventScript_CreateSuperContestAudience
# 303 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_HYPER, ContestHall_EventScript_CreateHyperContestAudience
# 304 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_MASTER, ContestHall_EventScript_CreateMasterContestAudience
# 305 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_LINK, ContestHall_EventScript_CreateMasterContestAudience
# 306 "data/maps/ContestHall/scripts.pory"
	return
# 307 "data/maps/ContestHall/scripts.pory"

# 308 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateNormalContestAudience::
# 309 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 20, 3, 2, 3, DIR_SOUTH
# 310 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 11, 2, 3, DIR_SOUTH
# 311 "data/maps/ContestHall/scripts.pory"
	return
# 312 "data/maps/ContestHall/scripts.pory"

# 313 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateSuperContestAudience::
# 314 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 2, 3, 3, DIR_EAST
# 315 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 1, 2, 4, 3, DIR_EAST
# 316 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 2, 2, 7, 3, DIR_EAST
# 317 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 3, 2, 8, 3, DIR_EAST
# 318 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 10, 12, 3, 3, DIR_WEST
# 319 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 11, 12, 4, 3, DIR_WEST
# 320 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 12, 12, 7, 3, DIR_WEST
# 321 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 13, 12, 8, 3, DIR_WEST
# 322 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 20, 3, 2, 3, DIR_SOUTH
# 323 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 11, 2, 3, DIR_SOUTH
# 324 "data/maps/ContestHall/scripts.pory"
	return
# 325 "data/maps/ContestHall/scripts.pory"

# 326 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateHyperContestAudience::
# 327 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 2, 3, 3, DIR_EAST
# 328 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 1, 2, 4, 3, DIR_EAST
# 329 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 2, 2, 7, 3, DIR_EAST
# 330 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 3, 2, 8, 3, DIR_EAST
# 331 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 10, 12, 3, 3, DIR_WEST
# 332 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 11, 12, 4, 3, DIR_WEST
# 333 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 12, 12, 7, 3, DIR_WEST
# 334 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 13, 12, 8, 3, DIR_WEST
# 335 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 3, 2, 3, DIR_SOUTH
# 336 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 20, 6, 2, 3, DIR_SOUTH
# 337 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 20, 7, 2, 3, DIR_SOUTH
# 338 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 8, 2, 3, DIR_SOUTH
# 339 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 24, 11, 2, 3, DIR_SOUTH
# 340 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 3, 9, 3, DIR_NORTH
# 341 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 4, 9, 3, DIR_NORTH
# 342 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 27, 5, 9, 3, DIR_NORTH
# 343 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 9, 9, 3, DIR_NORTH
# 344 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 10, 9, 3, DIR_NORTH
# 345 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 11, 9, 3, DIR_NORTH
# 346 "data/maps/ContestHall/scripts.pory"
	return
# 347 "data/maps/ContestHall/scripts.pory"

# 348 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateMasterContestAudience::
# 349 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 2, 3, 3, DIR_EAST
# 350 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 1, 2, 4, 3, DIR_EAST
# 351 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 2, 2, 7, 3, DIR_EAST
# 352 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 3, 2, 8, 3, DIR_EAST
# 353 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MANIAC, 4, 1, 3, 3, DIR_EAST
# 354 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 6, 1, 5, 3, DIR_EAST
# 355 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_4, 7, 1, 6, 3, DIR_EAST
# 356 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 9, 1, 8, 3, DIR_EAST
# 357 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 10, 12, 3, 3, DIR_WEST
# 358 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 11, 12, 4, 3, DIR_WEST
# 359 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 12, 12, 7, 3, DIR_WEST
# 360 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 13, 12, 8, 3, DIR_WEST
# 361 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FISHERMAN, 14, 13, 3, 3, DIR_WEST
# 362 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_RUNNING_TRIATHLETE_F, 15, 13, 4, 3, DIR_WEST
# 363 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_4, 17, 13, 6, 3, DIR_WEST
# 364 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 18, 13, 7, 3, DIR_WEST
# 365 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_DEVON_EMPLOYEE, 19, 13, 8, 3, DIR_WEST
# 366 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_M, 20, 3, 2, 3, DIR_SOUTH
# 367 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_CAMPER, 21, 6, 2, 3, DIR_SOUTH
# 368 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_3, 22, 7, 2, 3, DIR_SOUTH
# 369 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 11, 2, 3, DIR_SOUTH
# 370 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 25, 3, 9, 3, DIR_NORTH
# 371 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 4, 9, 3, DIR_NORTH
# 372 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 27, 5, 9, 3, DIR_NORTH
# 373 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 9, 9, 3, DIR_NORTH
# 374 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 10, 9, 3, DIR_NORTH
# 375 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 11, 9, 3, DIR_NORTH
# 376 "data/maps/ContestHall/scripts.pory"
	return
# 377 "data/maps/ContestHall/scripts.pory"

# 378 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_CreateWirelessContestAudience::
# 379 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 2, 3, 3, DIR_EAST
# 380 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 1, 2, 4, 3, DIR_EAST
# 381 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 2, 2, 7, 3, DIR_EAST
# 382 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 3, 2, 8, 3, DIR_EAST
# 383 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MANIAC, 4, 1, 3, 3, DIR_EAST
# 384 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 6, 1, 5, 3, DIR_EAST
# 385 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_4, 7, 1, 6, 3, DIR_EAST
# 386 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 9, 1, 8, 3, DIR_EAST
# 387 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 10, 12, 3, 3, DIR_WEST
# 388 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 11, 12, 4, 3, DIR_WEST
# 389 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 12, 12, 7, 3, DIR_WEST
# 390 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 13, 12, 8, 3, DIR_WEST
# 391 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FISHERMAN, 14, 13, 3, 3, DIR_WEST
# 392 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_RUNNING_TRIATHLETE_F, 15, 13, 4, 3, DIR_WEST
# 393 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_4, 17, 13, 6, 3, DIR_WEST
# 394 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 18, 13, 7, 3, DIR_WEST
# 395 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_DEVON_EMPLOYEE, 19, 13, 8, 3, DIR_WEST
# 396 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_M, 20, 3, 2, 3, DIR_SOUTH
# 397 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_CAMPER, 21, 6, 2, 3, DIR_SOUTH
# 398 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_3, 22, 7, 2, 3, DIR_SOUTH
# 399 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 11, 2, 3, DIR_SOUTH
# 400 "data/maps/ContestHall/scripts.pory"
	return
# 401 "data/maps/ContestHall/scripts.pory"

# 402 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarp::
# 403 "data/maps/ContestHall/scripts.pory"
	special ClearLinkContestFlags
# 404 "data/maps/ContestHall/scripts.pory"
	switch VAR_CONTEST_TYPE
# 405 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_NORMAL, ContestHall_EventScript_SetExitWarpNormalContest
# 406 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_SUPER, ContestHall_EventScript_SetExitWarpSuperContest
# 407 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_HYPER, ContestHall_EventScript_SetExitWarpHyperContest
# 408 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_MASTER, ContestHall_EventScript_SetExitWarpMasterContest
# 409 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_LINK, ContestHall_EventScript_SetExitWarpLinkContest
# 410 "data/maps/ContestHall/scripts.pory"
	return
# 411 "data/maps/ContestHall/scripts.pory"

# 412 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarpNormalContest::
# 413 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 14, 4
# 414 "data/maps/ContestHall/scripts.pory"
	waitstate
# 415 "data/maps/ContestHall/scripts.pory"
	end
# 416 "data/maps/ContestHall/scripts.pory"

# 417 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarpSuperContest::
# 418 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 14, 4
# 419 "data/maps/ContestHall/scripts.pory"
	waitstate
# 420 "data/maps/ContestHall/scripts.pory"
	end
# 421 "data/maps/ContestHall/scripts.pory"

# 422 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarpHyperContest::
# 423 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 14, 4
# 424 "data/maps/ContestHall/scripts.pory"
	waitstate
# 425 "data/maps/ContestHall/scripts.pory"
	end
# 426 "data/maps/ContestHall/scripts.pory"

# 427 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarpMasterContest::
# 428 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 14, 4
# 429 "data/maps/ContestHall/scripts.pory"
	waitstate
# 430 "data/maps/ContestHall/scripts.pory"
	end
# 431 "data/maps/ContestHall/scripts.pory"

# 432 "data/maps/ContestHall/scripts.pory"
ContestHall_EventScript_SetExitWarpLinkContest::
# 433 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 15, 4
# 434 "data/maps/ContestHall/scripts.pory"
	waitstate
# 435 "data/maps/ContestHall/scripts.pory"
	end
# 436 "data/maps/ContestHall/scripts.pory"

# 437 "data/maps/ContestHall/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPlayerGfx::
# 438 "data/maps/ContestHall/scripts.pory"
	checkplayergender
# 439 "data/maps/ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LilycoveCity_ContestLobby_EventScript_SetPlayerGfxBrendan
# 440 "data/maps/ContestHall/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LilycoveCity_ContestLobby_EventScript_SetPlayerGfxMay
# 441 "data/maps/ContestHall/scripts.pory"
	return
# 442 "data/maps/ContestHall/scripts.pory"

# 443 "data/maps/ContestHall/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPlayerGfxBrendan::
# 444 "data/maps/ContestHall/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 445 "data/maps/ContestHall/scripts.pory"
	return
# 446 "data/maps/ContestHall/scripts.pory"

# 447 "data/maps/ContestHall/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetPlayerGfxMay::
# 448 "data/maps/ContestHall/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 449 "data/maps/ContestHall/scripts.pory"
	return
