#include "global.h"
#include "link_rfu.h"
#include "mystery_gift_server.h"
#include "mystery_gift_client.h"
#include "constants/union_room.h"

ALIGNED(4) const u8 gText_UR_EmptyString[] = _("");
ALIGNED(4) const u8 gText_UR_Colon[] = _(":");
ALIGNED(4) const u8 gText_UR_ID[] = _("{ID}");
#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) const u8 gText_UR_PleaseStartOver[] = _("Hay que empezar de nuevo.");
ALIGNED(4) const u8 gText_UR_WirelessSearchCanceled[] = _("Se ha cancelado la COMUNICACIÓN\nINALÁMBRICA.");
ALIGNED(4) static const u8 sText_AwaitingCommunucation2[] = _("ともだちからの れんらくを\nまっています");
ALIGNED(4) const u8 gText_UR_AwaitingCommunication[] = _("Para la opción {STR_VAR_1},\nfaltan jugadores por comunicarse.");
ALIGNED(4) const u8 gText_UR_AwaitingLinkPressStart[] = _("Para la opción {STR_VAR_1},\npulsa START cuando estéis listos.");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) const u8 gText_UR_PleaseStartOver[] = _("Inizia daccapo.");
ALIGNED(4) const u8 gText_UR_WirelessSearchCanceled[] = _("SISTEMA COMUNICAZIONE WIRELESS:\nla ricerca è stata annullata.");
ALIGNED(4) static const u8 sText_AwaitingCommunucation2[] = _("ともだちからの れんらくを\nまっています");
ALIGNED(4) const u8 gText_UR_AwaitingCommunication[] = _("{STR_VAR_1}! In attesa\ncomunicazione da altro giocatore.");
ALIGNED(4) const u8 gText_UR_AwaitingLinkPressStart[] = _("{STR_VAR_1}! Quando siete\ntutti pronti, premi START.");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) const u8 gText_UR_PleaseStartOver[] = _("Veuillez recommencer depuis le début.");
ALIGNED(4) const u8 gText_UR_WirelessSearchCanceled[] = _("La recherche de la COMMUNICATION\nSANS FIL a été annulée.");
ALIGNED(4) static const u8 sText_AwaitingCommunucation2[] = _("ともだちからの れんらくを\nまっています");
ALIGNED(4) const u8 gText_UR_AwaitingCommunication[] = _("{STR_VAR_1}! Attente \nd'un autre joueur.");
ALIGNED(4) const u8 gText_UR_AwaitingLinkPressStart[] = _("{STR_VAR_1}! Attente de\nlink! App. sur START une fois prêts");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) const u8 gText_UR_PleaseStartOver[] = _("Bitte neu starten!");
ALIGNED(4) const u8 gText_UR_WirelessSearchCanceled[] = _("Suche nach DRAHTLOSEM KOMMUNI-\nKATIONS-SYSTEM wurde abgebrochen.");
ALIGNED(4) static const u8 sText_AwaitingCommunucation2[] = _("ともだちからの れんらくを\nまっています");
ALIGNED(4) const u8 gText_UR_AwaitingCommunication[] = _("{STR_VAR_1}! Warte\nauf einen Mitspieler.");
ALIGNED(4) const u8 gText_UR_AwaitingLinkPressStart[] = _("{STR_VAR_1}! Warte auf\nVerbindung! Drücke START,\lwenn alle bereit sind.");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) const u8 gText_UR_PleaseStartOver[] = _("Please start over from the beginning.");
ALIGNED(4) const u8 gText_UR_WirelessSearchCanceled[] = _("The WIRELESS COMMUNICATION\nSYSTEM search has been canceled.");
ALIGNED(4) static const u8 sText_AwaitingCommunucation2[] = _("ともだちからの れんらくを\nまっています");
ALIGNED(4) const u8 gText_UR_AwaitingCommunication[] = _("{STR_VAR_1}! Awaiting\ncommunication from another player.");
ALIGNED(4) const u8 gText_UR_AwaitingLinkPressStart[] = _("{STR_VAR_1}! Awaiting link!\nPress START when everyone's ready.");
#endif

ALIGNED(4) static const u8 sText_SingleBattle[] = _("シングルバトルを かいさいする");
ALIGNED(4) static const u8 sText_DoubleBattle[] = _("ダブルバトルを かいさいする");
ALIGNED(4) static const u8 sText_MultiBattle[] = _("マルチバトルを かいさいする");
ALIGNED(4) static const u8 sText_TradePokemon[] = _("ポケモンこうかんを かいさいする");
ALIGNED(4) static const u8 sText_Chat[] = _("チャットを かいさいする");
ALIGNED(4) static const u8 sText_DistWonderCard[] = _("ふしぎなカードをくばる");
ALIGNED(4) static const u8 sText_DistWonderNews[] = _("ふしぎなニュースをくばる");
ALIGNED(4) static const u8 sText_DistMysteryEvent[] = _("ふしぎなできごとを かいさいする");
ALIGNED(4) static const u8 sText_HoldPokemonJump[] = _("なわとびを かいさいする");
ALIGNED(4) static const u8 sText_HoldBerryCrush[] = _("きのみマッシャーを かいさいする");
ALIGNED(4) static const u8 sText_HoldBerryPicking[] = _("きのみどりを かいさいする");
ALIGNED(4) static const u8 sText_HoldSpinTrade[] = _("ぐるぐるこうかんを かいさいする");
ALIGNED(4) static const u8 sText_HoldSpinShop[] = _("ぐるぐるショップを かいさいする");

// Unused
static const u8 *const sLinkGroupActionTexts[] = {
    sText_SingleBattle,
    sText_DoubleBattle,
    sText_MultiBattle,
    sText_TradePokemon,
    sText_Chat,
    sText_DistWonderCard,
    sText_DistWonderNews,
    sText_DistWonderCard,
    sText_HoldPokemonJump,
    sText_HoldBerryCrush,
    sText_HoldBerryPicking,
    sText_HoldBerryPicking,
    sText_HoldSpinTrade,
    sText_HoldSpinShop
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
static const u8 sText_1PlayerNeeded[] = _("Falta 1\njugador.");
static const u8 sText_2PlayersNeeded[] = _("Faltan 2\njugad.");
static const u8 sText_3PlayersNeeded[] = _("Faltan 3\njugad.");
static const u8 sText_4PlayersNeeded[] = _("あと4にん\nひつよう");
static const u8 sText_2PlayerMode[] = _("MODO DE 2\nJUGADORES");
static const u8 sText_3PlayerMode[] = _("MODO DE 3\nJUGADORES");
static const u8 sText_4PlayerMode[] = _("MODO DE 4\nJUGADORES");
static const u8 sText_5PlayerMode[] = _("MODO DE 5\nJUGADORES");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
static const u8 sText_1PlayerNeeded[] = _("Manca 1\ngiocatore.");
static const u8 sText_2PlayersNeeded[] = _("Mancano 2\ngiocatori.");
static const u8 sText_3PlayersNeeded[] = _("Mancano 3\ngiocatori.");
static const u8 sText_4PlayersNeeded[] = _("あと4にん\nひつよう");
static const u8 sText_2PlayerMode[] = _("MODALITÀ\n2 GIOC.");
static const u8 sText_3PlayerMode[] = _("MODALITÀ\n3 GIOC.");
static const u8 sText_4PlayerMode[] = _("MODALITÀ\n4 GIOC.");
static const u8 sText_5PlayerMode[] = _("MODALITÀ\n5 GIOC.");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
static const u8 sText_1PlayerNeeded[] = _("Manque\n1 J.");
static const u8 sText_2PlayersNeeded[] = _("Manque\n2 J.");
static const u8 sText_3PlayersNeeded[] = _("Manque\n3 J.");
static const u8 sText_4PlayersNeeded[] = _("あと4にん\nひつよう");
static const u8 sText_2PlayerMode[] = _("MODE\n2 JOUEURS");
static const u8 sText_3PlayerMode[] = _("MODE\n3 JOUEURS");
static const u8 sText_4PlayerMode[] = _("MODE\n4 JOUEURS");
static const u8 sText_5PlayerMode[] = _("MODE\n5 JOUEURS");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
static const u8 sText_1PlayerNeeded[] = _("1 Spieler\nnoch.");
static const u8 sText_2PlayersNeeded[] = _("2 Spieler\nnoch.");
static const u8 sText_3PlayersNeeded[] = _("3 Spieler\nnoch.");
static const u8 sText_4PlayersNeeded[] = _("あと4にん\nひつよう");
static const u8 sText_2PlayerMode[] = _("2SPIELER-\nMODUS");
static const u8 sText_3PlayerMode[] = _("3SPIELER-\nMODUS");
static const u8 sText_4PlayerMode[] = _("4SPIELER-\nMODUS");
static const u8 sText_5PlayerMode[] = _("5SPIELER-\nMODUS");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
static const u8 sText_1PlayerNeeded[] = _("1 player\nneeded.");
static const u8 sText_2PlayersNeeded[] = _("2 players\nneeded.");
static const u8 sText_3PlayersNeeded[] = _("3 players\nneeded.");
static const u8 sText_4PlayersNeeded[] = _("あと4にん\nひつよう");
static const u8 sText_2PlayerMode[] = _("2-PLAYER\nMODE");
static const u8 sText_3PlayerMode[] = _("3-PLAYER\nMODE");
static const u8 sText_4PlayerMode[] = _("4-PLAYER\nMODE");
static const u8 sText_5PlayerMode[] = _("5-PLAYER\nMODE");
#endif

const u8 *const gTexts_UR_PlayersNeededOrMode[][5] = {
    { // 2 players required
        sText_1PlayerNeeded,
        sText_2PlayerMode
    },
    { // 4 players required
        sText_3PlayersNeeded,
        sText_2PlayersNeeded,
        sText_1PlayerNeeded,
        sText_4PlayerMode
    },
    { // 2-5 players required
        sText_1PlayerNeeded,
        sText_2PlayerMode,
        sText_3PlayerMode,
        sText_4PlayerMode,
        sText_5PlayerMode
    },
    { // 3-5 players required
        sText_2PlayersNeeded,
        sText_1PlayerNeeded,
        sText_3PlayerMode,
        sText_4PlayerMode,
        sText_5PlayerMode
    }
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) const u8 gText_UR_BButtonCancel[] = _("{B_BUTTON}SALIR");
ALIGNED(4) static const u8 sText_SearchingForParticipants[] = _("ため\nさんかしゃ ぼしゅうちゅう です！");
ALIGNED(4) const u8 gText_UR_PlayerContactedYouForXAccept[] = _("{STR_VAR_2} quiere\n{STR_VAR_1}. ¿Aceptas?");
ALIGNED(4) const u8 gText_UR_PlayerContactedYouShareX[] = _("{STR_VAR_2} se ha conectado.\n¿Compartes {STR_VAR_1}?");
ALIGNED(4) const u8 gText_UR_PlayerContactedYouAddToMembers[] = _("{STR_VAR_2} se ha conectado.\n¿Añadir al grupo?");
ALIGNED(4) const u8 gText_UR_AreTheseMembersOK[] = _("¿Está bien este grupo\npara {STR_VAR_1}?");
ALIGNED(4) const u8 gText_UR_CancelModeWithTheseMembers[] = _("¿Cancelas {STR_VAR_1}\npara este grupo?");
ALIGNED(4) const u8 gText_UR_AnOKWasSentToPlayer[] = _("Se ha enviado el “OK”\na {STR_VAR_1}.");

ALIGNED(4) static const u8 sText_OtherTrainerUnavailableNow[] = _("Parece que el otro ENTRENADOR no\nestá disponible en este momento...\p");
ALIGNED(4) static const u8 sText_CantTransmitTrainerTooFar[] = _("No puedes comunicarte con nadie\nque esté muy lejos.\p");
ALIGNED(4) static const u8 sText_TrainersNotReadyYet[] = _("Hay ENTRENADORES que no están\nlistos todavía.\p");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) const u8 gText_UR_BButtonCancel[] = _("{B_BUTTON}ESCI");
ALIGNED(4) static const u8 sText_SearchingForParticipants[] = _("ため\nさんかしゃ ぼしゅうちゅう です！");
ALIGNED(4) const u8 gText_UR_PlayerContactedYouForXAccept[] = _("{STR_VAR_2} ti ha contattato per\n“{STR_VAR_1}”. Accetti?");
ALIGNED(4) const u8 gText_UR_PlayerContactedYouShareX[] = _("{STR_VAR_2} ti ha contattato.\nCondividi le {STR_VAR_1}?");
ALIGNED(4) const u8 gText_UR_PlayerContactedYouAddToMembers[] = _("{STR_VAR_2} ti ha contattato.\nAggiungi ai partecipanti?");
ALIGNED(4) const u8 gText_UR_AreTheseMembersOK[] = _("{STR_VAR_1}!\nVanno bene questi partecipanti?");
ALIGNED(4) const u8 gText_UR_CancelModeWithTheseMembers[] = _("Annulli MODALITÀ {STR_VAR_1}\ncon questi partecipanti?");
ALIGNED(4) const u8 gText_UR_AnOKWasSentToPlayer[] = _("Inviato “OK”\na {STR_VAR_1}.");

ALIGNED(4) static const u8 sText_OtherTrainerUnavailableNow[] = _("L'altro ALLENATORE non è\ndisponibile al momento.\p");
ALIGNED(4) static const u8 sText_CantTransmitTrainerTooFar[] = _("Non puoi comunicare con un\nALLENATORE troppo distante.\p");
ALIGNED(4) static const u8 sText_TrainersNotReadyYet[] = _("L'altro ALLENATORE o gli altri\nALLENATORI non sono disponibili.\p");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) const u8 gText_UR_BButtonCancel[] = _("{B_BUTTON}RETOUR");
ALIGNED(4) static const u8 sText_SearchingForParticipants[] = _("ため\nさんかしゃ ぼしゅうちゅう です！");
ALIGNED(4) const u8 gText_UR_PlayerContactedYouForXAccept[] = _("{STR_VAR_2} vous contacte pour un\n{STR_VAR_1}. Accepter?");
ALIGNED(4) const u8 gText_UR_PlayerContactedYouShareX[] = _("{STR_VAR_2} vous a contacté.\nPartager {STR_VAR_1}?");
ALIGNED(4) const u8 gText_UR_PlayerContactedYouAddToMembers[] = _("{STR_VAR_2} vous a contacté.\nL'ajouter aux membres?");
ALIGNED(4) const u8 gText_UR_AreTheseMembersOK[] = _("{STR_VAR_1}!\nOK avec ces membres?");
ALIGNED(4) const u8 gText_UR_CancelModeWithTheseMembers[] = _("Annuler le MODE {STR_VAR_1}\navec ces membres?");
ALIGNED(4) const u8 gText_UR_AnOKWasSentToPlayer[] = _("“OK” a été envoyé\nà {STR_VAR_1}.");

ALIGNED(4) static const u8 sText_OtherTrainerUnavailableNow[] = _("L'autre DRESSEUR ne semble\npas être disponible…\p");
ALIGNED(4) static const u8 sText_CantTransmitTrainerTooFar[] = _("Transmission impossible avec\nun DRESSEUR trop éloigné.\p");
ALIGNED(4) static const u8 sText_TrainersNotReadyYet[] = _("Tous les DRESSEURS\nne sont pas prêts.\p");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) const u8 gText_UR_BButtonCancel[] = _("{B_BUTTON}ZURÜCK");
ALIGNED(4) static const u8 sText_SearchingForParticipants[] = _("ため\nさんかしゃ ぼしゅうちゅう です！");
ALIGNED(4) const u8 gText_UR_PlayerContactedYouForXAccept[] = _("{STR_VAR_2} fragt bei dir nach\n{STR_VAR_1}. Annehmen?");
ALIGNED(4) const u8 gText_UR_PlayerContactedYouShareX[] = _("{STR_VAR_2} ist bereit. Möchtest\ndu {STR_VAR_1} teilen?");
ALIGNED(4) const u8 gText_UR_PlayerContactedYouAddToMembers[] = _("{STR_VAR_2} ist bereit.\nAls Mitglied aufnehmen?");
ALIGNED(4) const u8 gText_UR_AreTheseMembersOK[] = _("{STR_VAR_1}!\nSind das die Mitglieder?");
ALIGNED(4) const u8 gText_UR_CancelModeWithTheseMembers[] = _("{STR_VAR_1}-MODUS mit\ndiesen Mitgliedern beenden?");
ALIGNED(4) const u8 gText_UR_AnOKWasSentToPlayer[] = _("{STR_VAR_1} wurde “O.K.”\nübersandt.");

ALIGNED(4) static const u8 sText_OtherTrainerUnavailableNow[] = _("Es scheint, der andere TRAINER\nist momentan nicht bereit…\p");
ALIGNED(4) static const u8 sText_CantTransmitTrainerTooFar[] = _("Mit einem TRAINER, der so weit\nentfernt ist, kannst du keinen\lKontakt aufnehmen.\l");
ALIGNED(4) static const u8 sText_TrainersNotReadyYet[] = _("Der/die andere(n) TRAINER\nist/sind noch nicht bereit.\p");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) const u8 gText_UR_BButtonCancel[] = _("{B_BUTTON}CANCEL");
ALIGNED(4) static const u8 sText_SearchingForParticipants[] = _("ため\nさんかしゃ ぼしゅうちゅう です！");
ALIGNED(4) const u8 gText_UR_PlayerContactedYouForXAccept[] = _("{STR_VAR_2} contacted you for\n{STR_VAR_1}. Accept?");
ALIGNED(4) const u8 gText_UR_PlayerContactedYouShareX[] = _("{STR_VAR_2} contacted you.\nWill you share {STR_VAR_1}?");
ALIGNED(4) const u8 gText_UR_PlayerContactedYouAddToMembers[] = _("{STR_VAR_2} contacted you.\nAdd to the members?");
ALIGNED(4) const u8 gText_UR_AreTheseMembersOK[] = _("{STR_VAR_1}!\nAre these members OK?");
ALIGNED(4) const u8 gText_UR_CancelModeWithTheseMembers[] = _("Cancel {STR_VAR_1} MODE\nwith these members?");
ALIGNED(4) const u8 gText_UR_AnOKWasSentToPlayer[] = _("An “OK” was sent\nto {STR_VAR_1}.");

