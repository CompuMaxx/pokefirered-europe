CableClub_OnTransition::
	call CableClub_EventScript_HideOrShowMysteryGiftMan
	end

CableClub_EventScript_HideOrShowMysteryGiftMan::
	specialvar VAR_RESULT, ValidateSavedWonderCard
	goto_if_eq VAR_RESULT, FALSE, EventScript_HideMysteryGiftMan
	clearflag FLAG_HIDE_MG_DELIVERYMEN
	return

EventScript_HideMysteryGiftMan::
	setflag FLAG_HIDE_MG_DELIVERYMEN
	return

CableClub_EventScript_MysteryGiftMan::
	goto_if_questlog EventScript_ReleaseEnd
	special QuestLog_CutRecording
	trywondercardscript

@ Unused
EventScript_MysteryGiftThankYou::
	msgbox Text_ThankYouForAccessingMysteryGift, MSGBOX_NPC
	end

CableClub_OnWarp::
	map_script_2 VAR_CABLE_CLUB_STATE, USING_SINGLE_BATTLE, EventScript_CheckTurnAttendant
	map_script_2 VAR_CABLE_CLUB_STATE, USING_DOUBLE_BATTLE, EventScript_CheckTurnAttendant
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MULTI_BATTLE, EventScript_CheckTurnAttendant
	map_script_2 VAR_CABLE_CLUB_STATE, USING_TRADE_CENTER, EventScript_CheckTurnAttendant
	map_script_2 VAR_CABLE_CLUB_STATE, USING_UNION_ROOM, EventScript_CheckTurnAttendant
	map_script_2 VAR_CABLE_CLUB_STATE, USING_BERRY_CRUSH, EventScript_CheckTurnAttendant
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, EventScript_CheckTurnAttendant
	.2byte 0

EventScript_CheckTurnAttendant::
	goto_if_eq VAR_0x8007, 0, EventScript_CheckTurnAttendantEnd
	turnobject VAR_0x8007, DIR_WEST
EventScript_CheckTurnAttendantEnd:
	end

CableClub_OnLoad::
	goto_if_eq VAR_CABLE_CLUB_STATE, USING_SINGLE_BATTLE, EventScript_OnLoadFromColosseum
	goto_if_eq VAR_CABLE_CLUB_STATE, USING_DOUBLE_BATTLE, EventScript_OnLoadFromColosseum
	goto_if_eq VAR_CABLE_CLUB_STATE, USING_MULTI_BATTLE, EventScript_OnLoadFromColosseum
	goto_if_eq VAR_CABLE_CLUB_STATE, USING_TRADE_CENTER, EventScript_OnLoadFromTradeCenter
	goto_if_eq VAR_CABLE_CLUB_STATE, USING_UNION_ROOM, EventScript_OnLoadFromUnionRoom
	goto_if_eq VAR_CABLE_CLUB_STATE, USING_BERRY_CRUSH, EventScript_OnLoadFromBerryCrush
	goto_if_eq VAR_CABLE_CLUB_STATE, USING_MINIGAME, EventScript_OnLoadFromGameCorner
	end

EventScript_OnLoadFromColosseum::
	call CableClub_EventScript_OpenDirectCornerBarrier
	end

EventScript_OnLoadFromTradeCenter::
	call CableClub_EventScript_OpenDirectCornerBarrier
	end

EventScript_OnLoadFromUnionRoom::
	call CableClub_EventScript_OpenUnionRoomBarrier
	end

EventScript_OnLoadFromBerryCrush::
	call CableClub_EventScript_OpenDirectCornerBarrier
	end

EventScript_OnLoadFromGameCorner::
	call CableClub_EventScript_OpenGameCornerBarrier
	end

CableClub_OnFrame::
	map_script_2 VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1, CableClub_EventScript_Tutorial
	map_script_2 VAR_CABLE_CLUB_STATE, USING_SINGLE_BATTLE, CableClub_EventScript_ExitLinkRoom
	map_script_2 VAR_CABLE_CLUB_STATE, USING_DOUBLE_BATTLE, CableClub_EventScript_ExitLinkRoom
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MULTI_BATTLE, CableClub_EventScript_ExitLinkRoom
	map_script_2 VAR_CABLE_CLUB_STATE, USING_TRADE_CENTER, CableClub_EventScript_ExitTradeCenter
	map_script_2 VAR_CABLE_CLUB_STATE, USING_UNION_ROOM, CableClub_EventScript_ExitUnionRoom
	map_script_2 VAR_CABLE_CLUB_STATE, USING_BERRY_CRUSH, CableClub_EventScript_ExitLinkRoom
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_ExitMinigameRoom
	.2byte 0

CableClub_EventScript_ExitLinkRoom::
	lockall
	call CableClub_EventScript_CloseLinkAndExitLinkRoom
	call CableClub_EventScript_CloseDirectCornerBarrier
	special DrawWholeMapView
	playse SE_CLICK
	erasebox 0, 0, 29, 19
	releaseall
	end

CableClub_EventScript_ExitMinigameRoom::
	lockall
	call CableClub_EventScript_CloseLinkAndExitLinkRoom
	call CableClub_EventScript_CloseGameCornerBarrier
	special DrawWholeMapView
	playse SE_CLICK
	erasebox 0, 0, 29, 19
	releaseall
	end

CableClub_EventScript_CloseLinkAndExitLinkRoom::
	special CloseLink
	special HelpSystem_Enable
	special QuestLog_StartRecordingInputsAfterDeferredEvent
	setvar VAR_CABLE_CLUB_STATE, 0
	textcolor NPC_TEXT_COLOR_FEMALE
	goto_if_eq VAR_0x8007, 0, CableClub_EventScript_PlayerExitLinkRoom
	applymovement VAR_0x8007, Movement_AttendantFaceLeft
	waitmovement 0
	applymovement LOCALID_PLAYER, Movement_PlayerExitLinkRoom
	waitmovement 0
	applymovement VAR_0x8007, Movement_AttendantFaceDown
	waitmovement 0
	return

CableClub_EventScript_ExitTradeCenter::
	lockall
	call CableClub_EventScript_PlayerExitTradeCenter
	call CableClub_EventScript_CloseDirectCornerBarrier
	special DrawWholeMapView
	playse SE_CLICK
	erasebox 0, 0, 29, 19
	releaseall
	end

CableClub_EventScript_PlayerExitTradeCenter::
	special CloseLink
	special HelpSystem_Enable
	special QuestLog_StartRecordingInputsAfterDeferredEvent
	setvar VAR_CABLE_CLUB_STATE, 0
	textcolor NPC_TEXT_COLOR_FEMALE
	goto_if_eq VAR_0x8007, 0, CableClub_EventScript_PlayerExitLinkRoom
	applymovement LOCALID_PLAYER, Movement_PlayerFaceAttendantRight
	waitmovement 0
	applymovement VAR_0x8007, Movement_AttendantFaceLeft
	waitmovement 0
	call CableClub_EventScript_TrainerCardDataOverwritten
	return

CableClub_EventScript_ExitUnionRoom::
	lockall
	call CableClub_EventScript_PlayerExitUnionRoom
	call CableClub_EventScript_CloseUnionRoomBarrier
	special DrawWholeMapView
	playse SE_CLICK
	erasebox 0, 0, 29, 19
	releaseall
	end

CableClub_EventScript_PlayerExitUnionRoom::
	special HelpSystem_Enable
	special QuestLog_StartRecordingInputsAfterDeferredEvent
	setvar VAR_CABLE_CLUB_STATE, 0
	textcolor NPC_TEXT_COLOR_FEMALE
	goto_if_eq VAR_0x8007, 0, CableClub_EventScript_PlayerExitLinkRoom
	applymovement LOCALID_PLAYER, Movement_PlayerFaceAttendantRight
	waitmovement 0
	applymovement VAR_0x8007, Movement_AttendantFaceLeft
	waitmovement 0
	call CableClub_EventScript_TrainerCardDataOverwritten
	return

CableClub_EventScript_TrainerCardDataOverwritten::
	message CableClub_Text_TrainerCardDataOverwritten
	waitmessage
.ifdef SPANISH
	delay 60
.endif
	playse SE_PIN
	message CableClub_Text_HopeToSeeYouAgain
	waitmessage
	applymovement LOCALID_PLAYER, Movement_PlayerExitLinkRoom
	waitmovement 0
	applymovement VAR_0x8007, Movement_AttendantFaceDown
	waitmovement 0
	return

CableClub_EventScript_PlayerExitLinkRoom::
	applymovement LOCALID_PLAYER, Movement_PlayerExitLinkRoom
	waitmovement 0
	return

CableClub_EventScript_Tutorial::
	lockall
	textcolor NPC_TEXT_COLOR_FEMALE
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox CableClub_Text_FirstTimeRightThisWay
	closemessage
	applymovement LOCALID_PLAYER, Movement_PlayerApproachCounter
	waitmovement 0
	delay 30
	msgbox CableClub_Text_ExplainWirelessClubFirstTime
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 2
	releaseall
	end

Movement_PlayerApproachCounter:
	walk_up
	walk_up
	step_end

CableClub_EventScript_WelcomeToCableClub::
	message CableClub_Text_WelcomeWhichCableClubService
	waitmessage
	delay 15
	goto CableClub_EventScript_SelectCableClubRoom
	end

CableClub_EventScript_UnusedWelcomeToCableClub::
	msgbox CableClub_Text_WhichService
	goto CableClub_EventScript_SelectCableClubRoom
	end

CableClub_EventScript_SelectCableClubRoom::
	setvar VAR_0x8004, 0
	multichoice 0, 0, MULTICHOICE_TRADE_CENTER_COLOSSEUM, FALSE
	switch VAR_RESULT
	case 0, CableClub_EventScript_TradeCenter
	case 1, CableClub_EventScript_Colosseum
	case 2, CableClub_EventScript_AbortLink
	case SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end

CableClub_EventScript_Colosseum::
	copyvar VAR_0x8007, VAR_LAST_TALKED
	goto CableClub_EventScript_SelectBattleMode
	end

CableClub_EventScript_SelectBattleMode::
	message CableClub_Text_PlayWhichBattleMode
	waitmessage
	multichoice 0, 0, MULTICHOICE_SINGLE_DOUBLE_MULTI_INFO_EXIT, FALSE
	switch VAR_RESULT
	case 0, CableClub_EventScript_SingleBattleMode
	case 1, CableClub_EventScript_DoubleBattleMode
	case 2, CableClub_EventScript_MultiBattleMode
	case 3, CableClub_EventScript_BattleModeInfo
	case 4, CableClub_EventScript_AbortLink
	case SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end

CableClub_EventScript_BattleModeInfo::
	msgbox CableClub_Text_ExplainBattleModes
	goto CableClub_EventScript_SelectBattleMode
	end

CableClub_EventScript_SingleBattleMode::
	setvar VAR_0x8004, USING_SINGLE_BATTLE
	goto CableClub_EventScript_TryEnterColosseum
	end

