@ These are event scripts. They should not be moved to C.

#include "constants/global.h"
#include "constants/flags.h"
#include "constants/moves.h"
#include "constants/songs.h"
#include "constants/species.h"
#include "constants/vars.h"
#include "constants/items.h"
#include "constants/region_map_sections.h"
	.include "asm/macros.inc"
	.include "asm/macros/event.inc"
	.include "constants/constants.inc"

	.section .rodata
	
	.align 2
MysteryEventScript_StampCard::
	setvaddress MysteryEventScript_StampCard
	setorcopyvar VAR_RESULT, 1
	specialvar VAR_0x8008, GetMysteryGiftCardStat
	setorcopyvar VAR_RESULT, 0
	specialvar VAR_0x8009, GetMysteryGiftCardStat
	subvar VAR_0x8008, VAR_0x8009
	buffernumberstring STR_VAR_1, VAR_0x8008
	lock
	faceplayer
	vmessage sText_MysteryGiftStampCard
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftStampCard:
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.string "Gracias por usar el sistema\n"
	.string "de SELLOS.\p"
	.string "Para completar la TARJETA\n"
	.string "de SELLOS, te faltan {STR_VAR_1}.$"
	.elseif GAME_LANGUAGE == LANGUAGE_ITALIAN
	.string "Grazie per usare il Sistema SCHEDA\n"
	.string "BOLLINI.\p"
	.string "Il numero di BOLLINI che ancora ti\n"
	.string "serve per completare la SCHEDA\l"
	.string "è {STR_VAR_1}.$"
	.elseif GAME_LANGUAGE == LANGUAGE_FRENCH
	.string "Merci d'utiliser le système\n"
	.string "CARTE TAMPON.\p"
	.string "Il vous en faut {STR_VAR_1} de plus pour\n"
	.string "remplir complètement la carte.$"
	.elseif GAME_LANGUAGE == LANGUAGE_GERMAN
	.string "Danke, dass du das STEMPELKARTEn-\n"
	.string "System benutzt hast.\p"
	.string "Du musst noch {STR_VAR_1} sammeln, um\n"
	.string "deine STEMPELKARTE zu\l"
	.string "vervollständigen.$"
	.else @LANGUAGE_ENGLISH
	.string "Thank you for using the STAMP CARD\n"
	.string "System.\p"
	.string "You have {STR_VAR_1} more to collect to\n"
	.string "fill your STAMP CARD.$"
	.endif

MysteryEventScript_SurfPichu::
	setvaddress MysteryEventScript_SurfPichu
	vgoto_if_unset FLAG_MYSTERY_GIFT_DONE, SurfPichu_GiveIfPossible
	returnram

SurfPichu_GiveIfPossible:
	specialvar VAR_EVENT_PICHU_SLOT, CalculatePlayerPartyCount
	vgoto_if_eq VAR_EVENT_PICHU_SLOT, PARTY_SIZE, SurfPichu_FullParty
	setflag FLAG_MYSTERY_GIFT_DONE
	vcall SurfPichu_GiveEgg
	lock
	faceplayer
	vmessage sText_MysteryGiftEgg
	waitmessage
	waitbuttonpress
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	release
	end

SurfPichu_FullParty:
	lock
	faceplayer
	vmessage sText_FullParty
	waitmessage
	waitbuttonpress
	release
	end

SurfPichu_GiveEgg:
	giveegg SPECIES_PICHU
	setmonmodernfatefulencounter VAR_EVENT_PICHU_SLOT
	setmonmetlocation VAR_EVENT_PICHU_SLOT, METLOC_FATEFUL_ENCOUNTER
	vgoto_if_eq VAR_EVENT_PICHU_SLOT, 1, SurfPichu_Slot1
	vgoto_if_eq VAR_EVENT_PICHU_SLOT, 2, SurfPichu_Slot2
	vgoto_if_eq VAR_EVENT_PICHU_SLOT, 3, SurfPichu_Slot3
	vgoto_if_eq VAR_EVENT_PICHU_SLOT, 4, SurfPichu_Slot4
	vgoto_if_eq VAR_EVENT_PICHU_SLOT, 5, SurfPichu_Slot5
	return

SurfPichu_Slot1:
	setmonmove 1, 2, MOVE_SURF
	return

