PewterCity_Gym_Text_BrockIntro::
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

@ NOTE: This defeat text actually causes a buffer overflow. It's too long for the gDisplayedStringBattle
@ buffer that it's put into, and it stomps all over the gBattleTextBuffs after, as well as the otherwise
@ unused array after that, sFlickerArray. Perhaps that's the reason why said array exists.
PewterCity_Gym_Text_BrockDefeat::
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

PewterCity_Gym_Text_TakeThisWithYou::
    .string "¡Espera!\n"
    .string "¡Lleva esto contigo!$"

PewterCity_Gym_Text_ReceivedTM39FromBrock::
    .string "¡{PLAYER} obtuvo la MT39\n"
    .string "de manos de BROCK!$"

PewterCity_Gym_Text_ExplainTM39::
    .string "¡La MT incluye un ataque que\n"
    .string "puede ser enseñado a los POKéMON!\p"
    .string "¡Pero sólo puedes usarla una vez!\p"
    .string "¡Así que elige con cuidado a qué\n"
    .string "POKéMON se la enseñas!\p"
    .string "¡La MT39 contiene TUMBA ROCAS!\p"
    .string "¡Podrás lanzar rocas al rival\n"
    .string "y bajar su VELOCIDAD!$"

PewterCity_Gym_Text_BrockPostBattle::
    .string "¡En el mundo hay todo tipo de\n"
    .string "ENTRENADORES!\p"
    .string "¡Pareces ser muy hábil\n"
    .string "entrenando POKéMON!\p"
    .string "¡Vete al GIMNASIO de CELESTE y\n"
    .string "pon a prueba tus habilidades!$"

PewterCity_Gym_Text_DontHaveRoomForThis::
    .string "¡No tienes sitio para esto!$"

PewterCity_Gym_Text_LiamIntro::
    .string "¡Alto ahí, enclenque!\p"
    .string "¡Todavía estás a años luz de retar\n"
    .string "a BROCK!$"

PewterCity_Gym_Text_LiamDefeat::
    .string "¡Vaya!\p"
    .string "¡Años luz no suponen tiempo!\n"
    .string "¡Miden distancia!$"

PewterCity_Gym_Text_LiamPostBattle::
    .string "¡Eres bastante fuerte, pero no\n"
    .string "tanto como BROCK!$"

PewterCity_Gym_Text_LetMeTakeYouToTheTop::
    .string "¡Puedo decirte lo que se requiere\n"
    .string "para ser un campeón de POKéMON!\p"
    .string "¡No soy ENTRENADOR, pero puedo\n"
    .string "decirte cómo ganar!\p"
    .string "¡Déjame que te lleve a la\n"
    .string "victoria!$"

PewterCity_Gym_Text_LetsGetHappening::
    .string "¡Muy bien!\n"
    .string "¡Vamos allá!$"

PewterCity_Gym_Text_TryDifferentPartyOrders::
    .string "¡El 1.{SUPER_ER} POKéMON que sale a luchar\n"
    .string "es el primero de la LISTA\l"
    .string "de los POKéMON!\p"
    .string "¡Cambiar el orden de los POKéMON\n"
    .string "podría facilitarte las cosas\l"
    .string "en combate!$"

PewterCity_Gym_Text_ItsFreeLetsGetHappening::
    .string "¡Es gratis!\n"
    .string "¡Venga!$"

PewterCity_Gym_Text_YoureChampMaterial::
    .string "¡Lo sabía!\n"
    .string "¡Tienes madera!$"

PewterCity_Gym_Text_GymStatue::
    .string "LÍDER del GIMNASIO POKéMON\n"
    .string "de PLATEADA: BROCK\p"
    .string "ENTRENADOR GANADOR:\n"
    .string "{RIVAL}$"

PewterCity_Gym_Text_GymStatuePlayerWon::
    .string "LÍDER del GIMNASIO POKéMON\n"
    .string "de PLATEADA: BROCK\p"
    .string "ENTRENADORES GANADORES:\n"
    .string "{RIVAL} y {PLAYER}$"