CableClub_EventScript_DoubleBattleMode::
	special HasEnoughMonsForDoubleBattle
	goto_if_ne VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS, CableClub_EventScript_NeedTwoMonsForDoubleBattle
	setvar VAR_0x8004, USING_DOUBLE_BATTLE
	goto CableClub_EventScript_TryEnterColosseum
	end

CableClub_EventScript_NeedTwoMonsForDoubleBattle::
	msgbox CableClub_Text_NeedTwoMonsForDoubleBattle
	goto CableClub_EventScript_SelectBattleMode
	end

CableClub_EventScript_MultiBattleMode::
	setvar VAR_0x8004, USING_MULTI_BATTLE
	goto CableClub_EventScript_TryEnterColosseum
	end

CableClub_EventScript_TryEnterColosseum::
	call EventScript_AskSaveGame
	goto_if_eq VAR_RESULT, 0, CableClub_EventScript_AbortLink
	message CableClub_Text_PleaseWaitBCancel
	waitmessage
	special HelpSystem_Disable
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special TryBattleLinkup
	waitstate
	call EventScript_RestorePrevTextColor
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterColosseum
	goto_if_eq VAR_RESULT, LINKUP_SOMEONE_NOT_READY, CableClub_EventScript_AbortLinkSomeoneNotReady
	goto_if_eq VAR_RESULT, LINKUP_DIFF_SELECTIONS, CableClub_EventScript_AbortLinkDifferentSelections
	goto_if_eq VAR_RESULT, LINKUP_WRONG_NUM_PLAYERS, CableClub_EventScript_AbortLinkIncorrectNumberOfBattlers
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_AbortLink
	goto_if_eq VAR_RESULT, LINKUP_CONNECTION_ERROR, CableClub_EventScript_AbortLinkConnectionError
	end

CableClub_EventScript_EnterColosseum::
	special HealPlayerParty
	special SavePlayerParty
	special LoadPlayerBag
	copyvar VAR_CABLE_CLUB_STATE, VAR_0x8004
	messageautoscroll CableClub_Text_PleaseEnter
	waitmessage
	call CableClub_EventScript_OpenDirectCornerBarrier
	special DrawWholeMapView
	playse SE_CLICK
	delay 60
	applymovement VAR_LAST_TALKED, Movement_AttendantFaceLeft
	waitmovement 0
	closemessage
	applymovement LOCALID_PLAYER, Movement_PlayerApproachLinkRoomLeft
	waitmovement 0
	opendoor 9, 1
	waitdooranim
	applymovement LOCALID_PLAYER, Movement_PlayerEnterLinkRoom
	waitmovement 0
	hideobjectat LOCALID_PLAYER, 0
	closedoor 9, 1
	waitdooranim
	release
	goto_if_eq VAR_0x8004, USING_MULTI_BATTLE, CableClub_EventScript_WarpTo4PColosseum
	special SetCableClubWarp
	warp MAP_BATTLE_COLOSSEUM_2P, 6, 8
	special DoCableClubWarp
	waitstate
	end

@ Unused
CableClub_EventScript_PlayerApproachLinkRoomRight::
	applymovement LOCALID_PLAYER, Movement_PlayerApproachLinkRoomRight
	waitmovement 0
	return

CableClub_EventScript_WarpTo4PColosseum::
	special SetCableClubWarp
	warp MAP_BATTLE_COLOSSEUM_4P, 5, 8
	special DoCableClubWarp
	waitstate
	end

CableClub_EventScript_AbortLinkIncorrectNumberOfBattlers::
	switch VAR_0x8004
	case USING_SINGLE_BATTLE, CableClub_EventScript_AbortLinkWrongNumberForSingleBattle
	case USING_DOUBLE_BATTLE, CableClub_EventScript_AbortLinkWrongNumberForDoubleBattle
	case USING_MULTI_BATTLE, CableClub_EventScript_AbortLinkNeedFourPlayers
	goto CableClub_EventScript_AbortLinkIncorrectNumberOfParticipants
	end

CableClub_EventScript_AbortLinkNeedFourPlayers::
	special CloseLink
	msgbox CableClub_Text_NeedFourPlayers
	goto CableClub_EventScript_ConfirmNumberAndRestart
	end

CableClub_EventScript_AbortLinkWrongNumberForDoubleBattle::
	special CloseLink
	msgbox CableClub_Text_CantDoubleBattleWithXPlayers
	goto CableClub_EventScript_ConfirmNumberAndRestart
	end

CableClub_EventScript_AbortLinkWrongNumberForSingleBattle::
	special CloseLink
	msgbox CableClub_Text_CantSingleBattleWithXPlayers
	goto CableClub_EventScript_ConfirmNumberAndRestart
	end

CableClub_EventScript_ConfirmNumberAndRestart::
	special CloseLink  @ Redundant
	special HelpSystem_Enable
	msgbox CableClub_Text_PleaseConfirmNumberAndRestart
	release
	end

CableClub_EventScript_TradeCenter::
	copyvar VAR_0x8007, VAR_LAST_TALKED
	call CableClub_EventScript_CheckPartyTradeRequirements
	goto_if_eq VAR_RESULT, 0, CableClub_EventScript_AbortLink
	call EventScript_AskSaveGame
	goto_if_eq VAR_RESULT, 0, CableClub_EventScript_AbortLink
	message CableClub_Text_PleaseWaitBCancel
	waitmessage
	special HelpSystem_Disable
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special TryTradeLinkup
	waitstate
	call EventScript_RestorePrevTextColor
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterTradeCenter
	goto_if_eq VAR_RESULT, LINKUP_SOMEONE_NOT_READY, CableClub_EventScript_AbortLinkSomeoneNotReady
	goto_if_eq VAR_RESULT, LINKUP_DIFF_SELECTIONS, CableClub_EventScript_AbortLinkDifferentSelections
	goto_if_eq VAR_RESULT, LINKUP_WRONG_NUM_PLAYERS, CableClub_EventScript_AbortLinkIncorrectNumberOfParticipants
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_AbortLink
	goto_if_eq VAR_RESULT, LINKUP_CONNECTION_ERROR, CableClub_EventScript_AbortLinkConnectionError
	goto_if_eq VAR_RESULT, LINKUP_PLAYER_NOT_READY, CableClub_EventScript_AbortLinkPlayerNotReady
	goto_if_eq VAR_RESULT, LINKUP_PARTNER_NOT_READY, CableClub_EventScript_AbortLinkOtherTrainerNotReady
	end

CableClub_EventScript_EnterTradeCenter::
	setvar VAR_0x8004, USING_TRADE_CENTER
	copyvar VAR_CABLE_CLUB_STATE, VAR_0x8004
	messageautoscroll CableClub_Text_PleaseEnter
	waitmessage
	call CableClub_EventScript_OpenDirectCornerBarrier
	special DrawWholeMapView
	playse SE_CLICK
	delay 60
	applymovement VAR_LAST_TALKED, Movement_AttendantFaceLeft
	waitmovement 0
	closemessage
	applymovement LOCALID_PLAYER, Movement_PlayerApproachLinkRoomLeft
	waitmovement 0
	opendoor 9, 1
	waitdooranim
	applymovement LOCALID_PLAYER, Movement_PlayerEnterLinkRoom
	waitmovement 0
	hideobjectat LOCALID_PLAYER, 0
	closedoor 9, 1
	waitdooranim
	release
	special SetCableClubWarp
	setwarp MAP_TRADE_CENTER, 5, 8
	special DoCableClubWarp
	waitstate
	end

CableClub_EventScript_CheckPartyTradeRequirements::
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	goto_if_lt VAR_RESULT, 2, CableClub_EventScript_NeedTwoMonsToTrade
	specialvar VAR_RESULT, DoesPartyHaveEnigmaBerry
	goto_if_eq VAR_RESULT, TRUE, CableClub_EventScript_CantTradeEnigmaBerry
	setvar VAR_RESULT, TRUE
	return

CableClub_EventScript_NeedTwoMonsToTrade::
	msgbox CableClub_Text_NeedTwoMonsToTrade
	setvar VAR_RESULT, FALSE
	return

CableClub_EventScript_CantTradeEnigmaBerry::
	msgbox CableClub_Text_CantTradeEnigmaBerry
	setvar VAR_RESULT, FALSE
	return

@ Record Corner is nopped in FRLG
CableClub_EventScript_RecordCorner::
	end

CableClub_EventScript_AbortLinkPlayerNotReady::
	special CloseLink
	special HelpSystem_Enable
	msgbox CableClub_Text_NotSetUpForFarAwayRegion
	release
	end

CableClub_EventScript_AbortLinkOtherTrainerNotReady::
	special CloseLink
	special HelpSystem_Enable
	msgbox CableClub_Text_OtherTrainerNotReady
	release
	end

CableClub_EventScript_AbortLinkConnectionError::
	special CloseLink
	special HelpSystem_Enable
	msgbox CableClub_Text_LinkErrorPleaseReset
	release
	end

CableClub_EventScript_AbortLinkSomeoneNotReady::
	special CloseLink
	special HelpSystem_Enable
	msgbox CableClub_Text_SomeoneIsNotReadyToLink
	release
	end

CableClub_EventScript_AbortLinkDifferentSelections::
	special CloseLink
	special HelpSystem_Enable
	msgbox CableClub_Text_PlayersMadeDifferentSelections
	release
	end

CableClub_EventScript_AbortLink::
	special CloseLink
	special HelpSystem_Enable
	msgbox CableClub_Text_PleaseVisitAgain
	release
	end

CableClub_EventScript_AbortMinigame::
	special CloseLink
	special HelpSystem_Enable
	msgbox CableClub_Text_ComeAgain
	release
	end

@ Unused
CableClub_EventScript_CableClubWarp::
	special SetCableClubWarp
	special DoCableClubWarp
	waitstate
	end

CableClub_EventScript_AbortLinkIncorrectNumberOfParticipants::
	special CloseLink
	special HelpSystem_Enable
	msgbox CableClub_Text_IncorrectNumberOfParticipants
	release
	end

CableClub_EventScript_AbortLinkPlayerHasBadEgg::
	special CloseLink
	special HelpSystem_Enable
	msgbox CableClub_Text_YouHaveAMonThatCantBeTaken
	release
	end

CableClub_EventScript_WirelessClubAdjustements::
	msgbox Text_WirelessClubUndergoingAdjustments
	release
	end

CableClub_EventScript_NotReadyYet::
	msgbox Text_AppearsToBeUndergoingAdjustments
	releaseall
	end

Movement_AttendantFaceDown::
	face_down
	step_end

@ Unused
Movement_AttendantFaceRight::
	face_right
	step_end

Movement_AttendantFaceLeft::
	face_left
	step_end

Movement_PlayerExitLinkRoom::
	walk_down
	walk_down
	step_end