SurfPichu_Slot2:
	setmonmove 2, 2, MOVE_SURF
	return

SurfPichu_Slot3:
	setmonmove 3, 2, MOVE_SURF
	return

SurfPichu_Slot4:
	setmonmove 4, 2, MOVE_SURF
	return

SurfPichu_Slot5:
	setmonmove 5, 2, MOVE_SURF
	return

sText_MysteryGiftEgg:
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.\p"
	.string "Tenemos un REGALO del CENTRO\n"
	.string "POKéMON: ¡un HUEVO POKéMON!\p"
	.string "Cuídalo con tacto y cariño.$"
	.elseif GAME_LANGUAGE == LANGUAGE_ITALIAN
	.string "Grazie per usare il Sistema\n"
	.string "DONO SEGRETO.\p"
	.string "Abbiamo un regalo per te da un\n"
	.string "CENTRO POKéMON, un UOVO POKéMON!\p"
	.string "Trattalo con tanto amore!$"
	.elseif GAME_LANGUAGE == LANGUAGE_FRENCH
	.string "Merci d'utiliser le système\n"
	.string "CADEAU MYST.\p"
	.string "Nous avons un OEUF pour vous!\p"
	.string "Elevez-le avec amour et\n"
	.string "gentillesse.$"
	.elseif GAME_LANGUAGE == LANGUAGE_GERMAN
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast.\p"
	.string "Im POKéMON-CENTER wartet\n"
	.string "ein Geschenk auf dich. Ein\l"
	.string "POKéMON-EI!\l"
	.string "Bitte trainiere das POKéMON\l"
	.string "mit Liebe und Sorgfalt.$"
	.else @LANGUAGE_ENGLISH
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.\p"
	.string "From the POKéMON CENTER we\n"
	.string "have a gift - a POKéMON EGG!\p"
	.string "Please raise it with love and\n"
	.string "kindness.$"
	.endif

sText_FullParty:
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.string "Parece que tu equipo está\n"
	.string "completo.\p"
	.string "Vuelve cuando dejes algún POKéMON\n"
	.string "en el PC.$"
	.elseif GAME_LANGUAGE == LANGUAGE_ITALIAN
	.string "Non hai più posto nella tua\n"
	.string "squadra.\p"
	.string "Torna a trovarmi dopo aver\n"
	.string "depositato uno o più\l"
	.string "POKéMON nel PC.$"
	.elseif GAME_LANGUAGE == LANGUAGE_FRENCH
	.string "Oh, l'équipe est pleine.\p"
	.string "Revenez quand vous aurez rangé\n"
	.string "un POKéMON dans votre PC.$"
	.elseif GAME_LANGUAGE == LANGUAGE_GERMAN
	.string "Oh, du hast keinen Platz in deinem\n"
	.string "Team!\l"
	.string "Bitte komme wieder, nachdem du\l"
	.string "ein POKéMON auf einem PC\l"
	.string "gelagert hast.$"
	.else @LANGUAGE_ENGLISH
	.string "Oh, your party appears to be full.\p"
	.string "Please come see me after storing\n"
	.string "a POKéMON on a PC.$"
	.endif

MysteryEventScript_VisitingTrainer::
	setvaddress MysteryEventScript_VisitingTrainer
	special ValidateEReaderTrainer
	vgoto_if_eq VAR_RESULT, 0, MysteryEventScript_VisitingTrainerArrived
	lock
	faceplayer
	vmessage sText_MysteryGiftVisitingTrainer
	waitmessage
	waitbuttonpress
	release
	end

