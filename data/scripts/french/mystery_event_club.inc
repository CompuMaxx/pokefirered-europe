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
	.string "Ravie de te rencontrer!\p"
	.string "C'est pas gentil de ta part, tu\n"
	.string "pourrais au moins me répondre.\p"
	.string "Allez, présente-toi au moins.\n"
	.string "J'aimerais connaître ton profil.$"

Text_TellMeWhatsYourProfile:
	.string "Parle-moi de toi. Tu veux bien\n"
	.string "me donner ton profil?$"

Text_ExplainProfile:
	.string "Un profil s'écrit en utilisant quatre\n"
	.string "mots ou groupes de mots.\p"
	.string "Il y a plein de mots à choisir pour\n"
	.string "écrire ton profil.\p"
	.string "Ils sont tous classés dans des\n"
	.string "groupes différents.\p"
	.string "Tout d'abord, choisis un groupe,\n"
	.string "puis un mot ou un groupe de mots.\p"
	.string "… C'est vraiment pas\n"
	.string "compliqué, tu devrais essayer.$"

Text_WhatsYourProfile:
	.string "Quel est ton profil?$"

Text_DontBeLikeThat:
	.string "Aaah… Ne sois pas comme ça.\p"
	.string "Tu peux quand même me donner\n"
	.string "ton profil, non?$"

Text_DecidedNotTo:
	.string "Oh, tu ne veux vraiment pas alors.\n"
	.string "C'est pas sympa…$"

Text_HiWeMeetAgain:
	.string "Salut!\n"
	.string "On se retrouve encore!$"

Text_ChangeYourProfile:
	.string "Veux-tu changer ton profil?$"

Text_WhatAreYouLikeNow:
	.string "Quoi de neuf?\n"
	.string "J'aimerais vraiment savoir.$"

Text_LikeProfileWayItIs:
	.string "OK, ton profil te convient\n"
	.string "tel quel.\p"
	.string "C'est vrai, j'aime assez aussi.$"

Text_ProfileSaysSomethingAboutYou:
	.string "Mmmh…\p"
	.string "Ton profil en dit vraiment long\n"
	.string "sur toi.\p"
	.string "Maintenant que je te connais mieux,\n"
	.string "on va devenir inséparables!$"

Text_HeardThatBefore:
	.string "Oh, j'ai déjà entendu ça avant…\p"
	.string "Mon cousin, qui habite très loin,\n"
	.string "dit souvent ça aussi.$"

Text_TellMoreNextTime:
	.string "J'espère en apprendre plus sur\n"
	.string "toi la prochaine fois!$"
