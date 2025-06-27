const u8 gText_PkmnIsEvolving[] = _("¡Anda!\n¡{STR_VAR_1} está evolucionando!");
const u8 gText_CongratsPkmnEvolved[] = _("¡Enhorabuena! ¡Tu {STR_VAR_1}\nse ha convertido en {STR_VAR_2}!{WAIT_SE}\p");
const u8 gText_PkmnStoppedEvolving[] = _("¿Eh? ¡La evolución de\n{STR_VAR_1} se ha detenido!\p");
const u8 gText_EllipsisQuestionMark[] = _("... ...?\p");
const u8 gText_WhatWillPkmnDo[] = _("¿Qué debería hacer\n{B_ACTIVE_NAME_WITH_PREFIX}?");
const u8 gText_WhatWillPlayerThrow[] = _("¿Qué hará\n{B_PLAYER_NAME}?");
const u8 gText_WhatWillOldManDo[] = _("¿Qué hará el\nseñor mayor?");
const u8 gText_LinkStandby[] = _("{PAUSE 16}Esperando conexión...");
const u8 gText_BattleMenu[] = _("{FONT_SMALL}{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW 13 14 15}LUCHA{CLEAR_TO 56}MOCHILA\nPOKéMON{CLEAR_TO 56}HUIDA{FONT_NORMAL_COPY_1}");
const u8 gText_SafariZoneMenu[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW 13 14 15}BALL{CLEAR_TO 56}CEBO\nROCA{CLEAR_TO 56}HUIDA");
const u8 gText_MoveInterfacePP[] = _("PP ");
const u8 gText_MoveInterfaceType[] = _("TIPO/");
const u8 gText_MoveInterfaceDynamicColors[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW 13 14 15}");
const u8 gText_WhichMoveToForget_Unused[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW 13 14 15}どの わざを\nわすれさせたい?");
const u8 gText_BattleYesNoChoice[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW 13 14 15}Sí\nNo");
const u8 gText_BattleSwitchWhich[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW 13 14 15}¿Cuál\ncambias?");
static const u8 sText_UnusedColors[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW 13 14 15}");
static const u8 sText_RightArrow2[] = _("{RIGHT_ARROW_2}");
static const u8 sText_Plus[] = _("{PLUS}");
static const u8 sText_Dash[] = _("-");

static const u8 sText_MaxHP[] = _("{FONT_SMALL}PS{FONT_NORMAL} máx.");
static const u8 sText_Attack[] = _("ATAQUE ");
static const u8 sText_Defense[] = _("DEFENSA");
static const u8 sText_SpAtk[] = _("AT. ESP.");
static const u8 sText_SpDef[] = _("DEF. ESP.");

// Unused
static const u8 *const sStatNamesTable2[] =
{
    sText_MaxHP,
    sText_SpAtk,
    sText_Attack,
    sText_SpDef,
    sText_Defense,
    sText_Speed
};

const u8 gText_SafariBalls[] = _("{HIGHLIGHT 2}SAFARI BALLS"); //
const u8 gText_HighlightRed_Left[] = _("{HIGHLIGHT 2}Tienes ");
const u8 gText_HighlightRed[] = _("{HIGHLIGHT 2}");
const u8 gText_Sleep[] = _("sueño");
const u8 gText_Poison[] = _("envenenamiento");
const u8 gText_Burn[] = _("quemaduras");
const u8 gText_Paralysis[] = _("parálisis");
const u8 gText_Ice[] = _("congelación");
const u8 gText_Confusion[] = _("confusión");
const u8 gText_Love[] = _("enamoramiento");
const u8 gText_BattleTowerBan_Space[] = _("  ");
const u8 gText_BattleTowerBan_Newline1[] = _("\l");
const u8 gText_BattleTowerBan_Newline2[] = _("\n");
const u8 gText_BattleTowerBan_Is1[] = _(" no pueden");
const u8 gText_BattleTowerBan_Is2[] = _(" no pueden");
const u8 gText_BadEgg[] = _("HUEVO malo");
const u8 gText_BattleWallyName[] = _("ミツル");
const u8 gText_Win[] = _("{HIGHLIGHT 0}Victoria");
const u8 gText_Loss[] = _("{HIGHLIGHT 0}Derrota");
const u8 gText_Draw[] = _("{HIGHLIGHT 0}Empate");
static const u8 sText_SpaceIs[] = _(" es");
static const u8 sText_ApostropheS[] = _("de ");
const u8 gText_ANormalMove[] = _("un mov. NORMAL");
const u8 gText_AFightingMove[] = _("un mov. LUCHA");
const u8 gText_AFlyingMove[] = _("un mov. VOLADOR");
const u8 gText_APoisonMove[] = _("un mov. VENENO");
const u8 gText_AGroundMove[] = _("un mov. TIERRA");
const u8 gText_ARockMove[] = _("un mov. ROCA");
const u8 gText_ABugMove[] = _("un mov. BICHO");
const u8 gText_AGhostMove[] = _("un mov. FANTASMA");
const u8 gText_ASteelMove[] = _("un mov. ACERO");
const u8 gText_AMysteryMove[] = _("un mov. (?)");
const u8 gText_AFireMove[] = _("un mov. FUEGO");
const u8 gText_AWaterMove[] = _("un mov. AGUA");
const u8 gText_AGrassMove[] = _("un mov. PLANTA");
const u8 gText_AnElectricMove[] = _("un mov. ELÉCTRICO");
const u8 gText_APsychicMove[] = _("un mov. PSÍQUICO");
const u8 gText_AnIceMove[] = _("un mov. HIELO");
const u8 gText_ADragonMove[] = _("un mov. DRAGÓN");
const u8 gText_ADarkMove[] = _("un mov. SINIESTRO");
const u8 gText_TimeBoard[] = _("MARCADOR");
const u8 gText_ClearTime[] = _("TIEMPO"); // Unused
const u8 gText_XMinYZSec[] = _("{STR_VAR_1} min {STR_VAR_2},{STR_VAR_3} s");
const u8 gText_Unused_1F[] = _("1F");
const u8 gText_Unused_2F[] = _("2F");
const u8 gText_Unused_3F[] = _("3F");
const u8 gText_Unused_4F[] = _("4F");
const u8 gText_Unused_5F[] = _("5F");
const u8 gText_Unused_6F[] = _("6F");
const u8 gText_Unused_7F[] = _("7F");
const u8 gText_Unused_8F[] = _("8F");

const u8 *const gTrainerTowerChallengeTypeTexts[NUM_TOWER_CHALLENGE_TYPES] =
{
    gOtherText_Single,
    gOtherText_Double,
    gOtherText_Knockout,
    gOtherText_Mixed
};

static const u8 sText_Trainer1Fled[] = _("{PLAY_SE SE_FLEE}¡{B_TRAINER1_CLASS} {B_TRAINER1_NAME} ha huido!");
static const u8 sText_PlayerLostAgainstTrainer1[] = _("¡Has perdido contra\n{B_TRAINER1_CLASS} {B_TRAINER1_NAME}!");
static const u8 sText_PlayerBattledToDrawTrainer1[] = _("¡{B_TRAINER1_CLASS} {B_TRAINER1_NAME} ha\nempatado contigo!");

