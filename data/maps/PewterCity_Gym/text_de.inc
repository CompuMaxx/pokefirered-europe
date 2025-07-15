PewterCity_Gym_Text_BrockIntro::
	.string "Ich bin der ARENALEITER von\n"
	.string "MARMORIA CITY, ROCKO!\p"
	.string "Meine Devise ist eine steinharte\n"
	.string "Verteidigung und felsenfeste\l"
	.string "Entschlossenheit!\p"
	.string "Deshalb trainiere ich STEIN-\n"
	.string "POKéMON!\p"
	.string "Willst du es noch immer mit mir\n"
	.string "aufnehmen?\p"
	.string "O.K.! Zeige mir, wie gut du bist!{PLAY_BGM MUS_ENCOUNTER_GYM_LEADER}$"

@ NOTE: This defeat text actually causes a buffer overflow. It's too long for the gDisplayedStringBattle
@ buffer that it's put into, and it stomps all over the gBattleTextBuffs after, as well as the otherwise
@ unused array after that, sFlickerArray. Perhaps that's the reason why said array exists.
PewterCity_Gym_Text_BrockDefeat::
	.string "Ich habe dich falsch eingeschätzt!\p"
	.string "Nimm den FELSORDEN als Zeichen\n"
	.string "meiner Ehrerbietung!\p"
	.string "{FONT_NORMAL}{PLAYER} erhält den FELSORDEN!{PAUSE_MUSIC}{PLAY_BGM MUS_OBTAIN_BADGE}{PAUSE}\n"
	.string "{PAUSE 86}{RESUME_MUSIC}\p"
	.string "{FONT_MALE}Das ist ein offizieller ORDEN der\n"
	.string "POKéMON LIGA!\p"
	.string "Die POKéMON der Person, die den\n"
	.string "ORDEN trägt, werden stärker!\p"
	.string "Von nun an können deine POKéMON\n"
	.string "jederzeit BLITZ einsetzen!\p"
	.string "Natürlich muss die Attacke\n"
	.string "beherrscht werden.$"

PewterCity_Gym_Text_TakeThisWithYou::
	.string "Warte!\n"
	.string "Nimm das hier mit!$"

PewterCity_Gym_Text_ReceivedTM39FromBrock::
	.string "{PLAYER} erhält\n"
	.string "TM39!$"

PewterCity_Gym_Text_ExplainTM39::
	.string "Eine TM enthält Attacken, die\n"
	.string "POKéMON erlernen können!\p"
	.string "Man kann eine TM nur ein einziges\n"
	.string "Mal verwenden! Wähle sorgfältig\l"
	.string "jenes POKéMON aus, dem du eine TM\l"
	.string "geben möchtest!\p"
	.string "TM39 ist FELSGRAB!\p"
	.string "Der Gegner wird mit Felsen\n"
	.string "beworfen und unter ihnen begraben.\l"
	.string "Der INIT.-Wert des Gegners wird\l"
	.string "zugleich gesenkt!$"

PewterCity_Gym_Text_BrockPostBattle::
	.string "Es gibt die verschiedensten TRAINER\n"
	.string "auf der Welt!\p"
	.string "Du scheinst ein sehr begabter\n"
	.string "POKéMON TRAINER zu sein!\p"
	.string "Gehe in die POKéMON-ARENA von\n"
	.string "AZURIA CITY und teste dort dein\l"
	.string "Können!$"

PewterCity_Gym_Text_DontHaveRoomForThis::
	.string "Du hast momentan keinen Platz für\n"
	.string "weitere Items!$"

PewterCity_Gym_Text_LiamIntro::
	.string "Bleib stehen wo du bist, Kind!\p"
	.string "Es dauert noch Lichtjahre, bis du\n"
	.string "gegen ROCKO antreten kannst!$"

PewterCity_Gym_Text_LiamDefeat::
	.string "Mist!\p"
	.string "Lichtjahre messen die Entfernung,\n"
	.string "nicht die Zeit!$"

PewterCity_Gym_Text_LiamPostBattle::
	.string "Du bist ganz gut, aber nicht so gut\n"
	.string "wie ROCKO!$"

PewterCity_Gym_Text_LetMeTakeYouToTheTop::
	.string "Hallo!\p"
	.string "Sieht aus, als hättest du das Zeug\n"
	.string "zu einem POKéMON-CHAMPION!\p"
	.string "Ich bin kein TRAINER, aber ich kann\n"
	.string "dir ein paar Tipps geben!\p"
	.string "Lass mich dir den Weg zum Erfolg\n"
	.string "zeigen!$"

PewterCity_Gym_Text_LetsGetHappening::
	.string "Alles klar!\n"
	.string "Dann kann es losgehen!$"

PewterCity_Gym_Text_TryDifferentPartyOrders::
	.string "Das POKéMON an der Spitze der\n"
	.string "POKéMON-LISTE kämpft als Erstes!\p"
	.string "Wenn du die Reihenfolge der\n"
	.string "POKéMON änderst, könnten Kämpfe\l"
	.string "leichter werden!\p"
	.string "Probiere es aus, um so deinem\n"
	.string "Gegner besser zu trotzen!$"

PewterCity_Gym_Text_ItsFreeLetsGetHappening::
	.string "Der Tipp ist kostenlos!\n"
	.string "Lass uns anfangen!$"

PewterCity_Gym_Text_YoureChampMaterial::
	.string "Ganz wie ich es mir gedacht habe!\n"
	.string "Aus dir kann ein POKéMON-CHAMPION\l"
	.string "werden!$"

PewterCity_Gym_Text_GymStatue::
	.string "MARMORIA POKéMON-ARENA\n"
	.string "LEITUNG: ROCKO\p"
	.string "BISHERIGE SIEGER:\n"
	.string "{RIVAL}$"

PewterCity_Gym_Text_GymStatuePlayerWon::
	.string "MARMORIA POKéMON-ARENA\n"
	.string "LEITUNG: ROCKO\p"
	.string "BISHERIGE SIEGER:\n"
	.string "{RIVAL}, {PLAYER}$"

