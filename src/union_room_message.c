#include "global.h"
#include "link_rfu.h"
#include "mystery_gift_server.h"
#include "mystery_gift_client.h"
#include "constants/union_room.h"

ALIGNED(4) const u8 gText_UR_EmptyString[] = _("");
ALIGNED(4) const u8 gText_UR_Colon[] = _(":");
ALIGNED(4) const u8 gText_UR_ID[] = _("{ID}");
#if ENGLISH
ALIGNED(4) const u8 gText_UR_PleaseStartOver[] = _("Please start over from the beginning.");
ALIGNED(4) const u8 gText_UR_WirelessSearchCanceled[] = _("The WIRELESS COMMUNICATION\nSYSTEM search has been canceled.");
ALIGNED(4) static const u8 sText_AwaitingCommunucation2[] = _("ともだちからの れんらくを\nまっています");
ALIGNED(4) const u8 gText_UR_AwaitingCommunication[] = _("{STR_VAR_1}! Awaiting\ncommunication from another player.");
ALIGNED(4) const u8 gText_UR_AwaitingLinkPressStart[] = _("{STR_VAR_1}! Awaiting link!\nPress START when everyone's ready.");
#elif SPANISH
ALIGNED(4) const u8 gText_UR_PleaseStartOver[] = _("Hay que empezar de nuevo.");
ALIGNED(4) const u8 gText_UR_WirelessSearchCanceled[] = _("Se ha cancelado la COMUNICACIÓN\nINALÁMBRICA.");
ALIGNED(4) static const u8 sText_AwaitingCommunucation2[] = _("ともだちからの れんらくを\nまっています");
ALIGNED(4) const u8 gText_UR_AwaitingCommunication[] = _("Para la opción {STR_VAR_1},\nfaltan jugadores por comunicarse.");
ALIGNED(4) const u8 gText_UR_AwaitingLinkPressStart[] = _("Para la opción {STR_VAR_1},\npulsa START cuando estéis listos.");
#elif ITALIAN
ALIGNED(4) const u8 gText_UR_PleaseStartOver[] = _("Inizia daccapo.");
ALIGNED(4) const u8 gText_UR_WirelessSearchCanceled[] = _("SISTEMA COMUNICAZIONE WIRELESS:\nla ricerca è stata annullata.");
ALIGNED(4) static const u8 sText_AwaitingCommunucation2[] = _("ともだちからの れんらくを\nまっています");
ALIGNED(4) const u8 gText_UR_AwaitingCommunication[] = _("{STR_VAR_1}! In attesa\ncomunicazione da altro giocatore.");
ALIGNED(4) const u8 gText_UR_AwaitingLinkPressStart[] = _("{STR_VAR_1}! Quando siete\ntutti pronti, premi START.");
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

#if ENGLISH
static const u8 sText_1PlayerNeeded[] = _("1 player\nneeded.");
static const u8 sText_2PlayersNeeded[] = _("2 players\nneeded.");
static const u8 sText_3PlayersNeeded[] = _("3 players\nneeded.");
static const u8 sText_4PlayersNeeded[] = _("あと4にん\nひつよう");
static const u8 sText_2PlayerMode[] = _("2-PLAYER\nMODE");
static const u8 sText_3PlayerMode[] = _("3-PLAYER\nMODE");
static const u8 sText_4PlayerMode[] = _("4-PLAYER\nMODE");
static const u8 sText_5PlayerMode[] = _("5-PLAYER\nMODE");
#elif SPANISH
static const u8 sText_1PlayerNeeded[] = _("Falta 1\njugador.");
static const u8 sText_2PlayersNeeded[] = _("Faltan 2\njugad.");
static const u8 sText_3PlayersNeeded[] = _("Faltan 3\njugad.");
static const u8 sText_4PlayersNeeded[] = _("あと4にん\nひつよう");
static const u8 sText_2PlayerMode[] = _("MODO DE 2\nJUGADORES");
static const u8 sText_3PlayerMode[] = _("MODO DE 3\nJUGADORES");
static const u8 sText_4PlayerMode[] = _("MODO DE 4\nJUGADORES");
static const u8 sText_5PlayerMode[] = _("MODO DE 5\nJUGADORES");
#elif ITALIAN
static const u8 sText_1PlayerNeeded[] = _("Manca 1\ngiocatore.");
static const u8 sText_2PlayersNeeded[] = _("Mancano 2\ngiocatori.");
static const u8 sText_3PlayersNeeded[] = _("Mancano 3\ngiocatori.");
static const u8 sText_4PlayersNeeded[] = _("あと4にん\nひつよう");
static const u8 sText_2PlayerMode[] = _("MODALITÀ\n2 GIOC.");
static const u8 sText_3PlayerMode[] = _("MODALITÀ\n3 GIOC.");
static const u8 sText_4PlayerMode[] = _("MODALITÀ\n4 GIOC.");
static const u8 sText_5PlayerMode[] = _("MODALITÀ\n5 GIOC.");
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

#if ENGLISH
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
#elif SPANISH
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
#elif ITALIAN
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
#endif

const u8 *const gTexts_UR_CantTransmitToTrainer[] = {
    sText_CantTransmitTrainerTooFar,
    sText_TrainersNotReadyYet
};

#if ENGLISH
ALIGNED(4) const u8 gText_UR_ModeWithTheseMembersWillBeCanceled[] = _("The {STR_VAR_1} MODE with\nthese members will be canceled.{PAUSE 90}");
ALIGNED(4) static const u8 sText_MemberNoLongerAvailable[] = _("There is a member who can no\nlonger remain available.\p");
#elif SPANISH
ALIGNED(4) const u8 gText_UR_ModeWithTheseMembersWillBeCanceled[] = _("Se cancelará {STR_VAR_1}\npara este grupo.{PAUSE 90}");
ALIGNED(4) static const u8 sText_MemberNoLongerAvailable[] = _("Hay un miembro del grupo que\nno puede seguir disponible.\p");
#elif ITALIAN
ALIGNED(4) const u8 gText_UR_ModeWithTheseMembersWillBeCanceled[] = _("La MODALITÀ {STR_VAR_1} con\nquesti partecipanti sarà annullata.{PAUSE 90}");
ALIGNED(4) static const u8 sText_MemberNoLongerAvailable[] = _("Uno dei partecipanti non può\ncontinuare.\p");
#endif

const u8 *const gTexts_UR_PlayerUnavailable[] = {
    sText_OtherTrainerUnavailableNow,
    sText_MemberNoLongerAvailable
};