MysteryEventScript_VisitingTrainerArrived:
	lock
	faceplayer
	vmessage sText_MysteryGiftVisitingTrainer_2
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftVisitingTrainer:
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.\p"
	.string "Al llevar la TARJETA MISTERIOSA,\n"
	.string "podrás participar en una encuesta\l"
	.string "en la TIENDA POKéMON.\p"
	.string "Aprovecha las encuestas para\n"
	.string "invitar a ENTRENADORES\l"
	.string "a ARCHI7.\p"
	.string "Voy a darte una contraseña secreta\n"
	.string "para la encuesta:\p"
	.string "“QUIERO ENTRENADORES\n"
	.string "MUY FUERTES”\p"
	.string "Escríbela en un cuestionario y\n"
	.string "envíala al sistema de comunicación\l"
	.string "inalámbrica.$"
	.elseif GAME_LANGUAGE == LANGUAGE_ITALIAN
	.string "Grazie per usare il Sistema\n"
	.string "DONO SEGRETO.\p"
	.string "La SCHEDA SEGRETA ti\n"
	.string "permette di partecipare ad\l"
	.string "un sondaggio al POKéMON-MARKET.\p"
	.string "Così, potrai invitare gli\n"
	.string "ALLENATORI al SETTIPELAGO.\p"
	.string "Ora ti do la password che ti serve\n"
	.string "per partecipare a un sondaggio:\p"
	.string "BATTI CINQUE ACUTI\n"
	.string "ALLENATORE.\p"
	.string "Scrivi questa password su\n"
	.string "un sondaggio e invialo al\l"
	.string "SISTEMA COMUNICAZIONE\l"
	.string "WIRELESS.$"
	.elseif GAME_LANGUAGE == LANGUAGE_FRENCH
	.string "Merci d'utiliser le système\n"
	.string "CADEAU MYST.\p"
	.string "En tenant la CARTE MIRACLE,\n"
	.string "vous pouvez effectuer des\p"
	.string "sondages dans les BOUTIQUES\n"
	.string "POKéMON.\p"
	.string "Utilisez ces sondages pour inviter\n"
	.string "des DRESSEURS aux ILES SEVII.\p"
	.string "Laissez-moi vous donner un mot\n"
	.string "de passe secret:\p"
	.string "“DONNE-MOI\n"
	.string "UN COMBAT”\p"
	.string "Ecrivez ça sur un sondage et\n"
	.string "envoyez-le au SYSTEME DE\p"
	.string "COMMUNICATION SANS FIL.$"
	.elseif GAME_LANGUAGE == LANGUAGE_GERMAN
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast.\p"
	.string "Da du im Besitz dieser WUNDER-\n"
	.string "KARTE bist, darfst du bei einer\l"
	.string "Umfrage im PKMN-SUPERMARKT\l"
	.string "teilnehmen.\l"
	.string "Lade andere TRAINER zu diesen\l"
	.string "Umfragen nach SEVII EILAND\l"
	.string "ein.\l"
	.string "… ich gebe dir ein geheimes\l"
	.string "Passwort für die Umfrage:\p"
	.string "“GIB MIR COOLE\n"
	.string "TRAINER”\p"
	.string "Schreibe dies in eine Umfrage und\n"
	.string "schicke es zum DRAHTLOSEN\l"
	.string "KOMMUNIKATIONS-SYSTEM.$"
	.else @LANGUAGE_ENGLISH
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.\p"
	.string "By holding this WONDER CARD, you\n"
	.string "may take part in a survey at a\l"
	.string "POKéMON MART.\p"
	.string "Use these surveys to invite\n"
	.string "TRAINERS to the SEVII ISLANDS.\p"
	.string "…Let me give you a secret\n"
	.string "password for a survey:\p"
	.string "“GIVE ME\n"
	.string "AWESOME TRAINER”\p"
	.string "Write that in on a survey and send\n"
	.string "it to the WIRELESS\l"
	.string "COMMUNICATION SYSTEM.$"
	.endif