ALIGNED(4) static const u8 sText_OtherTrainerUnavailableNow[] = _("The other TRAINER doesn't appear\nto be available now…\p");
ALIGNED(4) static const u8 sText_CantTransmitTrainerTooFar[] = _("You can't transmit with a TRAINER\nwho is too far away.\p");
ALIGNED(4) static const u8 sText_TrainersNotReadyYet[] = _("The other TRAINER(S) is/are not\nready yet.\p");
#endif

const u8 *const gTexts_UR_CantTransmitToTrainer[] = {
    sText_CantTransmitTrainerTooFar,
    sText_TrainersNotReadyYet
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) const u8 gText_UR_ModeWithTheseMembersWillBeCanceled[] = _("Se cancelará {STR_VAR_1}\npara este grupo.{PAUSE 90}");
ALIGNED(4) static const u8 sText_MemberNoLongerAvailable[] = _("Hay un miembro del grupo que\nno puede seguir disponible.\p");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) const u8 gText_UR_ModeWithTheseMembersWillBeCanceled[] = _("La MODALITÀ {STR_VAR_1} con\nquesti partecipanti sarà annullata.{PAUSE 90}");
ALIGNED(4) static const u8 sText_MemberNoLongerAvailable[] = _("Uno dei partecipanti non può\ncontinuare.\p");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) const u8 gText_UR_ModeWithTheseMembersWillBeCanceled[] = _("Le MODE {STR_VAR_1} avec\nces membres va être annulé.{PAUSE}Í");
ALIGNED(4) static const u8 sText_MemberNoLongerAvailable[] = _("Un des membres ne sera\nbientôt plus disponible.\p");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) const u8 gText_UR_ModeWithTheseMembersWillBeCanceled[] = _("Der {STR_VAR_1}-MODUS mit\ndiesen Mitgliedern wird\labgebrochen.{PAUSE 90}");
ALIGNED(4) static const u8 sText_MemberNoLongerAvailable[] = _("Es gibt ein Mitglied, das nicht\nmehr teilnehmen kann.\p");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) const u8 gText_UR_ModeWithTheseMembersWillBeCanceled[] = _("The {STR_VAR_1} MODE with\nthese members will be canceled.{PAUSE 90}");
ALIGNED(4) static const u8 sText_MemberNoLongerAvailable[] = _("There is a member who can no\nlonger remain available.\p");
#endif

const u8 *const gTexts_UR_PlayerUnavailable[] = {
    sText_OtherTrainerUnavailableNow,
    sText_MemberNoLongerAvailable
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) static const u8 sText_TrainerAppearsUnavailable[] = _("No parece que el otro ENTRENADOR\nesté disponible...\p");
ALIGNED(4) const u8 gText_UR_PlayerSentBackOK[] = _("¡{STR_VAR_1} envió\ntambién un “OK”!");
ALIGNED(4) const u8 gText_UR_PlayerOKdRegistration[] = _("{STR_VAR_1} te ha\nadmitido en el grupo.");
ALIGNED(4) static const u8 sText_PlayerRepliedNo[] = _("{STR_VAR_1} responde\ncon un “No”...\p");
ALIGNED(4) const u8 gText_UR_AwaitingOtherMembers[] = _("Para la opción {STR_VAR_1},\nfaltan jugadores.");
ALIGNED(4) const u8 gText_UR_QuitBeingMember[] = _("¿Te sales del grupo?");
ALIGNED(4) static const u8 sText_StoppedBeingMember[] = _("Ya no eres del grupo.\p");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) static const u8 sText_TrainerAppearsUnavailable[] = _("L'altro ALLENATORE non è\ndisponibile.\p");
ALIGNED(4) const u8 gText_UR_PlayerSentBackOK[] = _("{STR_VAR_1} ha risposto con un\n“OK”!");
ALIGNED(4) const u8 gText_UR_PlayerOKdRegistration[] = _("{STR_VAR_1} ti ha accettato tra i\npartecipanti.");
ALIGNED(4) static const u8 sText_PlayerRepliedNo[] = _("{STR_VAR_1} ha risposto con un\n“no”!\p");
ALIGNED(4) const u8 gText_UR_AwaitingOtherMembers[] = _("{STR_VAR_1}!\nIn attesa di altri partecipanti…");
ALIGNED(4) const u8 gText_UR_QuitBeingMember[] = _("Vuoi uscire?");
ALIGNED(4) static const u8 sText_StoppedBeingMember[] = _("Non sei più tra i partecipanti.\p");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) static const u8 sText_TrainerAppearsUnavailable[] = _("L'autre DRESSEUR est\nindisponible…\p");
ALIGNED(4) const u8 gText_UR_PlayerSentBackOK[] = _("{STR_VAR_1} renvoie un “OK”!");
ALIGNED(4) const u8 gText_UR_PlayerOKdRegistration[] = _("{STR_VAR_1} vous accepte comme\nmembre.");
ALIGNED(4) static const u8 sText_PlayerRepliedNo[] = _("{STR_VAR_1} répond “Non…”.\p");
ALIGNED(4) const u8 gText_UR_AwaitingOtherMembers[] = _("{STR_VAR_1}!\nAttente d'autres membres!");
ALIGNED(4) const u8 gText_UR_QuitBeingMember[] = _("Se désinscrire?");
ALIGNED(4) static const u8 sText_StoppedBeingMember[] = _("Vous n'êtes plus membre.\p");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) static const u8 sText_TrainerAppearsUnavailable[] = _("Es scheint, der andere TRAINER\nist momentan nicht bereit…\p");
ALIGNED(4) const u8 gText_UR_PlayerSentBackOK[] = _("{STR_VAR_1} antwortet “O.K.”");
ALIGNED(4) const u8 gText_UR_PlayerOKdRegistration[] = _("{STR_VAR_1} hat dich als Mitglied\naufgenommen.");
ALIGNED(4) static const u8 sText_PlayerRepliedNo[] = _("{STR_VAR_1} antwortet…\n“NEIN…”\l");
ALIGNED(4) const u8 gText_UR_AwaitingOtherMembers[] = _("{STR_VAR_1}!\nWarte auf weitere Mitglieder!");
ALIGNED(4) const u8 gText_UR_QuitBeingMember[] = _("Mitgliedschaft beenden?");
ALIGNED(4) static const u8 sText_StoppedBeingMember[] = _("Du bist kein Mitglied mehr.\p");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) static const u8 sText_TrainerAppearsUnavailable[] = _("The other TRAINER appears\nunavailable…\p");
ALIGNED(4) const u8 gText_UR_PlayerSentBackOK[] = _("{STR_VAR_1} sent back an “OK”!");
ALIGNED(4) const u8 gText_UR_PlayerOKdRegistration[] = _("{STR_VAR_1} OK'd your registration as\na member.");
ALIGNED(4) static const u8 sText_PlayerRepliedNo[] = _("{STR_VAR_1} replied, “No…”\p");
ALIGNED(4) const u8 gText_UR_AwaitingOtherMembers[] = _("{STR_VAR_1}!\nAwaiting other members!");
ALIGNED(4) const u8 gText_UR_QuitBeingMember[] = _("Quit being a member?");
ALIGNED(4) static const u8 sText_StoppedBeingMember[] = _("You stopped being a member.\p");
#endif

const u8 *const gTexts_UR_PlayerDisconnected[] = {
    [RFU_STATUS_OK]                  = NULL,
    [RFU_STATUS_FATAL_ERROR]         = sText_MemberNoLongerAvailable,
    [RFU_STATUS_CONNECTION_ERROR]    = sText_TrainerAppearsUnavailable,
    [RFU_STATUS_CHILD_SEND_COMPLETE] = NULL,
    [RFU_STATUS_NEW_CHILD_DETECTED]  = NULL,
    [RFU_STATUS_JOIN_GROUP_OK]       = NULL,
    [RFU_STATUS_JOIN_GROUP_NO]       = sText_PlayerRepliedNo,
    [RFU_STATUS_WAIT_ACK_JOIN_GROUP] = NULL,
    [RFU_STATUS_LEAVE_GROUP_NOTICE]  = NULL,
    [RFU_STATUS_LEAVE_GROUP]         = sText_StoppedBeingMember
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) const u8 gText_UR_WirelessLinkEstablished[] = _("Se ha establecido la COMUNICACIÓN\nINALÁMBRICA.");
ALIGNED(4) const u8 gText_UR_WirelessLinkDropped[] = _("Se ha cortado la COMUNICACIÓN\nINALÁMBRICA.");
ALIGNED(4) const u8 gText_UR_LinkWithFriendDropped[] = _("Se ha perdido la comunicación\ncon tu amigo...");
ALIGNED(4) static const u8 sText_PlayerRepliedNo2[] = _("{STR_VAR_1} contesta\nque “No”...");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) const u8 gText_UR_WirelessLinkEstablished[] = _("Stabilito collegamento SISTEMA\nCOMUNICAZIONE WIRELESS.");
ALIGNED(4) const u8 gText_UR_WirelessLinkDropped[] = _("Interrotto collegamento SISTEMA\nCOMUNICAZIONE WIRELESS.");
ALIGNED(4) const u8 gText_UR_LinkWithFriendDropped[] = _("Il collegamento è stato interrotto.");
ALIGNED(4) static const u8 sText_PlayerRepliedNo2[] = _("{STR_VAR_1} ha risposto\ncon un “no…”");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) const u8 gText_UR_WirelessLinkEstablished[] = _("Le réseau de COMMUNICATION SANS\nFIL a été établi.");
ALIGNED(4) const u8 gText_UR_WirelessLinkDropped[] = _("Le réseau de COMMUNICATION SANS\nFIL a été interrompu.");
ALIGNED(4) const u8 gText_UR_LinkWithFriendDropped[] = _("Le link avec votre ami a été\ninterrompu…");
ALIGNED(4) static const u8 sText_PlayerRepliedNo2[] = _("{STR_VAR_1} répond “Non…”.");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) const u8 gText_UR_WirelessLinkEstablished[] = _("Das DRAHTLOSE KOMMUNIKATIONS-\nSYSTEM wurde aufgebaut.");
ALIGNED(4) const u8 gText_UR_WirelessLinkDropped[] = _("Das DRAHTLOSE KOMMUNIKATIONS-\nSYSTEM wurde eingestellt…");
ALIGNED(4) const u8 gText_UR_LinkWithFriendDropped[] = _("Die Verbindung zu deinem Freund\nwurde gekappt…");
ALIGNED(4) static const u8 sText_PlayerRepliedNo2[] = _("{STR_VAR_1} antwortet…\n“NEIN…”");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) const u8 gText_UR_WirelessLinkEstablished[] = _("The WIRELESS COMMUNICATION\nSYSTEM link has been established.");
ALIGNED(4) const u8 gText_UR_WirelessLinkDropped[] = _("The WIRELESS COMMUNICATION\nSYSTEM link has been dropped…");
ALIGNED(4) const u8 gText_UR_LinkWithFriendDropped[] = _("The link with your friend has been\ndropped…");
ALIGNED(4) static const u8 sText_PlayerRepliedNo2[] = _("{STR_VAR_1} replied, “No…”");
#endif

const u8 *const gTexts_UR_LinkDropped[] = {
    [RFU_STATUS_OK]                  = NULL,
    [RFU_STATUS_FATAL_ERROR]         = gText_UR_LinkWithFriendDropped,
    [RFU_STATUS_CONNECTION_ERROR]    = gText_UR_LinkWithFriendDropped,
    [RFU_STATUS_CHILD_SEND_COMPLETE] = NULL,
    [RFU_STATUS_NEW_CHILD_DETECTED]  = NULL,
    [RFU_STATUS_JOIN_GROUP_OK]       = NULL,
    [RFU_STATUS_JOIN_GROUP_NO]       = sText_PlayerRepliedNo2,
    [RFU_STATUS_WAIT_ACK_JOIN_GROUP] = NULL,
    [RFU_STATUS_LEAVE_GROUP_NOTICE]  = NULL,
    [RFU_STATUS_LEAVE_GROUP]         = NULL
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) static const u8 sText_DoYouWantXMode[] = _("¿Eliges {STR_VAR_2}?");
ALIGNED(4) static const u8 sText_DoYouWantXMode2[] = _("¿Eliges {STR_VAR_2}?");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) static const u8 sText_DoYouWantXMode[] = _("Vuoi la MODALITÀ\n{STR_VAR_2}?");
ALIGNED(4) static const u8 sText_DoYouWantXMode2[] = _("Vuoi la MODALITÀ\n{STR_VAR_2}?");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) static const u8 sText_DoYouWantXMode[] = _("Voulez-vous le MODE\n{STR_VAR_2}?");
ALIGNED(4) static const u8 sText_DoYouWantXMode2[] = _("Voulez-vous le MODE\n{STR_VAR_2}?");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) static const u8 sText_DoYouWantXMode[] = _("In den {STR_VAR_2}-MODUS\nschalten?");
ALIGNED(4) static const u8 sText_DoYouWantXMode2[] = _("In den {STR_VAR_2}-MODUS\nschalten?");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) static const u8 sText_DoYouWantXMode[] = _("Do you want the {STR_VAR_2}\nMODE?");
ALIGNED(4) static const u8 sText_DoYouWantXMode2[] = _("Do you want the {STR_VAR_2}\nMODE?");
#endif

// Unused
static const u8 *const sDoYouWantModeTexts[] = {
    sText_DoYouWantXMode,
    sText_DoYouWantXMode2
};

ALIGNED(4) static const u8 sText_CommunicatingPleaseWait[] = _("はなしかけています…\nしょうしょう おまちください"); // Unused
#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) const u8 gText_UR_AwaitingPlayersResponseAboutTrade[] = _("Esperando la respuesta de {STR_VAR_1}\npara el intercambio...");

