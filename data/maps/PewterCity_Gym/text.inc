PewterCity_Gym_Text_BrockIntro::
    .ifdef ENGLISH
    .string "So, you're here. I'm BROCK.\n"
    .string "I'm PEWTER's GYM LEADER.\p"
    .string "My rock-hard willpower is evident\n"
    .string "even in my POKéMON.\p"
    .string "My POKéMON are all rock hard, and\n"
    .string "have true-grit determination.\p"
    .string "That's right - my POKéMON are all\n"
    .string "the ROCK type!\p"
    .string "Fuhaha! You're going to challenge\n"
    .string "me knowing that you'll lose?\p"
    .string "That's the TRAINER's honor that\n"
    .string "compels you to challenge me.\p"
    .string "Fine, then!\n"
    .string "Show me your best!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"
    .endif
    .ifdef SPANISH
    .string "¡Soy BROCK! ¡LÍDER del\n"
    .string "GIMNASIO de PLATEADA!\p"
    .string "¡Creo en la gran resistencia de la\n"
    .string "roca y en la determinación!\p"
    .string "¡Por eso todos mis POKéMON son\n"
    .string "del tipo ROCA!\p"
    .string "¿Todavía quieres desafiarme?\p"
    .string "Sé que te mueve el orgullo de\n"
    .string "los ENTRENADORES POKéMON.\p"
    .string "¡Muy bien!\n"
    .string "¡Enséñame lo que vales!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"
    .endif

@ NOTE: This defeat text actually causes a buffer overflow. It's too long for the gDisplayedStringBattle
@ buffer that it's put into, and it stomps all over the gBattleTextBuffs after, as well as the otherwise
@ unused array after that, sFlickerArray. Perhaps that's the reason why said array exists.
PewterCity_Gym_Text_BrockDefeat::
    .ifdef ENGLISH
    .string "I took you for granted, and so\n"
    .string "I lost.\p"
    .string "As proof of your victory, I confer\n"
    .string "on you this…the official POKéMON\l"
    .string "LEAGUE BOULDERBADGE.\p"
    .string "{FONT_NORMAL}{PLAYER} received the BOULDERBADGE\n"
    .string "from BROCK!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
    .string "{FONT_MALE}Just having the BOULDERBADGE makes\n"
    .string "your POKéMON more powerful.\p"
    .string "It also enables the use of the\n"
    .string "move FLASH outside of battle.\p"
    .string "Of course, a POKéMON must know the\n"
    .string "move FLASH to use it.$"
    .endif
    .ifdef SPANISH
    .string "Te he subestimado.\p"
    .string "¡Como prueba de tu victoria, aquí\n"
    .string "tienes la MEDALLA ROCA!\p"
    .string "{FONT_NORMAL}¡{PLAYER} obtuvo la MEDALLA ROCA!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
    .string "{FONT_MALE}¡Es una MEDALLA oficial de la LIGA\n"
    .string "POKéMON!\p"
    .string "¡Hará que tus POKéMON sean\n"
    .string "mucho más fuertes!\p"
    .string "¡Y la técnica del DESTELLO podrá\n"
    .string "ser utilizada en todo momento!$"
    .endif

PewterCity_Gym_Text_TakeThisWithYou::
    .ifdef ENGLISH
    .string "Wait!\n"
    .string "Take this with you.$"
    .endif
    .ifdef SPANISH
    .string "¡Espera!\n"
    .string "¡Lleva esto contigo!$"
    .endif

PewterCity_Gym_Text_ReceivedTM39FromBrock::
    .ifdef ENGLISH
    .string "{PLAYER} received TM39\n"
    .string "from BROCK.$"
    .endif
    .ifdef SPANISH
    .string "¡{PLAYER} obtuvo la MT39\n"
    .string "de manos de BROCK!$"
    .endif

PewterCity_Gym_Text_ExplainTM39::
    .ifdef ENGLISH
    .string "A TM, Technical Machine, contains a\n"
    .string "technique for POKéMON.\p"
    .string "Using a TM teaches the move it\n"
    .string "contains to a POKéMON.\p"
    .string "A TM is good for only one use.\p"
    .string "So, when you use one, pick the\n"
    .string "POKéMON carefully.\p"
    .string "Anyways…\n"
    .string "TM39 contains ROCK TOMB.\p"
    .string "It hurls boulders at the foe and\n"
    .string "lowers its SPEED.$"
    .endif
    .ifdef SPANISH
    .string "¡La MT incluye un ataque que\n"
    .string "puede ser enseñado a los POKéMON!\p"
    .string "¡Pero sólo puedes usarla una vez!\p"
    .string "¡Así que elige con cuidado a qué\n"
    .string "POKéMON se la enseñas!\p"
    .string "¡La MT39 contiene TUMBA ROCAS!\p"
    .string "¡Podrás lanzar rocas al rival\n"
    .string "y bajar su VELOCIDAD!$"
    .endif