Movement_PlayerApproachLinkRoomRight::
	walk_right
	walk_up
	walk_up
	step_end

Movement_PlayerApproachLinkRoomLeft::
	walk_left
	walk_up
	walk_up
	step_end

Movement_PlayerEnterLinkRoom::
	walk_up
	step_end

@ Unused
Movement_PlayerFaceAttendantLeft::
	face_left
	step_end

Movement_PlayerFaceAttendantRight::
	face_right
	step_end

Movement_PlayerEnterMinigameRoom::
	walk_left
	walk_up
	walk_up
	walk_up
	step_end

CableClub_EventScript_ShowBattleRecords::
	goto_if_questlog EventScript_ReleaseEnd
	lockall
	fadescreen FADE_TO_BLACK
	setvar VAR_0x8004, 0
	special ShowBattleRecords
	waitstate
	releaseall
	end

BattleColosseum_2P_EventScript_PlayerSpot0::
	setvar VAR_0x8005, 0
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special EnterColosseumPlayerSpot
	waitstate
	end

BattleColosseum_2P_EventScript_PlayerSpot1::
	setvar VAR_0x8005, 1
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special EnterColosseumPlayerSpot
	waitstate
	end

BattleColosseum_4P_EventScript_PlayerSpot0::
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_eq VAR_RESULT, 0, BattleColosseum_4P_EventScript_CancelSpotTrigger
	setvar VAR_0x8005, 0
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special EnterColosseumPlayerSpot
	waitstate
	end

BattleColosseum_4P_EventScript_PlayerSpot1::
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_eq VAR_RESULT, 0, BattleColosseum_4P_EventScript_CancelSpotTrigger
	setvar VAR_0x8005, 1
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special EnterColosseumPlayerSpot
	waitstate
	end

BattleColosseum_4P_EventScript_PlayerSpot2::
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_eq VAR_RESULT, 0, BattleColosseum_4P_EventScript_CancelSpotTrigger
	setvar VAR_0x8005, 2
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special EnterColosseumPlayerSpot
	waitstate
	end

BattleColosseum_4P_EventScript_PlayerSpot3::
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_eq VAR_RESULT, 0, BattleColosseum_4P_EventScript_CancelSpotTrigger
	setvar VAR_0x8005, 3
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special EnterColosseumPlayerSpot
	waitstate
	end

BattleColosseum_4P_EventScript_CancelSpotTrigger::
	end

TradeCenter_EventScript_Chair0::
	setvar VAR_0x8005, 0
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special EnterTradeSeat
	waitstate
	end

TradeCenter_EventScript_Chair1::
	setvar VAR_0x8005, 1
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special EnterTradeSeat
	waitstate
	end

@ Unused
TradeCenter_EventScript_Chair2::
	setvar VAR_0x8005, 2
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special EnterTradeSeat
	waitstate
	end

@ Unused
TradeCenter_EventScript_Chair3::
	setvar VAR_0x8005, 3
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special EnterTradeSeat
	waitstate
	end

@ Nop in FRLG
@ Separate labels to match GetDirectionForEventScript
RecordCorner_EventScript_Spot0::
RecordCorner_EventScript_Spot1::
RecordCorner_EventScript_Spot2::
RecordCorner_EventScript_Spot3::
	end

CableClub_EventScript_ReadTrainerCard::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	msgbox Text_LookedAtPlayersTrainerCard
	fadescreen FADE_TO_BLACK
	special Script_ShowLinkTrainerCard
	waitstate
	end

CableClub_EventScript_ReadTrainerCardColored::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	msgbox Text_LookedAtPlayersTrainerCardColored
	fadescreen FADE_TO_BLACK
	special Script_ShowLinkTrainerCard
	waitstate
	end

CableClub_EventScript_TooBusyToNotice::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	msgbox Text_TrainerTooBusyToNotice
	closemessage
	end

BattleColosseum_2P_EventScript_Attendant::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special Script_FacePlayer
	msgbox Text_TakeSeatStartBattle
	special Script_ClearHeldMovement
	closemessage
	end

TradeCenter_EventScript_Attendant::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special Script_FacePlayer
	msgbox Text_TakeSeatStartTrade
	special Script_ClearHeldMovement
	closemessage
	end

@ Nop in FRLG
RecordCorner_EventScript_Attendant::
	end

TradeCenter_ConfirmLeaveRoom::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	msgbox Text_TerminateLinkIfYouLeaveRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, TradeCenter_TerminateLink
	erasebox 0, 0, 29, 19
	releaseall
	end

TradeCenter_TerminateLink::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	messageautoscroll Text_TerminateLinkConfirmation
	waitmessage
	special ExitLinkRoom
	end

CableClub_EventScript_DoLinkRoomExit::
	special CleanupLinkRoomState
	special ReturnFromLinkRoom
	waitstate
	end

CableClub_EventScript_UnionRoomAttendant::
	goto_if_questlog EventScript_ReleaseEnd
	special QuestLog_CutRecording
	lock
	faceplayer
	goto_if_unset FLAG_SYS_POKEDEX_GET, CableClub_EventScript_WirelessClubAdjustements
	specialvar VAR_RESULT, IsBadEggInParty
	goto_if_eq VAR_RESULT, TRUE, CableClub_EventScript_AbortLinkPlayerHasBadEgg
	copyvar VAR_0x8007, VAR_LAST_TALKED
	specialvar VAR_RESULT, IsWirelessAdapterConnected
	goto_if_eq VAR_RESULT, FALSE, CableClub_EventScript_UnionRoomAdapterNotConnected
	message CableClub_Text_WelcomeUnionRoomEnter
	waitmessage
	goto CableClub_EventScript_AskEnterUnionRoom
	end

CableClub_EventScript_AskEnterUnionRoom::
	multichoice 18, 6, MULTICHOICE_YES_NO_INFO, FALSE
	switch VAR_RESULT
	case 0, CableClub_EventScript_EnterUnionRoom
	case 1, CableClub_EventScript_AbortLink
	case 2, CableClub_EventScript_UnionRoomInfo
	case SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end

CableClub_EventScript_UnionRoomInfo::
	message CableClub_Text_UnionRoomInfo
	waitmessage
	goto CableClub_EventScript_AskEnterUnionRoom
	end

CableClub_EventScript_EnterUnionRoom::
	call CableClub_EventScript_CheckPartyUnionRoomRequirements
	goto_if_eq VAR_RESULT, FALSE, CableClub_EventScript_AbortLink
	call EventScript_AskSaveGame
	goto_if_eq VAR_RESULT, 0, CableClub_EventScript_AbortLink
	msgbox CableClub_Text_EnjoyUnionRoom
	closemessage
	special HealPlayerParty
	setvar VAR_0x8004, USING_UNION_ROOM
	copyvar VAR_CABLE_CLUB_STATE, VAR_0x8004
	special HelpSystem_Disable
	call CableClub_EventScript_OpenUnionRoomBarrier
	special DrawWholeMapView
	playse SE_CLICK
	delay 60
	applymovement VAR_LAST_TALKED, Movement_AttendantFaceLeft
	waitmovement 0
	applymovement LOCALID_PLAYER, Movement_PlayerApproachLinkRoomLeft
	waitmovement 0
	opendoor 5, 1
	waitdooranim
	applymovement LOCALID_PLAYER, Movement_PlayerEnterLinkRoom
	waitmovement 0
	hideobjectat LOCALID_PLAYER, 0
	closedoor 5, 1
	waitdooranim
	special Script_ResetUnionRoomTrade
	special SetCableClubWarp
	warpspinenter MAP_UNION_ROOM, 7, 11
	waitstate
	special RunUnionRoom
	waitstate
	end

CableClub_EventScript_CheckPartyUnionRoomRequirements::
	specialvar VAR_RESULT, CountPartyNonEggMons
	goto_if_lt VAR_RESULT, 2, CableClub_EventScript_NeedTwoMonsForUnionRoom
	specialvar VAR_RESULT, DoesPartyHaveEnigmaBerry
	goto_if_eq VAR_RESULT, TRUE, CableClub_EventScript_NoEnigmaBerryInUnionRoom
	setvar VAR_RESULT, TRUE
	return

CableClub_EventScript_NeedTwoMonsForUnionRoom::
	msgbox CableClub_Text_NeedTwoMonsForUnionRoom
	goto EventScript_SetResultFalse
	end

CableClub_EventScript_NoEnigmaBerryInUnionRoom::
	msgbox CableClub_Text_NoEnigmaBerryInUnionRoom
	goto EventScript_SetResultFalse
	end

CableClub_EventScript_UnionRoomAdapterNotConnected::
	msgbox CableClub_Text_UnionRoomAdapterNotConnected
	release
	return

CableClub_EventScript_WirelessClubAttendant::
	lock
	faceplayer
	goto_if_unset FLAG_SYS_POKEDEX_GET, CableClub_EventScript_WirelessClubAdjustements
	msgbox CableClub_Text_AskAboutLinking, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CableClub_EventScript_DontAskAboutLinking
	msgbox CableClub_Text_ExplainWirelessClub
	release
	return

CableClub_EventScript_DontAskAboutLinking::
	msgbox CableClub_Text_HopeYouEnjoyWirelessSystem
	release
	return

CableClub_EventScript_DirectCornerAttendant::
	goto_if_questlog EventScript_ReleaseEnd
	special QuestLog_CutRecording
	lock
	faceplayer
	goto_if_unset FLAG_SYS_POKEDEX_GET, CableClub_EventScript_WirelessClubAdjustements
	specialvar VAR_RESULT, IsBadEggInParty
	goto_if_eq VAR_RESULT, TRUE, CableClub_EventScript_AbortLinkPlayerHasBadEgg
	specialvar VAR_RESULT, IsWirelessAdapterConnected
	goto_if_eq VAR_RESULT, FALSE, CableClub_EventScript_WelcomeToCableClub
	message CableClub_Text_WelcomeWhichDirectCornerRoom
	waitmessage
	delay 15
	goto CableClub_EventScript_DirectCornerSelectService
	end

CableClub_EventScript_DirectCornerSelectService::
	goto_if_unset FLAG_GOT_POWDER_JAR, CableClub_EventScript_DirectCornerNoBerry
	multichoice 0, 0, MULTICHOICE_TRADE_COLOSSEUM_CRUSH, FALSE
	switch VAR_RESULT
	case 0, CableClub_EventScript_WirelessTrade
	case 1, CableClub_EventScript_WirelessBattleSelect
	case 2, CableClub_EventScript_WirelessBerryCrush
	case 3, CableClub_EventScript_AbortLink
	case SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end

CableClub_EventScript_DirectCornerNoBerry::
	multichoice 0, 0, MULTICHOICE_TRADE_COLOSSEUM_2, FALSE
	switch VAR_RESULT
	case 0, CableClub_EventScript_WirelessTrade
	case 1, CableClub_EventScript_WirelessBattleSelect
	case 2, CableClub_EventScript_AbortLink
	case SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end