ALIGNED(4) static const u8 sText_Communicating[] = _("Comunicando{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_CommunicatingWithPlayer[] = _("Comunicando con {STR_VAR_1}{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_PleaseWaitAWhile[] = _("Un momento{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) const u8 gText_UR_AwaitingPlayersResponseAboutTrade[] = _("In attesa di risposta da {STR_VAR_1}\nsullo scambio…");

ALIGNED(4) static const u8 sText_Communicating[] = _("Comunicazione in corso{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_CommunicatingWithPlayer[] = _("Comunicazione con {STR_VAR_1}{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_PleaseWaitAWhile[] = _("Attendi{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) const u8 gText_UR_AwaitingPlayersResponseAboutTrade[] = _("Attente d'une réponse de {STR_VAR_1}\npour l'échange…");

ALIGNED(4) static const u8 sText_Communicating[] = _("Communication en cours{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_CommunicatingWithPlayer[] = _("Communication avec {STR_VAR_1}{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_PleaseWaitAWhile[] = _("Patienter un instant{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) const u8 gText_UR_AwaitingPlayersResponseAboutTrade[] = _("Warten auf die Antwort von {STR_VAR_1}\nbezüglich des Tauschs…");

ALIGNED(4) static const u8 sText_Communicating[] = _("Verbinden...{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_CommunicatingWithPlayer[] = _("Verbinden mit {STR_VAR_1}...{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_PleaseWaitAWhile[] = _("Bitte warten auf...{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) const u8 gText_UR_AwaitingPlayersResponseAboutTrade[] = _("Awaiting {STR_VAR_1}'s response about\nthe trade…");

ALIGNED(4) static const u8 sText_Communicating[] = _("Communicating{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_CommunicatingWithPlayer[] = _("Communicating with {STR_VAR_1}{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_PleaseWaitAWhile[] = _("Please wait a while{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
#endif

const u8 *const gTexts_UR_CommunicatingWait[] = {
    sText_Communicating,
    sText_CommunicatingWithPlayer,
    sText_PleaseWaitAWhile
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) static const u8 sText_HiDoSomethingMale[] = _("¡Hola! ¿Querías algo?");
ALIGNED(4) static const u8 sText_HiDoSomethingFemale[] = _("¿Qué tal? ¿Quieres algo?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainMale[] = _("{STR_VAR_1}: ¡Anda,\ncoincidimos de nuevo! ¿Y bien?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainFemale[] = _("{STR_VAR_1}: ¡Eh, {PLAYER}!\n¿Qué te gustaría hacer?");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) static const u8 sText_HiDoSomethingMale[] = _("Ciao! Che cosa vuoi fare?");
ALIGNED(4) static const u8 sText_HiDoSomethingFemale[] = _("Ehi, ciao! Che cosa vuoi fare?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainMale[] = _("{STR_VAR_1}: Ciao, ci si rincontra!\nCosa vuoi fare questa volta?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainFemale[] = _("{STR_VAR_1}: Ciao, {PLAYER}!\nChe cosa vuoi fare?");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) static const u8 sText_HiDoSomethingMale[] = _("Salut! Vous vouliez quelque chose?");
ALIGNED(4) static const u8 sText_HiDoSomethingFemale[] = _("Bonjour jeune fille.\nJe peux vous aider?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainMale[] = _("{STR_VAR_1}: Content de vous revoir!\nQu'est-ce que ça sera cette fois?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainFemale[] = _("{STR_VAR_1}: Oh! Bonjour, {PLAYER}!\nVous désirez quelque chose?");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) static const u8 sText_HiDoSomethingMale[] = _("Heho! Gibt es etwas, was du\ntun wolltest?");
ALIGNED(4) static const u8 sText_HiDoSomethingFemale[] = _("Hallo!\nMöchtest du etwas unternehmen?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainMale[] = _("{STR_VAR_1}: Wir treffen uns wieder!\nWas darf es dieses Mal sein?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainFemale[] = _("{STR_VAR_1}: Oh! {PLAYER}!\nMöchtest du etwas unternehmen?");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) static const u8 sText_HiDoSomethingMale[] = _("Hiya! Is there something that you\nwanted to do?");
ALIGNED(4) static const u8 sText_HiDoSomethingFemale[] = _("Hello!\nWould you like to do something?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainMale[] = _("{STR_VAR_1}: Hiya, we meet again!\nWhat are you up for this time?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainFemale[] = _("{STR_VAR_1}: Oh! {PLAYER}, hello!\nWould you like to do something?");
#endif

const u8 *const gTexts_UR_HiDoSomething[][GENDER_COUNT] = {
    {
        sText_HiDoSomethingMale,
        sText_HiDoSomethingFemale
    }, {
        sText_HiDoSomethingAgainMale,
        sText_HiDoSomethingAgainFemale
    }
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) static const u8 sText_DoSomethingMale[] = _("¿Quieres hacer algo?");
ALIGNED(4) static const u8 sText_DoSomethingFemale[] = _("¿Te gustaría hacer algo?");
ALIGNED(4) static const u8 sText_DoSomethingAgainMale[] = _("{STR_VAR_1}: ¿Qué\nte apetecería hacer?");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) static const u8 sText_DoSomethingMale[] = _("Che cosa vuoi fare?");
ALIGNED(4) static const u8 sText_DoSomethingFemale[] = _("Che cosa vuoi fare?");
ALIGNED(4) static const u8 sText_DoSomethingAgainMale[] = _("{STR_VAR_1}: Che cosa vuoi fare ora?");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) static const u8 sText_DoSomethingMale[] = _("Quelque chose vous tente?");
ALIGNED(4) static const u8 sText_DoSomethingFemale[] = _("Vous désirez quelque chose?");
ALIGNED(4) static const u8 sText_DoSomethingAgainMale[] = _("{STR_VAR_1}: Qu'est-ce que vous\nvoulez faire maintenant?");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) static const u8 sText_DoSomethingMale[] = _("Möchtest du etwas unternehmen?");
ALIGNED(4) static const u8 sText_DoSomethingFemale[] = _("Möchtest du etwas unternehmen?");
ALIGNED(4) static const u8 sText_DoSomethingAgainMale[] = _("{STR_VAR_1}: Was möchtest du jetzt\nunternehmen?");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) static const u8 sText_DoSomethingMale[] = _("Want to do something?");
ALIGNED(4) static const u8 sText_DoSomethingFemale[] = _("Would you like to do something?");
ALIGNED(4) static const u8 sText_DoSomethingAgainMale[] = _("{STR_VAR_1}: What would you like to\ndo now?");
#endif
ALIGNED(4) static const u8 sText_DoSomethingAgainFemale[] = _("{STR_VAR_1}‘また なにかする？");

// Unused
static const u8 *const sDoSomethingTexts[][GENDER_COUNT] = {
    {
        sText_DoSomethingMale,
        sText_DoSomethingFemale
    }, {
        sText_DoSomethingAgainMale,
        sText_DoSomethingAgainMale // was probably supposed to be sText_DoSomethingAgainFemale
    }
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) static const u8 sText_SomebodyHasContactedYou[] = _("Se están comunicando contigo.{PAUSE 60}");
ALIGNED(4) static const u8 sText_PlayerHasContactedYou[] = _("{STR_VAR_1} está\nen conexión contigo.{PAUSE 60}");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) static const u8 sText_SomebodyHasContactedYou[] = _("Qualcuno ti ha contattato.{PAUSE 60}");
ALIGNED(4) static const u8 sText_PlayerHasContactedYou[] = _("{STR_VAR_1} ti ha contattato.{PAUSE 60}");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) static const u8 sText_SomebodyHasContactedYou[] = _("Quelqu'un vous contacte.{PAUSE 60}");
ALIGNED(4) static const u8 sText_PlayerHasContactedYou[] = _("{STR_VAR_1} essaie de vous contacter.{PAUSE 60}");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) static const u8 sText_SomebodyHasContactedYou[] = _("Jemand fragt nach dir.{PAUSE 0x3C}");
ALIGNED(4) static const u8 sText_PlayerHasContactedYou[] = _("{STR_VAR_1} fragt nach dir.{PAUSE 0x3C}");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) static const u8 sText_SomebodyHasContactedYou[] = _("Somebody has contacted you.{PAUSE 60}");
ALIGNED(4) static const u8 sText_PlayerHasContactedYou[] = _("{STR_VAR_1} has contacted you.{PAUSE 60}");
#endif

const u8 *const gTexts_UR_PlayerContactedYou[] = {
    sText_SomebodyHasContactedYou,
    sText_PlayerHasContactedYou
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer[] = _("Esperando respuesta del otro\nENTRENADOR...");
ALIGNED(4) static const u8 sText_AwaitingResponseFromPlayer[] = _("Esperando respuesta de\n{STR_VAR_1}...");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer[] = _("In attesa di risposta\ndall'altro ALLENATORE…");
ALIGNED(4) static const u8 sText_AwaitingResponseFromPlayer[] = _("In attesa di risposta\nda {STR_VAR_1}…");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer[] = _("En attente d'une réponse de\nl'autre DRESSEUR…");
ALIGNED(4) static const u8 sText_AwaitingResponseFromPlayer[] = _("En attente d'une réponse de\n{STR_VAR_1}…");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer[] = _("Warten auf eine Antwort\ndes anderen TRAINERs…");
ALIGNED(4) static const u8 sText_AwaitingResponseFromPlayer[] = _("Warten auf eine Antwort\nvon {STR_VAR_1}…");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer[] = _("Awaiting a response from\nthe other TRAINER…");
ALIGNED(4) static const u8 sText_AwaitingResponseFromPlayer[] = _("Awaiting a response from\n{STR_VAR_1}…");
#endif

const u8 *const gTexts_UR_AwaitingResponse[] = {
    sText_AwaitingResponseFromTrainer,
    sText_AwaitingResponseFromPlayer
};

ALIGNED(4) static const u8 sText_AwaitingResponseCancelBButton[] = _("あいての ていあんを まっています\nビーボタンで キャンセル");

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) const u8 gText_UR_ShowTrainerCard[] = _("El otro ENTRENADOR te ha mostrado\nsu FICHA de ENTRENADOR.\p¿Quieres enseñarle la tuya?");
ALIGNED(4) const u8 gText_UR_BattleChallenge[] = _("El otro ENTRENADOR te reta\na luchar.\p¿Aceptas el desafío?");
ALIGNED(4) const u8 gText_UR_ChatInvitation[] = _("El otro ENTRENADOR te invita\na chatear.\p¿Te apetece chatear un rato?");
ALIGNED(4) const u8 gText_UR_OfferToTradeMon[] = _("Te proponen cambiar tu {DYNAMIC 0x01}\nde nivel {DYNAMIC 0x00}\ppor {DYNAMIC 0x03},\nde nivel {DYNAMIC 0x02}.\p¿Te parece buen trato?");
ALIGNED(4) const u8 gText_UR_OfferToTradeEgg[] = _("Hay alguien que quiere el\nHUEVO que tienes registrado.\l¿Se lo das?");
ALIGNED(4) const u8 gText_UR_ChatDropped[] = _("Se ha interrumpido el chat.\p");
ALIGNED(4) const u8 gText_UR_OfferDeclined1[] = _("Has decidido que no.\p");
ALIGNED(4) const u8 gText_UR_OfferDeclined2[] = _("Has decidido que no.\p");
ALIGNED(4) const u8 gText_UR_ChatEnded[] = _("Se ha finalizado el chat.\p");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) const u8 gText_UR_ShowTrainerCard[] = _("L'altro ALLENATORE ti ha mostrato\nla sua SCHEDA ALLENATORE.\pVuoi mostrargli la tua SCHEDA\nALLENATORE?");
ALIGNED(4) const u8 gText_UR_BattleChallenge[] = _("L'altro ALLENATORE ti sfida\na lottare.\pAccetti la sfida?");
ALIGNED(4) const u8 gText_UR_ChatInvitation[] = _("L'altro ALLENATORE ti invita\na chattare.\pAccetti l'invito?");
ALIGNED(4) const u8 gText_UR_OfferToTradeMon[] = _("Ricevuta offerta di scambio: il tuo\n{DYNAMIC 1} del L. {DYNAMIC 0} registrato\pper {DYNAMIC 3} del L. {DYNAMIC 2}.\pAccetti l'offerta?");
ALIGNED(4) const u8 gText_UR_OfferToTradeEgg[] = _("Ricevuta offerta di scambio\nper il tuo UOVO registrato.\lAccetti l'offerta?");
ALIGNED(4) const u8 gText_UR_ChatDropped[] = _("La chat è stata interrotta.\p");
ALIGNED(4) const u8 gText_UR_OfferDeclined1[] = _("Hai rifiutato l'offerta.\p");
ALIGNED(4) const u8 gText_UR_OfferDeclined2[] = _("Hai rifiutato l'offerta.\p");
ALIGNED(4) const u8 gText_UR_ChatEnded[] = _("La chat è stata conclusa.\p");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) const u8 gText_UR_ShowTrainerCard[] = _("L'autre DRESSEUR vous montre\nsa CARTE DE DRESSEUR.\pVoulez-vous montrer votre\nCARTE DE DRESSEUR?");
ALIGNED(4) const u8 gText_UR_BattleChallenge[] = _("L'autre DRESSEUR veut se\nbattre contre vous.\pAccepter le combat?");
ALIGNED(4) const u8 gText_UR_ChatInvitation[] = _("L'autre DRESSEUR vous invite\nà discuter.\pAccepter l'invitation?");
ALIGNED(4) const u8 gText_UR_OfferToTradeMon[] = _("Il y a une offre d'échange pour\nvotre {DYNAMIC 1} de N. {DYNAMIC} \pcontre un\n{DYNAMIC 3} de N. {DYNAMIC 2}.\pAccepter l'échange?");
ALIGNED(4) const u8 gText_UR_OfferToTradeEgg[] = _("Il y a une offre d'échange pour\nvotre OEUF enregistré.\lAccepter l'offre d'échange?");
ALIGNED(4) const u8 gText_UR_ChatDropped[] = _("Le tchat est abandonné.");
ALIGNED(4) const u8 gText_UR_OfferDeclined1[] = _("Vous déclinez l'offre.\p");
ALIGNED(4) const u8 gText_UR_OfferDeclined2[] = _("L'offre est déclinée.\p");
ALIGNED(4) const u8 gText_UR_ChatEnded[] = _("La discussion est terminée.");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) const u8 gText_UR_ShowTrainerCard[] = _("Der andere TRAINER hat dir\nden TRAINERPASS gezeigt.\pMöchtest du deinen TRAINERPASS\nauch zeigen?");
ALIGNED(4) const u8 gText_UR_BattleChallenge[] = _("Der andere TRAINER fordert\ndich zum Kampf heraus.\pMöchtest du die Herausforderung\nannehmen?");
ALIGNED(4) const u8 gText_UR_ChatInvitation[] = _("Der andere TRAINER lädt dich\nin den Chat ein.\pMöchtest du diese Einladung\nannehmen?");
ALIGNED(4) const u8 gText_UR_OfferToTradeMon[] = _("Es gibt ein Angebot dein\n{DYNAMIC 0x01} mit Level {DYNAMIC 0x00} von\lder Liste gegen\lein {DYNAMIC 0x03} mit Level\l{DYNAMIC 0x02} zu tauschen.\pMöchtest du dieses Angebot\nannehmen.");
ALIGNED(4) const u8 gText_UR_OfferToTradeEgg[] = _("Es gibt ein Angebot für dein\nEI auf der Liste.\lMöchtest du das Angebot annehmen?");
ALIGNED(4) const u8 gText_UR_ChatDropped[] = _("Der Chat wurde abgebrochen.\p");
ALIGNED(4) const u8 gText_UR_OfferDeclined1[] = _("Du lehnst das Angebot ab.\p");
ALIGNED(4) const u8 gText_UR_OfferDeclined2[] = _("Du lehnst das Angebot ab.\p");
ALIGNED(4) const u8 gText_UR_ChatEnded[] = _("Der Chat wurde beendet.\p");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) const u8 gText_UR_ShowTrainerCard[] = _("The other TRAINER showed\nyou their TRAINER CARD.\pWould you like to show your\nTRAINER CARD?");
ALIGNED(4) const u8 gText_UR_BattleChallenge[] = _("The other TRAINER challenges you\nto battle.\pWill you accept the battle\nchallenge?");
ALIGNED(4) const u8 gText_UR_ChatInvitation[] = _("The other TRAINER invites you\nto chat.\pWill you accept the chat\ninvitation?");
ALIGNED(4) const u8 gText_UR_OfferToTradeMon[] = _("There is an offer to trade your\nregistered Lv. {DYNAMIC 0} {DYNAMIC 1}\pin exchange for a\nLv. {DYNAMIC 2} {DYNAMIC 3}.\pWill you accept this trade\noffer?");
ALIGNED(4) const u8 gText_UR_OfferToTradeEgg[] = _("There is an offer to trade your\nregistered EGG.\lWill you accept this trade offer?");
ALIGNED(4) const u8 gText_UR_ChatDropped[] = _("The chat has been dropped.\p");
ALIGNED(4) const u8 gText_UR_OfferDeclined1[] = _("You declined the offer.\p");
ALIGNED(4) const u8 gText_UR_OfferDeclined2[] = _("You declined the offer.\p");
ALIGNED(4) const u8 gText_UR_ChatEnded[] = _("The chat was ended.\p");
#endif

// Unused
static const u8 *const sInvitationTexts[] = {
    gText_UR_ShowTrainerCard,
    gText_UR_BattleChallenge,
    gText_UR_ChatInvitation,
    gText_UR_OfferToTradeMon
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) static const u8 sText_JoinChatMale[] = _("¡Eh, hola! ¡Estamos chateando!\n¿Te apuntas?");
ALIGNED(4) static const u8 sText_PlayerJoinChatMale[] = _("{STR_VAR_1}: ¡Eh, {PLAYER}!\n¡Estamos chateando!\l¿Te apuntas?");
ALIGNED(4) static const u8 sText_JoinChatFemale[] = _("¡Anda, hola! ¡Estamos chateando!\n¿Te apuntas?");
ALIGNED(4) static const u8 sText_PlayerJoinChatFemale[] = _("{STR_VAR_1}: ¡Hola, {PLAYER}!\n¡Estamos chateando!\l¿Te apuntas?");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) static const u8 sText_JoinChatMale[] = _("Ehi, ciao! Siamo in chat!\nVuoi partecipare?");
ALIGNED(4) static const u8 sText_PlayerJoinChatMale[] = _("{STR_VAR_1}: Ehi, {PLAYER}!\nSiamo in chat!\lVuoi partecipare?");
ALIGNED(4) static const u8 sText_JoinChatFemale[] = _("Ciao! Siamo in chat!\nVuoi partecipare?");
ALIGNED(4) static const u8 sText_PlayerJoinChatFemale[] = _("{STR_VAR_1}: Ciao, {PLAYER}!\nSiamo in chat!\lVuoi partecipare?");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) static const u8 sText_JoinChatMale[] = _("On est en plein dans un tchat.\nTu nous rejoins?");
ALIGNED(4) static const u8 sText_PlayerJoinChatMale[] = _("{STR_VAR_1}: Salut, {PLAYER}!\nOn est en train de tchater.\lTu veux nous rejoindre?");
ALIGNED(4) static const u8 sText_JoinChatFemale[] = _("Bonjour! On est en plein dans\nun tchat. Tu nous rejoins?");
ALIGNED(4) static const u8 sText_PlayerJoinChatFemale[] = _("{STR_VAR_1}: Oh, coucou, {PLAYER}!\nNous sommes en train de tchater.\lTu te joins à nous?");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) static const u8 sText_JoinChatMale[] = _("Oh, heh! Wir chatten gerade.\nMöchtest du mitmachen?");
ALIGNED(4) static const u8 sText_PlayerJoinChatMale[] = _("{STR_VAR_1}: {PLAYER}!\nWir chatten gerade.\lMöchtest du mitmachen?");
ALIGNED(4) static const u8 sText_JoinChatFemale[] = _("Oh hallo! Wir chatten gerade.\nMöchtest du mitmachen?");
ALIGNED(4) static const u8 sText_PlayerJoinChatFemale[] = _("{STR_VAR_1}: {PLAYER}!\nWir chatten gerade.\lMöchtest du mitmachen?");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) static const u8 sText_JoinChatMale[] = _("Oh, hey! We're in a chat right now.\nWant to join us?");
ALIGNED(4) static const u8 sText_PlayerJoinChatMale[] = _("{STR_VAR_1}: Hey, {PLAYER}!\nWe're having a chat right now.\lWant to join us?");
ALIGNED(4) static const u8 sText_JoinChatFemale[] = _("Oh, hi! We're having a chat now.\nWould you like to join us?");
ALIGNED(4) static const u8 sText_PlayerJoinChatFemale[] = _("{STR_VAR_1}: Oh, hi, {PLAYER}!\nWe're having a chat now.\lWould you like to join us?");
#endif

const u8 *const gTexts_UR_JoinChat[][GENDER_COUNT] = {
    {
        sText_JoinChatMale,
        sText_JoinChatFemale
    }, {
        sText_PlayerJoinChatMale,
        sText_PlayerJoinChatFemale
    }
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) const u8 gText_UR_TrainerAppearsBusy[] = _("(?)... Parece que el ENTRENADOR\nestá comunicando...\p");
ALIGNED(4) static const u8 sText_WaitForBattleMale[] = _("Quieres luchar, ¿eh?\nVale, pero dame un poco de tiempo.");
ALIGNED(4) static const u8 sText_WaitForChatMale[] = _("¿Quieres chatear?\nGenial, pero espera un momento.");
ALIGNED(4) static const u8 sText_ShowTrainerCardMale[] = _("¿Te gusta mi FICHA de ENTRENADOR?");
ALIGNED(4) static const u8 sText_WaitForBattleFemale[] = _("¿Un combate? ¡Hecho!\nDeja sólo que me prepare.");
ALIGNED(4) static const u8 sText_WaitForChatFemale[] = _("¿Chatear? ¡Por mí, perfecto!\nDame sólo un segundo.");
ALIGNED(4) static const u8 sText_ShowTrainerCardFemale[] = _("Mira, te dejo que veas mi FICHA\nde ENTRENADOR.");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) const u8 gText_UR_TrainerAppearsBusy[] = _("……\nL'ALLENATORE è\loccupato…\p");
ALIGNED(4) static const u8 sText_WaitForBattleMale[] = _("Una lotta?\nVa bene! Dammi solo un momento!");
ALIGNED(4) static const u8 sText_WaitForChatMale[] = _("Vuoi chattare?\nBenissimo! Dammi solo un momento!");
ALIGNED(4) static const u8 sText_ShowTrainerCardMale[] = _("Senz'altro! Eccoti la mia SCHEDA\nALLENATORE, come saluto!");
ALIGNED(4) static const u8 sText_WaitForBattleFemale[] = _("Una lotta?\nVa bene! Aspetta solo un momento!");
ALIGNED(4) static const u8 sText_WaitForChatFemale[] = _("Vuoi chattare?\nOK, aspetta un momento.");
ALIGNED(4) static const u8 sText_ShowTrainerCardFemale[] = _("Per presentarmi ti mostro la\nmia SCHEDA ALLENATORE!");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) const u8 gText_UR_TrainerAppearsBusy[] = _("……\nLe DRESSEUR est occupé…\p");
ALIGNED(4) static const u8 sText_WaitForBattleMale[] = _("Un combat, hein?\nTrès bien, juste un instant.");
ALIGNED(4) static const u8 sText_WaitForChatMale[] = _("Un tchat?\nPas de problème, juste un instant.");
ALIGNED(4) static const u8 sText_ShowTrainerCardMale[] = _("Pareil pour moi!\nVoilà ma CARTE DE DRESSEUR.");
ALIGNED(4) static const u8 sText_WaitForBattleFemale[] = _("Un combat? Bien sûr!\nJuste un instant, je me prépare.");
ALIGNED(4) static const u8 sText_WaitForChatFemale[] = _("Un tchat?\nPas de problème, juste un instant.");
ALIGNED(4) static const u8 sText_ShowTrainerCardFemale[] = _("On se présente?\nVoilà ma CARTE DE DRESSEUR.");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) const u8 gText_UR_TrainerAppearsBusy[] = _("……\nDer TRAINER scheint beschäftigt…\p");
ALIGNED(4) static const u8 sText_WaitForBattleMale[] = _("Ein Kampf? Moment,\nich brauche noch etwas Zeit.");
ALIGNED(4) static const u8 sText_WaitForChatMale[] = _("Du möchtest chatten?\nKlar, einen Moment noch.");
ALIGNED(4) static const u8 sText_ShowTrainerCardMale[] = _("Gerne! Zum “Gruß” zeige\nich dir meinen TRAINERPASS.");
ALIGNED(4) static const u8 sText_WaitForBattleFemale[] = _("Ein Kampf? Moment,\nich brauche noch etwas Zeit.");
ALIGNED(4) static const u8 sText_WaitForChatFemale[] = _("Du möchtest chatten?\nKlar, einen Moment noch.");
ALIGNED(4) static const u8 sText_ShowTrainerCardFemale[] = _("Als Begrüßung zeige ich dir\nmeinen TRAINERPASS.");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) const u8 gText_UR_TrainerAppearsBusy[] = _("……\nThe TRAINER appears to be busy…\p");
ALIGNED(4) static const u8 sText_WaitForBattleMale[] = _("A battle, huh?\nAll right, just give me some time.");
ALIGNED(4) static const u8 sText_WaitForChatMale[] = _("You want to chat, huh?\nSure, just wait a little.");
ALIGNED(4) static const u8 sText_ShowTrainerCardMale[] = _("Sure thing! As my “Greetings,”\nhere's my TRAINER CARD.");
ALIGNED(4) static const u8 sText_WaitForBattleFemale[] = _("A battle? Of course, but I need\ntime to get ready.");
ALIGNED(4) static const u8 sText_WaitForChatFemale[] = _("Did you want to chat?\nOkay, but please wait a moment.");
ALIGNED(4) static const u8 sText_ShowTrainerCardFemale[] = _("As my introduction, I'll show you\nmy TRAINER CARD.");
#endif