PewterCity_Gym_Text_BrockPostBattle::
    .ifdef ENGLISH
    .string "There are all kinds of TRAINERS in\n"
    .string "this huge world of ours.\p"
    .string "You appear to be very gifted as a\n"
    .string "POKéMON TRAINER.\p"
    .string "So let me make a suggestion.\p"
    .string "Go to the GYM in CERULEAN and test\n"
    .string "your abilities.$"
    .endif
    .ifdef SPANISH
    .string "¡En el mundo hay todo tipo de\n"
    .string "ENTRENADORES!\p"
    .string "¡Pareces ser muy hábil\n"
    .string "entrenando POKéMON!\p"
    .string "¡Vete al GIMNASIO de CELESTE y\n"
    .string "pon a prueba tus habilidades!$"
    .endif

PewterCity_Gym_Text_DontHaveRoomForThis::
    .ifdef ENGLISH
    .string "You don't have room for this.$"
    .endif
    .ifdef SPANISH
    .string "¡No tienes sitio para esto!$"
    .endif

PewterCity_Gym_Text_LiamIntro::
    .ifdef ENGLISH
    .string "Stop right there, kid!\p"
    .string "You're ten thousand light-years \n"
    .string "from facing BROCK!$"
    .endif
    .ifdef SPANISH
    .string "¡Alto ahí, enclenque!\p"
    .string "¡Todavía estás a años luz de retar\n"
    .string "a BROCK!$"
    .endif

PewterCity_Gym_Text_LiamDefeat::
    .ifdef ENGLISH
    .string "Darn!\p"
    .string "Light-years isn't time…\n"
    .string "It measures distance!$"
    .endif
    .ifdef SPANISH
    .string "¡Vaya!\p"
    .string "¡Años luz no suponen tiempo!\n"
    .string "¡Miden distancia!$"
    .endif

PewterCity_Gym_Text_LiamPostBattle::
    .ifdef ENGLISH
    .string "You're pretty hot.\n"
    .string "…But not as hot as BROCK!$"
    .endif
    .ifdef SPANISH
    .string "¡Eres bastante fuerte, pero no\n"
    .string "tanto como BROCK!$"
    .endif

PewterCity_Gym_Text_LetMeTakeYouToTheTop::
    .ifdef ENGLISH
    .string "Hiya!\n"
    .string "Do you want to dream big?\p"
    .string "Do you dare to dream of becoming\n"
    .string "the POKéMON champ?\p"
    .string "I'm no TRAINER, but I can advise\n"
    .string "you on how to win.\p"
    .string "Let me take you to the top!$"
    .endif
    .ifdef SPANISH
    .string "¡Puedo decirte lo que se requiere\n"
    .string "para ser un campeón de POKéMON!\p"
    .string "¡No soy ENTRENADOR, pero puedo\n"
    .string "decirte cómo ganar!\p"
    .string "¡Déjame que te lleve a la\n"
    .string "victoria!$"
    .endif

PewterCity_Gym_Text_LetsGetHappening::
    .ifdef ENGLISH
    .string "All right!\n"
    .string "Let's get happening!$"
    .endif
    .ifdef SPANISH
    .string "¡Muy bien!\n"
    .string "¡Vamos allá!$"
    .endif

PewterCity_Gym_Text_TryDifferentPartyOrders::
    .ifdef ENGLISH
    .string "The first POKéMON out in a match is\n"
    .string "at the left of the POKéMON LIST.\p"
    .string "By changing the order of POKéMON,\n"
    .string "you may gain an advantage.\p"
    .string "Try different orders to suit your\n"
    .string "opponent's party.$"
    .endif
    .ifdef SPANISH
    .string "¡El 1.{SUPER_ER} POKéMON que sale a luchar\n"
    .string "es el primero de la LISTA\l"
    .string "de los POKéMON!\p"
    .string "¡Cambiar el orden de los POKéMON\n"
    .string "podría facilitarte las cosas\l"
    .string "en combate!$"
    .endif

PewterCity_Gym_Text_ItsFreeLetsGetHappening::
    .ifdef ENGLISH
    .string "It's a free service!\n"
    .string "Let's get happening!$"
    .endif
    .ifdef SPANISH
    .string "¡Es gratis!\n"
    .string "¡Venga!$"
    .endif

PewterCity_Gym_Text_YoureChampMaterial::
    .ifdef ENGLISH
    .string "Just as I thought!\n"
    .string "You're POKéMON champ material!$"
    .endif
    .ifdef SPANISH
    .string "¡Lo sabía!\n"
    .string "¡Tienes madera!$"
    .endif

PewterCity_Gym_Text_GymStatue::
    .ifdef ENGLISH
    .string "PEWTER POKéMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
    .string "{RIVAL}$"
    .endif
    .ifdef SPANISH
    .string "LÍDER del GIMNASIO POKéMON\n"
    .string "de PLATEADA: BROCK\p"
    .string "ENTRENADOR GANADOR:\n"
    .string "{RIVAL}$"
    .endif

PewterCity_Gym_Text_GymStatuePlayerWon::
    .ifdef ENGLISH
    .string "PEWTER POKéMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
    .string "{RIVAL}, {PLAYER}$"
    .endif
    .ifdef SPANISH
    .string "LÍDER del GIMNASIO POKéMON\n"
    .string "de PLATEADA: BROCK\p"
    .string "ENTRENADORES GANADORES:\n"
    .string "{RIVAL} y {PLAYER}$"
    .endif