CableClub_EventScript_WirelessTrade::
	msgbox CableClub_Text_TradePokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CableClub_EventScript_AbortLink
	call CableClub_EventScript_CheckPartyTradeRequirements
	goto_if_eq VAR_RESULT, FALSE, CableClub_EventScript_AbortLink
	setvar VAR_0x8004, LINK_GROUP_TRADE
	goto CableClub_EventScript_SaveAndChooseLinkLeader
	end

CableClub_EventScript_WirelessBattleSelect::
	message CableClub_Text_PlayWhichBattleMode
	waitmessage
	multichoice 0, 0, MULTICHOICE_SINGLE_DOUBLE_MULTI_INFO_EXIT, FALSE
	switch VAR_RESULT
	case 0, CableClub_EventScript_WirelessSingleBattle
	case 1, CableClub_EventScript_WirelessDoubleBattle
	case 2, CableClub_EventScript_WirelessMultiBattle
	case 3, CableClub_EventScript_WirelessBattleInfo
	case 4, CableClub_EventScript_AbortLink
	case SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end

CableClub_EventScript_WirelessSingleBattle::
	setvar VAR_0x8004, LINK_GROUP_SINGLE_BATTLE
	goto CableClub_EventScript_SaveAndChooseLinkLeader
	end

CableClub_EventScript_WirelessDoubleBattle::
	special HasEnoughMonsForDoubleBattle
	goto_if_ne VAR_RESULT, PLAYER_HAS_TWO_USABLE_MONS, CableClub_EventScript_TwoMonsNeededForWirelessDoubleBattle
	setvar VAR_0x8004, LINK_GROUP_DOUBLE_BATTLE
	goto CableClub_EventScript_SaveAndChooseLinkLeader
	end

CableClub_EventScript_TwoMonsNeededForWirelessDoubleBattle::
	msgbox CableClub_Text_NeedTwoMonsForDoubleBattle
	goto CableClub_EventScript_WirelessBattleSelect
	end

CableClub_EventScript_WirelessMultiBattle::
	setvar VAR_0x8004, LINK_GROUP_MULTI_BATTLE
	goto CableClub_EventScript_SaveAndChooseLinkLeader
	end

CableClub_EventScript_WirelessBattleInfo::
	msgbox CableClub_Text_ExplainBattleModes
	goto CableClub_EventScript_WirelessBattleSelect
	end

CableClub_EventScript_WirelessBerryCrush::
	msgbox CableClub_Text_UseBerryCrush, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CableClub_EventScript_AbortLink
	special HasAtLeastOneBerry
	goto_if_eq VAR_RESULT, FALSE, CableClub_EventScript_NeedBerryForBerryCrush
	setvar VAR_0x8004, LINK_GROUP_BERRY_CRUSH
	goto CableClub_EventScript_SaveAndChooseLinkLeader
	end

CableClub_EventScript_NeedBerryForBerryCrush::
	msgbox CableClub_Text_NeedBerryForBerryCrush
	goto CableClub_EventScript_DirectCornerSelectService
	end

CableClub_EventScript_SaveAndChooseLinkLeader::
	call EventScript_AskSaveGame
	goto_if_eq VAR_RESULT, 0, CableClub_EventScript_AbortLink
	switch VAR_0x8004
	case LINK_GROUP_TRADE, CableClub_EventScript_ChooseLinkLeaderFrom2
	case LINK_GROUP_SINGLE_BATTLE, CableClub_EventScript_ChooseLinkLeaderFrom2
	case LINK_GROUP_DOUBLE_BATTLE, CableClub_EventScript_ChooseLinkLeaderFrom2
	case LINK_GROUP_MULTI_BATTLE, CableClub_EventScript_ChooseLinkLeaderFrom4
	case LINK_GROUP_BERRY_CRUSH, CableClub_EventScript_ChooseLinkLeader
	end

CableClub_EventScript_ChooseLinkLeaderFrom2::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	message CableClub_Text_ChooseGroupLeaderOfTwo
	waitmessage
	call EventScript_RestorePrevTextColor
	multichoice 13, 6, MULTICHOICE_JOIN_OR_LEAD, FALSE
	switch VAR_RESULT
	case 0, CableClub_EventScript_TryJoinGroup2Players
	case 1, CableClub_EventScript_TryLeadGroup2Players
	case 2, CableClub_EventScript_AbortLink
	case SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end

CableClub_EventScript_TryLeadGroup2Players::
	call CableClub_EventScript_TryBecomeLinkLeader
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterWirelessLinkRoom
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_ChooseLinkLeaderFrom2
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, CableClub_EventScript_TryLeadGroup2Players
	release
	return

CableClub_EventScript_TryJoinGroup2Players::
	call CableClub_EventScript_TryJoinLinkGroup
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterWirelessLinkRoom
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_ChooseLinkLeaderFrom2
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, CableClub_EventScript_TryJoinGroup2Players
	release
	return

CableClub_EventScript_ChooseLinkLeaderFrom4::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	message CableClub_Text_ChooseGroupLeaderOfFour
	waitmessage
	call EventScript_RestorePrevTextColor
	multichoice 13, 6, MULTICHOICE_JOIN_OR_LEAD, FALSE
	switch VAR_RESULT
	case 0, CableClub_EventScript_TryJoinGroup4Players
	case 1, CableClub_EventScript_TryLeadGroup4Players
	case 2, CableClub_EventScript_AbortLink
	case SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end

CableClub_EventScript_TryLeadGroup4Players::
	call CableClub_EventScript_TryBecomeLinkLeader
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterWirelessLinkRoom
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_ChooseLinkLeaderFrom4
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, CableClub_EventScript_TryLeadGroup4Players
	release
	return

CableClub_EventScript_TryJoinGroup4Players::
	call CableClub_EventScript_TryJoinLinkGroup
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterWirelessLinkRoom
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_ChooseLinkLeaderFrom4
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, CableClub_EventScript_TryJoinGroup4Players
	release
	return

CableClub_EventScript_ChooseLinkLeader::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	message CableClub_Text_ChooseGroupLeader
	waitmessage
	call EventScript_RestorePrevTextColor
	multichoice 13, 6, MULTICHOICE_JOIN_OR_LEAD, FALSE
	switch VAR_RESULT
	case 0, CableClub_EventScript_TryJoinGroupXPlayers
	case 1, CableClub_EventScript_TryLeadGroupXPlayers
	case 2, CableClub_EventScript_AbortLink
	case SCR_MENU_CANCEL, CableClub_EventScript_AbortLink
	end

CableClub_EventScript_TryLeadGroupXPlayers::
	call CableClub_EventScript_TryBecomeLinkLeader
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterWirelessLinkRoom
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_ChooseLinkLeader
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, CableClub_EventScript_TryLeadGroupXPlayers
	release
	return

CableClub_EventScript_TryJoinGroupXPlayers::
	call CableClub_EventScript_TryJoinLinkGroup
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterWirelessLinkRoom
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_ChooseLinkLeader
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, CableClub_EventScript_TryJoinGroupXPlayers
	release
	return

CableClub_EventScript_TryBecomeLinkLeader::
	special HelpSystem_Disable
	special TryBecomeLinkLeader
	waitstate
	return

CableClub_EventScript_TryJoinLinkGroup::
	special HelpSystem_Disable
	special TryJoinLinkGroup
	waitstate
	return

CableClub_EventScript_EnterWirelessLinkRoom::
	messageautoscroll CableClub_Text_DirectYouToYourRoom
	waitmessage
	delay 60
	closemessage
	copyvar VAR_0x8007, VAR_LAST_TALKED
	call CableClub_EventScript_OpenDirectCornerBarrier
	special DrawWholeMapView
	playse SE_CLICK
	delay 60
	applymovement VAR_LAST_TALKED, Movement_AttendantFaceLeft
	waitmovement 0
	closemessage
	applymovement LOCALID_PLAYER, Movement_PlayerApproachLinkRoomLeft
	waitmovement 0
	opendoor 9, 1
	waitdooranim
	applymovement LOCALID_PLAYER, Movement_PlayerEnterLinkRoom
	waitmovement 0
	hideobjectat LOCALID_PLAYER, 0
	closedoor 9, 1
	waitdooranim
	release
	waitstate
	end

CableClub_EventScript_ShowWirelessCommunicationScreen::
	goto_if_questlog EventScript_ReleaseEnd
	lockall
	goto_if_unset FLAG_SYS_POKEDEX_GET, CableClub_EventScript_NotReadyYet
	specialvar VAR_RESULT, IsWirelessAdapterConnected
	goto_if_eq VAR_RESULT, FALSE, CableClub_EventScript_AdapterNotConnected
	special HelpSystem_Disable
	fadescreen FADE_TO_BLACK
	special ShowWirelessCommunicationScreen
	waitstate
	msgbox CableClub_Text_ParticipantsStepUpToCounter
	special HelpSystem_Enable
	releaseall
	end

CableClub_EventScript_AdapterNotConnected::
	msgbox CableClub_Text_AdapterNotConnected
	releaseall
	end

CableClub_EventScript_OpenUnionRoomBarrier::
	setmetatile 5, 3, METATILE_PokemonCenter_Floor_ShadeLeft, 0
	return

CableClub_EventScript_CloseUnionRoomBarrier::
	setmetatile 5, 3, METATILE_PokemonCenter_CounterBarrier, 1
	return

CableClub_EventScript_OpenDirectCornerBarrier::
	setmetatile 9, 3, METATILE_PokemonCenter_Floor_ShadeLeft, 0
	return

CableClub_EventScript_CloseDirectCornerBarrier::
	setmetatile 9, 3, METATILE_PokemonCenter_CounterBarrier, 1
	return

CableClub_EventScript_OpenGameCornerBarrier::
	setmetatile 5, 3, METATILE_GameCorner_CheckeredFloor_ShadeLeft, 0
	return

CableClub_EventScript_CloseGameCornerBarrier::
	setmetatile 5, 3, METATILE_GameCorner_CounterBarrier, 1
	return

CableClub_OnResume::
	special InitUnionRoom
	end

JoyfulGameCorner_EventScript_InfoMan2::
	goto_if_questlog EventScript_ReleaseEnd
	special QuestLog_CutRecording
	lock
	faceplayer
	message Text_DescribeWhichGame
	waitmessage
	multichoice 0, 0, MULTICHOICE_POKEJUMP_DODRIO, FALSE
	switch VAR_RESULT
	case 0, CableClub_EventScript_PokemonJumpInfo
	case 1, CableClub_EventScript_DodrioBerryPickingInfo
	case 2, CableClub_EventScript_MinigameInfoExit
	case SCR_MENU_CANCEL, CableClub_EventScript_MinigameInfoExit
	end

CableClub_EventScript_PokemonJumpInfo::
	msgbox Text_PokemonJumpInfo
	release
	end

CableClub_EventScript_DodrioBerryPickingInfo::
	msgbox Text_DodrioBerryPickingInfo
	release
	end

