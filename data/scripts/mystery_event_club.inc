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
	.ifdef ENGLISH
	.string "Hi, glad to meet you!\p"
	.string "…That's unfriendly of you.\n"
	.string "How about saying hi back?\p"
	.string "So, come on, tell me about\n"
	.string "yourself.\p"
	.string "I'd love to hear your profile!$"
	.endif
	.ifdef SPANISH
	.string "Hola, me alegro de verte.\p"
	.string "Eh, he dicho hola...\n"
	.string "Qué borde... ya podrías\l"
	.string "contestar.\p"
	.string "Venga, cuéntame algo, anda.\p"
	.string "¡Dime al menos cuál es tu perfil!$"
	.endif

Text_TellMeWhatsYourProfile:
	.ifdef ENGLISH
	.string "Tell me something good about\n"
	.string "yourself. What's your profile?$"
	.endif
	.ifdef SPANISH
	.string "Cuéntame alguna cosa sobre ti.\n"
	.string "Dime cuál es tu perfil.$"
	.endif

Text_ExplainProfile:
	.ifdef ENGLISH
	.string "A profile is written using four\n"
	.string "words or phrases.\p"
	.string "There're plenty of words to choose\n"
	.string "from for your profile.\p"
	.string "The words and phrases are placed\n"
	.string "in several convenient groups.\p"
	.string "First, choose a group, then choose\n"
	.string "a word or phrase.\p"
	.string "…It's easier than it sounds.\n"
	.string "Why don't you try it?$"
	.endif
	.ifdef SPANISH
	.string "El perfil puede hacerse con\n"
	.string "palabras o frases.\p"
	.string "Hay muchas palabras y frases\n"
	.string "para elegir, y están divididas\l"
	.string "por grupos.\p"
	.string "Selecciona primero un grupo\n"
	.string "y después el elemento que quieras.\p"
	.string "Es mucho más fácil de lo que\n"
	.string "parece. Inténtalo, anda.$"
	.endif

Text_WhatsYourProfile:
	.ifdef ENGLISH
	.string "What's your profile?$"
	.endif
	.ifdef SPANISH
	.string "¿Cuál es tu perfil?$"
	.endif

Text_DontBeLikeThat:
	.ifdef ENGLISH
	.string "Aww… Don't be like that.\n"
	.string "You can tell me your profile.$"
	.endif
	.ifdef SPANISH
	.string "Venga, anda, enséñame tu perfil...$"
	.endif

Text_DecidedNotTo:
	.ifdef ENGLISH
	.string "Oh, you've decided not to?\n"
	.string "You're fickle, aren't you?$"
	.endif
	.ifdef SPANISH
	.string "Ah, ¿y no lo cambias?\n"
	.string "¡Pues hay que ver cómo eres!$"
	.endif

Text_HiWeMeetAgain:
	.ifdef ENGLISH
	.string "Hi!\n"
	.string "We meet again!$"
	.endif
	.ifdef SPANISH
	.string "¡Hola otra vez!$"
	.endif

Text_ChangeYourProfile:
	.ifdef ENGLISH
	.string "Would you like to change your\n"
	.string "profile?$"
	.endif
	.ifdef SPANISH
	.string "¿Quieres cambiar tu perfil?$"
	.endif

Text_WhatAreYouLikeNow:
	.ifdef ENGLISH
	.string "What are you like now?\n"
	.string "I'd really like to know.$"
	.endif
	.ifdef SPANISH
	.string "Me gustaría saber cuál tienes\n"
	.string "ahora.$"
	.endif

Text_LikeProfileWayItIs:
	.ifdef ENGLISH
	.string "Okay, you like your profile the\n"
	.string "way it is.\p"
	.string "I think so, too.$"
	.endif
	.ifdef SPANISH
	.string "Vale, pues déjalo como está.\p"
	.string "A mí también me gusta.$"
	.endif

Text_ProfileSaysSomethingAboutYou:
	.ifdef ENGLISH
	.string "Hmhm…\p"
	.string "Your profile really says something\n"
	.string "about who you are.\p"
	.string "Now that I know you better, it \n"
	.string "makes us better friends than ever!$"
	.endif
	.ifdef SPANISH
	.string "Mmmm...\p"
	.string "La verdad es que te pega, da idea\n"
	.string "de cómo eres.\p"
	.string "¡Ahora nos conocemos mejor!\n"
	.string "¡Vamos a llevarnos bien siempre!$"
	.endif

Text_HeardThatBefore:
	.ifdef ENGLISH
	.string "Oh, I've heard that before…\p"
	.string "My cousin, who lives far away,\n"
	.string "always used to say that, I think.$"
	.endif
	.ifdef SPANISH
	.string "Eso ya lo he oído antes...\p"
	.string "Mi primo, que vive lejos de aquí,\n"
	.string "lo decía con frecuencia, creo.$"
	.endif

Text_TellMoreNextTime:
	.ifdef ENGLISH
	.string "Please tell me more about\n"
	.string "yourself next time!$"
	.endif
	.ifdef SPANISH
	.string "¡A ver si la próxima vez\n"
	.string "me cuentas más sobre ti!$"
	.endif
