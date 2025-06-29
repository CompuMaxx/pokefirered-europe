PewterCity_Gym_Text_BrockIntro::
    .string "Sono BROCK!\n"
    .string "Il CAPOPALESTRA di PLUMBEOPOLI!\p"
    .string "Il mio motto è determinazione e\n"
    .string "difesa granitica!\p"
    .string "Ecco perché tutti i miei POKéMON\n"
    .string "sono del tipo ROCCIA!\p"
    .string "Vuoi ancora sfidarmi?\p"
    .string "Bene!\n"
    .string "Mostrami ciò che sai fare!{PLAY_BGM MUS_ENCOUNTER_GYM_LEADER}$"

@ NOTE: This defeat text actually causes a buffer overflow. It's too long for the gDisplayedStringBattle
@ buffer that it's put into, and it stomps all over the gBattleTextBuffs after, as well as the otherwise
@ unused array after that, sFlickerArray. Perhaps that's the reason why said array exists.
PewterCity_Gym_Text_BrockDefeat::
    .string "Ti avevo sottovalutato!\p"
    .string "Quale premio per la tua vittoria,\n"
    .string "ti conferisco la MEDAGLIA SASSO!\p"
    .string "{FONT_NORMAL}{PLAYER} riceve la MEDAGLIA SASSO!{PAUSE_MUSIC}{PLAY_BGM MUS_OBTAIN_BADGE}{PAUSE}\n"
    .string "{PAUSE 0x56}{RESUME_MUSIC}\p"
    .string "{FONT_MALE}È una MEDAGLIA ufficiale della\n"
    .string "LEGA POKéMON!\p"
    .string "Chi la possiede rafforzerà i suoi\n"
    .string "POKéMON!\p"
    .string "Adesso la MT FLASH può essere\n"
    .string "usata anche fuori dalla lotta!\p"
    .string "Chiaramente, uno dei tuoi POKéMON\n"
    .string "in squadra deve conoscere questa\l"
    .string "mossa.$"

PewterCity_Gym_Text_TakeThisWithYou::
    .string "Aspetta!\n"
    .string "Porta questo con te!$"

PewterCity_Gym_Text_ReceivedTM39FromBrock::
    .string "{PLAYER} riceve\n"
    .string "la MT39!$"

PewterCity_Gym_Text_ExplainTM39::
    .string "Una MT contiene una tecnica che\n"
    .string "puoi insegnare ad un POKéMON!\p"
    .string "Puoi usare la MT una sola volta!\n"
    .string "Scegli dunque il POKéMON giusto\l"
    .string "a cui insegnare la nuova tecnica!\p"
    .string "La MT39 contiene ROCCIOTOMBA!\p"
    .string "Il tuo POKéMON lancia massi\n"
    .string "all'avversario per ridurne la\l"
    .string "VELOCITÀ.$"

PewterCity_Gym_Text_BrockPostBattle::
    .string "Nel mondo ci sono ALLENATORI di\n"
    .string "tutti i tipi!\p"
    .string "Sembri essere un ALLENATORE di\n"
    .string "POKéMON in gamba!\p"
    .string "Vai nella PALESTRA di CELESTOPOLI\n"
    .string "e metti alla prova la tua abilità!$"

PewterCity_Gym_Text_DontHaveRoomForThis::
    .string "Non hai più spazio per questo!$"

PewterCity_Gym_Text_LiamIntro::
    .string "Altolà!\n"
    .string "Dove vai?\p"
    .string "Ci vorranno anni luce prima che tu\n"
    .string "possa competere con BROCK!$"

PewterCity_Gym_Text_LiamDefeat::
    .string "Uffa!\p"
    .string "Gli anni luce non indicano il tempo\n"
    .string "ma la distanza!$"

PewterCity_Gym_Text_LiamPostBattle::
    .string "Sei forte ma non quanto BROCK!$"

PewterCity_Gym_Text_LetMeTakeYouToTheTop::
    .string "Ehi!\n"
    .string "Hai tutte le carte in regola per\l"
    .string "fare grandi cose con i POKéMON!\p"
    .string "Non sono un ALLENATORE ma so come\n"
    .string "aiutarti a vincere!\p"
    .string "Ti porterò ai massimi livelli!\p"
    .string "Allora, li vuoi un paio di consigli?$"

PewterCity_Gym_Text_LetsGetHappening::
    .string "Tutto ok?\n"
    .string "Allora via!$"

PewterCity_Gym_Text_TryDifferentPartyOrders::
    .string "Il primo POKéMON a scendere in\n"
    .string "campo è il primo della LISTA\l"
    .string "POKéMON!\p"
    .string "Cambiando l'ordine dei POKéMON,\n"
    .string "la lotta può essere più facile!$"

PewterCity_Gym_Text_ItsFreeLetsGetHappening::
    .string "Guarda che non si paga!\n"
    .string "Dai, senti qua!$"

PewterCity_Gym_Text_YoureChampMaterial::
    .string "Come pensavo! Hai la stoffa del\n"
    .string "campione di POKéMON!$"

PewterCity_Gym_Text_GymStatue::
    .string "CAPOPALESTRA di PLUMBEOPOLI:\n"
    .string "BROCK\p"
    .string "ALLENATORI VINCENTI:\n"
    .string "{RIVAL}$"

PewterCity_Gym_Text_GymStatuePlayerWon::
    .string "CAPOPALESTRA di PLUMBEOPOLI:\n"
    .string "BROCK\p"
    .string "ALLENATORI VINCENTI:\n"
    .string "{RIVAL}, {PLAYER}$"