CableClub_EventScript_MinigameInfoExit::
	msgbox Text_TalkToManToPlay
	release
	end

JoyfulGameCorner_EventScript_MinigameAttendant::
	goto_if_questlog EventScript_ReleaseEnd
	special QuestLog_CutRecording
	lock
	faceplayer
	message Text_WelcomeCanYouWait
	waitmessage
	specialvar VAR_RESULT, IsWirelessAdapterConnected
	goto_if_eq VAR_RESULT, FALSE, CableClub_EventScript_AdapterNotConnectedMinigame
	delay 60
	special HelpSystem_Disable
	message Text_PlayWhichGame
	waitmessage
	multichoice 0, 0, MULTICHOICE_POKEJUMP_DODRIO, FALSE
	switch VAR_RESULT
	case 0, CableClub_EventScript_PlayPokemonJump
	case 1, CableClub_EventScript_PlayDodrioBerryPicking
	case 2, CableClub_EventScript_AbortMinigame
	case SCR_MENU_CANCEL, CableClub_EventScript_AbortMinigame
	end

CableClub_EventScript_PlayPokemonJump::
	setvar VAR_0x8005, 0
	special IsPokemonJumpSpeciesInParty
	goto_if_eq VAR_RESULT, FALSE, CableClub_EventScript_NoEligiblePkmn
	msgbox Text_EnterWhichPokemon
	setvar VAR_0x8005, 0
	special ChooseMonForWirelessMinigame
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, CableClub_EventScript_AbortMinigame
	call EventScript_AskSaveGame
	goto_if_eq VAR_RESULT, 0, CableClub_EventScript_AbortMinigame
	setvar VAR_0x8004, LINK_GROUP_POKEMON_JUMP
	goto CableClub_EventScript_ChooseLinkLeaderMinigame
	end

CableClub_EventScript_PlayDodrioBerryPicking::
	setvar VAR_0x8005, 1
	special IsDodrioInParty
	goto_if_eq VAR_RESULT, 0, CableClub_EventScript_NoEligiblePkmn
	msgbox Text_EnterWhichPokemon
	setvar VAR_0x8005, 1
	special ChooseMonForWirelessMinigame
	waitstate
	goto_if_ge VAR_0x8004, PARTY_SIZE, CableClub_EventScript_AbortMinigame
	call EventScript_AskSaveGame
	goto_if_eq VAR_RESULT, 0, CableClub_EventScript_AbortMinigame
	setvar VAR_0x8004, LINK_GROUP_BERRY_PICKING
	goto CableClub_EventScript_ChooseLinkLeaderMinigame
	end

CableClub_EventScript_ChooseLinkLeaderMinigame::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	message CableClub_Text_ChooseGroupLeader
	waitmessage
	call EventScript_RestorePrevTextColor
	multichoice 13, 6, MULTICHOICE_JOIN_OR_LEAD, FALSE
	switch VAR_RESULT
	case 0, CableClub_EventScript_TryJoinMinigameLinkGroup
	case 1, CableClub_EventScript_TryBecomeMinigameLinkLeader
	case 2, CableClub_EventScript_AbortMinigame
	case SCR_MENU_CANCEL, CableClub_EventScript_AbortMinigame
	end

CableClub_EventScript_TryBecomeMinigameLinkLeader::
	call CableClub_EventScript_TryBecomeLinkLeader
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterMinigame
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_ChooseLinkLeaderMinigame
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, CableClub_EventScript_TryBecomeMinigameLinkLeader
	release
	return

CableClub_EventScript_TryJoinMinigameLinkGroup::
	call CableClub_EventScript_TryJoinLinkGroup
	goto_if_eq VAR_RESULT, LINKUP_SUCCESS, CableClub_EventScript_EnterMinigame
	goto_if_eq VAR_RESULT, LINKUP_FAILED, CableClub_EventScript_ChooseLinkLeaderMinigame
	goto_if_eq VAR_RESULT, LINKUP_RETRY_ROLE_ASSIGN, CableClub_EventScript_TryJoinMinigameLinkGroup
	release
	return

CableClub_EventScript_EnterMinigame::
	messageautoscroll Text_AllGoodToGo
	waitmessage
	delay 120
	closemessage
	copyvar VAR_0x8007, VAR_LAST_TALKED
	call CableClub_EventScript_OpenGameCornerBarrier
	special DrawWholeMapView
	playse SE_CLICK
	delay 60
	applymovement VAR_LAST_TALKED, Movement_AttendantFaceLeft
	waitmovement 0
	closemessage
	applymovement LOCALID_PLAYER, Movement_PlayerEnterMinigameRoom
	waitmovement 0
	hideobjectat LOCALID_PLAYER, 0
	release
	waitstate
	end

CableClub_EventScript_AdapterNotConnectedMinigame::
	msgbox Text_AdapterNotConnectedMinigame
	release
	end

CableClub_EventScript_NoEligiblePkmn::
	msgbox EventScript_ExplainPokemonJumpRequirements, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CableClub_EventScript_AbortMinigame
	call_if_eq VAR_0x8005, 0, CableClub_EventScript_ExplainPokemonJumpRequirements
	call_if_eq VAR_0x8005, 1, CableClub_EventScript_ExplainDodrioBerryPickingRequirements
	goto CableClub_EventScript_AbortMinigame
	end

CableClub_EventScript_ExplainPokemonJumpRequirements::
	msgbox Text_ShortJumpingPokemonAllowed
	return

CableClub_EventScript_ExplainDodrioBerryPickingRequirements::
	msgbox Text_OnlyDodrioAllowed
	return

TwoIsland_JoyfulGameCorner_EventScript_ShowPokemonJumpRecords::
	goto_if_questlog EventScript_ReleaseEnd
	lockall
	special ShowPokemonJumpRecords
	waitstate
	releaseall
	end

TwoIsland_JoyfulGameCorner_EventScript_ShowDodrioBerryPickingRecords::
	goto_if_questlog EventScript_ReleaseEnd
	lockall
	special ShowDodrioBerryPickingRecords
	waitstate
	releaseall
	end

CableClub_Text_WelcomeWhichCableClubService::
	.ifdef ENGLISH
	.string "Welcome to the POKéMON CABLE\n"
	.string "CLUB.\p"
	.string "Which of our services do you wish\n"
	.string "to use?$"
	.endif
	.ifdef SPANISH
	.string "Éste es el CLUB del CABLE\n"
	.string "POKéMON.\p"
	.string "¿Qué podemos hacer por ti?$"
	.endif

CableClub_Text_WhichService::
	.ifdef ENGLISH
	.string "Which of our services do you wish\n"
	.string "to use?$"
	.endif
	.ifdef SPANISH
	.string "¿Qué podemos hacer por ti?$"
	.endif

CableClub_Text_TradeMonsUsingLinkCable::
	.ifdef ENGLISH
	.string "Trade POKéMON with another player\n"
	.string "using a GBA Game Link cable.$"
	.endif
	.ifdef SPANISH
	.string "Intercambiar PKMN con otro jugador\n"
	.string "usando el cable Game Link de GBA.$"
	.endif

CableClub_Text_BattleUsingLinkCable::
	.ifdef ENGLISH
	.string "You may battle another TRAINER\n"
	.string "using a GBA Game Link cable.$"
	.endif
	.ifdef SPANISH
	.string "Usando el cable Game Link de GBA,\n"
	.string "podrás luchar contra alguien.$"
	.endif

@ Unused, translated in Emerald
CableClub_Text_CloseThisMenu::
	.string "おわります$"

CableClub_Text_NeedTwoMonsForDoubleBattle::
	.ifdef ENGLISH
	.string "For a DOUBLE BATTLE, you must\n"
	.string "have at least two POKéMON.$"
	.endif
	.ifdef SPANISH
	.string "Para un COMBATE DOBLE, necesitas\n"
	.string "tener al menos dos POKéMON.$"
	.endif

CableClub_Text_NeedTwoMonsToTrade::
	.ifdef ENGLISH
	.string "For trading, you must have at\n"
	.string "least two POKéMON with you.$"
	.endif
	.ifdef SPANISH
	.string "Para intercambiar POKéMON,\n"
	.string "necesitas tener al menos dos.$"
	.endif

CableClub_Text_CantTradeEnigmaBerry::
	.ifdef ENGLISH
	.string "A POKéMON holding the {STR_VAR_1}\n"
	.string "BERRY can't be traded.$"
	.endif
	.ifdef SPANISH
	.string "Los POKéMON que tengan BAYAS\n"
	.string "{STR_VAR_1} no se pueden intercambiar.$"
	.endif

CableClub_Text_PleaseWaitBCancel::
	.ifdef ENGLISH
	.string "Please wait.\n"
	.string "… … B Button: Cancel$"
	.endif
	.ifdef SPANISH
	.string "Espera unos instantes.\n"
	.string "Pulsa el Botón B para cancelar.$"
	.endif

CableClub_Text_WhenAllPlayersReadyAConfirmBCancel::
	.ifdef ENGLISH
	.string "When all players are ready…\n"
	.string "A Button: Confirm\l"
	.string "B Button: Cancel$"
	.endif
	.ifdef SPANISH
	.string "Cuando todos estén listos...\n"
	.string "Botón A: confirmar\l"
	.string "Botón B: cancelar$"
	.endif

CableClub_Text_StartLinkWithXPlayersAConfirmBCancel::
	.ifdef ENGLISH
	.string "Start link with {STR_VAR_1} players.\n"
	.string "A Button: Confirm\l"
	.string "B Button: Cancel$"
	.endif
	.ifdef SPANISH
	.string "Comenzar la conexión con los\n"
	.string "siguientes jugadores: {STR_VAR_1}...\l"
	.string "Botón A: confirmar\l"
	.string "Botón B: cancelar$"
	.endif

CableClub_Text_AwaitingLinkupBCancel::
	.ifdef ENGLISH
	.string "Awaiting linkup…\n"
	.string "… … B Button: Cancel$"
	.endif
	.ifdef SPANISH
	.string "Esperando conexión...\n"
	.string "Botón B: cancelar$"
	.endif

@ Unused, translated in Emerald
CableClub_Text_OkayToSaveProgress::
	.string "はじめる　まえに　レポートを\n"
	.string "かきますが　よろしいですか？$"

CableClub_Text_PleaseEnter::
	.ifdef ENGLISH
	.string "Please enter.$"
	.endif
	.ifdef SPANISH
	.string "Adelante.$"
	.endif

CableClub_Text_DirectYouToYourRoom::
	.ifdef ENGLISH
	.string "I'll direct you to your room now.$"
	.endif
	.ifdef SPANISH
	.string "Te voy a llevar a tu sala.$"
	.endif