const u8 *const gTexts_UR_WaitOrShowCard[GENDER_COUNT][4] = {
    {
        sText_WaitForBattleMale,
        sText_WaitForChatMale,
        NULL,
        sText_ShowTrainerCardMale
    }, {
        sText_WaitForBattleFemale,
        sText_WaitForChatFemale,
        NULL,
        sText_ShowTrainerCardFemale
    }
};

ALIGNED(4) static const u8 sText_WaitForChatMale2[] = _("チャットだね！\nわかった ちょっと まってて！");
#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) static const u8 sText_DoneWaitingBattleMale[] = _("¡Gracias por esperar!\n¡Empecemos el combate!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatMale[] = _("¡Bueno, a chatear se ha dicho!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingBattleFemale[] = _("Perdona que te haya hecho\nesperar. ¡Ya estoy!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatFemale[] = _("Perdona que te haya hecho\nesperar. ¡A chatear!{PAUSE 60}");
ALIGNED(4) static const u8 sText_TradeWillBeStarted[] = _("El intercambio va a comenzar.{PAUSE 60}");
ALIGNED(4) static const u8 sText_BattleWillBeStarted[] = _("El combate va a comenzar.{PAUSE 60}");
ALIGNED(4) static const u8 sText_EnteringChat[] = _("Entrando en el chat...{PAUSE 60}");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) static const u8 sText_DoneWaitingBattleMale[] = _("Scusa, t'ho fatto attendere!\nDiamo inizio alla lotta!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatMale[] = _("Bene!\nDai, chattiamo un po'!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingBattleFemale[] = _("Scusa, t'ho fatto attendere.\nDai, iniziamo!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatFemale[] = _("Scusa, t'ho fatto attendere.\nDai, chattiamo!{PAUSE 60}");
ALIGNED(4) static const u8 sText_TradeWillBeStarted[] = _("Ha inizio lo scambio.{PAUSE 60}");
ALIGNED(4) static const u8 sText_BattleWillBeStarted[] = _("Ha inizio la lotta.{PAUSE 60}");
ALIGNED(4) static const u8 sText_EnteringChat[] = _("Ha inizio la chat.{PAUSE 60}");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) static const u8 sText_DoneWaitingBattleMale[] = _("Merci d'avoir patienté!\nAllez, commençons le combat!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatMale[] = _("Parfait!\nCommençons le tchat.{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingBattleFemale[] = _("Tu n'as pas trop attendu?\nCommençons!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatFemale[] = _("Tu n'as pas trop attendu?\nCommençons le tchat.{PAUSE 60}");
ALIGNED(4) static const u8 sText_TradeWillBeStarted[] = _("L'échange va commencer.{PAUSE 60}");
ALIGNED(4) static const u8 sText_BattleWillBeStarted[] = _("Le combat va commencer.{PAUSE 60}");
ALIGNED(4) static const u8 sText_EnteringChat[] = _("Début du tchat…{PAUSE 60}");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) static const u8 sText_DoneWaitingBattleMale[] = _("Danke, dass du gewartet hast!\nLass uns beginnen!{PAUSE 0x3C}");
ALIGNED(4) static const u8 sText_DoneWaitingChatMale[] = _("In Ordnung!\nLass uns chatten!{PAUSE 0x3C}");
ALIGNED(4) static const u8 sText_DoneWaitingBattleFemale[] = _("Entschuldige, dass du warten\nmusstest. Lass uns beginnen!{PAUSE 0x3C}");
ALIGNED(4) static const u8 sText_DoneWaitingChatFemale[] = _("Entschuldige, dass du warten\nmusstest. Lass uns chatten!{PAUSE 0x3C}");
ALIGNED(4) static const u8 sText_TradeWillBeStarted[] = _("Der Tausch beginnt.{PAUSE 0x3C}");
ALIGNED(4) static const u8 sText_BattleWillBeStarted[] = _("Der Kampf beginnt.{PAUSE 0x3C}");
ALIGNED(4) static const u8 sText_EnteringChat[] = _("Der Chat beginnt…{PAUSE 0x3C}");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) static const u8 sText_DoneWaitingBattleMale[] = _("Thanks for waiting!\nLet's get our battle started!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatMale[] = _("All right!\nLet's chat!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingBattleFemale[] = _("Sorry I made you wait!\nLet's get started!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatFemale[] = _("Sorry I made you wait!\nLet's chat.{PAUSE 60}");
ALIGNED(4) static const u8 sText_TradeWillBeStarted[] = _("The trade will be started.{PAUSE 60}");
ALIGNED(4) static const u8 sText_BattleWillBeStarted[] = _("The battle will be started.{PAUSE 60}");
ALIGNED(4) static const u8 sText_EnteringChat[] = _("Entering the chat…{PAUSE 60}");
#endif

const u8 *const gTexts_UR_StartActivity[][GENDER_COUNT][3] = {
    {
        {
            sText_BattleWillBeStarted,
            sText_EnteringChat,
            sText_TradeWillBeStarted
        }, {
            sText_BattleWillBeStarted,
            sText_EnteringChat,
            sText_TradeWillBeStarted
        }
    }, {
        {
            sText_DoneWaitingBattleMale,
            sText_DoneWaitingChatMale,
            sText_TradeWillBeStarted
        }, {
            sText_DoneWaitingBattleFemale,
            sText_DoneWaitingChatFemale,
            sText_TradeWillBeStarted
        }
    }
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) static const u8 sText_BattleDeclinedMale[] = _("Lo siento, pero mis POKéMON\nno se encuentran muy allá...\lDejémoslo para otra ocasión.\p");
ALIGNED(4) static const u8 sText_BattleDeclinedFemale[] = _("No sabes cómo lo siento, pero mis\nPOKéMON no se encuentran bien...\lYa lucharemos en otro momento.\p");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) static const u8 sText_BattleDeclinedMale[] = _("Scusa, ma i miei POKéMON non si\nsentono molto bene al momento.\lLotteremo un'altra volta!\p");
ALIGNED(4) static const u8 sText_BattleDeclinedFemale[] = _("Mi spiace, ma i miei POKéMON non\nsi sentono bene in questo momento.\lSarà per un'altra volta!\p");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) static const u8 sText_BattleDeclinedMale[] = _("Dommage! Mes POKéMON ne sont\npas vraiment en forme.\lJe t'écraserai une prochaine fois.\p");
ALIGNED(4) static const u8 sText_BattleDeclinedFemale[] = _("Je suis désolée, mais mes POKéMON\nne se sentent pas bien…\pBattons-nous une prochaine fois!\p");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) static const u8 sText_BattleDeclinedMale[] = _("Entschuldige, aber meine POKéMON\nfühlen sich momentan nicht wohl.\lLass uns ein andermal kämpfen!\p");
ALIGNED(4) static const u8 sText_BattleDeclinedFemale[] = _("Es tut mir schrecklich Leid, aber\nmeine POKéMON fühlen sich\lnicht besonders wohl…\lLass uns ein andermal kämpfen.\p");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) static const u8 sText_BattleDeclinedMale[] = _("Sorry! My POKéMON don't seem to\nbe feeling too well right now.\lLet me battle you another time.\p");
ALIGNED(4) static const u8 sText_BattleDeclinedFemale[] = _("I'm terribly sorry, but my POKéMON\naren't feeling well…\pLet's battle another time.\p");
#endif

const u8 *const gTexts_UR_BattleDeclined[GENDER_COUNT] = {
    sText_BattleDeclinedMale,
    sText_BattleDeclinedFemale
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedMale[] = _("¿Mmm? ¿Dónde habré puesto\nmi FICHA de ENTRENADOR?...\l¡Bueno, otra vez será!\p");
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedFemale[] = _("Eh..., no sé dónde he metido\nmi FICHA de ENTRENADOR...\l¡Te la enseñaré en otra ocasión!\p");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedMale[] = _("Dov'è finita la mia SCHEDA\nALLENATORE?! Scusa, te la\lmostrerò un'altra volta.\p");
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedFemale[] = _("Ma dove avrò messo la mia SCHEDA\nALLENATORE?! Scusa ma non\lte la posso mostrare.\p");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedMale[] = _("Hein? Ma CARTE DE DRESSEUR…\nJ'l'ai mise où?\lTant pis, la prochaine alors!\p");
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedFemale[] = _("Oh! Mais où est passée ma\nCARTE DE DRESSEUR?\lDésolée! La prochaine fois alors!\p");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedMale[] = _("Häh? Mein TRAINERPASS…\nWo ist er denn?\lSorry, ich zeige ihn dir später!\p");
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedFemale[] = _("Oh? Wo habe ich nur meinen\nTRAINERPASS?…\lSorry, ich zeige ihn dir später!\p");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedMale[] = _("Huh? My TRAINER CARD…\nWhere'd it go now?\lSorry! I'll show you another time!\p");
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedFemale[] = _("Oh? Now where did I put my\nTRAINER CARD?…\lSorry! I'll show you later!\p");
#endif

const u8 *const gTexts_UR_ShowTrainerCardDeclined[GENDER_COUNT] = {
    sText_ShowTrainerCardDeclinedMale,
    sText_ShowTrainerCardDeclinedFemale
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingMale[] = _("Cuando quieras que hagamos algo,\n¡ya sabes dónde estoy!\p");
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingFemale[] = _("Cuando quieras que hagamos algo\nme lo dices, ¿eh?\p");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingMale[] = _("Se vuoi chattare, scambiare o\nlottare con me, fammi un fischio.\p");
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingFemale[] = _("Se vuoi chattare, scambiare o\nlottare con me, mi trovi qui.\p");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingMale[] = _("Si tu as besoin de moi,\nfais-moi signe!\p");
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingFemale[] = _("Si tu veux faire un truc, n'hésite\npas à demander.\p");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingMale[] = _("Melde dich bei mir, wenn du\netwas von mir willst!\p");
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingFemale[] = _("Melde dich bei mir, wenn du\netwas von mir willst!\p");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingMale[] = _("If you want to do something with\nme, just give me a shout!\p");
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingFemale[] = _("If you want to do something with\nme, don't be shy.\p");
#endif

const u8 *const gTexts_UR_IfYouWantToDoSomething[GENDER_COUNT] = {
    sText_IfYouWantToDoSomethingMale,
    sText_IfYouWantToDoSomethingFemale
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) const u8 gText_UR_TrainerBattleBusy[] = _("¡Anda, si yo tenía que hacer\nun montón de cosas!\lOtra vez será, ¡lo siento!\p");
ALIGNED(4) const u8 gText_UR_NeedTwoMonsOfLevel30OrLower1[] = _("Para luchar, necesitas dos POKéMON\nde nivel inferior a 30.\p");
ALIGNED(4) const u8 gText_UR_NeedTwoMonsOfLevel30OrLower2[] = _("Si quieres luchar, necesitas dos\nPOKéMON de nivel inferior a 30.\p");

ALIGNED(4) static const u8 sText_DeclineChatMale[] = _("Bueno, hasta la próxima.\p");
ALIGNED(4) static const u8 stext_DeclineChatFemale[] = _("Oh...\nBueno, ya nos veremos.\p");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) const u8 gText_UR_TrainerBattleBusy[] = _("Scusa ma ho qualcos'altro da\nfare. Sarà per la prossima volta!\p");
ALIGNED(4) const u8 gText_UR_NeedTwoMonsOfLevel30OrLower1[] = _("Per lottare, devi avere due\nPOKéMON sotto il L. 30.\p");
ALIGNED(4) const u8 gText_UR_NeedTwoMonsOfLevel30OrLower2[] = _("Puoi lottare se hai due\nPOKéMON sotto il L. 30.\p");

ALIGNED(4) static const u8 sText_DeclineChatMale[] = _("Oh… Va bene.\nTorna a trovarmi quando vuoi!");
ALIGNED(4) static const u8 stext_DeclineChatFemale[] = _("Oh…\nBeh, torna quando vuoi!");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) const u8 gText_UR_TrainerBattleBusy[] = _("Oups! Dommage, j'ai autre \nchose à faire.\lUne autre fois, OK?\p");
ALIGNED(4) const u8 gText_UR_NeedTwoMonsOfLevel30OrLower1[] = _("Si tu veux te battre, il te faut\ndeux POKéMON de niveau\linférieur à 30.\p");
ALIGNED(4) const u8 gText_UR_NeedTwoMonsOfLevel30OrLower2[] = _("Pour combattre, il te faut deux\nPOKéMON de niveau inférieur\là 30.\p");

ALIGNED(4) static const u8 sText_DeclineChatMale[] = _("Bon, OK.\nA la prochaine alors.\p");
ALIGNED(4) static const u8 stext_DeclineChatFemale[] = _("Oh…\nA la prochaine alors.\p");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) const u8 gText_UR_TrainerBattleBusy[] = _("Oh! Entschuldige, aber ich\nmuss noch etwas erledigen.\lEin andermal, o.k.?\p");
ALIGNED(4) const u8 gText_UR_NeedTwoMonsOfLevel30OrLower1[] = _("Für einen Kampf benötigst du\nzwei POKéMON, deren Level\lunter 30 ist.\p");
ALIGNED(4) const u8 gText_UR_NeedTwoMonsOfLevel30OrLower2[] = _("Für einen Kampf benötigst du\nzwei POKéMON, deren Level\lunter 30 ist.\p");

ALIGNED(4) static const u8 sText_DeclineChatMale[] = _("Oh, in Ordnung!\nGib mir einfach Bescheid, o.k.?\p");
ALIGNED(4) static const u8 stext_DeclineChatFemale[] = _("Oh…\nBitte komme jederzeit vorbei.\p");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) const u8 gText_UR_TrainerBattleBusy[] = _("Whoops! Sorry, but I have to do\nsomething else.\lAnother time, okay?\p");
ALIGNED(4) const u8 gText_UR_NeedTwoMonsOfLevel30OrLower1[] = _("If you want to battle, you need\ntwo POKéMON that are below\lLv. 30.\p");
ALIGNED(4) const u8 gText_UR_NeedTwoMonsOfLevel30OrLower2[] = _("For a battle, you need two\nPOKéMON that are below Lv. 30.\p");

ALIGNED(4) static const u8 sText_DeclineChatMale[] = _("Oh, all right.\nCome see me anytime, okay?\p");
ALIGNED(4) static const u8 stext_DeclineChatFemale[] = _("Oh…\nPlease come by anytime.\p");
#endif

// Response from partner when player declines chat
const u8 *const gTexts_UR_DeclineChat[GENDER_COUNT] = {
    sText_DeclineChatMale,
    stext_DeclineChatFemale
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) static const u8 sText_ChatDeclinedMale[] = _("Lo siento, ahora mismo no me\nviene bien.\lYa chatearemos en otro momento.\p");
ALIGNED(4) static const u8 sText_ChatDeclinedFemale[] = _("Lo siento, ahora tengo mucho\nque hacer.\lYa chatearemos en otra ocasión.\p");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) static const u8 sText_ChatDeclinedMale[] = _("Scusa ma non posso in questo\nmomento.\lChatteremo un'altra volta.\p");
ALIGNED(4) static const u8 sText_ChatDeclinedFemale[] = _("Scusa, in questo momento non\nposso proprio. Avremo altre\loccasioni per chattare.\p");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) static const u8 sText_ChatDeclinedMale[] = _("Bon…\nC'est pas vraiment le moment.\lOn tchatera une prochaine fois.\p");
ALIGNED(4) static const u8 sText_ChatDeclinedFemale[] = _("Vraiment navrée.\nJ'ai plein de choses à faire.\lCe sera pour la prochaine fois.\p");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) static const u8 sText_ChatDeclinedMale[] = _("Entschuldigung!\nIch kann gerade nicht.\lLass uns ein andermal chatten.\p");
ALIGNED(4) static const u8 sText_ChatDeclinedFemale[] = _("Entschuldigung!\nIch bin gerade indisponiert!\lLass uns ein andermal chatten.\p");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) static const u8 sText_ChatDeclinedMale[] = _("Oh, sorry!\nI just can't right this instant.\lLet's chat another time.\p");
ALIGNED(4) static const u8 sText_ChatDeclinedFemale[] = _("Oh, I'm sorry.\nI have too much to do right now.\lLet's chat some other time.\p");
#endif