#if ENGLISH
ALIGNED(4) static const u8 sText_TrainerAppearsUnavailable[] = _("The other TRAINER appears\nunavailable…\p");
ALIGNED(4) const u8 gText_UR_PlayerSentBackOK[] = _("{STR_VAR_1} sent back an “OK”!");
ALIGNED(4) const u8 gText_UR_PlayerOKdRegistration[] = _("{STR_VAR_1} OK'd your registration as\na member.");
ALIGNED(4) static const u8 sText_PlayerRepliedNo[] = _("{STR_VAR_1} replied, “No…”\p");
ALIGNED(4) const u8 gText_UR_AwaitingOtherMembers[] = _("{STR_VAR_1}!\nAwaiting other members!");
ALIGNED(4) const u8 gText_UR_QuitBeingMember[] = _("Quit being a member?");
ALIGNED(4) static const u8 sText_StoppedBeingMember[] = _("You stopped being a member.\p");
#elif SPANISH
ALIGNED(4) static const u8 sText_TrainerAppearsUnavailable[] = _("No parece que el otro ENTRENADOR\nesté disponible...\p");
ALIGNED(4) const u8 gText_UR_PlayerSentBackOK[] = _("¡{STR_VAR_1} envió\ntambién un “OK”!");
ALIGNED(4) const u8 gText_UR_PlayerOKdRegistration[] = _("{STR_VAR_1} te ha\nadmitido en el grupo.");
ALIGNED(4) static const u8 sText_PlayerRepliedNo[] = _("{STR_VAR_1} responde\ncon un “No”...\p");
ALIGNED(4) const u8 gText_UR_AwaitingOtherMembers[] = _("Para la opción {STR_VAR_1},\nfaltan jugadores.");
ALIGNED(4) const u8 gText_UR_QuitBeingMember[] = _("¿Te sales del grupo?");
ALIGNED(4) static const u8 sText_StoppedBeingMember[] = _("Ya no eres del grupo.\p");
#elif ITALIAN
ALIGNED(4) static const u8 sText_TrainerAppearsUnavailable[] = _("L'altro ALLENATORE non è\ndisponibile.\p");
ALIGNED(4) const u8 gText_UR_PlayerSentBackOK[] = _("{STR_VAR_1} ha risposto con un\n“OK”!");
ALIGNED(4) const u8 gText_UR_PlayerOKdRegistration[] = _("{STR_VAR_1} ti ha accettato tra i\npartecipanti.");
ALIGNED(4) static const u8 sText_PlayerRepliedNo[] = _("{STR_VAR_1} ha risposto con un\n“no”!\p");
ALIGNED(4) const u8 gText_UR_AwaitingOtherMembers[] = _("{STR_VAR_1}!\nIn attesa di altri partecipanti…");
ALIGNED(4) const u8 gText_UR_QuitBeingMember[] = _("Vuoi uscire?");
ALIGNED(4) static const u8 sText_StoppedBeingMember[] = _("Non sei più tra i partecipanti.\p");
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

#if ENGLISH
ALIGNED(4) const u8 gText_UR_WirelessLinkEstablished[] = _("The WIRELESS COMMUNICATION\nSYSTEM link has been established.");
ALIGNED(4) const u8 gText_UR_WirelessLinkDropped[] = _("The WIRELESS COMMUNICATION\nSYSTEM link has been dropped…");
ALIGNED(4) const u8 gText_UR_LinkWithFriendDropped[] = _("The link with your friend has been\ndropped…");
ALIGNED(4) static const u8 sText_PlayerRepliedNo2[] = _("{STR_VAR_1} replied, “No…”");
#elif SPANISH
ALIGNED(4) const u8 gText_UR_WirelessLinkEstablished[] = _("Se ha establecido la COMUNICACIÓN\nINALÁMBRICA.");
ALIGNED(4) const u8 gText_UR_WirelessLinkDropped[] = _("Se ha cortado la COMUNICACIÓN\nINALÁMBRICA.");
ALIGNED(4) const u8 gText_UR_LinkWithFriendDropped[] = _("Se ha perdido la comunicación\ncon tu amigo...");
ALIGNED(4) static const u8 sText_PlayerRepliedNo2[] = _("{STR_VAR_1} contesta\nque “No”...");
#elif ITALIAN
ALIGNED(4) const u8 gText_UR_WirelessLinkEstablished[] = _("Stabilito collegamento SISTEMA\nCOMUNICAZIONE WIRELESS.");
ALIGNED(4) const u8 gText_UR_WirelessLinkDropped[] = _("Interrotto collegamento SISTEMA\nCOMUNICAZIONE WIRELESS.");
ALIGNED(4) const u8 gText_UR_LinkWithFriendDropped[] = _("Il collegamento è stato interrotto.");
ALIGNED(4) static const u8 sText_PlayerRepliedNo2[] = _("{STR_VAR_1} ha risposto\ncon un “no…”");
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

#if ENGLISH
ALIGNED(4) static const u8 sText_DoYouWantXMode[] = _("Do you want the {STR_VAR_2}\nMODE?");
ALIGNED(4) static const u8 sText_DoYouWantXMode2[] = _("Do you want the {STR_VAR_2}\nMODE?");
#elif SPANISH
ALIGNED(4) static const u8 sText_DoYouWantXMode[] = _("¿Eliges {STR_VAR_2}?");
ALIGNED(4) static const u8 sText_DoYouWantXMode2[] = _("¿Eliges {STR_VAR_2}?");
#elif ITALIAN
ALIGNED(4) static const u8 sText_DoYouWantXMode[] = _("Vuoi la MODALITÀ\n{STR_VAR_2}?");
ALIGNED(4) static const u8 sText_DoYouWantXMode2[] = _("Vuoi la MODALITÀ\n{STR_VAR_2}?");
#endif

// Unused
static const u8 *const sDoYouWantModeTexts[] = {
    sText_DoYouWantXMode,
    sText_DoYouWantXMode2
};

ALIGNED(4) static const u8 sText_CommunicatingPleaseWait[] = _("はなしかけています…\nしょうしょう おまちください"); // Unused
#if ENGLISH
ALIGNED(4) const u8 gText_UR_AwaitingPlayersResponseAboutTrade[] = _("Awaiting {STR_VAR_1}'s response about\nthe trade…");