CableClub_Text_SomeoneIsNotReadyToLink::
	.ifdef ENGLISH
	.string "Someone is not ready to link.\p"
	.string "Please come back after everyone\n"
	.string "has made preparations.$"
	.endif
	.ifdef SPANISH
	.string "Uno de los jugadores no está listo\n"
	.string "para realizar la conexión.\p"
	.string "Vuelve cuando todos estéis listos.$"
	.endif

CableClub_Text_LinkErrorPleaseReset::
	.ifdef ENGLISH
	.string "Sorry, we have a link error…\n"
	.string "Please reset and try again.$"
	.endif
	.ifdef SPANISH
	.string "Error de conexión... Comprueba el\n"
	.string "cable Game Link, apaga la consola\l"
	.string "(OFF) y vuelve a encenderla (ON).$"
	.endif

CableClub_Text_PlayersMadeDifferentSelections::
	.ifdef ENGLISH
	.string "The link partners appear to have\n"
	.string "made different selections.$"
	.endif
	.ifdef SPANISH
	.string "Los demás jugadores parecen haber\n"
	.string "seleccionado opciones diferentes.$"
	.endif

CableClub_Text_PleaseVisitAgain::
	.ifdef ENGLISH
	.string "Please do visit again.$"
	.endif
	.ifdef SPANISH
	.string "Vuelve cuando quieras.$"
	.endif

CableClub_Text_IncorrectNumberOfParticipants::
	.ifdef ENGLISH
	.string "The number of participants is\n"
	.string "incorrect.$"
	.endif
	.ifdef SPANISH
	.string "El número de jugadores no es\n"
	.string "correcto.$"
	.endif

CableClub_Text_CantSingleBattleWithXPlayers::
	.ifdef ENGLISH
	.string "The SINGLE BATTLE Mode can't be\n"
	.string "played by {STR_VAR_1} players.$"
	.endif
	.ifdef SPANISH
	.string "No se puede jugar al modo de\n"
	.string "combate INDIVIDUAL con {STR_VAR_1}\l"
	.string "jugadores.$"
	.endif

CableClub_Text_CantDoubleBattleWithXPlayers::
	.ifdef ENGLISH
	.string "The DOUBLE BATTLE Mode can't be\n"
	.string "played by {STR_VAR_1} players.$"
	.endif
	.ifdef SPANISH
	.string "No se puede jugar al modo de\n"
	.string "combate DOBLE con {STR_VAR_1} jugadores.$"
	.endif

CableClub_Text_NeedFourPlayers::
	.ifdef ENGLISH
	.string "There must be four players to play\n"
	.string "this Battle Mode.$"
	.endif
	.ifdef SPANISH
	.string "Se necesitan cuatro jugadores para\n"
	.string "jugar a este modo de combate.$"
	.endif

CableClub_Text_PleaseConfirmNumberAndRestart::
	.ifdef ENGLISH
	.string "Please confirm the number of\n"
	.string "players and start again.$"
	.endif
	.ifdef SPANISH
	.string "Confirma el número de jugadores\n"
	.string "y vuelve a empezar.$"
	.endif

Text_TerminateLinkIfYouLeaveRoom::
	.ifdef ENGLISH
	.string "The link will be terminated if you\n"
	.string "leave the room. Is that okay?$"
	.endif
	.ifdef SPANISH
	.string "Si sales de la sala, se pondrá fin\n"
	.string "a la conexión. ¿Estás de acuerdo?$"
	.endif

Text_TerminateLinkConfirmation::
	.ifdef ENGLISH
	.string "Terminating link…\n"
	.string "You will be escorted out of\l"
	.string "the room. Please wait.$"
	.endif
	.ifdef SPANISH
	.string "Finalizando conexión... \n"
	.string "Te acompañamos fuera de la sala.\l"
	.string "Espera un momento.$"
	.endif

Text_TrainerTooBusyToNotice::
	.ifdef ENGLISH
	.string "This TRAINER is too busy to\n"
	.string "notice…$"
	.endif
	.ifdef SPANISH
	.string "Este ENTRENADOR no te hace\n"
	.string "ni caso...$"
	.endif

Text_LookedAtPlayersTrainerCard::
	.ifdef ENGLISH
	.string "Score! Got to look at {STR_VAR_1}'s\n"
	.string "TRAINER CARD!$"
	.endif
	.ifdef SPANISH
	.string "¡Bingo! ¡Puedes mirar la FICHA\n"
	.string "de ENTRENADOR de {STR_VAR_1}!$"
	.endif

Text_LookedAtPlayersTrainerCardColored::
	.ifdef ENGLISH
	.string "Score! Got to look at {STR_VAR_1}'s\n"
	.string "TRAINER CARD!\p"
	.string "It's a {STR_VAR_2} card!$"
	.endif
	.ifdef SPANISH
	.string "¡Bingo! ¡Puedes mirar la FICHA\n"
	.string "de ENTRENADOR de {STR_VAR_1}!\p"
	.string "¡Es de color {STR_VAR_2}!$"
	.endif

Text_TakeSeatStartBattle::
	.ifdef ENGLISH
	.string "Please take your seat and start\n"
	.string "your battle.$"
	.endif
	.ifdef SPANISH
	.string "Puedes comenzar el combate.$"
	.endif

Text_TakeSeatStartTrade::
	.ifdef ENGLISH
	.string "Please take your seat and start\n"
	.string "your trade.$"
	.endif
	.ifdef SPANISH
	.string "Puedes comenzar el intercambio.$"
	.endif

@ Unused, leftover from RS
RecordCorner_Text_ThanksForComing::
	.string "ごりよう　ありがとう　ございました$"

CableClub_Text_TrainerCardDataOverwritten::
	.ifdef ENGLISH
	.string "The TRAINER CARD data will\n"
	.string "be overwritten.$"
	.endif
	.ifdef SPANISH
	.string "Se van a sobrescribir los datos\n"
	.string "de la FICHA de ENTRENADOR.$"
	.endif

CableClub_Text_HopeToSeeYouAgain::
	.ifdef ENGLISH
	.string "I hope to see you again!$"
	.endif
	.ifdef SPANISH
	.string "¡Vuelve cuando quieras!$"
	.endif

CableClub_Text_NotSetUpForFarAwayRegion::
	.ifdef ENGLISH
	.string "I'm awfully sorry.\p"
	.string "We're not set up to conduct trades\n"
	.string "with TRAINERS far away in another\l"
	.string "region yet…$"
	.endif
	.ifdef SPANISH
	.string "Lo siento mucho.\p"
	.string "Aún no podemos realizar\n"
	.string "intercambios con ENTRENADORES\l"
	.string "de otra región...$"
	.endif

CableClub_Text_OtherTrainerNotReady::
	.ifdef ENGLISH
	.string "The other TRAINER is not ready.$"
	.endif
	.ifdef SPANISH
	.string "El otro ENTRENADOR no está listo.$"
	.endif

CableClub_Text_YouHaveAMonThatCantBeTaken::
	.ifdef ENGLISH
	.string "You have at least one POKéMON\n"
	.string "that can't be taken.$"
	.endif
	.ifdef SPANISH
	.string "Tienes al menos un POKéMON\n"
	.string "que no se puede enviar.$"
	.endif

CableClub_Text_AdapterNotConnected::
	.ifdef ENGLISH
	.string "The Wireless Adapter is not\n"
	.string "connected properly.$"
	.endif
	.ifdef SPANISH
	.string "El Conector inalámbrico de GBA\n"
	.string "no está bien conectado.$"
	.endif

CableClub_Text_ParticipantsStepUpToCounter::
	.ifdef ENGLISH
	.string "Participants are asked to step up\n"
	.string "to the reception counter.$"
	.endif
	.ifdef SPANISH
	.string "Los principiantes deben pasar\n"
	.string "por el mostrador de recepción.$"
	.endif

@ Unused, translated in Emerald
CableClub_Text_Hello::
	.string "こんにちは！$"

@ Unused, translated in Emerald
CableClub_Text_PleaseWait::
	.string "しょうしょう　おまちください$"

CableClub_Text_YouMayTradeHere::
	.ifdef ENGLISH
	.string "You may trade your POKéMON here\n"
	.string "with another TRAINER.$"
	.endif
	.ifdef SPANISH
	.string "Aquí puedes intercambiar POKéMON\n"
	.string "con un amigo.$"
	.endif

CableClub_Text_YouMayBattleHere::
	.ifdef ENGLISH
	.string "You may battle with your friends\n"
	.string "here.$"
	.endif
	.ifdef SPANISH
	.string "Aquí puedes luchar contra tus\n"
	.string "amigos.$"
	.endif

CableClub_Text_CanMakeBerryPowder::
	.ifdef ENGLISH
	.string "Two to five TRAINERS can make\n"
	.string "BERRY POWDER together.$"
	.endif
	.ifdef SPANISH
	.string "Para hacer POLVO de BAYA, hacen\n"
	.string "falta de dos a cinco ENTRENADORES.$"
	.endif

@ Unused, Record Mix nopped
CableClub_Text_CanMixRecords::
	.string "ワイヤレス　クラブでの\n"
	.string "あそびかたを　せつめいします$"

CableClub_Text_CancelSelectedItem::
	.ifdef ENGLISH
	.string "Cancels the selected MENU item.$"
	.endif
	.ifdef SPANISH
	.string "Cancelar la selección.$"
	.endif

@ Unused, translated in Emerald
CableClub_Text_WhichBattleMode::
	.string "どちらの　しょうぶに　しますか？$"

@ Unused, translated in Emerald
CableClub_Text_ReturnsToPreviousStep::
	.string "ひとつ　まえに　もどります$"

CableClub_Text_NeedBerryForBerryCrush::
	.ifdef ENGLISH
	.string "To use the BERRY CRUSH service,\n"
	.string "you must have at least one BERRY.$"
	.endif
	.ifdef SPANISH
	.string "Para usar el MACHACABAYAS,\n"
	.string "necesitas al menos una BAYA.$"
	.endif

CableClub_Text_NeedTwoMonsForUnionRoom::
	.ifdef ENGLISH
	.string "To enter the UNION ROOM, you must\n"
	.string "have at least two POKéMON.$"
	.endif
	.ifdef SPANISH
	.string "Para entrar en la SALA UNIÓN,\n"
	.string "debes tener al menos dos POKéMON.$"
	.endif

CableClub_Text_NoEnigmaBerryInUnionRoom::
	.ifdef ENGLISH
	.string "No POKéMON holding the {STR_VAR_1}\n"
	.string "BERRY may enter the UNION ROOM.$"
	.endif
	.ifdef SPANISH
	.string "Los POKéMON que tienen BAYAS\n"
	.string "{STR_VAR_1} no pueden entrar en la\l"
	.string "SALA UNIÓN.$"
	.endif