// Response from partner when they decline chat
const u8 *const gTexts_UR_ChatDeclined[GENDER_COUNT] = {
    sText_ChatDeclinedMale,
    sText_ChatDeclinedFemale
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) static const u8 sText_YoureToughMale[] = _("¡Guauuu!\n¡Sí que sois fuertes!\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveMale[] = _("¡Qué movimiento tan genial!\n¡Qué estrategia tan buena!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseMale[] = _("¡Qué pasada!\n¡Alucinante!\p");
ALIGNED(4) static const u8 sText_SwitchedMonsMale[] = _("¿Pero cómo se puede usar a\nese POKéMON en una situación así?\p");
ALIGNED(4) static const u8 sText_YoureToughFemale[] = _("Ese POKéMON sí que está bien\nentrenado...\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveFemale[] = _("¡Eso es! ¡Ése es el movimiento\nque hay que usar aquí!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseFemale[] = _("¡Es impresionante!\n¿Pero cómo se puede luchar así?\p");
ALIGNED(4) static const u8 sText_SwitchedMonsFemale[] = _("¡No se puede cambiar de POKéMON\nen un momento mejor!\p");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) static const u8 sText_YoureToughMale[] = _("Ti ho visto: sei forte!");
ALIGNED(4) static const u8 sText_UsedGoodMoveMale[] = _("Ho visto la mossa che hai\nusato!\lGrande strategia!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseMale[] = _("Così si fa!\nSei stupefacente!\p");
ALIGNED(4) static const u8 sText_SwitchedMonsMale[] = _("Come fai a guidare così bene\ni tuoi POKéMON nella lotta?\p");
ALIGNED(4) static const u8 sText_YoureToughFemale[] = _("Quel tuo POKéMON…\n…è davvero notevole!\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveFemale[] = _("Proprio la mossa giusta!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseFemale[] = _("Incredibile!\nCome fai a lottare in quel modo?\p");
ALIGNED(4) static const u8 sText_SwitchedMonsFemale[] = _("Sai perfettamente quando sostituire\ni POKéMON!\p");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) static const u8 sText_YoureToughMale[] = _("Waouh!\nT'en as dans le ventre!\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveMale[] = _("T'as utilisé cette capacité?\nBonne stratégie!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseMale[] = _("Voilà!\nC'est comme ça qu'y faut faire!\p");
ALIGNED(4) static const u8 sText_SwitchedMonsMale[] = _("Oh! C'est pas le bon moment\npour utiliser ce POKéMON!\p");
ALIGNED(4) static const u8 sText_YoureToughFemale[] = _("Ce POKéMON…\nIl est super bien dressé!\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveFemale[] = _("C'est ça!\nC'est la bonne capacité!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseFemale[] = _("Incroyable!\nTu peux te battre comme ça?\p");
ALIGNED(4) static const u8 sText_SwitchedMonsFemale[] = _("Tu sais vraiment changer de\nPOKéMON au bon moment!\p");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) static const u8 sText_YoureToughMale[] = _("Wow!\nDu bist aber stark!\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveMale[] = _("Du hast diese Attacke benutzt?\nDas ist eine gute Strategie!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseMale[] = _("Auf!\nDas war nur das Vorspiel!\p");
ALIGNED(4) static const u8 sText_SwitchedMonsMale[] = _("Oh! Wie konntest du nur dieses\nPKMN in dieser Situation einsetzen?\p");
ALIGNED(4) static const u8 sText_YoureToughFemale[] = _("Dieses POKéMON…\nEs ist sehr gut trainiert!\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveFemale[] = _("Das ist es! Das ist\ngenau die richtige Attacke jetzt!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseFemale[] = _("Das ist prima!\nDu kannst so kämpfen?\p");
ALIGNED(4) static const u8 sText_SwitchedMonsFemale[] = _("Dein Timing beim POKéMON-\nWechsel war exzellent!\p");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) static const u8 sText_YoureToughMale[] = _("Whoa!\nI can tell you're pretty tough!\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveMale[] = _("You used that move?\nThat's good strategy!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseMale[] = _("Way to go!\nThat was an eye-opener!\p");
ALIGNED(4) static const u8 sText_SwitchedMonsMale[] = _("Oh! How could you use that\nPOKéMON in that situation?\p");
ALIGNED(4) static const u8 sText_YoureToughFemale[] = _("That POKéMON…\nIt's been raised really well!\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveFemale[] = _("That's it!\nThis is the right move now!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseFemale[] = _("That's awesome!\nYou can battle that way?\p");
ALIGNED(4) static const u8 sText_SwitchedMonsFemale[] = _("You have exquisite timing for\nswitching POKéMON!\p");
#endif

const u8 *const gTexts_UR_BattleReaction[GENDER_COUNT][4] = {
    {
        sText_YoureToughMale,
        sText_UsedGoodMoveMale,
        sText_BattleSurpriseMale,
        sText_SwitchedMonsMale
    }, {
        sText_YoureToughFemale,
        sText_UsedGoodMoveFemale,
        sText_BattleSurpriseFemale,
        sText_SwitchedMonsFemale
    }
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) static const u8 sText_LearnedSomethingMale[] = _("¡Hay cosas que se aprenden\ndesde pequeño!\p");
ALIGNED(4) static const u8 sText_ThatsFunnyMale[] = _("¡Parad ya, que me parto de risa\n:-O!\p");
ALIGNED(4) static const u8 sText_RandomChatMale1[] = _("Anda, qué curioso...\p");
ALIGNED(4) static const u8 sText_RandomChatMale2[] = _("Mmmm... ¿Cómo?\n¿He entendido bien?\p");
ALIGNED(4) static const u8 sText_LearnedSomethingFemale[] = _("Anda...\nNo tenía ni idea...\p");
ALIGNED(4) static const u8 sText_ThatsFunnyFemale[] = _("¿De qué va la cosa?\p");
ALIGNED(4) static const u8 sText_RandomChatFemale1[] = _("¡Eso mismo digo yo!\p");
ALIGNED(4) static const u8 sText_RandomChatFemale2[] = _("Eh...\n¡Así es!\p");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) static const u8 sText_LearnedSomethingMale[] = _("Ah, davvero? Non lo sapevo!\p");
ALIGNED(4) static const u8 sText_ThatsFunnyMale[] = _("Sei troppo divertente! Mi sto\nsbellicando dalle risate!\p");
ALIGNED(4) static const u8 sText_RandomChatMale1[] = _("Eh?\nNon ci credo!\p");
ALIGNED(4) static const u8 sText_RandomChatMale2[] = _("Dici davvero?\p");
ALIGNED(4) static const u8 sText_LearnedSomethingFemale[] = _("Ma va'?\p");
ALIGNED(4) static const u8 sText_ThatsFunnyFemale[] = _("Non ho capito. Puoi ripetere?\p");
ALIGNED(4) static const u8 sText_RandomChatFemale1[] = _("Mi hai tolto le parole di bocca!\p");
ALIGNED(4) static const u8 sText_RandomChatFemale2[] = _("Certo! Hai ragione!\p");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) static const u8 sText_LearnedSomethingMale[] = _("Oh, je vois!\nC'était plutôt instructif!\p");
ALIGNED(4) static const u8 sText_ThatsFunnyMale[] = _("Ne dis plus rien! J'ai des crampes\nà force de rire!\p");
ALIGNED(4) static const u8 sText_RandomChatMale1[] = _("Oh?\nC'est vraiment arrivé?\p");
ALIGNED(4) static const u8 sText_RandomChatMale2[] = _("Hm… Quoi?\nSi tu le dis…\p");
ALIGNED(4) static const u8 sText_LearnedSomethingFemale[] = _("Vraiment?\nJe savais pas.\p");
ALIGNED(4) static const u8 sText_ThatsFunnyFemale[] = _("Ahaha!\nVraiment?\p");
ALIGNED(4) static const u8 sText_RandomChatFemale1[] = _("Oui, c'est ça!\nC'est ce que je voulais dire.\p");
ALIGNED(4) static const u8 sText_RandomChatFemale2[] = _("En d'autres termes…\nOui, c'est ça!\p");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) static const u8 sText_LearnedSomethingMale[] = _("Ah, ich verstehe!\nDas bildet mich weiter!\p");
ALIGNED(4) static const u8 sText_ThatsFunnyMale[] = _("Lass die Witze!\nMir tut vor Lachen alles weh!\p");
ALIGNED(4) static const u8 sText_RandomChatMale1[] = _("Oh?\nDas ist also passiert.\p");
ALIGNED(4) static const u8 sText_RandomChatMale2[] = _("Hm… Wie?\nDas behauptest du also?\p");
ALIGNED(4) static const u8 sText_LearnedSomethingFemale[] = _("Stimmt das?\nDas wusste ich nicht!\p");
ALIGNED(4) static const u8 sText_ThatsFunnyFemale[] = _("Ahaha!\nWorum geht es?\p");
ALIGNED(4) static const u8 sText_RandomChatFemale1[] = _("Ja, genau, korrekt!\nGenau das meine ich!\p");
ALIGNED(4) static const u8 sText_RandomChatFemale2[] = _("Mit anderen Worten…\nJa! Das stimmt!\p");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) static const u8 sText_LearnedSomethingMale[] = _("Oh, I see!\nThis is educational!\p");
ALIGNED(4) static const u8 sText_ThatsFunnyMale[] = _("Don't say anything funny anymore!\nI'm sore from laughing!\p");
ALIGNED(4) static const u8 sText_RandomChatMale1[] = _("Oh?\nSomething like that happened.\p");
ALIGNED(4) static const u8 sText_RandomChatMale2[] = _("Hmhm… What?\nSo is this what you're saying?\p");
ALIGNED(4) static const u8 sText_LearnedSomethingFemale[] = _("Is that right?\nI didn't know that.\p");
ALIGNED(4) static const u8 sText_ThatsFunnyFemale[] = _("Ahaha!\nWhat is that about?\p");
ALIGNED(4) static const u8 sText_RandomChatFemale1[] = _("Yes, that's exactly it!\nThat's what I meant.\p");
ALIGNED(4) static const u8 sText_RandomChatFemale2[] = _("In other words…\nYes! That's right!\p");
#endif

const u8 *const gTexts_UR_ChatReaction[GENDER_COUNT][4] = {
    {
        sText_LearnedSomethingMale,
        sText_ThatsFunnyMale,
        sText_RandomChatMale1,
        sText_RandomChatMale2
    }, {
        sText_LearnedSomethingFemale,
        sText_ThatsFunnyFemale,
        sText_RandomChatFemale1,
        sText_RandomChatFemale2
    }
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale1[] = _("Mira mi FICHA de ENTRENADOR.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale2[] = _("Espero que nos conozcamos mejor.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale1[] = _("Está bien enseñarse las FICHAS\nde ENTRENADOR para conocerse.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale2[] = _("Me alegro de conocerte.\n¡Espero que tú también!\p");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale1[] = _("Questa è la mia SCHEDA\nALLENATORE, per presentarmi.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale2[] = _("Spero che faremo amicizia!\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale1[] = _("Mostriamoci le SCHEDE ALLENATORE,\ncosì ci conosciamo!\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale2[] = _("Piacere di conoscerti.\nDico davvero!\p");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale1[] = _("Je montre toujours ma CARTE DE\nDRESSEUR pour me présenter.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale2[] = _("J'espère qu'on apprendra à se\nconnaître!\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale1[] = _("On se présente notre CARTE DE\nDRESSEUR pour faire connaissance.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale2[] = _("Ravie de te connaître. On va\nbien s'entendre tous les deux!\p");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale1[] = _("Ich zeige zur Begrüßung meinen\nTRAINERPASS.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale2[] = _("Ich hoffe, ich lerne dich\nbesser kennen!\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale1[] = _("Wir zeigen uns die TRAINERPÄSSE,\num uns bekannt zu machen.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale2[] = _("Angenehm!\nDu bist mir nicht mehr fremd!\p");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale1[] = _("I'm just showing my TRAINER CARD\nas my way of greeting.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale2[] = _("I hope I get to know you better!\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale1[] = _("We're showing each other our\nTRAINER CARDS to get acquainted.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale2[] = _("Glad to meet you.\nPlease don't be a stranger!\p");
#endif

const u8 *const gTexts_UR_TrainerCardReaction[GENDER_COUNT][2] = {
    {
        sText_ShowedTrainerCardMale1,
        sText_ShowedTrainerCardMale2
    }, {
        sText_ShowedTrainerCardFemale1,
        sText_ShowedTrainerCardFemale2
    }
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) static const u8 sText_MaleTraded1[] = _("¡Yuuuujuu!\n¡Siempre he querido este POKéMON!\p");
ALIGNED(4) static const u8 sText_MaleTraded2[] = _("¡Por fin! ¡Menos mal que se pueden\nconseguir POKéMON por intercambio!\p");
ALIGNED(4) static const u8 sText_FemaleTraded1[] = _("¡Estoy intercambiando POKéMON!\p");
ALIGNED(4) static const u8 sText_FemaleTraded2[] = _("¡Qué ganas de tener ese POKéMON!\p");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) static const u8 sText_MaleTraded1[] = _("Grandioso!\nProprio il POKéMON che volevo!\p");
ALIGNED(4) static const u8 sText_MaleTraded2[] = _("Era tanto che volevo ottenere\nquesto POKéMON! Ottimo scambio!\p");
ALIGNED(4) static const u8 sText_FemaleTraded1[] = _("Sto facendo uno scambio di\nPOKéMON.\p");
ALIGNED(4) static const u8 sText_FemaleTraded2[] = _("Ecco il POKéMON che cercavo!\nSono felice dello scambio!\p");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) static const u8 sText_MaleTraded1[] = _("Cool! \nJe le voulais vraiment ce POKéMON!\p");
ALIGNED(4) static const u8 sText_MaleTraded2[] = _("Finalement, j'obtiens ce\nPOKéMON grâce à un échange.\p");
ALIGNED(4) static const u8 sText_FemaleTraded1[] = _("Je suis en train de faire\nun échange.\p");
ALIGNED(4) static const u8 sText_FemaleTraded2[] = _("C'est le POKéMON que je voulais\ntellement!\p");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) static const u8 sText_MaleTraded1[] = _("YO! Dieses POKéMON\nwollte ich immer haben!\p");
ALIGNED(4) static const u8 sText_MaleTraded2[] = _("Endlich konnte ich in einem\nTausch das langersehnte\lPOKéMON bekommen.\p");
ALIGNED(4) static const u8 sText_FemaleTraded1[] = _("Ich tausche gerade POKéMON.\p");
ALIGNED(4) static const u8 sText_FemaleTraded2[] = _("Endlich konnte ich in einem\nTausch, das langersehnte\lPOKéMON bekommen.\p");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) static const u8 sText_MaleTraded1[] = _("Yeahah!\nI really wanted this POKéMON!\p");
ALIGNED(4) static const u8 sText_MaleTraded2[] = _("Finally, a trade got me that\nPOKéMON I'd wanted a long time.\p");
ALIGNED(4) static const u8 sText_FemaleTraded1[] = _("I'm trading POKéMON right now.\p");
ALIGNED(4) static const u8 sText_FemaleTraded2[] = _("I finally got that POKéMON I\nwanted in a trade!\p");
#endif

const u8 *const gTexts_UR_TradeReaction[GENDER_COUNT][4] = {
    {
        sText_MaleTraded1,
        sText_MaleTraded2
    }, {
        sText_FemaleTraded1,
        sText_FemaleTraded2
    }
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
const u8 gText_UR_XCheckedTradingBoard[] = _("{STR_VAR_1} echó un ojo al PANEL\nde los INTERCAMBIOS.\p");
ALIGNED(4) const u8 gText_UR_RegisterMonAtTradingBoard[] = _("Éste es el PANEL de los\nINTERCAMBIOS.\pAquí se pueden registrar POKéMON\ny ofrecerlos para intercambio.\p¿Quieres registrar a algún\nPOKéMON?");
ALIGNED(4) const u8 gText_UR_TradingBoardInfo[] = _("El PANEL de los INTERCAMBIOS\n"
                                                    "se usa para ofrecer POKéMON\l"
                                                    "para intercambio.\p"
                                                    "Lo único que hay que hacer es\n"
                                                    "registrar al POKéMON que quieras\l"
                                                    "intercambiar.\p"
                                                    "Habrá algún ENTRENADOR\n"
                                                    "que ofrezca otro a cambio.\p"
                                                    "Esperamos que registres a muchos\n"
                                                    "y hagas un montón de intercambios.\p"
                                                    "¿Qué, te animas?");
ALIGNED(4) static const u8 sText_ThankYouForRegistering[] = _("こうかんけいじばん の とうろくが\nかんりょう しました\pごりよう ありがとう\nございました！\p");
ALIGNED(4) static const u8 sText_NobodyHasRegistered[] = _("けいじばんに だれも ポケモンを\nとうろく していません\p\n");
ALIGNED(4) const u8 gText_UR_ChooseRequestedMonType[] = _("Elige el tipo de POKéMON que\nte gustaría recibir.\n");
ALIGNED(4) const u8 gText_UR_WhichMonWillYouOffer[] = _("¿A qué miembro de tu equipo\nPOKéMON ofreces en el intercambio?\p");
ALIGNED(4) const u8 gText_UR_RegistrationCanceled[] = _("Se ha cancelado el registro.\p");
ALIGNED(4) const u8 gText_UR_RegistraionCompleted[] = _("Se ha finalizado el registro.\p");
ALIGNED(4) const u8 gText_UR_TradeCanceled[] = _("Se ha cancelado el intercambio.\p");
ALIGNED(4) const u8 gText_UR_CancelRegistrationOfMon[] = _("¿Cancelas el registro\nde tu {STR_VAR_1} de nivel {STR_VAR_2}?");
ALIGNED(4) const u8 gText_UR_CancelRegistrationOfEgg[] = _("¿Cancelas el registro\nde tu HUEVO?");
ALIGNED(4) const u8 gText_UR_RegistrationCanceled2[] = _("Se ha cancelado el registro.\p");
ALIGNED(4) static const u8 sText_TradeTrainersWillBeListed[] = _("こうかんを きぼうしているひとを\nひょうじします");
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith2[] = _("こうかん したい トレーナーを\nえらんで ください");
ALIGNED(4) const u8 gText_UR_AskTrainerToMakeTrade[] = _("¿Quieres preguntarle a {STR_VAR_1}\nsi quiere realizar un intercambio?");
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer2[] = _("……\nあいての へんじを まっています");
ALIGNED(4) static const u8 sText_NotRegisteredAMonForTrade[] = _("あなたが こうかんにだす\nポケモンが とうろくされていません\p");
ALIGNED(4) const u8 gText_UR_DontHaveTypeTrainerWants[] = _("{STR_VAR_1} quiere un\nPKMN de tipo {STR_VAR_2},\ly no tienes...\p");
ALIGNED(4) const u8 gText_UR_DontHaveEggTrainerWants[] = _("{STR_VAR_1} quiere un HUEVO,\ny tú no tienes...\p");

ALIGNED(4) static const u8 sText_PlayerCantTradeForYourMon[] = _("Ahora mismo, {STR_VAR_1} no\npuede ofrecerte nada\lpor tu POKéMON.\p");
ALIGNED(4) static const u8 sText_CantTradeForPartnersMon[] = _("Ahora mismo, no puedes hacer\nningún intercambio por el\lPOKéMON de {STR_VAR_1}.\p");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
const u8 gText_UR_XCheckedTradingBoard[] = _("{STR_VAR_1} visita\nl'AREA SCAMBI.\p");
ALIGNED(4) const u8 gText_UR_RegisterMonAtTradingBoard[] = _("Questa è l'AREA SCAMBI.\pQui puoi registrare i tuoi POKéMON,\noffrendoli per uno scambio.\pVuoi registrare uno dei tuoi\nPOKéMON?");
ALIGNED(4) const u8 gText_UR_TradingBoardInfo[] = _("Nell'AREA SCAMBI si può offrire un\n"
                                                    "POKéMON per uno scambio.\p"
                                                    "Non devi fare altro che registrare\n"
                                                    "il POKéMON che vuoi scambiare.\p"
                                                    "Un altro ALLENATORE potrebbe\n"
                                                    "offrire uno dei suoi POKéMON per\llo scambio.\p"
                                                    "Speriamo che tu possa fare\n"
                                                    "tantissimi scambi in questo\lmodo!\p"
                                                    "Vuoi registrare uno dei tuoi\n"
                                                    "POKéMON?");
ALIGNED(4) static const u8 sText_ThankYouForRegistering[] = _("こうかんけいじばん の とうろくが\nかんりょう しました\pごりよう ありがとう\nございました！\p");
ALIGNED(4) static const u8 sText_NobodyHasRegistered[] = _("けいじばんに だれも ポケモンを\nとうろく していません\p\n");
ALIGNED(4) const u8 gText_UR_ChooseRequestedMonType[] = _("Scegli il tipo del POKéMON che\ncerchi.\n\n");
ALIGNED(4) const u8 gText_UR_WhichMonWillYouOffer[] = _("Quale POKéMON della tua squadra\nvuoi offrire per uno scambio?\p");
ALIGNED(4) const u8 gText_UR_RegistrationCanceled[] = _("La registrazione è stato annullata.\p");
ALIGNED(4) const u8 gText_UR_RegistraionCompleted[] = _("La registrazione è stata\ncompletata.\p");
ALIGNED(4) const u8 gText_UR_TradeCanceled[] = _("Lo scambio è stato annullato.\p");
ALIGNED(4) const u8 gText_UR_CancelRegistrationOfMon[] = _("Annulli la registrazione di\n{STR_VAR_1} del L. {STR_VAR_2}?");
ALIGNED(4) const u8 gText_UR_CancelRegistrationOfEgg[] = _("Annulli la registrazione\ndell'UOVO?");
ALIGNED(4) const u8 gText_UR_RegistrationCanceled2[] = _("La registrazione è stata annullata.\p");
ALIGNED(4) static const u8 sText_TradeTrainersWillBeListed[] = _("こうかんを きぼうしているひとを\nひょうじします");
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith2[] = _("こうかん したい トレーナーを\nえらんで ください");
ALIGNED(4) const u8 gText_UR_AskTrainerToMakeTrade[] = _("Vuoi chiedere a {STR_VAR_1} di fare\nuno scambio?");
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer2[] = _("……\nあいての へんじを まっています");
ALIGNED(4) static const u8 sText_NotRegisteredAMonForTrade[] = _("あなたが こうかんにだす\nポケモンが とうろくされていません\p");
ALIGNED(4) const u8 gText_UR_DontHaveTypeTrainerWants[] = _("{STR_VAR_1} cerca un POKéMON di tipo\n{STR_VAR_2}, che tu non hai.\p");
ALIGNED(4) const u8 gText_UR_DontHaveEggTrainerWants[] = _("{STR_VAR_1} cerca un UOVO, che tu non\nhai.\p");

ALIGNED(4) static const u8 sText_PlayerCantTradeForYourMon[] = _("{STR_VAR_1} non può fare uno scambio\nper il tuo POKéMON al momento.\p");
ALIGNED(4) static const u8 sText_CantTradeForPartnersMon[] = _("Non puoi fare uno scambio per\nil POKéMON di {STR_VAR_1} al momento.\p");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
const u8 gText_UR_XCheckedTradingBoard[] = _("{STR_VAR_1} vérifie le\nPANNEAU D'ECHANGE.\p");
ALIGNED(4) const u8 gText_UR_RegisterMonAtTradingBoard[] = _("Bienvenue au PANNEAU D'ECHANGE.\pVous pouvez enregistrer vos\nPOKéMON pour un échange.\pVoulez-vous enregistrer un de vos\nPOKéMON?");
ALIGNED(4) const u8 gText_UR_TradingBoardInfo[] = _("Ce PANNEAU D'ECHANGE sert aux\n"
                                                    "échanges de POKéMON.\p"
                                                    "Tout ce que vous devez faire est\n"
                                                    "d'enregister un POKéMON avant.\p"
                                                    "Un autre DRESSEUR peut offrir un\n"
                                                    "POKéMON de son équipe en retour.\p"
                                                    "Nous espérons que vous échangerez\n"
                                                    "vos POKéMON avec le plus de \l"
                                                    "DRESSEURS possible.\p"
                                                    "Voulez-vous enregistrer un de vos\n"
                                                    "POKéMON?");
ALIGNED(4) static const u8 sText_ThankYouForRegistering[] = _("こうかんけいじばん の とうろくが\nかんりょう しました\pごりよう ありがとう\nございました！\p");
ALIGNED(4) static const u8 sText_NobodyHasRegistered[] = _("けいじばんに だれも ポケモンを\nとうろく していません\p\n");
ALIGNED(4) const u8 gText_UR_ChooseRequestedMonType[] = _("Choisissez le type de POKéMON\nque vous voulez pour l'échange.\n");
ALIGNED(4) const u8 gText_UR_WhichMonWillYouOffer[] = _("Quel POKéMON de votre équipe\nvoulez-vous échanger?\p");
ALIGNED(4) const u8 gText_UR_RegistrationCanceled[] = _("L'enregistrement a été annulé.\p");
ALIGNED(4) const u8 gText_UR_RegistraionCompleted[] = _("L'enregistrement est terminé.\p");
ALIGNED(4) const u8 gText_UR_TradeCanceled[] = _("L'échange a été annulé.\p");
ALIGNED(4) const u8 gText_UR_CancelRegistrationOfMon[] = _("Annuler l'enregistrement de votre\n{STR_VAR_1} de N. {STR_VAR_2}?");
ALIGNED(4) const u8 gText_UR_CancelRegistrationOfEgg[] = _("Annuler l'enregistrement de votre\nOEUF?");
ALIGNED(4) const u8 gText_UR_RegistrationCanceled2[] = _("L'enregistrement a été annulé.\p");
ALIGNED(4) static const u8 sText_TradeTrainersWillBeListed[] = _("こうかんを きぼうしているひとを\nひょうじします");
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith2[] = _("こうかん したい トレーナーを\nえらんで ください");
ALIGNED(4) const u8 gText_UR_AskTrainerToMakeTrade[] = _("Voulez-vous demander à {STR_VAR_1}\nde faire un échange?");
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer2[] = _("……\nあいての へんじを まっています");
ALIGNED(4) static const u8 sText_NotRegisteredAMonForTrade[] = _("あなたが こうかんにだす\nポケモンが とうろくされていません\p");
ALIGNED(4) const u8 gText_UR_DontHaveTypeTrainerWants[] = _("Vous n'avez pas de POKéMON\ndu type {STR_VAR_2}\pque veut {STR_VAR_1}.\p");
ALIGNED(4) const u8 gText_UR_DontHaveEggTrainerWants[] = _("Vous n'avez pas l'OEUF que veut\n{STR_VAR_1}.\p");

ALIGNED(4) static const u8 sText_PlayerCantTradeForYourMon[] = _("{STR_VAR_1} ne peut faire d'échange\npour votre POKéMON maintenant.\p");
ALIGNED(4) static const u8 sText_CantTradeForPartnersMon[] = _("Vous ne pouvez pas échanger le\nPOKéMON de {STR_VAR_1} maintenant.\p");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
const u8 gText_UR_XCheckedTradingBoard[] = _("{STR_VAR_1} schaut auf die\nTAUSCHLISTE.\p");
ALIGNED(4) const u8 gText_UR_RegisterMonAtTradingBoard[] = _("TAUSCHLISTE\pSchreib dein POKéMON auf die\nListe und biete es zum Tausch an.\pMöchtest du ein POKéMON\nauf die Liste schreiben?");
ALIGNED(4) const u8 gText_UR_TradingBoardInfo[] = _("Auf dieser TAUSCHLISTE werden\n"
                                                    "POKéMON zum Tausch angeboten.\p"
                                                    "Du musst nur ein POKéMON\n"
                                                    "auf die Liste schreiben.\p"
                                                    "Eventuell bietet ein anderer\n"
                                                    "TRAINER ein PKMN aus seinem\l"
                                                    "Team zum Austausch an.\l"
                                                    "Wir hoffen, dass du regen\l"
                                                    "Gebrauch von der Liste machst\l"
                                                    "und mit vielen TRAINERn tauschst.\l"
                                                    "Möchtest du ein POKéMON\l"
                                                    "auf die Liste schreiben?");
ALIGNED(4) static const u8 sText_ThankYouForRegistering[] = _("こうかんけいじばん の とうろくが\nかんりょう しました\pごりよう ありがとう\nございました！\p");
ALIGNED(4) static const u8 sText_NobodyHasRegistered[] = _("けいじばんに だれも ポケモンを\nとうろく していません\p\n");
ALIGNED(4) const u8 gText_UR_ChooseRequestedMonType[] = _("Bitte wähle das POKéMON, das\ngetauscht werden soll, aus.\n");
ALIGNED(4) const u8 gText_UR_WhichMonWillYouOffer[] = _("Welches POKéMON aus deinem\nTeam möchtest du tauschen?\p");
ALIGNED(4) const u8 gText_UR_RegistrationCanceled[] = _("Listeneintrag wurde zurückgenommen.\p");
ALIGNED(4) const u8 gText_UR_RegistraionCompleted[] = _("Listeneintrag wurde abgeschlossen.\p");
ALIGNED(4) const u8 gText_UR_TradeCanceled[] = _("Der Tausch wurde abgebrochen.\p");
ALIGNED(4) const u8 gText_UR_CancelRegistrationOfMon[] = _("{STR_VAR_1} mit Level {STR_VAR_2} von der\nListe streichen?");
ALIGNED(4) const u8 gText_UR_CancelRegistrationOfEgg[] = _("Das EI von der Liste streichen?");
ALIGNED(4) const u8 gText_UR_RegistrationCanceled2[] = _("Die Streichung wurde vorgenommen.\p");
ALIGNED(4) static const u8 sText_TradeTrainersWillBeListed[] = _("こうかんを きぼうしているひとを\nひょうじします");
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith2[] = _("こうかん したい トレーナーを\nえらんで ください");
ALIGNED(4) const u8 gText_UR_AskTrainerToMakeTrade[] = _("Möchtest du {STR_VAR_1} nach einem\nTausch fragen?");
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer2[] = _("……\nあいての へんじを まっています");
ALIGNED(4) static const u8 sText_NotRegisteredAMonForTrade[] = _("あなたが こうかんにだす\nポケモンが とうろくされていません\p");
ALIGNED(4) const u8 gText_UR_DontHaveTypeTrainerWants[] = _("Du hast kein POKéMON der\nElementklasse {STR_VAR_2}, das\l{STR_VAR_1} haben möchte.\l");
ALIGNED(4) const u8 gText_UR_DontHaveEggTrainerWants[] = _("Du hast kein EI, das {STR_VAR_1}\nhaben möchte.\p");

ALIGNED(4) static const u8 sText_PlayerCantTradeForYourMon[] = _("{STR_VAR_1} kann momentan dein\nPOKéMON nicht tauschen.\p");
ALIGNED(4) static const u8 sText_CantTradeForPartnersMon[] = _("Du kannst jetzt nicht mit\n{STR_VAR_1} POKéMON tauschen.\p");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
const u8 gText_UR_XCheckedTradingBoard[] = _("{STR_VAR_1} checked the\nTRADING BOARD.\p");
ALIGNED(4) const u8 gText_UR_RegisterMonAtTradingBoard[] = _("Welcome to the TRADING BOARD.\pYou may register your POKéMON\nand offer it up for a trade.\pWould you like to register one of\nyour POKéMON?");
ALIGNED(4) const u8 gText_UR_TradingBoardInfo[] = _("This TRADING BOARD is used for\n"
                                                    "offering a POKéMON for a trade.\p"
                                                    "All you need to do is register a\n"
                                                    "POKéMON for a trade.\p"
                                                    "Another TRAINER may offer a party\n"
                                                    "POKéMON in return for the trade.\p"
                                                    "We hope you will register POKéMON\n"
                                                    "and trade them with many, many\l"
                                                    "other TRAINERS.\p"
                                                    "Would you like to register one of\n"
                                                    "your POKéMON?");
ALIGNED(4) static const u8 sText_ThankYouForRegistering[] = _("こうかんけいじばん の とうろくが\nかんりょう しました\pごりよう ありがとう\nございました！\p");
ALIGNED(4) static const u8 sText_NobodyHasRegistered[] = _("けいじばんに だれも ポケモンを\nとうろく していません\p\n");
ALIGNED(4) const u8 gText_UR_ChooseRequestedMonType[] = _("Please choose the type of POKéMON\nthat you would like in the trade.\n");
ALIGNED(4) const u8 gText_UR_WhichMonWillYouOffer[] = _("Which of your party POKéMON will\nyou offer in trade?\p");
ALIGNED(4) const u8 gText_UR_RegistrationCanceled[] = _("Registration has been canceled.\p");
ALIGNED(4) const u8 gText_UR_RegistraionCompleted[] = _("Registration has been completed.\p");
ALIGNED(4) const u8 gText_UR_TradeCanceled[] = _("The trade has been canceled.\p");
ALIGNED(4) const u8 gText_UR_CancelRegistrationOfMon[] = _("Cancel the registration of your\nLv. {STR_VAR_2} {STR_VAR_1}?");
ALIGNED(4) const u8 gText_UR_CancelRegistrationOfEgg[] = _("Cancel the registration of your\nEGG?");
ALIGNED(4) const u8 gText_UR_RegistrationCanceled2[] = _("The registration has been canceled.\p");
ALIGNED(4) static const u8 sText_TradeTrainersWillBeListed[] = _("こうかんを きぼうしているひとを\nひょうじします");
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith2[] = _("こうかん したい トレーナーを\nえらんで ください");
ALIGNED(4) const u8 gText_UR_AskTrainerToMakeTrade[] = _("Would you like to ask {STR_VAR_1} to\nmake a trade?");
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer2[] = _("……\nあいての へんじを まっています");
ALIGNED(4) static const u8 sText_NotRegisteredAMonForTrade[] = _("あなたが こうかんにだす\nポケモンが とうろくされていません\p");
ALIGNED(4) const u8 gText_UR_DontHaveTypeTrainerWants[] = _("You don't have a {STR_VAR_2}-type\nPOKéMON that {STR_VAR_1} wants.\p");
ALIGNED(4) const u8 gText_UR_DontHaveEggTrainerWants[] = _("You don't have an EGG that\n{STR_VAR_1} wants.\p");

ALIGNED(4) static const u8 sText_PlayerCantTradeForYourMon[] = _("{STR_VAR_1} can't make a trade for\nyour POKéMON right now.\p");
ALIGNED(4) static const u8 sText_CantTradeForPartnersMon[] = _("You can't make a trade for\n{STR_VAR_1}'s POKéMON right now.\p");
#endif

// Unused
static const u8 *const sCantTradeMonTexts[] = {
    sText_PlayerCantTradeForYourMon,
    sText_CantTradeForPartnersMon
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) const u8 gText_UR_TradeOfferRejected[] = _("Tu oferta ha sido rechazada.\p");
ALIGNED(4) const u8 gText_UR_EggTrade[] = _("INTERCAMBIO DE HUEVO");
ALIGNED(4) const u8 gText_UR_ChooseJoinCancel[] = _("{DPAD_UPDOWN}SEL.  {A_BUTTON}PARTICIPAR  {B_BUTTON}ATRÁS");
ALIGNED(4) const u8 gText_UR_ChooseTrainer[] = _("Selecciona a un ENTRENADOR.");
ALIGNED(4) static const u8 sText_ChooseTrainerSingleBattle[] = _("Selecciona a un ENTRENADOR\npara un COMBATE INDIVIDUAL.");
ALIGNED(4) static const u8 sText_ChooseTrainerDoubleBattle[] = _("Selecciona a un ENTRENADOR\npara un COMBATE DOBLE.");
ALIGNED(4) static const u8 sText_ChooseLeaderMultiBattle[] = _("Selecciona al LÍDER para\nun COMBATE MÚLTIPLE.");
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith[] = _("Selecciona a un ENTRENADOR\npara realizar un intercambio.");
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderCards[] = _("Selecciona al ENTRENADOR que\ncomparte TARJETAS MISTERIOSAS.");
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderNews[] = _("Selecciona al ENTRENADOR que\ncomparte NOTICIAS MISTERIOSAS.");
ALIGNED(4) static const u8 sText_ChooseLeaderPokemonJump[] = _("¡SALTO POKéMON!\nSelecciona al LÍDER.");
ALIGNED(4) static const u8 sText_ChooseLeaderBerryCrush[] = _("¡MACHACABAYAS!\nSelecciona al LÍDER.");
ALIGNED(4) static const u8 sText_ChooseLeaderBerryPicking[] = _("¡DODRIO A POR BAYAS!\nSelecciona al LÍDER.");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) const u8 gText_UR_TradeOfferRejected[] = _("La tua offerta di scambio è stata\nrifiutata.\p");
ALIGNED(4) const u8 gText_UR_EggTrade[] = _("SCAMBIO UOVA");
ALIGNED(4) const u8 gText_UR_ChooseJoinCancel[] = _("{DPAD_UPDOWN}SCEGLI  {A_BUTTON}PARTECIPA  {B_BUTTON}ANNULLA");
ALIGNED(4) const u8 gText_UR_ChooseTrainer[] = _("Scegli un ALLENATORE.");
ALIGNED(4) static const u8 sText_ChooseTrainerSingleBattle[] = _("Scegli un ALLENATORE per\nuna LOTTA in SINGOLO.");
ALIGNED(4) static const u8 sText_ChooseTrainerDoubleBattle[] = _("Scegli un ALLENATORE per\nuna LOTTA in DOPPIO.");
ALIGNED(4) static const u8 sText_ChooseLeaderMultiBattle[] = _("Scegli un ALLENATORE per\nuna LOTTA MULTIPLA.");
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith[] = _("Scegli un ALLENATORE per\nfare scambi.");
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderCards[] = _("Scegli un ALLENATORE che\ncondivide SCHEDE SEGRETE.");
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderNews[] = _("Scegli un ALLENATORE che\ncondivide le NOTIZIE SEGRETE.");
ALIGNED(4) static const u8 sText_ChooseLeaderPokemonJump[] = _("Salta con piccoli POKéMON!\nScegli il CAPOGRUPPO.");
ALIGNED(4) static const u8 sText_ChooseLeaderBerryCrush[] = _("MACINABACCHE!\nScegli il CAPOGRUPPO.");
ALIGNED(4) static const u8 sText_ChooseLeaderBerryPicking[] = _("DODRIO PIGLIABACCHE!\nScegli il CAPOGRUPPO.");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) const u8 gText_UR_TradeOfferRejected[] = _("Votre offre d'échange a\nété refusée.\p");
ALIGNED(4) const u8 gText_UR_EggTrade[] = _("ECHANGE D'OEUF");
ALIGNED(4) const u8 gText_UR_ChooseJoinCancel[] = _("{DPAD_UPDOWN}CHOISIR  {A_BUTTON}JOINDRE  {B_BUTTON}ANNULER");
ALIGNED(4) const u8 gText_UR_ChooseTrainer[] = _("Veuillez choisir un DRESSEUR.");
ALIGNED(4) static const u8 sText_ChooseTrainerSingleBattle[] = _("Veuillez choisir un DRESSEUR\npour un combat SOLO.");
ALIGNED(4) static const u8 sText_ChooseTrainerDoubleBattle[] = _("Veuillez choisir un DRESSEUR\npour un combat DUO.");
ALIGNED(4) static const u8 sText_ChooseLeaderMultiBattle[] = _("Veuillez choisir un DRESSEUR\npour un combat MULTI.");
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith[] = _("Veuillez choisir le DRESSEUR avec\nqui faire l'échange.");
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderCards[] = _("Veuillez choisir le DRESSEUR qui\npartage les CARTES MIRACLE.");
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderNews[] = _("Veuillez choisir le DRESSEUR qui\npartage les INFOS MIRACLE.");
ALIGNED(4) static const u8 sText_ChooseLeaderPokemonJump[] = _("Sautez avec un mini POKéMON!\nChoisissez le MENEUR.");
ALIGNED(4) static const u8 sText_ChooseLeaderBerryCrush[] = _("BROYEUR DE BAIES!\nChoisissez le MENEUR.");
ALIGNED(4) static const u8 sText_ChooseLeaderBerryPicking[] = _("ATTRAPE-BAIES DODRIO!\nChoisissez le MENEUR.");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) const u8 gText_UR_TradeOfferRejected[] = _("Dein Tauschangebot wurde\nzurückgewiesen.\l");
ALIGNED(4) const u8 gText_UR_EggTrade[] = _("EIERTAUSCH");
ALIGNED(4) const u8 gText_UR_ChooseJoinCancel[] = _("{DPAD_UPDOWN}WAHL {A_BUTTON}BEITRETEN {B_BUTTON}ZURÜCK");
ALIGNED(4) const u8 gText_UR_ChooseTrainer[] = _("Wähle einen TRAINER!");
ALIGNED(4) static const u8 sText_ChooseTrainerSingleBattle[] = _("Wähle einen TRAINER für\neinen EINZELKAMPF aus.");
ALIGNED(4) static const u8 sText_ChooseTrainerDoubleBattle[] = _("Wähle einen TRAINER für\neinen DOPPELKAMPF aus.");
ALIGNED(4) static const u8 sText_ChooseLeaderMultiBattle[] = _("Wähle einen LEITER\nfür einen MULTIKAMPF aus.");
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith[] = _("Wähle einen TRAINER zum\nTauschen aus.");
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderCards[] = _("Wähle einen TRAINER, der\nWUNDERKARTEn teilt, aus.");
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderNews[] = _("Wähle einen TRAINER, der\nWUNDERNEWS teilt aus.");
ALIGNED(4) static const u8 sText_ChooseLeaderPokemonJump[] = _("Springe mit kleinen POKéMON!\nWähle einen LEITER.");
ALIGNED(4) static const u8 sText_ChooseLeaderBerryCrush[] = _("BEERENMÜHLE!\nWähle einen LEITER!");
ALIGNED(4) static const u8 sText_ChooseLeaderBerryPicking[] = _("BEERENERNTE MIT DODRI!\nWähle einen LEITER.");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) const u8 gText_UR_TradeOfferRejected[] = _("Your trade offer was rejected.\p");
ALIGNED(4) const u8 gText_UR_EggTrade[] = _("EGG TRADE");
ALIGNED(4) const u8 gText_UR_ChooseJoinCancel[] = _("{DPAD_UPDOWN}CHOOSE  {A_BUTTON}JOIN  {B_BUTTON}CANCEL");
ALIGNED(4) const u8 gText_UR_ChooseTrainer[] = _("Please choose a TRAINER.");
ALIGNED(4) static const u8 sText_ChooseTrainerSingleBattle[] = _("Please choose a TRAINER for\na SINGLE BATTLE.");
ALIGNED(4) static const u8 sText_ChooseTrainerDoubleBattle[] = _("Please choose a TRAINER for\na DOUBLE BATTLE.");
ALIGNED(4) static const u8 sText_ChooseLeaderMultiBattle[] = _("Please choose the LEADER\nfor a MULTI BATTLE.");
ALIGNED(4) static const u8 sText_ChooseTrainerToTradeWith[] = _("Please choose the TRAINER to\ntrade with.");
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderCards[] = _("Please choose the TRAINER who is\nsharing WONDER CARDS.");
ALIGNED(4) static const u8 sText_ChooseTrainerToShareWonderNews[] = _("Please choose the TRAINER who is\nsharing WONDER NEWS.");
ALIGNED(4) static const u8 sText_ChooseLeaderPokemonJump[] = _("Jump with mini POKéMON!\nPlease choose the LEADER.");
ALIGNED(4) static const u8 sText_ChooseLeaderBerryCrush[] = _("BERRY CRUSH!\nPlease choose the LEADER.");
ALIGNED(4) static const u8 sText_ChooseLeaderBerryPicking[] = _("DODRIO BERRY-PICKING!\nPlease choose the LEADER.");
#endif

const u8 *const gTexts_UR_ChooseTrainer[] = {
    [LINK_GROUP_SINGLE_BATTLE] = sText_ChooseTrainerSingleBattle,
    [LINK_GROUP_DOUBLE_BATTLE] = sText_ChooseTrainerDoubleBattle,
    [LINK_GROUP_MULTI_BATTLE]  = sText_ChooseLeaderMultiBattle,
    [LINK_GROUP_TRADE]         = sText_ChooseTrainerToTradeWith,
    [LINK_GROUP_POKEMON_JUMP]  = sText_ChooseLeaderPokemonJump,
    [LINK_GROUP_BERRY_CRUSH]   = sText_ChooseLeaderBerryCrush,
    [LINK_GROUP_BERRY_PICKING] = sText_ChooseLeaderBerryPicking,
    [LINK_GROUP_WONDER_CARD]   = sText_ChooseTrainerToShareWonderCards,
    [LINK_GROUP_WONDER_NEWS]   = sText_ChooseTrainerToShareWonderNews
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) const u8 gText_UR_SearchingForWirelessSystemWait[] = _("Buscando el sistema de\nCOMUNICACIÓN INALÁMBRICA...");
ALIGNED(4) static const u8 sText_MustHaveTwoMonsForDoubleBattle[] = _("ダブルバトルでは 2ひき いじょうの\nポケモンが ひつようです\p");
ALIGNED(4) const u8 gText_UR_AwaitingPlayersResponse[] = _("Esperando respuesta de {STR_VAR_1}...");
ALIGNED(4) const u8 gText_UR_PlayerHasBeenAskedToRegisterYouPleaseWait[] = _("Se le ha pedido a {STR_VAR_1}\nque te registre en el grupo...");
ALIGNED(4) const u8 gText_UR_AwaitingResponseFromWirelessSystem[] = _("Esperando respuesta del sistema\nde COMUNICACIÓN INALÁMBRICA...");
ALIGNED(4) static const u8 sText_PleaseWaitForOtherTrainersToGather[] = _("ほかの さんかしゃが そろうまで\nしょうしょう おまちください");

ALIGNED(4) static const u8 sText_NoCardsSharedRightNow[] = _("En este momento no parece que\nse estén compartiendo TARJETAS.");
ALIGNED(4) static const u8 sText_NoNewsSharedRightNow[] = _("En este momento no parece que\nse estén compartiendo NOTICIAS.");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) const u8 gText_UR_SearchingForWirelessSystemWait[] = _("Ricerca di un SISTEMA\nCOMUNICAZIONE WIRELESS. Attendi…");
ALIGNED(4) static const u8 sText_MustHaveTwoMonsForDoubleBattle[] = _("ダブルバトルでは 2ひき いじょうの\nポケモンが ひつようです\p");
ALIGNED(4) const u8 gText_UR_AwaitingPlayersResponse[] = _("In attesa di risposta da {STR_VAR_1}.");
ALIGNED(4) const u8 gText_UR_PlayerHasBeenAskedToRegisterYouPleaseWait[] = _("{STR_VAR_1} ha ricevuto la tua\nrichiesta di partecipare. Attendi…");
ALIGNED(4) const u8 gText_UR_AwaitingResponseFromWirelessSystem[] = _("In attesa di risposta dal SISTEMA\nCOMUNICAZIONE WIRELESS.");
ALIGNED(4) static const u8 sText_PleaseWaitForOtherTrainersToGather[] = _("ほかの さんかしゃが そろうまで\nしょうしょう おまちください");

ALIGNED(4) static const u8 sText_NoCardsSharedRightNow[] = _("Non ci sono SCHEDE condivise\nal momento.");
ALIGNED(4) static const u8 sText_NoNewsSharedRightNow[] = _("Non ci sono NOTIZIE condivise\nal momento.");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) const u8 gText_UR_SearchingForWirelessSystemWait[] = _("Recherche d'un système de\nCOMMUNICATION SANS FIL. Patienter.");
ALIGNED(4) static const u8 sText_MustHaveTwoMonsForDoubleBattle[] = _("ダブルバトルでは 2ひき いじょうの\nポケモンが ひつようです\p");
ALIGNED(4) const u8 gText_UR_AwaitingPlayersResponse[] = _("Attente d'une réponse de {STR_VAR_1}…");
ALIGNED(4) const u8 gText_UR_PlayerHasBeenAskedToRegisterYouPleaseWait[] = _("{STR_VAR_1} doit vous enregistrer\ncomme membre. Veuillez patienter.");
ALIGNED(4) const u8 gText_UR_AwaitingResponseFromWirelessSystem[] = _("Attente d'une réponse d'un système\nde COMMUNICATION SANS FIL.");
ALIGNED(4) static const u8 sText_PleaseWaitForOtherTrainersToGather[] = _("ほかの さんかしゃが そろうまで\nしょうしょう おまちください");