sText_MysteryGiftVisitingTrainer_2:
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.\p"
	.string "Ha llegado un ENTRENADOR\n"
	.string "a ARCHI7 y te está buscando.\p"
	.string "Esperamos que disfrutes del\n"
	.string "combate con el ENTRENADOR.\p"
	.string "Si quieres, puedes invitar a más\n"
	.string "ENTRENADORES usando otras\l"
	.string "contraseñas.\p"
	.string "Busca otras contraseñas\n"
	.string "que vayan bien.$"
	.elseif GAME_LANGUAGE == LANGUAGE_ITALIAN
	.string "Grazie per usare il Sistema\n"
	.string "DONO SEGRETO.\p"
	.string "Un ALLENATORE è appena\n"
	.string "sbarcato sul SETTIPELAGO\l"
	.string "per cercarti.\p"
	.string "Buon divertimento nella lotta\n"
	.string "contro questo ALLENATORE!\p"
	.string "Inserendo altre password,\n"
	.string "potrai invitare altri ALLENATORI!\p"
	.string "Cerca altre password valide!$"
	.elseif GAME_LANGUAGE == LANGUAGE_FRENCH
	.string "Merci d'utiliser le système\n"
	.string "CADEAU MYST.\p"
	.string "Un DRESSEUR arrivé aux\n"
	.string "ILES SEVII vous cherche.\p"
	.string "On espère que vous aimerez\n"
	.string "vous battre contre ce DRESSEUR.\p"
	.string "Vous pouvez inviter des DRESSEURS\n"
	.string "en entrant le mot de passe.\p"
	.string "Essayez de trouver des mots de\n"
	.string "passe qui pourraient fonctionner.$"
	.elseif GAME_LANGUAGE == LANGUAGE_GERMAN
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast.\p"
	.string "Ein TRAINER, der nach SEVII\n"
	.string "EILAND gekommen ist,\l"
	.string "sucht dich!\l"
	.string "Wir hoffen, der Kampf gegen\l"
	.string "diesen TRAINER macht dir Spaß!\p"
	.string "Wenn du andere Passwörter ein-\n"
	.string "gibst, kannst du andere TRAINER\l"
	.string "einladen.\l"
	.string "Sieh dich nach anderen Passwörtern\l"
	.string "um, die evtl. funktionieren könnten.$"
	.else @LANGUAGE_ENGLISH
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.\p"
	.string "A TRAINER has arrived in the SEVII\n"
	.string "ISLANDS looking for you.\p"
	.string "We hope you will enjoy\n"
	.string "battling the visiting TRAINER.\p"
	.string "You may invite other TRAINERS by\n"
	.string "entering other passwords.\p"
	.string "Try looking for other passwords\n"
	.string "that may work.$"
	.endif

MysteryEventScript_BattleCard::
	setvaddress MysteryEventScript_BattleCard
	vgoto_if_set FLAG_MYSTERY_GIFT_DONE, MysteryEventScript_BattleCardInfo
	setorcopyvar VAR_RESULT, 2
	specialvar VAR_0x8008, GetMysteryGiftCardStat
	vgoto_if_ne VAR_0x8008, 3, MysteryEventScript_BattleCardInfo
	lock
	faceplayer
	vmessage sText_MysteryGiftBattleCountCard_2
	waitmessage
	waitbuttonpress
	giveitem ITEM_POTION
	release
	setflag FLAG_MYSTERY_GIFT_DONE
	end

MysteryEventScript_BattleCardInfo:
	lock
	faceplayer
	vmessage sText_MysteryGiftBattleCountCard
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftBattleCountCard:
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.\p"
	.string "Tu TARJETA de RECUENTO de\n"
	.string "COMBATES te muestra los récords\p"
	.string "de los combates mantenidos con\n"
	.string "ENTRENADORES que tienen la\l"
	.string "misma TARJETA.\p"
	.string "Busca ENTRENADORES que\n"
	.string "tengan la misma TARJETA que tú.\p"
	.string "Cuando leas las NOTICIAS,\n"
	.string "podrás ver las clasificaciones.\p"
	.string "¡No te lo pierdas!$"
	.elseif GAME_LANGUAGE == LANGUAGE_ITALIAN
	.string "Grazie per usare il Sistema\n"
	.string "DONO SEGRETO.\p"
	.string "La tua SCHEDA CONTALOTTE\n"
	.string "calcola il numero di LOTTE contro\l"
	.string "ALLENATORI con la stessa SCHEDA.\p"
	.string "Cerca altri ALLENATORI che hanno\n"
	.string "la SCHEDA CONTALOTTE e sfidali!\p"
	.string "I risultati saranno diffusi tra le\n"
	.string "NOTIZIE!$"
	.elseif GAME_LANGUAGE == LANGUAGE_FRENCH
	.string "Merci d'utiliser le système\n"
	.string "CADEAU MYST.\p"
	.string "La CARTE COMBAT garde la trace\n"
	.string "de vos combats contre les\p"
	.string "DRESSEURS ayant la même\n"
	.string "CARTE.\p"
	.string "Recherchez les DRESSEURS ayant\n"
	.string "la même carte que vous.\p"
	.string "Vous pouvez voir le classement\n"
	.string "général en lisant les JOURNAUX.\p"
	.string "Vous devriez essayer!$"
	.elseif GAME_LANGUAGE == LANGUAGE_GERMAN
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast.\p"
	.string "Auf deiner KAMPFKARTE\n"
	.string "wird deine Kampfstatistik gegen\l"
	.string "TRAINER mit derselben KARTE\l"
	.string "festgehalten.\l"
	.string "Suche TRAINER mit derselben KARTE\l"
	.string "und kämpfe gegen sie.\p"
	.string "Du kannst den Gesamtstand in den\n"
	.string "NACHRICHTEN erfahren.\p"
	.string "Probiere es doch einfach!$"
	.else @LANGUAGE_ENGLISH
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.\p"
	.string "Your BATTLE COUNT CARD keeps\n"
	.string "track of your battle record against\l"
	.string "TRAINERS with the same CARD.\p"
	.string "Look for and battle TRAINERS who\n"
	.string "have the same CARD as you.\p"
	.string "You may check the overall rankings\n"
	.string "by reading the NEWS.\p"
	.string "Please do give it a try!$"
	.endif

