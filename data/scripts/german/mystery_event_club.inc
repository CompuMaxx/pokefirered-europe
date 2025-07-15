.equ GAVE_PROFILE,  VAR_TEMP_1

MysteryEventClub_EventScript_Woman::
	lock
	faceplayer
	goto_if_eq GAVE_PROFILE, TRUE, EventScript_AlreadyGaveProfile
	goto_if_set FLAG_SYS_SET_TRAINER_CARD_PROFILE, EventScript_GivenProfileBefore
	msgbox Text_IdLoveToHearYourProfile
	goto EventScript_AskForProfile
	end

EventScript_AlreadyGaveProfile:
	msgbox Text_TellMoreNextTime
	release
	end

EventScript_AskForProfile:
	message Text_TellMeWhatsYourProfile
	waitmessage
	multichoice 18, 6, MULTICHOICE_YES_NO_INFO_2, FALSE
	switch VAR_RESULT
	case 0, EventScript_AcceptGiveProfile
	case 1, EventScript_DeclineGiveProfile
	case 2, EventScript_ProfileInfo
	case SCR_MENU_CANCEL, EventScript_DeclineGiveProfile
	end

EventScript_ProfileInfo:
	msgbox Text_ExplainProfile
	goto EventScript_AskForProfile
	end

EventScript_AcceptGiveProfile:
	msgbox Text_WhatsYourProfile
	closemessage
	goto EventScript_GiveProfile
	end

EventScript_CancelGiveProfile:
	msgbox Text_DecidedNotTo
	release
	end

EventScript_GaveProfile:
	setvar GAVE_PROFILE, TRUE
	setvar VAR_0x8004, 0
	special ShowEasyChatMessage
	waitmessage
	delay 80
	msgbox Text_ProfileSaysSomethingAboutYou
	release
	end

EventScript_DeclineGiveProfile:
	msgbox Text_DontBeLikeThat
	release
	end

EventScript_GivenProfileBefore:
	msgbox Text_HiWeMeetAgain
	goto EventScript_AskForNewProfile
	end

EventScript_AskForNewProfile:
	message Text_ChangeYourProfile
	waitmessage
	multichoice 18, 6, MULTICHOICE_YES_NO_INFO_2, FALSE
	switch VAR_RESULT
	case 0, EventScript_AcceptGiveNewProfile
	case 1, EventScript_DeclineGiveNewProfile
	case 2, EventScript_ProfileInfo2
	case SCR_MENU_CANCEL, EventScript_DeclineGiveNewProfile
	end

EventScript_ProfileInfo2:
	msgbox Text_ExplainProfile
	goto EventScript_AskForNewProfile
	end

EventScript_AcceptGiveNewProfile:
	msgbox Text_WhatAreYouLikeNow
	closemessage
	goto EventScript_GiveProfile
	end

EventScript_DeclineGiveNewProfile:
	msgbox Text_LikeProfileWayItIs
	release
	end

EventScript_GaveSpecialProfile:
	setvar GAVE_PROFILE, TRUE
	setvar VAR_0x8004, 0
	special ShowEasyChatMessage
	waitmessage
	delay 80
	msgbox Text_HeardThatBefore
	release
	end

EventScript_GiveProfile:
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_0x8004, 0, EventScript_GaveSpecialProfile
	goto_if_eq VAR_RESULT, FALSE, EventScript_CancelGiveProfile
	goto_if_eq VAR_RESULT, TRUE, EventScript_GaveProfile
	end

Text_IdLoveToHearYourProfile:
	.string "Hallo! Schön dich zu sehen!\p"
	.string "… du bist unhöflich!\n"
	.string "Du könntest mich auch begrüßen!\p"
	.string "Also, erzähl mir ein wenig von dir!\p"
	.string "Sag mir dein Profil!$"

Text_TellMeWhatsYourProfile:
	.string "Erzähl mir etwas Gutes über\n"
	.string "dich! Wie lautet dein Profil?$"

Text_ExplainProfile:
	.string "Ein Profil besteht aus vier\n"
	.string "Wörtern oder Phrasen.\p"
	.string "Es gibt unzählige Wörter, um\n"
	.string "ein Profil zusammenzustellen.\p"
	.string "Die Wörter und Phrasen sind in\n"
	.string "praktische Gruppen unterteilt.\p"
	.string "Wähle zunächst eine Gruppe\n"
	.string "und anschließend das Wort.\p"
	.string "… es ist leichter, als es sich\n"
	.string "anhört. Probier es doch einmal!$"

Text_WhatsYourProfile:
	.string "Wie lautet dein Profil?$"

Text_DontBeLikeThat:
	.string "Argh! Sei nicht so! Du kannst\n"
	.string "mir dein Profil sagen!$"

Text_DecidedNotTo:
	.string "Oh, du willst also nicht!\n"
	.string "Du bist wankelmütig, oder?$"

Text_HiWeMeetAgain:
	.string "Hallo!\n"
	.string "Wir treffen uns wieder!$"

Text_ChangeYourProfile:
	.string "Möchtest du dein Profil ändern?$"

Text_WhatAreYouLikeNow:
	.string "Wie bist du jetzt?\n"
	.string "Ich möchte das wissen!$"

Text_LikeProfileWayItIs:
	.string "O.K.! Du magst dein Profil\n"
	.string "so wie es ist.\p"
	.string "Das ist gut!$"

Text_ProfileSaysSomethingAboutYou:
	.string "Hmm…\p"
	.string "Dein Profil sagt wirklich etwas\n"
	.string "über dich aus.\p"
	.string "Da ich dich jetzt besser kenne,\n"
	.string "sind wir noch enger als zuvor\l"
	.string "befreundet.$"

Text_HeardThatBefore:
	.string "Oh, das habe ich schon \n"
	.string "einmal gehört!\p"
	.string "Mein Cousin, der weit weg wohnt,\n"
	.string "pflegte das zu sagen!$"

Text_TellMoreNextTime:
	.string "Erzähl mir beim nächsten\n"
	.string "Mal mehr über dich!$"