ALIGNED(4) static const u8 sText_NoCardsSharedRightNow[] = _("Aucune CARTE n'est échangée pour\nl'instant.");
ALIGNED(4) static const u8 sText_NoNewsSharedRightNow[] = _("Aucune INFO n'est échangée pour\nl'instant.");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) const u8 gText_UR_SearchingForWirelessSystemWait[] = _("Nach DRAHTLOSEM KOMMUNIKATIONS-\nSYSTEM suchen…");
ALIGNED(4) static const u8 sText_MustHaveTwoMonsForDoubleBattle[] = _("ダブルバトルでは 2ひき いじょうの\nポケモンが ひつようです\p");
ALIGNED(4) const u8 gText_UR_AwaitingPlayersResponse[] = _("Antwort von {STR_VAR_1} wird erwartet…");
ALIGNED(4) const u8 gText_UR_PlayerHasBeenAskedToRegisterYouPleaseWait[] = _("{STR_VAR_1} wurde gebeten, dich als\nMitglied aufzunehmen. Bitte warten!");
ALIGNED(4) const u8 gText_UR_AwaitingResponseFromWirelessSystem[] = _("Antwort von DRAHTLOSEM KOMMUNIKA-\nTIONS-SYSTEM wird erwartet.");
ALIGNED(4) static const u8 sText_PleaseWaitForOtherTrainersToGather[] = _("ほかの さんかしゃが そろうまで\nしょうしょう おまちください");