sText_MysteryGiftBattleCountCard_2:
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.\p"
	.string "¡Enhorabuena!\p"
	.string "¡Has ganado un premio por vencer\n"
	.string "a tu rival en tres combates!\p"
	.string "¡Esperamos que sigas luchando!$"
	.elseif GAME_LANGUAGE == LANGUAGE_ITALIAN
	.string "Grazie per usare il Sistema\n"
	.string "DONO SEGRETO!\p"
	.string "Congratulazioni! Hai ottenuto\n"
	.string "un premio per aver vinto tre lotte!\p"
	.string "Speriamo che questo ti aiuti ad\n"
	.string "impegnarti ancora di più nella\l"
	.string "lotta!$"
	.elseif GAME_LANGUAGE == LANGUAGE_FRENCH
	.string "Merci d'utiliser le système\n"
	.string "CADEAU MYST.\p"
	.string "Félicitations!\p"
	.string "Vous recevez un prix pour avoir\n"
	.string "gagné trois combats!\p"
	.string "On espère que ça vous donnera\n"
	.string "envie de combattre encore plus.$"
	.elseif GAME_LANGUAGE == LANGUAGE_GERMAN
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast.\p"
	.string "Glückwunsch!\p"
	.string "Du erhältst einen Preis\n"
	.string "für drei gewonnene Kämpfe.\p"
	.string "Hoffentlich inspiriert dich das,\n"
	.string "weiter zu kämpfen.$"
	.else @LANGUAGE_ENGLISH
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.\p"
	.string "Congratulations!\p"
	.string "You have won a prize for winning\n"
	.string "three battles!\p"
	.string "We hope you will be inspired to\n"
	.string "battle some more.$"
	.endif

MysteryEventScript_AuroraTicket::
	setvaddress MysteryEventScript_AuroraTicket
	lock
	faceplayer
	vgoto_if_set FLAG_RECEIVED_AURORA_TICKET, AuroraTicket_Obtained
	vgoto_if_set FLAG_FOUGHT_DEOXYS, AuroraTicket_Obtained
	checkitem ITEM_AURORA_TICKET, 1
	vgoto_if_eq VAR_RESULT, TRUE, AuroraTicket_Obtained
	vmessage sText_AuroraTicket1
	waitmessage
	waitbuttonpress
	checkitemspace ITEM_AURORA_TICKET, 1
	vgoto_if_eq VAR_RESULT, FALSE, AuroraTicket_NoBagSpace
	giveitem ITEM_AURORA_TICKET
	setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
	setflag FLAG_RECEIVED_AURORA_TICKET
	vmessage sText_AuroraTicket2
	waitmessage
	waitbuttonpress
	release
	end

AuroraTicket_NoBagSpace:
	vmessage sText_AuroraTicketNoPlace
	waitmessage
	waitbuttonpress
	release
	end

AuroraTicket_Obtained:
	vmessage sText_AuroraTicketGot
	waitmessage
	waitbuttonpress
	release
	end

