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

Text_IdLoveToHearYourProfile::
    .string "Ciao, che piacere vederti!\p"
    .string "…Beh, potresti almeno\n"
    .string "salutare!\p"
    .string "Dimmi qualcosa di te!\p"
    .string "Mi piacerebbe conoscere il tuo\n"
    .string "profilo.$"

Text_TellMeWhatsYourProfile::
    .string "Dimmi qualcosa di te!\n"
    .string "Qual è il tuo profilo?$"

Text_ExplainProfile::
    .string "Il profilo è composto da quattro\n"
    .string "parole o espressioni.\p"
    .string "Per crearlo, devi combinare le\n"
    .string "parole e le espressioni che trovi\l"
    .string "nella lista sotto varie categorie.\p"
    .string "Scegli una categoria, poi\n"
    .string "seleziona una parola o\l"
    .string "un'espressione al suo interno.\p"
    .string "Prova! È più facile a dirsi\n"
    .string "che a farsi!$"

Text_WhatsYourProfile::
    .string "Qual è il tuo profilo?$"

Text_DontBeLikeThat::
    .string "Non fare così…\n"
    .string "Dimmi il tuo profilo, dai!$"

Text_DecidedNotTo::
    .string "Ah, hai cambiato idea?\n"
    .string "Beh, deciditi…$"

Text_HiWeMeetAgain::
    .string "Ehi, ci si rincontra!$"

Text_ChangeYourProfile::
    .string "Vuoi cambiare il tuo profilo?$"

Text_WhatAreYouLikeNow::
    .string "Qual è il tuo profilo attuale?$"

Text_LikeProfileWayItIs::
    .string "Ah, quindi il tuo profilo ti piace\n"
    .string "così com'è… \p"
    .string "Anche secondo me non è male.$"

Text_ProfileSaysSomethingAboutYou::
    .string "Hmhm…\p"
    .string "Il tuo profilo parla un po'\n"
    .string "di te.\p"
    .string "E ora che ti ho conosciuto\n"
    .string "meglio, possiamo diventare\l"
    .string "grandi amici!$"

Text_HeardThatBefore::
    .string "L'ho già sentito dire…\p"
    .string "Mi sembra che lo dicesse sempre\n"
    .string "mio cugino, che abita lontano.$"

Text_TellMoreNextTime::
    .string "La prossima volta mi dirai\n"
    .string "qualcos'altro di te, OK?$"