ALIGNED(4) static const u8 sText_NoCardsSharedRightNow[] = _("Es werden momentan keine KARTEN\ngeteilt.");
ALIGNED(4) static const u8 sText_NoNewsSharedRightNow[] = _("Es werden momentan keine NEWS\ngeteilt.");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) const u8 gText_UR_SearchingForWirelessSystemWait[] = _("Searching for a WIRELESS\nCOMMUNICATION SYSTEM. Wait...");
ALIGNED(4) static const u8 sText_MustHaveTwoMonsForDoubleBattle[] = _("ダブルバトルでは 2ひき いじょうの\nポケモンが ひつようです\p");
ALIGNED(4) const u8 gText_UR_AwaitingPlayersResponse[] = _("Awaiting {STR_VAR_1}'s response…");
ALIGNED(4) const u8 gText_UR_PlayerHasBeenAskedToRegisterYouPleaseWait[] = _("{STR_VAR_1} has been asked to register\nyou as a member. Please wait.");
ALIGNED(4) const u8 gText_UR_AwaitingResponseFromWirelessSystem[] = _("Awaiting a response from the\nWIRELESS COMMUNICATION SYSTEM.");
ALIGNED(4) static const u8 sText_PleaseWaitForOtherTrainersToGather[] = _("ほかの さんかしゃが そろうまで\nしょうしょう おまちください");

ALIGNED(4) static const u8 sText_NoCardsSharedRightNow[] = _("No CARDS appear to be shared \nright now.");
ALIGNED(4) static const u8 sText_NoNewsSharedRightNow[] = _("No NEWS appears to be shared\nright now.");
#endif

const u8 *const gTexts_UR_NoWonderShared[] = {
    sText_NoCardsSharedRightNow,
    sText_NoNewsSharedRightNow
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) const u8 gText_UR_Battle[] = _("COMBATE");
ALIGNED(4) const u8 gText_UR_Chat2[] = _("CHAT");
ALIGNED(4) const u8 gText_UR_Greetings[] = _("ENCUENTR.");
ALIGNED(4) const u8 gText_UR_Exit[] = _("SALIR");

ALIGNED(4) const u8 gText_UR_Exit2[] = _("SALIR");
ALIGNED(4) const u8 gText_UR_Info[] = _("INFO.");
ALIGNED(4) const u8 gText_UR_NameWantedOfferLv[] = _("NOMBRE{CLEAR_TO 0x3C}QUIERE{CLEAR_TO 0x6E}DA{CLEAR_TO 0xC6}NV.");

ALIGNED(4) const u8 gText_UR_SingleBattle[] = _("COMB. INDIVIDUAL");
ALIGNED(4) const u8 gText_UR_DoubleBattle[] = _("COMBATE DOBLE");
ALIGNED(4) const u8 gText_UR_MultiBattle[] = _("COMBATE MÚLTIPLE");
ALIGNED(4) const u8 gText_UR_PokemonTrades[] = _("INTERCAMBIOS PKMN");
ALIGNED(4) const u8 gText_UR_Chat[] = _("CHAT");
ALIGNED(4) const u8 gText_UR_Cards[] = _("TARJETAS");
ALIGNED(4) const u8 gText_UR_WonderCards[] = _("TARJETAS MIST.");
ALIGNED(4) const u8 gText_UR_WonderNews[] = _("NOTICIAS MIST.");
ALIGNED(4) const u8 gText_UR_PokemonJump[] = _("SALTO POKéMON");
ALIGNED(4) const u8 gText_UR_BerryCrush[] = _("MACHACABAYAS");
ALIGNED(4) const u8 gText_UR_BerryPicking[] = _("A POR BAYAS");
ALIGNED(4) const u8 gText_UR_Search[] = _("BUSCAR");
ALIGNED(4) const u8 gText_UR_SpinTrade[] = _("ぐるぐるこうかん");
ALIGNED(4) const u8 gText_UR_ItemTrade[] = _("アイテムトレード");

ALIGNED(4) static const u8 sText_ItsNormalCard[] = _("¡Es NORMAL!");
ALIGNED(4) static const u8 sText_ItsBronzeCard[] = _("¡Es de color BRONCE!");
ALIGNED(4) static const u8 sText_ItsCopperCard[] = _("¡Es de color COBRE!");
ALIGNED(4) static const u8 sText_ItsSilverCard[] = _("¡Es de color PLATA!");
ALIGNED(4) static const u8 sText_ItsGoldCard[] = _("¡Es de color ORO!");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) const u8 gText_UR_Battle[] = _("LOTTA");
ALIGNED(4) const u8 gText_UR_Chat2[] = _("CHAT");
ALIGNED(4) const u8 gText_UR_Greetings[] = _("SALUTI");
ALIGNED(4) const u8 gText_UR_Exit[] = _("ESCI");