sText_AuroraTicket1:
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.\p"
	.string "Debes de ser {PLAYER}, ¿no?\p"
	.string "Pues tenemos un ticket para ti.$"
	.elseif GAME_LANGUAGE == LANGUAGE_ITALIAN
	.string "Grazie per usare il Sistema\n"
	.string "DONO SEGRETO.\p"
	.string "Tu sei {PLAYER}, vero? Ho qui\n"
	.string "un biglietto per te.$"
	.elseif GAME_LANGUAGE == LANGUAGE_FRENCH
	.string "Merci d'utiliser le système\n"
	.string "CADEAU MYST.\p"
	.string "Vous devez être {PLAYER}.\n"
	.string "Il y a un ticket pour vous.$"
	.elseif GAME_LANGUAGE == LANGUAGE_GERMAN
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast.\p"
	.string "Du musst {PLAYER} sein.\n"
	.string "Hier ist ein Ticket für dich!$"
	.else @LANGUAGE_ENGLISH
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.\p"
	.string "You must be {PLAYER}.\n"
	.string "There is a ticket here for you.$"
	.endif

sText_AuroraTicket2:
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.string "Parece que puedes usarlo en el\n"
	.string "PUERTO de CIUDAD CARMÍN.\p"
	.string "¿Por qué no curioseas un poco\n"
	.string "para ver de qué se trata?$"
	.elseif GAME_LANGUAGE == LANGUAGE_ITALIAN
	.string "Dovrebbe servirti al porto di\n"
	.string "ARANCIOPOLI.\p"
	.string "Ti conviene andare a vedere\n"
	.string "di persona.$"
	.elseif GAME_LANGUAGE == LANGUAGE_FRENCH
	.string "Il peut être utilisé au port de\n"
	.string "CARMIN SUR MER.\p"
	.string "Essayez-le pour voir de quoi \n"
	.string "il s'agit.$"
	.elseif GAME_LANGUAGE == LANGUAGE_GERMAN
	.string "Du kannst es am Hafen von\n"
	.string "ORANIA CITY einsetzen.\p"
	.string "Warum probierst du es nicht\n"
	.string "einfach aus?$"
	.else @LANGUAGE_ENGLISH
	.string "It appears to be for use at the\n"
	.string "VERMILION CITY port.\p"
	.string "Why not give it a try and see what\n"
	.string "it is about?$"
	.endif

sText_AuroraTicketGot:
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.$"
	.elseif GAME_LANGUAGE == LANGUAGE_ITALIAN
	.string "Grazie per usare il Sistema\n"
	.string "DONO SEGRETO.$"
	.elseif GAME_LANGUAGE == LANGUAGE_FRENCH
	.string "Merci d'utiliser le système\n"
	.string "CADEAU MYST.$"
	.elseif GAME_LANGUAGE == LANGUAGE_GERMAN
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast!$"
	.else @LANGUAGE_ENGLISH
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.$"
	.endif

sText_AuroraTicketNoPlace:
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.string "Lo siento, {PLAYER}. El BOLSILLO de\n"
	.string "los OBJETOS CLAVE, está lleno.\p"
	.string "Guarda algo en el PC y vuelve más\n"
	.string "tarde.$"
	.elseif GAME_LANGUAGE == LANGUAGE_ITALIAN
	.string "Oh, mi spiace. La TASCA STRUMENTI\n"
	.string "BASE del tuo ZAINO è piena.\p"
	.string "Torna a trovarmi dopo aver\n"
	.string "depositato qualcosa nel PC.$"
	.elseif GAME_LANGUAGE == LANGUAGE_FRENCH
	.string "Oh, je regrette {PLAYER}. La POCHE\n"
	.string "OBJ. RARES du SAC est pleine.\p"
	.string "Faites le tri dans votre SAC et\n"
	.string "revenez plus tard.$"
	.elseif GAME_LANGUAGE == LANGUAGE_GERMAN
	.string "Oh, es tut mir Leid {PLAYER}! Die\n"
	.string "BASIS-ITEM-TASCHE in deinem\l"
	.string "BEUTEL ist voll.\l"
	.string "Lagere etwas auf deinem PC und\l"
	.string "komme anschließend zurück.$"
	.else @LANGUAGE_ENGLISH
	.string "Oh, I'm sorry, {PLAYER}. Your BAG's\n"
	.string "KEY ITEMS POCKET is full.\p"
	.string "Please store something on your PC,\n"
	.string "then come back for this.$"
	.endif