CableClub_Text_UnionRoomAdapterNotConnected::
	.ifdef ENGLISH
	.string "This is the POKéMON WIRELESS CLUB\n"
	.string "UNION ROOM.\p"
	.string "Unfortunately, your Wireless\n"
	.string "Adapter is not connected properly.\p"
	.string "Please do come again.$"
	.endif
	.ifdef SPANISH
	.string "Ésta es la SALA UNIÓN del CLUB\n"
	.string "INALÁMBRICO POKéMON.\p"
	.string "Vaya, tu Conector inalámbrico\n"
	.string "de GBA no está bien conectado...\p"
	.string "Vuelve más tarde.$"
	.endif

@ Unused, translated in Emerald
CableClub_Text_OhExcuseMe::
	.string "あ‥‥\n"
	.string "おきゃくさま！$"

Text_PlayerIsPlayingRightNowGoForIt::
	.ifdef ENGLISH
	.string "It appears as if {STR_VAR_1} is playing\n"
	.string "right now.\l"
	.string "Go for it!$"
	.endif
	.ifdef SPANISH
	.string "¡Parece que {STR_VAR_1} está jugando\n"
	.string "ahora mismo! ¡Conéctate!$"
	.endif

Text_DescribeWhichGame::
	.ifdef ENGLISH
	.string "I can explain game rules to you,\n"
	.string "if you'd like.\p"
	.string "Which game should I describe?$"
	.endif
	.ifdef SPANISH
	.string "Si quieres te explico las reglas.\p"
	.string "¿De qué juego te hablo?$"
	.endif

Text_PokemonJumpInfo::
	.ifdef ENGLISH
	.string "“POKéMON JUMP”\p"
	.string "Make your POKéMON skip the\n"
	.string "VINE WHIP rope with the A Button.\p"
	.string "Only mini POKéMON around 28 inches\n"
	.string "or less may participate.\p"
	.string "POKéMON that only swim, burrow, or\n"
	.string "fly are not good at jumping.\p"
	.string "As a result, those POKéMON may not\n"
	.string "participate.\p"
	.string "Good things happen if everyone\n"
	.string "jumps in time.$"
	.endif
	.ifdef SPANISH
	.string "“SALTO POKéMON”\p"
	.string "Consigue que a tus POKéMON no les\n"
	.string "atrape la LIANA usando el Botón A.\p"
	.string "Sólo pueden participar los POKéMON\n"
	.string "que midan unos 70 cm o menos.\p"
	.string "A los POKéMON que naden despacio,\n"
	.string "caven o vuelen no se les dará muy\l"
	.string "bien lo de saltar.\p"
	.string "Por ello, estos POKéMON no deben\n"
	.string "participar.\p"
	.string "Si todos saltan a la vez,\n"
	.string "pueden ocurrir cosas estupendas.$"
	.endif

Text_DodrioBerryPickingInfo::
	.ifdef ENGLISH
	.string "“DODRIO BERRY-PICKING”\p"
	.string "Command DODRIO's three heads to\n"
	.string "catch falling BERRIES.\p"
	.string "Press right, up, or left on the\n"
	.string "{PLUS} Control Pad to move the heads.\p"
	.string "To play this game, you must have\n"
	.string "a DODRIO.$"
	.endif
	.ifdef SPANISH
	.string "“DODRIO A POR BAYAS”\p"
	.string "Dile a DODRIO que pille las BAYAS\n"
	.string "que pueda con los tres picos que\l"
	.string "tiene.\p"
	.string "Pulsa derecha, izquierda o arriba\n"
	.string "en el {PLUS} Panel de Control para\l"
	.string "que se mueva.\p"
	.string "Para poder jugar a este juego,\n"
	.string "hay que tener un DODRIO.$"
	.endif

Text_TalkToManToPlay::
	.ifdef ENGLISH
	.string "If you want to play a game,\n"
	.string "please tell the man beside me.$"
	.endif
	.ifdef SPANISH
	.string "Si quieres jugar a un juego,\n"
	.string "díselo a mi compañero.$"
	.endif

Text_WelcomeCanYouWait::
	.ifdef ENGLISH
	.string "Hi, welcome!\n"
	.string "You can play games over the\l"
	.string "Wireless Communication System.\p"
	.string "Can you wait just a little bit?$"
	.endif
	.ifdef SPANISH
	.string "¡Hola! ¡Gracias al sistema de\n"
	.string "comunicación inalámbrica,\l"
	.string "podrás jugar a juegos!\p"
	.string "¿Puedes esperar un segundo?$"
	.endif

CableClub_Text_ComeAgain::
	.ifdef ENGLISH
	.string "All right, come again!$"
	.endif
	.ifdef SPANISH
	.string "¡Bueno, hasta otra!$"
	.endif

Text_AdapterNotConnectedMinigame::
	.ifdef ENGLISH
	.string "The Wireless Adapter isn't\n"
	.string "connected.\p"
	.string "Come back when it's hooked up!$"
	.endif
	.ifdef SPANISH
	.string "El Conector inalámbrico de GBA\n"
	.string "no está conectado.\p"
	.string "¡Vuelve cuando lo tengas!$"
	.endif

Text_PlayWhichGame::
	.ifdef ENGLISH
	.string "All right, which game did you want\n"
	.string "to play?$"
	.endif
	.ifdef SPANISH
	.string "¿A qué juego quieres jugar?$"
	.endif

Text_EnterWhichPokemon::
	.ifdef ENGLISH
	.string "Which POKéMON would you like to\n"
	.string "enter?$"
	.endif
	.ifdef SPANISH
	.string "¿Con qué POKéMON quieres\n"
	.string "participar?$"
	.endif

Text_AllGoodToGo::
	.ifdef ENGLISH
	.string "Okay, you're all good to go.\n"
	.string "Don't let the others beat you!$"
	.endif
	.ifdef SPANISH
	.string "¡Muy bien! ¡Pues adelante!\n"
	.string "¡A por todas!$"
	.endif

@ Unused, translated in Emerald
Text_LeavingDoComeAgain::
	.string "きょうは　けえるのか？\n"
	.string "またこいよ！$"

EventScript_ExplainPokemonJumpRequirements::
	.ifdef ENGLISH
	.string "It doesn't look like you have any\n"
	.string "POKéMON that you can enter…\p"
	.string "Would you like me to explain what\n"
	.string "kinds of POKéMON can enter?$"
	.endif
	.ifdef SPANISH
	.string "Creo que no tienes POKéMON\n"
	.string "aptos para participar...\p"
	.string "¿Quieres que te diga cuáles son\n"
	.string "los que pueden participar?$"
	.endif

Text_ShortJumpingPokemonAllowed::
	.ifdef ENGLISH
	.string "“POKéMON JUMP” is open to POKéMON\n"
	.string "around 28 inches or less.\p"
	.string "What you can't enter are those\n"
	.string "POKéMON that can't jump.\p"
	.string "You know, like POKéMON that only\n"
	.string "swim, burrow, or fly.\p"
	.string "That's all you need to know.$"
	.endif
	.ifdef SPANISH
	.string "En “SALTO POKéMON” pueden\n"
	.string "participar los POKéMON que midan\l"
	.string "unos 70 cm o menos.\p"
	.string "Tampoco pueden participar los\n"
	.string "POKéMON que no pueden saltar.\p"
	.string "Es decir, los POKéMON que sólo\n"
	.string "nadan, cavan o vuelan.\p"
	.string "Bueno, pues ya lo sabes.$"
	.endif

Text_OnlyDodrioAllowed::
	.ifdef ENGLISH
	.string "“DODRIO BERRY-PICKING”…\n"
	.string "Well, the name says it all.\p"
	.string "You have to have a DODRIO to play\n"
	.string "this game.$"
	.endif
	.ifdef SPANISH
	.string "“DODRIO A POR BAYAS”...\n"
	.string "Yo creo que el nombre lo explica\l"
	.string "todo, ¿no?\p"
	.string "Para jugar a este juego debes\n"
	.string "tener al menos un DODRIO.$"
	.endif

@ Unused, translated in Emerald
Text_RetryFromStartPlease::
	.string "もういちど　はじめから\n"
	.string "やりなおして　みて　くれ$"

CableClub_Text_WelcomeWhichDirectCornerRoom::
	.ifdef ENGLISH
	.string "Welcome to the POKéMON WIRELESS\n"
	.string "CLUB DIRECT CORNER.\p"
	.string "You may interact directly with\n"
	.string "your friends here.\p"
	.string "Which room would you like to\n"
	.string "enter?$"
	.endif
	.ifdef SPANISH
	.string "Ésta es la ZONA DIRECTA del CLUB\n"
	.string "INALÁMBRICO POKéMON.\p"
	.string "Aquí puedes comunicarte\n"
	.string "directamente con tus amigos.\p"
	.string "¿En qué sala quieres entrar?$"
	.endif

CableClub_Text_TradePokemon::
	.ifdef ENGLISH
	.string "Would you like to trade POKéMON?$"
	.endif
	.ifdef SPANISH
	.string "¿Quieres cambiar POKéMON?$"
	.endif

CableClub_Text_PlayWhichBattleMode::
	.ifdef ENGLISH
	.string "Which Battle Mode would you like\n"
	.string "to play?$"
	.endif
	.ifdef SPANISH
	.string "¿Qué modo de combate quieres?$"
	.endif

CableClub_Text_UseBerryCrush::
	.ifdef ENGLISH
	.string "Would you like to use the\n"
	.string "BERRY CRUSH System?$"
	.endif
	.ifdef SPANISH
	.string "¿Quieres usar el MACHACABAYAS?$"
	.endif

CableClub_Text_ExplainBattleModes::
	.ifdef ENGLISH
	.string "There are three Battle Modes.\p"
	.string "SINGLE BATTLE is for two TRAINERS\n"
	.string "with one or more POKéMON each.\p"
	.string "Each TRAINER can have one POKéMON\n"
	.string "in battle at a time.\p"
	.string "DOUBLE BATTLE is for two TRAINERS\n"
	.string "with two or more POKéMON each.\p"
	.string "Each TRAINER will send out two\n"
	.string "POKéMON in battle at a time.\p"
	.string "MULTI BATTLE is for four TRAINERS\n"
	.string "with one or more POKéMON each.\p"
	.string "Each TRAINER can have one POKéMON\n"
	.string "in battle at a time.$"
	.endif
	.ifdef SPANISH
	.string "Hay tres modos de combate.\p"
	.string "El COMBATE INDIVIDUAL es para dos\n"
	.string "ENTRENADORES con uno o más\l"
	.string "POKéMON cada uno.\p"
	.string "Cada ENTRENADOR puede usar un\n"
	.string "POKéMON cada vez.\p"
	.string "El COMBATE DOBLE es para dos\n"
	.string "ENTRENADORES con dos o más\l"
	.string "POKéMON cada uno.\p"
	.string "Cada ENTRENADOR usará dos\n"
	.string "POKéMON cada vez.\p"
	.string "El COMBATE MULTIJUGADOR es para\n"
	.string "cuatro ENTRENADORES con uno o más\l"
	.string "POKéMON cada uno.\p"
	.string "Cada ENTRENADOR puede usar un\n"
	.string "POKéMON cada vez.$"
	.endif

