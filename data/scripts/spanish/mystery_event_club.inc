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
	.string "Hola, me alegro de verte.\p"
	.string "Eh, he dicho hola...\n"
	.string "Qué borde... ya podrías\l"
	.string "contestar.\p"
	.string "Venga, cuéntame algo, anda.\p"
	.string "¡Dime al menos cuál es tu perfil!$"

Text_TellMeWhatsYourProfile:
	.string "Cuéntame alguna cosa sobre ti.\n"
	.string "Dime cuál es tu perfil.$"

Text_ExplainProfile:
	.string "El perfil puede hacerse con\n"
	.string "palabras o frases.\p"
	.string "Hay muchas palabras y frases\n"
	.string "para elegir, y están divididas\l"
	.string "por grupos.\p"
	.string "Selecciona primero un grupo\n"
	.string "y después el elemento que quieras.\p"
	.string "Es mucho más fácil de lo que\n"
	.string "parece. Inténtalo, anda.$"

Text_WhatsYourProfile:
	.string "¿Cuál es tu perfil?$"

Text_DontBeLikeThat:
	.string "Venga, anda, enséñame tu perfil...$"

Text_DecidedNotTo:
	.string "Ah, ¿y no lo cambias?\n"
	.string "¡Pues hay que ver cómo eres!$"

Text_HiWeMeetAgain:
	.string "¡Hola otra vez!$"

Text_ChangeYourProfile:
	.string "¿Quieres cambiar tu perfil?$"

Text_WhatAreYouLikeNow:
	.string "Me gustaría saber cuál tienes\n"
	.string "ahora.$"

Text_LikeProfileWayItIs:
	.string "Vale, pues déjalo como está.\p"
	.string "A mí también me gusta.$"

Text_ProfileSaysSomethingAboutYou:
	.string "Mmmm...\p"
	.string "La verdad es que te pega, da idea\n"
	.string "de cómo eres.\p"
	.string "¡Ahora nos conocemos mejor!\n"
	.string "¡Vamos a llevarnos bien siempre!$"

Text_HeardThatBefore:
	.string "Eso ya lo he oído antes...\p"
	.string "Mi primo, que vive lejos de aquí,\n"
	.string "lo decía con frecuencia, creo.$"

Text_TellMoreNextTime:
	.string "¡A ver si la próxima vez\n"
	.string "me cuentas más sobre ti!$"