MysteryEventScript_MysticTicket::
	setvaddress MysteryEventScript_MysticTicket
	lock
	faceplayer
	vgoto_if_set FLAG_RECEIVED_MYSTIC_TICKET, MysticTicket_Obtained
	vgoto_if_set FLAG_FOUGHT_LUGIA, MysticTicket_Obtained
	vgoto_if_set FLAG_FOUGHT_HO_OH, MysticTicket_Obtained
	checkitem ITEM_MYSTIC_TICKET, 1
	vgoto_if_eq VAR_RESULT, TRUE, MysticTicket_Obtained
	vmessage sText_MysticTicket2
	waitmessage
	waitbuttonpress
	checkitemspace ITEM_MYSTIC_TICKET, 1
	vgoto_if_eq VAR_RESULT, FALSE, MysticTicket_NoBagSpace
	giveitem ITEM_MYSTIC_TICKET
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
	setflag FLAG_RECEIVED_MYSTIC_TICKET
	vmessage sText_MysticTicket1
	waitmessage
	waitbuttonpress
	release
	end

MysticTicket_NoBagSpace:
	vmessage sText_MysticTicketNoPlace
	waitmessage
	waitbuttonpress
	release
	end

MysticTicket_Obtained:
	vmessage sText_MysticTicketGot
	waitmessage
	waitbuttonpress
	release
	end

sText_MysticTicket2:
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.\p"
	.string "Debes de ser {PLAYER}, ¿no?\p"
	.string "Pues tenemos un ticket para ti.$"
	.elseif GAME_LANGUAGE == LANGUAGE_ITALIAN
	.string "Grazie per usare il Sistema\n"
	.string "DONO SEGRETO.\p"
	.string "Tu sei {PLAYER}, vero? Ho qui\n"
	.string "un biglietto per te.$"
	.elseif GAME_LANGUAGE == LANGUAGE_FRENCH
	.string "Merci d'utiliser le système\n"
	.string "CADEAU MYST.$"
	.elseif GAME_LANGUAGE == LANGUAGE_GERMAN
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast!\p"
	.string "Du musst {PLAYER} sein.\n"
	.string "Hier ist ein Ticket für dich!$"
	.else @LANGUAGE_ENGLISH
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.\p"
	.string "You must be {PLAYER}.\n"
	.string "There is a ticket here for you.$"
	.endif

sText_MysticTicket1:
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.string "Parece que puedes usarlo en el\n"
	.string "PUERTO de CIUDAD CARMÍN.\p"
	.string "¿Por qué no curioseas un poco\n"
	.string "para ver de qué se trata?$"
	.elseif GAME_LANGUAGE == LANGUAGE_ITALIAN
	.string "Dovrebbe servirti al porto di\n"
	.string "ARANCIOPOLI.\p"
	.string "Ti conviene andare a vedere\n"
	.string "di persona.$"
	.elseif GAME_LANGUAGE == LANGUAGE_FRENCH
	.string "Il peut être utilisé au port de\n"
	.string "CARMIN SUR MER.\p"
	.string "Essayez-le pour voir de quoi \n"
	.string "il s'agit.$"
	.elseif GAME_LANGUAGE == LANGUAGE_GERMAN
	.string "Du kannst es am Hafen von\n"
	.string "ORANIA CITY einsetzen.\p"
	.string "Warum probierst du es nicht\n"
	.string "einfach aus?$"
	.else @LANGUAGE_ENGLISH
	.string "It appears to be for use at the\n"
	.string "VERMILION CITY port.\p"
	.string "Why not give it a try and see what\n"
	.string "it is about?$"
	.endif

sText_MysticTicketGot:
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.$"
	.elseif GAME_LANGUAGE == LANGUAGE_ITALIAN
	.string "Grazie per usare il Sistema\n"
	.string "DONO SEGRETO.$"
	.elseif GAME_LANGUAGE == LANGUAGE_FRENCH
	.string "Merci d'utiliser le système\n"
	.string "CADEAU MYST.$"
	.elseif GAME_LANGUAGE == LANGUAGE_GERMAN
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast!$"
	.else @LANGUAGE_ENGLISH
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.$"
	.endif