CableClub_Text_ChooseGroupLeaderOfTwo::
	.ifdef ENGLISH
	.string "Please decide which of you two\n"
	.string "will become the LEADER.\p"
	.string "The other player must then choose\n"
	.string "“JOIN GROUP.”$"
	.endif
	.ifdef SPANISH
	.string "Un jugador debe ser LÍDER.\p"
	.string "Y el otro, “UNIRSE\n"
	.string "al GRUPO”.$"
	.endif

CableClub_Text_ChooseGroupLeaderOfFour::
	.ifdef ENGLISH
	.string "Please decide which of you four\n"
	.string "will become the GROUP LEADER.\p"
	.string "The other players must then choose\n"
	.string "“JOIN GROUP.”$"
	.endif
	.ifdef SPANISH
	.string "Un jugador debe ser LÍDER\n"
	.string "del GRUPO.\p"
	.string "Y los otros, “UNIRSE\n"
	.string "al GRUPO”.$"
	.endif

CableClub_Text_ChooseGroupLeader::
	.ifdef ENGLISH
	.string "Please decide which of you will\n"
	.string "become the GROUP LEADER.\p"
	.string "The other players must then choose\n"
	.string "“JOIN GROUP.”$"
	.endif
	.ifdef SPANISH
	.string "Un jugador debe ser LÍDER\n"
	.string "del GRUPO.\p"
	.string "Y los otros, “UNIRSE\n"
	.string "al GRUPO”.$"
	.endif

CableClub_Text_WelcomeUnionRoomEnter::
	.ifdef ENGLISH
	.string "Welcome to the POKéMON WIRELESS\n"
	.string "CLUB UNION ROOM.\p"
	.string "You may interact directly with\n"
	.string "other TRAINERS here, some of\l"
	.string "whom you may not even know.\p"
	.string "Would you like to enter the ROOM?$"
	.endif
	.ifdef SPANISH
	.string "Ésta es la SALA UNIÓN del CLUB\n"
	.string "INALÁMBRICO POKéMON.\p"
	.string "Aquí puedes comunicarte\n"
	.string "directamente con ENTRENADORES\l"
	.string "a los que puede que no conozcas.\p"
	.string "¿Quieres entrar en la SALA?$"
	.endif

CableClub_Text_UnionRoomInfo::
	.ifdef ENGLISH
	.string "The TRAINERS in the UNION ROOM\n"
	.string "will be those players around you\l"
	.string "who have also entered the ROOM.\p"
	.string "You may do all sorts of things\n"
	.string "here, such as exchanging greetings.\p"
	.string "You may enter two POKéMON up to\n"
	.string "Lv. 30 for a one-on-one battle.\p"
	.string "You may take part in a chat with\n"
	.string "two to five people.\p"
	.string "Or, you may register a POKéMON for\n"
	.string "trade.\p"
	.string "Would you like to enter the ROOM?$"
	.endif
	.ifdef SPANISH
	.string "Los ENTRENADORES de la SALA UNIÓN\n"
	.string "serán los jugadores que tengas\l"
	.string "cerca y hayan entrado en la SALA.\p"
	.string "¡Aquí se pueden hacer muchas\n"
	.string "cosas, empezando por saludarse\l"
	.string "y celebrar el encuentro!\p"
	.string "Puedes registrar dos POKéMON\n"
	.string "de nivel no superior a 30 para\l"
	.string "entablar combates de 1 contra 1.\p"
	.string "También puedes participar en chats;\n"
	.string "podéis ser de 2 a 5 jugadores.\p"
	.string "Y, por supuesto, puedes registrar\n"
	.string "POKéMON para realizar intercambios.\p"
	.string "¿Quieres entrar en la SALA?$"
	.endif

CableClub_Text_EnjoyUnionRoom::
	.ifdef ENGLISH
	.string "I hope you enjoy your time in\n"
	.string "the UNION ROOM.$"
	.endif
	.ifdef SPANISH
	.string "Espero que disfrutes en la SALA\n"
	.string "UNIÓN.$"
	.endif

CableClub_Text_FirstTimeRightThisWay::
	.ifdef ENGLISH
	.string "Hello!\n"
	.string "My name is TEALA.\p"
	.string "This must be your first time\n"
	.string "up here.\p"
	.string "I'll show you how the Wireless\n"
	.string "Communication System works.\p"
	.string "First, I need to show you this\n"
	.string "floor of our POKéMON CENTER.\p"
	.string "Right this way, please.$"
	.endif
	.ifdef SPANISH
	.string "¡Hola!\n"
	.string "Me llamo TEALA.\p"
	.string "Es la primera vez que vienes, ¿no?\p"
	.string "Te voy a explicar cómo funciona\n"
	.string "el sistema de comunicación\l"
	.string "inalámbrica.\p"
	.string "Primero, te enseñaré esta planta\n"
	.string "de nuestro CENTRO POKéMON.\p"
	.string "Por aquí, por favor.$"
	.endif

CableClub_Text_ExplainWirelessClubFirstTime::
	.ifdef ENGLISH
	.string "On the top floor, there are two\n"
	.string "rooms.\p"
	.string "First, the room on the left.\n"
	.string "It's the UNION ROOM.\p"
	.string "You may link up with TRAINERS\n"
	.string "around you who have also entered\l"
	.string "the UNION ROOM.\p"
	.string "With them, you may do things like\n"
	.string "chat, battle, and trade.\p"
	.string "Second, the room on the right is\n"
	.string "the DIRECT CORNER.\p"
	.string "You may trade or battle POKéMON\n"
	.string "with your friends in this room.\p"
	.string "If the Wireless Adapter isn't\n"
	.string "connected, you may still link up\l"
	.string "using a GBA Game Link cable.\p"
	.string "If that is the case, you must go\n"
	.string "to the DIRECT CORNER.\p"
	.string "I hope you enjoy the Wireless \n"
	.string "Communication System.$"
	.endif
	.ifdef SPANISH
	.string "En el primer piso de los CENTROS\n"
	.string "POKéMON hay dos salas.\p"
	.string "Primero te hablaré de la sala de\n"
	.string "la izquierda: la SALA UNIÓN.\p"
	.string "En ella puedes conectarte con los\n"
	.string "ENTRENADORES que también\p"
	.string "hayan entrado en la SALA UNIÓN\n"
	.string "y estén cerca de ti.\p"
	.string "Con ellos, podrás chatear, luchar\n"
	.string "y realizar intercambios.\p"
	.string "Ahora, la sala de la derecha:\n"
	.string "la ZONA DIRECTA.\p"
	.string "En ella puedes realizar\n"
	.string "intercambios o enfrentarte a tus\l"
	.string "amigos en combates POKéMON.\p"
	.string "Si el Conector inalámbrico de GBA\n"
	.string "no estuviera conectado, puedes\p"
	.string "conectarte a tus amigos con un\n"
	.string "cable Game Link de Game Boy\l"
	.string "Advance.\p"
	.string "Para ello hay que ir a la ZONA\n"
	.string "DIRECTA.\p"
	.string "Espero que disfrutes del sistema\n"
	.string "de comunicación inalámbrica.$"
	.endif

CableClub_Text_AskAboutLinking::
	.ifdef ENGLISH
	.string "Hello, {PLAYER}!\p"
	.string "It's me, TEALA, the POKéMON\n"
	.string "CENTER 2F attendant.\p"
	.string "Is there something you needed to\n"
	.string "ask me about linking?$"
	.endif
	.ifdef SPANISH
	.string "¡Hola, {PLAYER}!\p"
	.string "Soy yo, TEALA, la recepcionista\n"
	.string "del 1.{SUPER_ER} Piso del CENTRO POKéMON.\p"
	.string "¿Necesitas información sobre\n"
	.string "cómo realizar la conexión?$"
	.endif

CableClub_Text_ExplainWirelessClub::
	.ifdef ENGLISH
	.string "Let me explain how the POKéMON\n"
	.string "WIRELESS CLUB works.\p"
	.string "On this, the top floor, there are\n"
	.string "two rooms.\p"
	.string "First, the room on the left.\n"
	.string "It's the UNION ROOM.\p"
	.string "You may link up with TRAINERS\n"
	.string "around you who have also entered\l"
	.string "the UNION ROOM.\p"
	.string "With them, you may do things like\n"
	.string "chat, battle, and trade.\p"
	.string "Second, the room on the right is\n"
	.string "the DIRECT CORNER.\p"
	.string "You may trade or battle POKéMON\n"
	.string "with your friends in this room.\p"
	.string "Sometimes, you may not be able to\n"
	.string "find your friends in the UNION ROOM\l"
	.string "or the DIRECT CORNER.\p"
	.string "In that case, please move closer\n"
	.string "to your friends.\p"
	.string "If the Wireless Adapter isn't\n"
	.string "connected, you may still link up\l"
	.string "using a GBA Game Link cable.\p"
	.string "If that is the case, you must go\n"
	.string "to the DIRECT CORNER.\p"
	.string "I hope you enjoy the Wireless \n"
	.string "Communication System.$"
	.endif
	.ifdef SPANISH
	.string "Te voy a explicar cómo funciona\n"
	.string "el CLUB INALÁMBRICO POKéMON.\p"
	.string "Éste es el piso de arriba y tiene\n"
	.string "dos salas.\p"
	.string "Primero te hablaré de la sala de\n"
	.string "la izquierda: la SALA UNIÓN.\p"
	.string "En ella puedes conectarte con los\n"
	.string "ENTRENADORES que también\p"
	.string "hayan entrado en la SALA UNIÓN\n"
	.string "y estén cerca de ti.\p"
	.string "Con ellos, podrás chatear, luchar\n"
	.string "y realizar intercambios.\p"
	.string "Ahora, la sala de la derecha:\n"
	.string "la ZONA DIRECTA.\p"
	.string "En ella puedes realizar\n"
	.string "intercambios o enfrentarte a tus\l"
	.string "amigos en combates POKéMON.\p"
	.string "Si no encontraras a tus amigos\n"
	.string "en la SALA UNIÓN ni en la ZONA\l"
	.string "DIRECTA, acercad las consolas.\p"
	.string "Si el Conector inalámbrico de GBA\n"
	.string "no estuviera conectado, puedes\p"
	.string "conectarte a tus amigos con un\n"
	.string "cable Game Link de Game Boy\l"
	.string "Advance.\p"
	.string "Para ello hay que ir a la ZONA\n"
	.string "DIRECTA.\p"
	.string "Espero que disfrutes del sistema\n"
	.string "de comunicación inalámbrica.$"
	.endif

CableClub_Text_HopeYouEnjoyWirelessSystem::
	.ifdef ENGLISH
	.string "I hope you enjoy the Wireless\n"
	.string "Communication System.$"
	.endif
	.ifdef SPANISH
	.string "Espero que disfrutes del sistema\n"
	.string "de comunicación inalámbrica.$"
	.endif