ALIGNED(4) const u8 gText_UR_Exit2[] = _("ESCI");
ALIGNED(4) const u8 gText_UR_Info[] = _("INFO");
ALIGNED(4) const u8 gText_UR_NameWantedOfferLv[] = _("NOME{CLEAR_TO 0x3C}CERCO{CLEAR_TO 0x6E}OFFRO{CLEAR_TO 0xC6}L.");

ALIGNED(4) const u8 gText_UR_SingleBattle[] = _("LOTTA in SINGOLO");
ALIGNED(4) const u8 gText_UR_DoubleBattle[] = _("LOTTA in DOPPIO");
ALIGNED(4) const u8 gText_UR_MultiBattle[] = _("LOTTA MULTIPLA");
ALIGNED(4) const u8 gText_UR_PokemonTrades[] = _("SCAMBI POKéMON");
ALIGNED(4) const u8 gText_UR_Chat[] = _("CHAT");
ALIGNED(4) const u8 gText_UR_Cards[] = _("SCHEDE");
ALIGNED(4) const u8 gText_UR_WonderCards[] = _("SCHEDE SEGRETE");
ALIGNED(4) const u8 gText_UR_WonderNews[] = _("NOTIZIE SEGRETE");
ALIGNED(4) const u8 gText_UR_PokemonJump[] = _("POKéSALTI");
ALIGNED(4) const u8 gText_UR_BerryCrush[] = _("MACINABACCHE");
ALIGNED(4) const u8 gText_UR_BerryPicking[] = _("PIGLIABACCHE");
ALIGNED(4) const u8 gText_UR_Search[] = _("RICERCA");
ALIGNED(4) const u8 gText_UR_SpinTrade[] = _("ぐるぐるこうかん");
ALIGNED(4) const u8 gText_UR_ItemTrade[] = _("アイテムトレード");

ALIGNED(4) static const u8 sText_ItsNormalCard[] = _("È una SCHEDA NORMALE!");
ALIGNED(4) static const u8 sText_ItsBronzeCard[] = _("È una SCHEDA di BRONZO!");
ALIGNED(4) static const u8 sText_ItsCopperCard[] = _("È una SCHEDA di RAME!");
ALIGNED(4) static const u8 sText_ItsSilverCard[] = _("È una SCHEDA d'ARGENTO!");
ALIGNED(4) static const u8 sText_ItsGoldCard[] = _("È una SCHEDA d'ORO!");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) const u8 gText_UR_Battle[] = _("COMBAT");
ALIGNED(4) const u8 gText_UR_Chat2[] = _("TCHAT");
ALIGNED(4) const u8 gText_UR_Greetings[] = _("SALUT");
ALIGNED(4) const u8 gText_UR_Exit[] = _("RETOUR");

ALIGNED(4) const u8 gText_UR_Exit2[] = _("RETOUR");
ALIGNED(4) const u8 gText_UR_Info[] = _("INFOS");
ALIGNED(4) const u8 gText_UR_NameWantedOfferLv[] = _("NOM{CLEAR_TO 0x3C}RECHERCHE{CLEAR_TO 0x6E}OFFRE{CLEAR_TO 0xC6}N.");

ALIGNED(4) const u8 gText_UR_SingleBattle[] = _("COMBAT SOLO");
ALIGNED(4) const u8 gText_UR_DoubleBattle[] = _("COMBAT DUO");
ALIGNED(4) const u8 gText_UR_MultiBattle[] = _("COMBAT MULTI.");
ALIGNED(4) const u8 gText_UR_PokemonTrades[] = _("ECHANGES DE PKMN");
ALIGNED(4) const u8 gText_UR_Chat[] = _("TCHAT");
ALIGNED(4) const u8 gText_UR_Cards[] = _("CARTES");
ALIGNED(4) const u8 gText_UR_WonderCards[] = _("CARTES MIRACLE");
ALIGNED(4) const u8 gText_UR_WonderNews[] = _("INFOS MIRACLE");
ALIGNED(4) const u8 gText_UR_PokemonJump[] = _("SAUT POKéMON");
ALIGNED(4) const u8 gText_UR_BerryCrush[] = _("BROYEUR DE BAIES");
ALIGNED(4) const u8 gText_UR_BerryPicking[] = _("ATTRAPE-BAIES");
ALIGNED(4) const u8 gText_UR_Search[] = _("RECHERCHE");
ALIGNED(4) const u8 gText_UR_SpinTrade[] = _("ぐるぐるこうかん");
ALIGNED(4) const u8 gText_UR_ItemTrade[] = _("アイテムトレード");

ALIGNED(4) static const u8 sText_ItsNormalCard[] = _("C'est une carte NORMALE!");
ALIGNED(4) static const u8 sText_ItsBronzeCard[] = _("C'est une carte en BRONZE!");
ALIGNED(4) static const u8 sText_ItsCopperCard[] = _("C'est une carte en CUIVRE!");
ALIGNED(4) static const u8 sText_ItsSilverCard[] = _("C'est une carte en ARGENT!");
ALIGNED(4) static const u8 sText_ItsGoldCard[] = _("C'est une carte en OR!");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) const u8 gText_UR_Battle[] = _("KAMPF");
ALIGNED(4) const u8 gText_UR_Chat2[] = _("CHAT");
ALIGNED(4) const u8 gText_UR_Greetings[] = _("EMPFANG");
ALIGNED(4) const u8 gText_UR_Exit[] = _("BEENDEN");

ALIGNED(4) const u8 gText_UR_Exit2[] = _("BEENDEN");
ALIGNED(4) const u8 gText_UR_Info[] = _("INFO");
ALIGNED(4) const u8 gText_UR_NameWantedOfferLv[] = _("NAME{CLEAR_TO 0x3C}GES.{CLEAR_TO 0x6E}OFFERTEN{CLEAR_TO 0xC6}Lv.");

ALIGNED(4) const u8 gText_UR_SingleBattle[] = _("EINZELKAMPF");
ALIGNED(4) const u8 gText_UR_DoubleBattle[] = _("DOPPELKAMPF");
ALIGNED(4) const u8 gText_UR_MultiBattle[] = _("MULTIKAMPF");
ALIGNED(4) const u8 gText_UR_PokemonTrades[] = _("POKéMON-TAUSCH");
ALIGNED(4) const u8 gText_UR_Chat[] = _("CHAT");
ALIGNED(4) const u8 gText_UR_Cards[] = _("KARTEN");
ALIGNED(4) const u8 gText_UR_WonderCards[] = _("WUNDERKARTEn");
ALIGNED(4) const u8 gText_UR_WonderNews[] = _("WUNDERNEWS");
ALIGNED(4) const u8 gText_UR_PokemonJump[] = _("POKéMON-SPRUNG");
ALIGNED(4) const u8 gText_UR_BerryCrush[] = _("BEERENMÜHLE");
ALIGNED(4) const u8 gText_UR_BerryPicking[] = _("BEERENERNTE");
ALIGNED(4) const u8 gText_UR_Search[] = _("SUCHE");
ALIGNED(4) const u8 gText_UR_SpinTrade[] = _("ぐるぐるこうかん");
ALIGNED(4) const u8 gText_UR_ItemTrade[] = _("アイテムトレード");

ALIGNED(4) static const u8 sText_ItsNormalCard[] = _("Es ist ein NORMAL PASS.");
ALIGNED(4) static const u8 sText_ItsBronzeCard[] = _("Es ist ein BRONZE PASS.");
ALIGNED(4) static const u8 sText_ItsCopperCard[] = _("Es ist ein KUPFERROT PASS.");
ALIGNED(4) static const u8 sText_ItsSilverCard[] = _("Es ist ein SILBER PASS.");
ALIGNED(4) static const u8 sText_ItsGoldCard[] = _("Es ist ein GOLD PASS.");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) const u8 gText_UR_Battle[] = _("BATTLE");
ALIGNED(4) const u8 gText_UR_Chat2[] = _("CHAT");
ALIGNED(4) const u8 gText_UR_Greetings[] = _("GREETINGS");
ALIGNED(4) const u8 gText_UR_Exit[] = _("EXIT");

ALIGNED(4) const u8 gText_UR_Exit2[] = _("EXIT");
ALIGNED(4) const u8 gText_UR_Info[] = _("INFO");
ALIGNED(4) const u8 gText_UR_NameWantedOfferLv[] = _("NAME{CLEAR_TO 0x3C}WANTED{CLEAR_TO 0x6E}OFFER{CLEAR_TO 0xC6}LV.");

ALIGNED(4) const u8 gText_UR_SingleBattle[] = _("SINGLE BATTLE");
ALIGNED(4) const u8 gText_UR_DoubleBattle[] = _("DOUBLE BATTLE");
ALIGNED(4) const u8 gText_UR_MultiBattle[] = _("MULTI BATTLE");
ALIGNED(4) const u8 gText_UR_PokemonTrades[] = _("POKéMON TRADES");
ALIGNED(4) const u8 gText_UR_Chat[] = _("CHAT");
ALIGNED(4) const u8 gText_UR_Cards[] = _("CARDS");
ALIGNED(4) const u8 gText_UR_WonderCards[] = _("WONDER CARDS");
ALIGNED(4) const u8 gText_UR_WonderNews[] = _("WONDER NEWS");
ALIGNED(4) const u8 gText_UR_PokemonJump[] = _("POKéMON JUMP");
ALIGNED(4) const u8 gText_UR_BerryCrush[] = _("BERRY CRUSH");
ALIGNED(4) const u8 gText_UR_BerryPicking[] = _("BERRY-PICKING");
ALIGNED(4) const u8 gText_UR_Search[] = _("SEARCH");
ALIGNED(4) const u8 gText_UR_SpinTrade[] = _("ぐるぐるこうかん");
ALIGNED(4) const u8 gText_UR_ItemTrade[] = _("アイテムトレード");

ALIGNED(4) static const u8 sText_ItsNormalCard[] = _("It's a NORMAL CARD.");
ALIGNED(4) static const u8 sText_ItsBronzeCard[] = _("It's a BRONZE CARD!");
ALIGNED(4) static const u8 sText_ItsCopperCard[] = _("It's a COPPER CARD!");
ALIGNED(4) static const u8 sText_ItsSilverCard[] = _("It's a SILVER CARD!");
ALIGNED(4) static const u8 sText_ItsGoldCard[] = _("It's a GOLD CARD!");
#endif

const u8 *const gTexts_UR_CardColor[] = {
    sText_ItsNormalCard,
    sText_ItsBronzeCard,
    sText_ItsCopperCard,
    sText_ItsSilverCard,
    sText_ItsGoldCard
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) const u8 gText_UR_TrainerCardInfoPage1[] = _("Ésta es la FICHA de ENTRENADOR\nde {DYNAMIC 0} {DYNAMIC 1}...\l{DYNAMIC 2}\pPOKéDEX: {DYNAMIC 3}\nTIEMPO J.:    {DYNAMIC 4}:{DYNAMIC 5}\p");
ALIGNED(4) const u8 gText_UR_TrainerCardInfoPage2[] = _("COMBATES.: {DYNAMIC 0} V  {DYNAMIC 2} D\nINTERCAMBIOS:  {DYNAMIC 3}\p“{DYNAMIC 4} {DYNAMIC 5}\n{DYNAMIC 6} {DYNAMIC 7}”\p");
ALIGNED(4) static const u8 sText_GladToMeetYouMale[] = _("{DYNAMIC 1}: ¡Me alegro de conocerte!{PAUSE 60}");
ALIGNED(4) static const u8 sText_GladToMeetYouFemale[] = _("{DYNAMIC 1}: ¡Es un placer conocerte!{PAUSE 60}");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) const u8 gText_UR_TrainerCardInfoPage1[] = _("Questa è la SCHEDA\nALLENATORE di\l{DYNAMIC 1}, {DYNAMIC 0}.\p{DYNAMIC 2}\pPOKéDEX: {DYNAMIC 3}\nTEMPO: {DYNAMIC 4}:{DYNAMIC 5}\p");
ALIGNED(4) const u8 gText_UR_TrainerCardInfoPage2[] = _("LOTTE: {DYNAMIC 0} VINTE  {DYNAMIC 2} PERSE\nSCAMBI: {DYNAMIC 3} VOLTE\p“{DYNAMIC 4} {DYNAMIC 5}\n{DYNAMIC 6} {DYNAMIC 7}”\p");
ALIGNED(4) static const u8 sText_GladToMeetYouMale[] = _("{DYNAMIC 1}: Piacere di conoscerti!{PAUSE 60}");
ALIGNED(4) static const u8 sText_GladToMeetYouFemale[] = _("{DYNAMIC 1}: Piacere!{PAUSE 60}");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) const u8 gText_UR_TrainerCardInfoPage1[] = _("C'est la CARTE DE DRESSEUR\nde {DYNAMIC 0} {DYNAMIC 1}…\l{DYNAMIC 2}\pPOKéDEX: {DYNAMIC 3}\nTEMPS:    {DYNAMIC 4}:{DYNAMIC 5}\p");
ALIGNED(4) const u8 gText_UR_TrainerCardInfoPage2[] = _("COMBATS: {DYNAMIC 0} VICT.  {DYNAMIC 2} DEF.\nECHANGES:  {DYNAMIC 3}\p“{DYNAMIC 4} {DYNAMIC 5}\n{DYNAMIC 6} {DYNAMIC 7}”\p");
ALIGNED(4) static const u8 sText_GladToMeetYouMale[] = _("{DYNAMIC 1}: Ravi de te connaître!{PAUSE 60}");
ALIGNED(4) static const u8 sText_GladToMeetYouFemale[] = _("{DYNAMIC 1}: Ravie de te connaître!{PAUSE 60}");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) const u8 gText_UR_TrainerCardInfoPage1[] = _("Das ist der TRAINERPASS\nvon {DYNAMIC 0x00} {DYNAMIC 0x01}…\l{DYNAMIC 0x02}\pPOKéDEX: {DYNAMIC 0x03}\nZEIT:    {DYNAMIC 0x04}:{DYNAMIC 0x05}\p");
ALIGNED(4) const u8 gText_UR_TrainerCardInfoPage2[] = _("KÄMPFE: SIEGE {DYNAMIC 0x00} NIEDERL. {DYNAMIC 0x02}\nTAUSCHE: {DYNAMIC 0x03}\p“{DYNAMIC 0x04} {DYNAMIC 0x05}\n{DYNAMIC 0x06} {DYNAMIC 0x07}”\p");
ALIGNED(4) static const u8 sText_GladToMeetYouMale[] = _("{DYNAMIC 0x01}: Schön, dich zu treffen!{PAUSE 0x3C}");
ALIGNED(4) static const u8 sText_GladToMeetYouFemale[] = _("{DYNAMIC 0x01}: Schön, dich zu treffen!{PAUSE 0x3C}");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) const u8 gText_UR_TrainerCardInfoPage1[] = _("This is {DYNAMIC 0} {DYNAMIC 1}'s\nTRAINER CARD…\l{DYNAMIC 2}\pPOKéDEX: {DYNAMIC 3}\nTIME:    {DYNAMIC 4}:{DYNAMIC 5}\p");
ALIGNED(4) const u8 gText_UR_TrainerCardInfoPage2[] = _("BATTLES: {DYNAMIC 0} WINS  {DYNAMIC 2} LOSSES\nTRADES:  {DYNAMIC 3} TIMES\p“{DYNAMIC 4} {DYNAMIC 5}\n{DYNAMIC 6} {DYNAMIC 7}”\p");
ALIGNED(4) static const u8 sText_GladToMeetYouMale[] = _("{DYNAMIC 1}: Glad to have met you!{PAUSE 60}");
ALIGNED(4) static const u8 sText_GladToMeetYouFemale[] = _("{DYNAMIC 1}: Glad to meet you!{PAUSE 60}");
#endif

const u8 *const gTexts_UR_GladToMeetYou[GENDER_COUNT] = {
    sText_GladToMeetYouMale,
    sText_GladToMeetYouFemale
};

#if GAME_LANGUAGE == LANGUAGE_SPANISH
ALIGNED(4) const u8 gText_UR_FinishedCheckingPlayersTrainerCard[] = _("Leída la FICHA de ENTRENADOR\nde {DYNAMIC 1}.{PAUSE 60}");
static const u8 sText_CanceledReadingCard[] = _("Cancelada la lectura de la TARJETA.");
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
ALIGNED(4) const u8 gText_UR_FinishedCheckingPlayersTrainerCard[] = _("Completata la lettura della SCHEDA\nALLENATORE di {DYNAMIC 1}.{PAUSE 60}");
ALIGNED(4) static const u8 sText_CanceledReadingCard[] = _("Annullata la lettura della Scheda.");
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
ALIGNED(4) const u8 gText_UR_FinishedCheckingPlayersTrainerCard[] = _("La CARTE DE DRESSEUR de\n{DYNAMIC 1} a été lue.");
static const u8 sText_CanceledReadingCard[] = _("La lecture de la carte a\nété annulée.");
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
ALIGNED(4) const u8 gText_UR_FinishedCheckingPlayersTrainerCard[] = _("Der TRAINERPASS von\n{DYNAMIC 0x01} wurde überprüft.{PAUSE 0x3C}");
static const u8 sText_CanceledReadingCard[] = _("Lesen der Karte wurde abgebrochen.");
#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
ALIGNED(4) const u8 gText_UR_FinishedCheckingPlayersTrainerCard[] = _("Finished checking {DYNAMIC 1}'s\nTRAINER CARD.{PAUSE 60}");
ALIGNED(4) static const u8 sText_CanceledReadingCard[] = _("Canceled reading the Card.");
#endif

static const struct MysteryGiftClientCmd sClientScript_DynamicError[] = {
    {CLI_RECV, MG_LINKID_DYNAMIC_MSG},
    {CLI_COPY_MSG},
    {CLI_SEND_READY_END},
    {CLI_RETURN, CLI_MSG_BUFFER_FAILURE}
};

const struct MysteryGiftServerCmd gServerScript_ClientCanceledCard[] = {
    {SVR_LOAD_CLIENT_SCRIPT, PTR_ARG(sClientScript_DynamicError)},
    {SVR_SEND},
    {SVR_LOAD_MSG, PTR_ARG(sText_CanceledReadingCard)},
    {SVR_SEND},
    {SVR_RECV, MG_LINKID_READY_END},
    {SVR_RETURN, SVR_MSG_CLIENT_CANCELED}
};