sText_MysticTicketNoPlace:
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.string "Lo siento, {PLAYER}. El BOLSILLO de\n"
	.string "los OBJETOS CLAVE, está lleno.\p"
	.string "Guarda algo en el PC y vuelve más\n"
	.string "tarde.$"
	.elseif GAME_LANGUAGE == LANGUAGE_ITALIAN
	.string "Oh, mi spiace. La TASCA STRUMENTI\n"
	.string "BASE del tuo ZAINO è piena.\p"
	.string "Torna a trovarmi dopo aver\n"
	.string "depositato qualcosa nel PC.$"
	.elseif GAME_LANGUAGE == LANGUAGE_FRENCH
	.string "Oh, je regrette {PLAYER}. La POCHE\n"
	.string "OBJ. RARES du SAC est pleine.\p"
	.string "Faites le tri dans votre SAC et\n"
	.string "revenez plus tard.$"
	.elseif GAME_LANGUAGE == LANGUAGE_GERMAN
	.string "Oh, es tut mir Leid, {PLAYER}! Die\n"
	.string "BASIS-ITEM-TASCHE in deinem\l"
	.string "BEUTEL ist voll.\l"
	.string "Lagere etwas auf deinem PC und\l"
	.string "komme anschließend zurück.$"
	.else @LANGUAGE_ENGLISH
	.string "Oh, I'm sorry, {PLAYER}. Your BAG's\n"
	.string "KEY ITEMS POCKET is full.\p"
	.string "Please store something on your PC,\n"
	.string "then come back for this.$"
	.endif

MysteryEventScript_AlteringCave::
	setvaddress MysteryEventScript_AlteringCave
	addvar VAR_ALTERING_CAVE_WILD_SET, 1
	vgoto_if_ne VAR_ALTERING_CAVE_WILD_SET, 10, MysteryEventScript_AlteringCave_
	setvar VAR_ALTERING_CAVE_WILD_SET, 0
MysteryEventScript_AlteringCave_:
	lock
	faceplayer
	vmessage sText_MysteryGiftAlteringCave
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftAlteringCave:
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.\p"
	.string "Últimamente se ha comentado que\n"
	.string "han aparecido POKéMON raros.\p"
	.string "Dicen que ha sido por CUEVA\n"
	.string "CAMBIANTE y por ISLA AISLADA.\p"
	.string "¿Por qué no te pasas por allí\n"
	.string "y ves si los rumores son ciertos?$"
	.elseif GAME_LANGUAGE == LANGUAGE_ITALIAN
	.string "Grazie per usare il Sistema\n"
	.string "DONO SEGRETO.\p"
	.string "Recentemente sono stati visti\n"
	.string "POKéMON rari nella GROTTA\l"
	.string "MUTEVOLE, sull'ISOLA SOLITARIA.\p"
	.string "Perché non vai a vedere\n"
	.string "di persona?$"
	.elseif GAME_LANGUAGE == LANGUAGE_FRENCH
	.string "Merci d'utiliser le système\n"
	.string "CADEAU MYST.\p"
	.string "Il y a de plus en plus de rumeurs\n"
	.string "sur l'apparition de POKéMON rares.\p"
	.string "Les rumeurs parlent de la GROTTE\n"
	.string "METAMO sur l'ILE DU LOINTAIN.\p"
	.string "Vous devriez y aller pour vérifier\n"
	.string "si les rumeurs sont vraies.$"
	.elseif GAME_LANGUAGE == LANGUAGE_GERMAN
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast!\p"
	.string "In letzter Zeit gab es Gerüchte,\n"
	.string "dass seltene POKéMON\l"
	.string "plötzlich auftauchen.\l"
	.string "Die Gerüchte beziehen sich auf\l"
	.string "die WANDELHÖHLE auf \l"
	.string "FERN-EILAND.\l"
	.string "Warum schaust du dich dort nicht\l"
	.string "ein wenig um?$"
	.else @LANGUAGE_ENGLISH
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.\p"
	.string "Recently, there have been rumors\n"
	.string "of rare POKéMON appearances.\p"
	.string "The rumors are about ALTERING\n"
	.string "CAVE on OUTCAST ISLAND.\p"
	.string "Why not visit there and check if\n"
	.string "the rumors are indeed true?$"
	.endif
