PewterCity_Gym_Text_BrockIntro::
	.string "Je suis PIERRE! Je suis le\n"
	.string "CHAMPION d'ARGENTA!\p"
	.string "Je crois en la grande force de\n"
	.string "la pierre!\p"
	.string "C'est pourquoi mes POKéMON sont\n"
	.string "du type ROCHE!\p"
	.string "Tu veux toujours te battre avec\n"
	.string "moi? Même en sachant que\l"
	.string "tu vas perdre? \p"
	.string "Très bien. En garde!{PLAY_BGM MUS_ENCOUNTER_GYM_LEADER}$"

@ NOTE: This defeat text actually causes a buffer overflow. It's too long for the gDisplayedStringBattle
@ buffer that it's put into, and it stomps all over the gBattleTextBuffs after, as well as the otherwise
@ unused array after that, sFlickerArray. Perhaps that's the reason why said array exists.
PewterCity_Gym_Text_BrockDefeat::
	.string "Hmm…\n"
	.string "Beau combat. J'étais trop sûr de\l"
	.string "moi, c'est pour ça que j'ai perdu.\p"
	.string "En reconnaissance de ta victoire,\n"
	.string "voici le BADGE ROCHE!\p"
	.string "{FONT_NORMAL}{PLAYER} reçoit le BADGE ROCHE!\n"
	.string "{PAUSE_MUSIC}{PLAY_BGM MUS_OBTAIN_BADGE}{PAUSE}\n"
	.string "{PAUSE 86}{RESUME_MUSIC}\p"
	.string "{FONT_MALE}C'est un BADGE officiel de la\n"
	.string "LIGUE POKéMON!\p"
	.string "Les POKéMON de son détenteur\n"
	.string "deviennent plus puissants!\p"
	.string "La technique FLASH peut être\n"
	.string "utilisée!$"

PewterCity_Gym_Text_TakeThisWithYou::
	.string "Attends!\n"
	.string "Prends ça avec toi!$"

PewterCity_Gym_Text_ReceivedTM39FromBrock::
	.string "{PLAYER} reçoit la CT39!$"

PewterCity_Gym_Text_ExplainTM39::
	.string "Une CT (Capsule Tech.) contient\n"
	.string "une attaque à enseigner à un\l"
	.string "POKéMON!\p"
	.string "Une CT ne marche qu'une fois!\p"
	.string "Alors choisis bien le POKéMON à qui\n"
	.string "la donner!\p"
	.string "La CT39 contient TOMBEROCHE!\p"
	.string "Avec cette capacité, ton POKéMON\n"
	.string "lancera des rochers sur\p"
	.string "son ennemi pour baisser sa vitesse.$"

PewterCity_Gym_Text_BrockPostBattle::
	.string "Il y a plusieurs types de\n"
	.string "DRESSEURS dans le monde!\p"
	.string "Tu sembles être un DRESSEUR\n"
	.string "d'exception!\p"
	.string "Va à l'ARENE d'AZURIA pour tester\n"
	.string "tes capacités.$"

PewterCity_Gym_Text_DontHaveRoomForThis::
	.string "Ton inventaire est plein!$"

PewterCity_Gym_Text_LiamIntro::
	.string "Une minute!\p"
	.string "Tu es encore loin de pouvoir\n"
	.string "te battre contre PIERRE.\p"
	.string "Tu vas devoir m'affronter avant!$"

PewterCity_Gym_Text_LiamDefeat::
	.string "Zut!\p"
	.string "J'aurais dû te laisser passer!$"

PewterCity_Gym_Text_LiamPostBattle::
	.string "Tu sais te battre…\n"
	.string "Mais pas aussi bien que PIERRE!$"

PewterCity_Gym_Text_LetMeTakeYouToTheTop::
	.string "Salut graine de CHAMPION!\p"
	.string "Je ne suis pas DRESSEUR mais\n"
	.string "mes conseils sont avisés!\p"
	.string "Laisse-moi te mener à la victoire!$"

PewterCity_Gym_Text_LetsGetHappening::
	.string "OK!\n"
	.string "C'est parti!$"

PewterCity_Gym_Text_TryDifferentPartyOrders::
	.string "Le 1er POKéMON apparaissant dans\n"
	.string "un combat est celui à gauche dans\l"
	.string "la LISTE POKéMON!\p"
	.string "En changeant l'ordre des POKéMON,\n"
	.string "tu peux changer de stratégie!\p"
	.string "Essaye différents ordres pour\n"
	.string "t'adapter à ton adversaire.$"

PewterCity_Gym_Text_ItsFreeLetsGetHappening::
	.string "C'est gratuit, profites-en! $"

PewterCity_Gym_Text_YoureChampMaterial::
	.string "Je le savais!\n"
	.string "Tu as l'âme d'un CHAMPION!$"

PewterCity_Gym_Text_GymStatue::
	.string "ARENE POKéMON d'ARGENTA\n"
	.string "CHAMPION: PIERRE\p"
	.string "VAINQUEURS:\n"
	.string "{RIVAL}$"

PewterCity_Gym_Text_GymStatuePlayerWon::
	.string "ARENE POKéMON d'ARGENTA\n"
	.string "CHAMPION: PIERRE\p"
	.string "VAINQUEURS:\n"
	.string "{RIVAL}, {PLAYER}$"