ALIGNED(4) static const u8 sText_Communicating[] = _("Communicating{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_CommunicatingWithPlayer[] = _("Communicating with {STR_VAR_1}{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_PleaseWaitAWhile[] = _("Please wait a while{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
#elif SPANISH
ALIGNED(4) const u8 gText_UR_AwaitingPlayersResponseAboutTrade[] = _("Esperando la respuesta de {STR_VAR_1}\npara el intercambio...");

ALIGNED(4) static const u8 sText_Communicating[] = _("Comunicando{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_CommunicatingWithPlayer[] = _("Comunicando con {STR_VAR_1}{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_PleaseWaitAWhile[] = _("Un momento{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
#elif ITALIAN
ALIGNED(4) const u8 gText_UR_AwaitingPlayersResponseAboutTrade[] = _("In attesa di risposta da {STR_VAR_1}\nsullo scambio…");

ALIGNED(4) static const u8 sText_Communicating[] = _("Comunicazione in corso{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_CommunicatingWithPlayer[] = _("Comunicazione con {STR_VAR_1}{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
ALIGNED(4) static const u8 sText_PleaseWaitAWhile[] = _("Attendi{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.\n{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.{PAUSE 15}.");
#endif

const u8 *const gTexts_UR_CommunicatingWait[] = {
    sText_Communicating,
    sText_CommunicatingWithPlayer,
    sText_PleaseWaitAWhile
};

#if ENGLISH
ALIGNED(4) static const u8 sText_HiDoSomethingMale[] = _("Hiya! Is there something that you\nwanted to do?");
ALIGNED(4) static const u8 sText_HiDoSomethingFemale[] = _("Hello!\nWould you like to do something?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainMale[] = _("{STR_VAR_1}: Hiya, we meet again!\nWhat are you up for this time?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainFemale[] = _("{STR_VAR_1}: Oh! {PLAYER}, hello!\nWould you like to do something?");
#elif SPANISH
ALIGNED(4) static const u8 sText_HiDoSomethingMale[] = _("¡Hola! ¿Querías algo?");
ALIGNED(4) static const u8 sText_HiDoSomethingFemale[] = _("¿Qué tal? ¿Quieres algo?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainMale[] = _("{STR_VAR_1}: ¡Anda,\ncoincidimos de nuevo! ¿Y bien?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainFemale[] = _("{STR_VAR_1}: ¡Eh, {PLAYER}!\n¿Qué te gustaría hacer?");
#elif ITALIAN
ALIGNED(4) static const u8 sText_HiDoSomethingMale[] = _("Ciao! Che cosa vuoi fare?");
ALIGNED(4) static const u8 sText_HiDoSomethingFemale[] = _("Ehi, ciao! Che cosa vuoi fare?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainMale[] = _("{STR_VAR_1}: Ciao, ci si rincontra!\nCosa vuoi fare questa volta?");
ALIGNED(4) static const u8 sText_HiDoSomethingAgainFemale[] = _("{STR_VAR_1}: Ciao, {PLAYER}!\nChe cosa vuoi fare?");
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

#if ENGLISH
ALIGNED(4) static const u8 sText_DoSomethingMale[] = _("Want to do something?");
ALIGNED(4) static const u8 sText_DoSomethingFemale[] = _("Would you like to do something?");
ALIGNED(4) static const u8 sText_DoSomethingAgainMale[] = _("{STR_VAR_1}: What would you like to\ndo now?");
#elif SPANISH
ALIGNED(4) static const u8 sText_DoSomethingMale[] = _("¿Quieres hacer algo?");
ALIGNED(4) static const u8 sText_DoSomethingFemale[] = _("¿Te gustaría hacer algo?");
ALIGNED(4) static const u8 sText_DoSomethingAgainMale[] = _("{STR_VAR_1}: ¿Qué\nte apetecería hacer?");
#elif ITALIAN
ALIGNED(4) static const u8 sText_DoSomethingMale[] = _("Che cosa vuoi fare?");
ALIGNED(4) static const u8 sText_DoSomethingFemale[] = _("Che cosa vuoi fare?");
ALIGNED(4) static const u8 sText_DoSomethingAgainMale[] = _("{STR_VAR_1}: Che cosa vuoi fare ora?");
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

#if ENGLISH
ALIGNED(4) static const u8 sText_SomebodyHasContactedYou[] = _("Somebody has contacted you.{PAUSE 60}");
ALIGNED(4) static const u8 sText_PlayerHasContactedYou[] = _("{STR_VAR_1} has contacted you.{PAUSE 60}");
#elif SPANISH
ALIGNED(4) static const u8 sText_SomebodyHasContactedYou[] = _("Se están comunicando contigo.{PAUSE 60}");
ALIGNED(4) static const u8 sText_PlayerHasContactedYou[] = _("{STR_VAR_1} está\nen conexión contigo.{PAUSE 60}");
#elif ITALIAN
ALIGNED(4) static const u8 sText_SomebodyHasContactedYou[] = _("Qualcuno ti ha contattato.{PAUSE 60}");
ALIGNED(4) static const u8 sText_PlayerHasContactedYou[] = _("{STR_VAR_1} ti ha contattato.{PAUSE 60}");
#endif

const u8 *const gTexts_UR_PlayerContactedYou[] = {
    sText_SomebodyHasContactedYou,
    sText_PlayerHasContactedYou
};

#if ENGLISH
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer[] = _("Awaiting a response from\nthe other TRAINER…");
ALIGNED(4) static const u8 sText_AwaitingResponseFromPlayer[] = _("Awaiting a response from\n{STR_VAR_1}…");
#elif SPANISH
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer[] = _("Esperando respuesta del otro\nENTRENADOR...");
ALIGNED(4) static const u8 sText_AwaitingResponseFromPlayer[] = _("Esperando respuesta de\n{STR_VAR_1}...");
#elif ITALIAN
ALIGNED(4) static const u8 sText_AwaitingResponseFromTrainer[] = _("In attesa di risposta\ndall'altro ALLENATORE…");
ALIGNED(4) static const u8 sText_AwaitingResponseFromPlayer[] = _("In attesa di risposta\nda {STR_VAR_1}…");
#endif

const u8 *const gTexts_UR_AwaitingResponse[] = {
    sText_AwaitingResponseFromTrainer,
    sText_AwaitingResponseFromPlayer
};

ALIGNED(4) static const u8 sText_AwaitingResponseCancelBButton[] = _("あいての ていあんを まっています\nビーボタンで キャンセル");

#if ENGLISH
ALIGNED(4) const u8 gText_UR_ShowTrainerCard[] = _("The other TRAINER showed\nyou their TRAINER CARD.\pWould you like to show your\nTRAINER CARD?");
ALIGNED(4) const u8 gText_UR_BattleChallenge[] = _("The other TRAINER challenges you\nto battle.\pWill you accept the battle\nchallenge?");
ALIGNED(4) const u8 gText_UR_ChatInvitation[] = _("The other TRAINER invites you\nto chat.\pWill you accept the chat\ninvitation?");
ALIGNED(4) const u8 gText_UR_OfferToTradeMon[] = _("There is an offer to trade your\nregistered Lv. {DYNAMIC 0} {DYNAMIC 1}\pin exchange for a\nLv. {DYNAMIC 2} {DYNAMIC 3}.\pWill you accept this trade\noffer?");
ALIGNED(4) const u8 gText_UR_OfferToTradeEgg[] = _("There is an offer to trade your\nregistered EGG.\lWill you accept this trade offer?");
ALIGNED(4) const u8 gText_UR_ChatDropped[] = _("The chat has been dropped.\p");
ALIGNED(4) const u8 gText_UR_OfferDeclined1[] = _("You declined the offer.\p");
ALIGNED(4) const u8 gText_UR_OfferDeclined2[] = _("You declined the offer.\p");
ALIGNED(4) const u8 gText_UR_ChatEnded[] = _("The chat was ended.\p");
#elif SPANISH
ALIGNED(4) const u8 gText_UR_ShowTrainerCard[] = _("El otro ENTRENADOR te ha mostrado\nsu FICHA de ENTRENADOR.\p¿Quieres enseñarle la tuya?");
ALIGNED(4) const u8 gText_UR_BattleChallenge[] = _("El otro ENTRENADOR te reta\na luchar.\p¿Aceptas el desafío?");
ALIGNED(4) const u8 gText_UR_ChatInvitation[] = _("El otro ENTRENADOR te invita\na chatear.\p¿Te apetece chatear un rato?");
ALIGNED(4) const u8 gText_UR_OfferToTradeMon[] = _("Te proponen cambiar tu {DYNAMIC 0x01}\nde nivel {DYNAMIC 0x00}\ppor {DYNAMIC 0x03},\nde nivel {DYNAMIC 0x02}.\p¿Te parece buen trato?");
ALIGNED(4) const u8 gText_UR_OfferToTradeEgg[] = _("Hay alguien que quiere el\nHUEVO que tienes registrado.\l¿Se lo das?");
ALIGNED(4) const u8 gText_UR_ChatDropped[] = _("Se ha interrumpido el chat.\p");
ALIGNED(4) const u8 gText_UR_OfferDeclined1[] = _("Has decidido que no.\p");
ALIGNED(4) const u8 gText_UR_OfferDeclined2[] = _("Has decidido que no.\p");
ALIGNED(4) const u8 gText_UR_ChatEnded[] = _("Se ha finalizado el chat.\p");
#elif ITALIAN
ALIGNED(4) const u8 gText_UR_ShowTrainerCard[] = _("L'altro ALLENATORE ti ha mostrato\nla sua SCHEDA ALLENATORE.\pVuoi mostrargli la tua SCHEDA\nALLENATORE?");
ALIGNED(4) const u8 gText_UR_BattleChallenge[] = _("L'altro ALLENATORE ti sfida\na lottare.\pAccetti la sfida?");
ALIGNED(4) const u8 gText_UR_ChatInvitation[] = _("L'altro ALLENATORE ti invita\na chattare.\pAccetti l'invito?");
ALIGNED(4) const u8 gText_UR_OfferToTradeMon[] = _("Ricevuta offerta di scambio: il tuo\n{DYNAMIC 1} del L. {DYNAMIC 0} registrato\pper {DYNAMIC 3} del L. {DYNAMIC 2}.\pAccetti l'offerta?");
ALIGNED(4) const u8 gText_UR_OfferToTradeEgg[] = _("Ricevuta offerta di scambio\nper il tuo UOVO registrato.\lAccetti l'offerta?");
ALIGNED(4) const u8 gText_UR_ChatDropped[] = _("La chat è stata interrotta.\p");
ALIGNED(4) const u8 gText_UR_OfferDeclined1[] = _("Hai rifiutato l'offerta.\p");
ALIGNED(4) const u8 gText_UR_OfferDeclined2[] = _("Hai rifiutato l'offerta.\p");
ALIGNED(4) const u8 gText_UR_ChatEnded[] = _("La chat è stata conclusa.\p");
#endif

// Unused
static const u8 *const sInvitationTexts[] = {
    gText_UR_ShowTrainerCard,
    gText_UR_BattleChallenge,
    gText_UR_ChatInvitation,
    gText_UR_OfferToTradeMon
};

#if ENGLISH
ALIGNED(4) static const u8 sText_JoinChatMale[] = _("Oh, hey! We're in a chat right now.\nWant to join us?");
ALIGNED(4) static const u8 sText_PlayerJoinChatMale[] = _("{STR_VAR_1}: Hey, {PLAYER}!\nWe're having a chat right now.\lWant to join us?");
ALIGNED(4) static const u8 sText_JoinChatFemale[] = _("Oh, hi! We're having a chat now.\nWould you like to join us?");
ALIGNED(4) static const u8 sText_PlayerJoinChatFemale[] = _("{STR_VAR_1}: Oh, hi, {PLAYER}!\nWe're having a chat now.\lWould you like to join us?");
#elif SPANISH
ALIGNED(4) static const u8 sText_JoinChatMale[] = _("¡Eh, hola! ¡Estamos chateando!\n¿Te apuntas?");
ALIGNED(4) static const u8 sText_PlayerJoinChatMale[] = _("{STR_VAR_1}: ¡Eh, {PLAYER}!\n¡Estamos chateando!\l¿Te apuntas?");
ALIGNED(4) static const u8 sText_JoinChatFemale[] = _("¡Anda, hola! ¡Estamos chateando!\n¿Te apuntas?");
ALIGNED(4) static const u8 sText_PlayerJoinChatFemale[] = _("{STR_VAR_1}: ¡Hola, {PLAYER}!\n¡Estamos chateando!\l¿Te apuntas?");
#elif ITALIAN
ALIGNED(4) static const u8 sText_JoinChatMale[] = _("Ehi, ciao! Siamo in chat!\nVuoi partecipare?");
ALIGNED(4) static const u8 sText_PlayerJoinChatMale[] = _("{STR_VAR_1}: Ehi, {PLAYER}!\nSiamo in chat!\lVuoi partecipare?");
ALIGNED(4) static const u8 sText_JoinChatFemale[] = _("Ciao! Siamo in chat!\nVuoi partecipare?");
ALIGNED(4) static const u8 sText_PlayerJoinChatFemale[] = _("{STR_VAR_1}: Ciao, {PLAYER}!\nSiamo in chat!\lVuoi partecipare?");
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

#if ENGLISH
ALIGNED(4) const u8 gText_UR_TrainerAppearsBusy[] = _("……\nThe TRAINER appears to be busy…\p");
ALIGNED(4) static const u8 sText_WaitForBattleMale[] = _("A battle, huh?\nAll right, just give me some time.");
ALIGNED(4) static const u8 sText_WaitForChatMale[] = _("You want to chat, huh?\nSure, just wait a little.");
ALIGNED(4) static const u8 sText_ShowTrainerCardMale[] = _("Sure thing! As my “Greetings,”\nhere's my TRAINER CARD.");
ALIGNED(4) static const u8 sText_WaitForBattleFemale[] = _("A battle? Of course, but I need\ntime to get ready.");
ALIGNED(4) static const u8 sText_WaitForChatFemale[] = _("Did you want to chat?\nOkay, but please wait a moment.");
ALIGNED(4) static const u8 sText_ShowTrainerCardFemale[] = _("As my introduction, I'll show you\nmy TRAINER CARD.");
#elif SPANISH
ALIGNED(4) const u8 gText_UR_TrainerAppearsBusy[] = _("(?)... Parece que el ENTRENADOR\nestá comunicando...\p");
ALIGNED(4) static const u8 sText_WaitForBattleMale[] = _("Quieres luchar, ¿eh?\nVale, pero dame un poco de tiempo.");
ALIGNED(4) static const u8 sText_WaitForChatMale[] = _("¿Quieres chatear?\nGenial, pero espera un momento.");
ALIGNED(4) static const u8 sText_ShowTrainerCardMale[] = _("¿Te gusta mi FICHA de ENTRENADOR?");
ALIGNED(4) static const u8 sText_WaitForBattleFemale[] = _("¿Un combate? ¡Hecho!\nDeja sólo que me prepare.");
ALIGNED(4) static const u8 sText_WaitForChatFemale[] = _("¿Chatear? ¡Por mí, perfecto!\nDame sólo un segundo.");
ALIGNED(4) static const u8 sText_ShowTrainerCardFemale[] = _("Mira, te dejo que veas mi FICHA\nde ENTRENADOR.");
#elif ITALIAN
ALIGNED(4) const u8 gText_UR_TrainerAppearsBusy[] = _("……\nL'ALLENATORE è\loccupato…\p");
ALIGNED(4) static const u8 sText_WaitForBattleMale[] = _("Una lotta?\nVa bene! Dammi solo un momento!");
ALIGNED(4) static const u8 sText_WaitForChatMale[] = _("Vuoi chattare?\nBenissimo! Dammi solo un momento!");
ALIGNED(4) static const u8 sText_ShowTrainerCardMale[] = _("Senz'altro! Eccoti la mia SCHEDA\nALLENATORE, come saluto!");
ALIGNED(4) static const u8 sText_WaitForBattleFemale[] = _("Una lotta?\nVa bene! Aspetta solo un momento!");
ALIGNED(4) static const u8 sText_WaitForChatFemale[] = _("Vuoi chattare?\nOK, aspetta un momento.");
ALIGNED(4) static const u8 sText_ShowTrainerCardFemale[] = _("Per presentarmi ti mostro la\nmia SCHEDA ALLENATORE!");
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
#if ENGLISH
ALIGNED(4) static const u8 sText_DoneWaitingBattleMale[] = _("Thanks for waiting!\nLet's get our battle started!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatMale[] = _("All right!\nLet's chat!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingBattleFemale[] = _("Sorry I made you wait!\nLet's get started!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatFemale[] = _("Sorry I made you wait!\nLet's chat.{PAUSE 60}");
ALIGNED(4) static const u8 sText_TradeWillBeStarted[] = _("The trade will be started.{PAUSE 60}");
ALIGNED(4) static const u8 sText_BattleWillBeStarted[] = _("The battle will be started.{PAUSE 60}");
ALIGNED(4) static const u8 sText_EnteringChat[] = _("Entering the chat…{PAUSE 60}");
#elif SPANISH
ALIGNED(4) static const u8 sText_DoneWaitingBattleMale[] = _("¡Gracias por esperar!\n¡Empecemos el combate!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatMale[] = _("¡Bueno, a chatear se ha dicho!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingBattleFemale[] = _("Perdona que te haya hecho\nesperar. ¡Ya estoy!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatFemale[] = _("Perdona que te haya hecho\nesperar. ¡A chatear!{PAUSE 60}");
ALIGNED(4) static const u8 sText_TradeWillBeStarted[] = _("El intercambio va a comenzar.{PAUSE 60}");
ALIGNED(4) static const u8 sText_BattleWillBeStarted[] = _("El combate va a comenzar.{PAUSE 60}");
ALIGNED(4) static const u8 sText_EnteringChat[] = _("Entrando en el chat...{PAUSE 60}");
#elif ITALIAN
ALIGNED(4) static const u8 sText_DoneWaitingBattleMale[] = _("Scusa, t'ho fatto attendere!\nDiamo inizio alla lotta!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatMale[] = _("Bene!\nDai, chattiamo un po'!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingBattleFemale[] = _("Scusa, t'ho fatto attendere.\nDai, iniziamo!{PAUSE 60}");
ALIGNED(4) static const u8 sText_DoneWaitingChatFemale[] = _("Scusa, t'ho fatto attendere.\nDai, chattiamo!{PAUSE 60}");
ALIGNED(4) static const u8 sText_TradeWillBeStarted[] = _("Ha inizio lo scambio.{PAUSE 60}");
ALIGNED(4) static const u8 sText_BattleWillBeStarted[] = _("Ha inizio la lotta.{PAUSE 60}");
ALIGNED(4) static const u8 sText_EnteringChat[] = _("Ha inizio la chat.{PAUSE 60}");
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

#if ENGLISH
ALIGNED(4) static const u8 sText_BattleDeclinedMale[] = _("Sorry! My POKéMON don't seem to\nbe feeling too well right now.\lLet me battle you another time.\p");
ALIGNED(4) static const u8 sText_BattleDeclinedFemale[] = _("I'm terribly sorry, but my POKéMON\naren't feeling well…\pLet's battle another time.\p");
#elif SPANISH
ALIGNED(4) static const u8 sText_BattleDeclinedMale[] = _("Lo siento, pero mis POKéMON\nno se encuentran muy allá...\lDejémoslo para otra ocasión.\p");
ALIGNED(4) static const u8 sText_BattleDeclinedFemale[] = _("No sabes cómo lo siento, pero mis\nPOKéMON no se encuentran bien...\lYa lucharemos en otro momento.\p");
#elif ITALIAN
ALIGNED(4) static const u8 sText_BattleDeclinedMale[] = _("Scusa, ma i miei POKéMON non si\nsentono molto bene al momento.\lLotteremo un'altra volta!\p");
ALIGNED(4) static const u8 sText_BattleDeclinedFemale[] = _("Mi spiace, ma i miei POKéMON non\nsi sentono bene in questo momento.\lSarà per un'altra volta!\p");
#endif

const u8 *const gTexts_UR_BattleDeclined[GENDER_COUNT] = {
    sText_BattleDeclinedMale,
    sText_BattleDeclinedFemale
};

#if ENGLISH
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedMale[] = _("Huh? My TRAINER CARD…\nWhere'd it go now?\lSorry! I'll show you another time!\p");
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedFemale[] = _("Oh? Now where did I put my\nTRAINER CARD?…\lSorry! I'll show you later!\p");
#elif SPANISH
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedMale[] = _("¿Mmm? ¿Dónde habré puesto\nmi FICHA de ENTRENADOR?...\l¡Bueno, otra vez será!\p");
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedFemale[] = _("Eh..., no sé dónde he metido\nmi FICHA de ENTRENADOR...\l¡Te la enseñaré en otra ocasión!\p");
#elif ITALIAN
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedMale[] = _("Dov'è finita la mia SCHEDA\nALLENATORE?! Scusa, te la\lmostrerò un'altra volta.\p");
ALIGNED(4) static const u8 sText_ShowTrainerCardDeclinedFemale[] = _("Ma dove avrò messo la mia SCHEDA\nALLENATORE?! Scusa ma non\lte la posso mostrare.\p");
#endif

const u8 *const gTexts_UR_ShowTrainerCardDeclined[GENDER_COUNT] = {
    sText_ShowTrainerCardDeclinedMale,
    sText_ShowTrainerCardDeclinedFemale
};

#if ENGLISH
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingMale[] = _("If you want to do something with\nme, just give me a shout!\p");
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingFemale[] = _("If you want to do something with\nme, don't be shy.\p");
#elif SPANISH
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingMale[] = _("Cuando quieras que hagamos algo,\n¡ya sabes dónde estoy!\p");
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingFemale[] = _("Cuando quieras que hagamos algo\nme lo dices, ¿eh?\p");
#elif ITALIAN
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingMale[] = _("Se vuoi chattare, scambiare o\nlottare con me, fammi un fischio.\p");
ALIGNED(4) static const u8 sText_IfYouWantToDoSomethingFemale[] = _("Se vuoi chattare, scambiare o\nlottare con me, mi trovi qui.\p");
#endif

const u8 *const gTexts_UR_IfYouWantToDoSomething[GENDER_COUNT] = {
    sText_IfYouWantToDoSomethingMale,
    sText_IfYouWantToDoSomethingFemale
};

#if ENGLISH
ALIGNED(4) const u8 gText_UR_TrainerBattleBusy[] = _("Whoops! Sorry, but I have to do\nsomething else.\lAnother time, okay?\p");
ALIGNED(4) const u8 gText_UR_NeedTwoMonsOfLevel30OrLower1[] = _("If you want to battle, you need\ntwo POKéMON that are below\lLv. 30.\p");
ALIGNED(4) const u8 gText_UR_NeedTwoMonsOfLevel30OrLower2[] = _("For a battle, you need two\nPOKéMON that are below Lv. 30.\p");

ALIGNED(4) static const u8 sText_DeclineChatMale[] = _("Oh, all right.\nCome see me anytime, okay?\p");
ALIGNED(4) static const u8 stext_DeclineChatFemale[] = _("Oh…\nPlease come by anytime.\p");
#elif SPANISH
ALIGNED(4) const u8 gText_UR_TrainerBattleBusy[] = _("¡Anda, si yo tenía que hacer\nun montón de cosas!\lOtra vez será, ¡lo siento!\p");
ALIGNED(4) const u8 gText_UR_NeedTwoMonsOfLevel30OrLower1[] = _("Para luchar, necesitas dos POKéMON\nde nivel inferior a 30.\p");
ALIGNED(4) const u8 gText_UR_NeedTwoMonsOfLevel30OrLower2[] = _("Si quieres luchar, necesitas dos\nPOKéMON de nivel inferior a 30.\p");

ALIGNED(4) static const u8 sText_DeclineChatMale[] = _("Bueno, hasta la próxima.\p");
ALIGNED(4) static const u8 stext_DeclineChatFemale[] = _("Oh...\nBueno, ya nos veremos.\p");
#elif ITALIAN
ALIGNED(4) const u8 gText_UR_TrainerBattleBusy[] = _("Scusa ma ho qualcos'altro da\nfare. Sarà per la prossima volta!\p");
ALIGNED(4) const u8 gText_UR_NeedTwoMonsOfLevel30OrLower1[] = _("Per lottare, devi avere due\nPOKéMON sotto il L. 30.\p");
ALIGNED(4) const u8 gText_UR_NeedTwoMonsOfLevel30OrLower2[] = _("Puoi lottare se hai due\nPOKéMON sotto il L. 30.\p");

ALIGNED(4) static const u8 sText_DeclineChatMale[] = _("Oh… Va bene.\nTorna a trovarmi quando vuoi!");
ALIGNED(4) static const u8 stext_DeclineChatFemale[] = _("Oh…\nBeh, torna quando vuoi!");
#endif

// Response from partner when player declines chat
const u8 *const gTexts_UR_DeclineChat[GENDER_COUNT] = {
    sText_DeclineChatMale,
    stext_DeclineChatFemale
};

#if ENGLISH
ALIGNED(4) static const u8 sText_ChatDeclinedMale[] = _("Oh, sorry!\nI just can't right this instant.\lLet's chat another time.\p");
ALIGNED(4) static const u8 sText_ChatDeclinedFemale[] = _("Oh, I'm sorry.\nI have too much to do right now.\lLet's chat some other time.\p");
#elif SPANISH
ALIGNED(4) static const u8 sText_ChatDeclinedMale[] = _("Lo siento, ahora mismo no me\nviene bien.\lYa chatearemos en otro momento.\p");
ALIGNED(4) static const u8 sText_ChatDeclinedFemale[] = _("Lo siento, ahora tengo mucho\nque hacer.\lYa chatearemos en otra ocasión.\p");
#elif ITALIAN
ALIGNED(4) static const u8 sText_ChatDeclinedMale[] = _("Scusa ma non posso in questo\nmomento.\lChatteremo un'altra volta.\p");
ALIGNED(4) static const u8 sText_ChatDeclinedFemale[] = _("Scusa, in questo momento non\nposso proprio. Avremo altre\loccasioni per chattare.\p");
#endif

// Response from partner when they decline chat
const u8 *const gTexts_UR_ChatDeclined[GENDER_COUNT] = {
    sText_ChatDeclinedMale,
    sText_ChatDeclinedFemale
};

#if ENGLISH
ALIGNED(4) static const u8 sText_YoureToughMale[] = _("Whoa!\nI can tell you're pretty tough!\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveMale[] = _("You used that move?\nThat's good strategy!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseMale[] = _("Way to go!\nThat was an eye-opener!\p");
ALIGNED(4) static const u8 sText_SwitchedMonsMale[] = _("Oh! How could you use that\nPOKéMON in that situation?\p");
ALIGNED(4) static const u8 sText_YoureToughFemale[] = _("That POKéMON…\nIt's been raised really well!\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveFemale[] = _("That's it!\nThis is the right move now!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseFemale[] = _("That's awesome!\nYou can battle that way?\p");
ALIGNED(4) static const u8 sText_SwitchedMonsFemale[] = _("You have exquisite timing for\nswitching POKéMON!\p");
#elif SPANISH
ALIGNED(4) static const u8 sText_YoureToughMale[] = _("¡Guauuu!\n¡Sí que sois fuertes!\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveMale[] = _("¡Qué movimiento tan genial!\n¡Qué estrategia tan buena!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseMale[] = _("¡Qué pasada!\n¡Alucinante!\p");
ALIGNED(4) static const u8 sText_SwitchedMonsMale[] = _("¿Pero cómo se puede usar a\nese POKéMON en una situación así?\p");
ALIGNED(4) static const u8 sText_YoureToughFemale[] = _("Ese POKéMON sí que está bien\nentrenado...\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveFemale[] = _("¡Eso es! ¡Ése es el movimiento\nque hay que usar aquí!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseFemale[] = _("¡Es impresionante!\n¿Pero cómo se puede luchar así?\p");
ALIGNED(4) static const u8 sText_SwitchedMonsFemale[] = _("¡No se puede cambiar de POKéMON\nen un momento mejor!\p");
#elif ITALIAN
ALIGNED(4) static const u8 sText_YoureToughMale[] = _("Ti ho visto: sei forte!");
ALIGNED(4) static const u8 sText_UsedGoodMoveMale[] = _("Ho visto la mossa che hai\nusato!\lGrande strategia!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseMale[] = _("Così si fa!\nSei stupefacente!\p");
ALIGNED(4) static const u8 sText_SwitchedMonsMale[] = _("Come fai a guidare così bene\ni tuoi POKéMON nella lotta?\p");
ALIGNED(4) static const u8 sText_YoureToughFemale[] = _("Quel tuo POKéMON…\n…è davvero notevole!\p");
ALIGNED(4) static const u8 sText_UsedGoodMoveFemale[] = _("Proprio la mossa giusta!\p");
ALIGNED(4) static const u8 sText_BattleSurpriseFemale[] = _("Incredibile!\nCome fai a lottare in quel modo?\p");
ALIGNED(4) static const u8 sText_SwitchedMonsFemale[] = _("Sai perfettamente quando sostituire\ni POKéMON!\p");
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

#if ENGLISH
ALIGNED(4) static const u8 sText_LearnedSomethingMale[] = _("Oh, I see!\nThis is educational!\p");
ALIGNED(4) static const u8 sText_ThatsFunnyMale[] = _("Don't say anything funny anymore!\nI'm sore from laughing!\p");
ALIGNED(4) static const u8 sText_RandomChatMale1[] = _("Oh?\nSomething like that happened.\p");
ALIGNED(4) static const u8 sText_RandomChatMale2[] = _("Hmhm… What?\nSo is this what you're saying?\p");
ALIGNED(4) static const u8 sText_LearnedSomethingFemale[] = _("Is that right?\nI didn't know that.\p");
ALIGNED(4) static const u8 sText_ThatsFunnyFemale[] = _("Ahaha!\nWhat is that about?\p");
ALIGNED(4) static const u8 sText_RandomChatFemale1[] = _("Yes, that's exactly it!\nThat's what I meant.\p");
ALIGNED(4) static const u8 sText_RandomChatFemale2[] = _("In other words…\nYes! That's right!\p");
#elif SPANISH
ALIGNED(4) static const u8 sText_LearnedSomethingMale[] = _("¡Hay cosas que se aprenden\ndesde pequeño!\p");
ALIGNED(4) static const u8 sText_ThatsFunnyMale[] = _("¡Parad ya, que me parto de risa\n:-O!\p");
ALIGNED(4) static const u8 sText_RandomChatMale1[] = _("Anda, qué curioso...\p");
ALIGNED(4) static const u8 sText_RandomChatMale2[] = _("Mmmm... ¿Cómo?\n¿He entendido bien?\p");
ALIGNED(4) static const u8 sText_LearnedSomethingFemale[] = _("Anda...\nNo tenía ni idea...\p");
ALIGNED(4) static const u8 sText_ThatsFunnyFemale[] = _("¿De qué va la cosa?\p");
ALIGNED(4) static const u8 sText_RandomChatFemale1[] = _("¡Eso mismo digo yo!\p");
ALIGNED(4) static const u8 sText_RandomChatFemale2[] = _("Eh...\n¡Así es!\p");
#elif ITALIAN
ALIGNED(4) static const u8 sText_LearnedSomethingMale[] = _("Ah, davvero? Non lo sapevo!\p");
ALIGNED(4) static const u8 sText_ThatsFunnyMale[] = _("Sei troppo divertente! Mi sto\nsbellicando dalle risate!\p");
ALIGNED(4) static const u8 sText_RandomChatMale1[] = _("Eh?\nNon ci credo!\p");
ALIGNED(4) static const u8 sText_RandomChatMale2[] = _("Dici davvero?\p");
ALIGNED(4) static const u8 sText_LearnedSomethingFemale[] = _("Ma va'?\p");
ALIGNED(4) static const u8 sText_ThatsFunnyFemale[] = _("Non ho capito. Puoi ripetere?\p");
ALIGNED(4) static const u8 sText_RandomChatFemale1[] = _("Mi hai tolto le parole di bocca!\p");
ALIGNED(4) static const u8 sText_RandomChatFemale2[] = _("Certo! Hai ragione!\p");
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

#if ENGLISH
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale1[] = _("I'm just showing my TRAINER CARD\nas my way of greeting.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale2[] = _("I hope I get to know you better!\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale1[] = _("We're showing each other our\nTRAINER CARDS to get acquainted.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale2[] = _("Glad to meet you.\nPlease don't be a stranger!\p");
#elif SPANISH
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale1[] = _("Mira mi FICHA de ENTRENADOR.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale2[] = _("Espero que nos conozcamos mejor.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale1[] = _("Está bien enseñarse las FICHAS\nde ENTRENADOR para conocerse.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale2[] = _("Me alegro de conocerte.\n¡Espero que tú también!\p");
#elif ITALIAN
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale1[] = _("Questa è la mia SCHEDA\nALLENATORE, per presentarmi.\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardMale2[] = _("Spero che faremo amicizia!\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale1[] = _("Mostriamoci le SCHEDE ALLENATORE,\ncosì ci conosciamo!\p");
ALIGNED(4) static const u8 sText_ShowedTrainerCardFemale2[] = _("Piacere di conoscerti.\nDico davvero!\p");
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

#if ENGLISH
ALIGNED(4) static const u8 sText_MaleTraded1[] = _("Yeahah!\nI really wanted this POKéMON!\p");
ALIGNED(4) static const u8 sText_MaleTraded2[] = _("Finally, a trade got me that\nPOKéMON I'd wanted a long time.\p");
ALIGNED(4) static const u8 sText_FemaleTraded1[] = _("I'm trading POKéMON right now.\p");
ALIGNED(4) static const u8 sText_FemaleTraded2[] = _("I finally got that POKéMON I\nwanted in a trade!\p");
#elif SPANISH
ALIGNED(4) static const u8 sText_MaleTraded1[] = _("¡Yuuuujuu!\n¡Siempre he querido este POKéMON!\p");
ALIGNED(4) static const u8 sText_MaleTraded2[] = _("¡Por fin! ¡Menos mal que se pueden\nconseguir POKéMON por intercambio!\p");
ALIGNED(4) static const u8 sText_FemaleTraded1[] = _("¡Estoy intercambiando POKéMON!\p");
ALIGNED(4) static const u8 sText_FemaleTraded2[] = _("¡Qué ganas de tener ese POKéMON!\p");
#elif ITALIAN
ALIGNED(4) static const u8 sText_MaleTraded1[] = _("Grandioso!\nProprio il POKéMON che volevo!\p");
ALIGNED(4) static const u8 sText_MaleTraded2[] = _("Era tanto che volevo ottenere\nquesto POKéMON! Ottimo scambio!\p");
ALIGNED(4) static const u8 sText_FemaleTraded1[] = _("Sto facendo uno scambio di\nPOKéMON.\p");
ALIGNED(4) static const u8 sText_FemaleTraded2[] = _("Ecco il POKéMON che cercavo!\nSono felice dello scambio!\p");
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

#if ENGLISH
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
#elif SPANISH
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
#elif ITALIAN
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
#endif

// Unused
static const u8 *const sCantTradeMonTexts[] = {
    sText_PlayerCantTradeForYourMon,
    sText_CantTradeForPartnersMon
};

#if ENGLISH
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
#elif SPANISH
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
#elif ITALIAN
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

#if ENGLISH
ALIGNED(4) const u8 gText_UR_SearchingForWirelessSystemWait[] = _("Searching for a WIRELESS\nCOMMUNICATION SYSTEM. Wait...");
ALIGNED(4) static const u8 sText_MustHaveTwoMonsForDoubleBattle[] = _("ダブルバトルでは 2ひき いじょうの\nポケモンが ひつようです\p");
ALIGNED(4) const u8 gText_UR_AwaitingPlayersResponse[] = _("Awaiting {STR_VAR_1}'s response…");
ALIGNED(4) const u8 gText_UR_PlayerHasBeenAskedToRegisterYouPleaseWait[] = _("{STR_VAR_1} has been asked to register\nyou as a member. Please wait.");
ALIGNED(4) const u8 gText_UR_AwaitingResponseFromWirelessSystem[] = _("Awaiting a response from the\nWIRELESS COMMUNICATION SYSTEM.");
ALIGNED(4) static const u8 sText_PleaseWaitForOtherTrainersToGather[] = _("ほかの さんかしゃが そろうまで\nしょうしょう おまちください");

ALIGNED(4) static const u8 sText_NoCardsSharedRightNow[] = _("No CARDS appear to be shared \nright now.");
ALIGNED(4) static const u8 sText_NoNewsSharedRightNow[] = _("No NEWS appears to be shared\nright now.");
#elif SPANISH
ALIGNED(4) const u8 gText_UR_SearchingForWirelessSystemWait[] = _("Buscando el sistema de\nCOMUNICACIÓN INALÁMBRICA...");
ALIGNED(4) static const u8 sText_MustHaveTwoMonsForDoubleBattle[] = _("ダブルバトルでは 2ひき いじょうの\nポケモンが ひつようです\p");
ALIGNED(4) const u8 gText_UR_AwaitingPlayersResponse[] = _("Esperando respuesta de {STR_VAR_1}...");
ALIGNED(4) const u8 gText_UR_PlayerHasBeenAskedToRegisterYouPleaseWait[] = _("Se le ha pedido a {STR_VAR_1}\nque te registre en el grupo...");
ALIGNED(4) const u8 gText_UR_AwaitingResponseFromWirelessSystem[] = _("Esperando respuesta del sistema\nde COMUNICACIÓN INALÁMBRICA...");
ALIGNED(4) static const u8 sText_PleaseWaitForOtherTrainersToGather[] = _("ほかの さんかしゃが そろうまで\nしょうしょう おまちください");

ALIGNED(4) static const u8 sText_NoCardsSharedRightNow[] = _("En este momento no parece que\nse estén compartiendo TARJETAS.");
ALIGNED(4) static const u8 sText_NoNewsSharedRightNow[] = _("En este momento no parece que\nse estén compartiendo NOTICIAS.");
#elif ITALIAN
ALIGNED(4) const u8 gText_UR_SearchingForWirelessSystemWait[] = _("Ricerca di un SISTEMA\nCOMUNICAZIONE WIRELESS. Attendi…");
ALIGNED(4) static const u8 sText_MustHaveTwoMonsForDoubleBattle[] = _("ダブルバトルでは 2ひき いじょうの\nポケモンが ひつようです\p");
ALIGNED(4) const u8 gText_UR_AwaitingPlayersResponse[] = _("In attesa di risposta da {STR_VAR_1}.");
ALIGNED(4) const u8 gText_UR_PlayerHasBeenAskedToRegisterYouPleaseWait[] = _("{STR_VAR_1} ha ricevuto la tua\nrichiesta di partecipare. Attendi…");
ALIGNED(4) const u8 gText_UR_AwaitingResponseFromWirelessSystem[] = _("In attesa di risposta dal SISTEMA\nCOMUNICAZIONE WIRELESS.");
ALIGNED(4) static const u8 sText_PleaseWaitForOtherTrainersToGather[] = _("ほかの さんかしゃが そろうまで\nしょうしょう おまちください");

ALIGNED(4) static const u8 sText_NoCardsSharedRightNow[] = _("Non ci sono SCHEDE condivise\nal momento.");
ALIGNED(4) static const u8 sText_NoNewsSharedRightNow[] = _("Non ci sono NOTIZIE condivise\nal momento.");
#endif

const u8 *const gTexts_UR_NoWonderShared[] = {
    sText_NoCardsSharedRightNow,
    sText_NoNewsSharedRightNow
};

#if ENGLISH
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
#elif SPANISH
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
#elif ITALIAN
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
#endif

const u8 *const gTexts_UR_CardColor[] = {
    sText_ItsNormalCard,
    sText_ItsBronzeCard,
    sText_ItsCopperCard,
    sText_ItsSilverCard,
    sText_ItsGoldCard
};

#if ENGLISH
ALIGNED(4) const u8 gText_UR_TrainerCardInfoPage1[] = _("This is {DYNAMIC 0} {DYNAMIC 1}'s\nTRAINER CARD…\l{DYNAMIC 2}\pPOKéDEX: {DYNAMIC 3}\nTIME:    {DYNAMIC 4}:{DYNAMIC 5}\p");
ALIGNED(4) const u8 gText_UR_TrainerCardInfoPage2[] = _("BATTLES: {DYNAMIC 0} WINS  {DYNAMIC 2} LOSSES\nTRADES:  {DYNAMIC 3} TIMES\p“{DYNAMIC 4} {DYNAMIC 5}\n{DYNAMIC 6} {DYNAMIC 7}”\p");
ALIGNED(4) static const u8 sText_GladToMeetYouMale[] = _("{DYNAMIC 1}: Glad to have met you!{PAUSE 60}");
ALIGNED(4) static const u8 sText_GladToMeetYouFemale[] = _("{DYNAMIC 1}: Glad to meet you!{PAUSE 60}");
#elif SPANISH
ALIGNED(4) const u8 gText_UR_TrainerCardInfoPage1[] = _("Ésta es la FICHA de ENTRENADOR\nde {DYNAMIC 0} {DYNAMIC 1}...\l{DYNAMIC 2}\pPOKéDEX: {DYNAMIC 3}\nTIEMPO J.:    {DYNAMIC 4}:{DYNAMIC 5}\p");
ALIGNED(4) const u8 gText_UR_TrainerCardInfoPage2[] = _("COMBATES.: {DYNAMIC 0} V  {DYNAMIC 2} D\nINTERCAMBIOS:  {DYNAMIC 3}\p“{DYNAMIC 4} {DYNAMIC 5}\n{DYNAMIC 6} {DYNAMIC 7}”\p");
ALIGNED(4) static const u8 sText_GladToMeetYouMale[] = _("{DYNAMIC 1}: ¡Me alegro de conocerte!{PAUSE 60}");
ALIGNED(4) static const u8 sText_GladToMeetYouFemale[] = _("{DYNAMIC 1}: ¡Es un placer conocerte!{PAUSE 60}");
#elif ITALIAN
ALIGNED(4) const u8 gText_UR_TrainerCardInfoPage1[] = _("Questa è la SCHEDA\nALLENATORE di\l{DYNAMIC 1}, {DYNAMIC 0}.\p{DYNAMIC 2}\pPOKéDEX: {DYNAMIC 3}\nTEMPO: {DYNAMIC 4}:{DYNAMIC 5}\p");
ALIGNED(4) const u8 gText_UR_TrainerCardInfoPage2[] = _("LOTTE: {DYNAMIC 0} VINTE  {DYNAMIC 2} PERSE\nSCAMBI: {DYNAMIC 3} VOLTE\p“{DYNAMIC 4} {DYNAMIC 5}\n{DYNAMIC 6} {DYNAMIC 5}”\p");
ALIGNED(4) static const u8 sText_GladToMeetYouMale[] = _("{DYNAMIC 1}: Piacere di conoscerti!{PAUSE 60}");
ALIGNED(4) static const u8 sText_GladToMeetYouFemale[] = _("{DYNAMIC 1}: Piacere!{PAUSE 60}");
#endif

const u8 *const gTexts_UR_GladToMeetYou[GENDER_COUNT] = {
    sText_GladToMeetYouMale,
    sText_GladToMeetYouFemale
};

#if ENGLISH
ALIGNED(4) const u8 gText_UR_FinishedCheckingPlayersTrainerCard[] = _("Finished checking {DYNAMIC 1}'s\nTRAINER CARD.{PAUSE 60}");
ALIGNED(4) static const u8 sText_CanceledReadingCard[] = _("Canceled reading the Card.");
#elif SPANISH
ALIGNED(4) const u8 gText_UR_FinishedCheckingPlayersTrainerCard[] = _("Leída la FICHA de ENTRENADOR\nde {DYNAMIC 1}.{PAUSE 60}");
static const u8 sText_CanceledReadingCard[] = _("Cancelada la lectura de la TARJETA.");
#elif ITALIAN
ALIGNED(4) const u8 gText_UR_FinishedCheckingPlayersTrainerCard[] = _("Completata la lettura della SCHEDA\nALLENATORE di {DYNAMIC 1}.{PAUSE 60}");
ALIGNED(4) static const u8 sText_CanceledReadingCard[] = _("Annullata la lettura della Scheda.");
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
