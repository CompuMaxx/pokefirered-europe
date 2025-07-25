#include "global.h"
#include "berry.h"
#include "text.h"
#include "constants/items.h"

static const u8 sBerryDescriptionPart1_Cheri[] = _("とても かわいい はなが さく.");
static const u8 sBerryDescriptionPart2_Cheri[] = _("まっかな みは とても からい.");
static const u8 sBerryDescriptionPart1_Chesto[] = _("そとの かわの ぶぶんも なかみも すべてが");
static const u8 sBerryDescriptionPart2_Chesto[] = _("かたい. どこを たべても しぶい.");
static const u8 sBerryDescriptionPart1_Pecha[] = _("とても あまくて おいしい.");
static const u8 sBerryDescriptionPart2_Pecha[] = _("やわらかいので はこぶときは ちゅうい.");
static const u8 sBerryDescriptionPart1_Rawst[] = _("はっぱの ぶぶんが ながく まるまっていると");
static const u8 sBerryDescriptionPart2_Rawst[] = _("みが とても にがく なるらしい.");
static const u8 sBerryDescriptionPart1_Aspear[] = _("かたい みの なかには すいぶんが とても");
static const u8 sBerryDescriptionPart2_Aspear[] = _("おおく ふくまれている. かなり すっぱい.");
static const u8 sBerryDescriptionPart1_Leppa[] = _("クラボなどに くらべて すこし そだつのが");
static const u8 sBerryDescriptionPart2_Leppa[] = _("おそい. みが ちいさいほど おいしい.");
static const u8 sBerryDescriptionPart1_Oran[] = _("いろいろな あじが まざった ふしぎな み.");
static const u8 sBerryDescriptionPart2_Oran[] = _("みを つけるのに はんにち かかる.");
static const u8 sBerryDescriptionPart1_Persim[] = _("たいようが だいすき. ひに あたると");
static const u8 sBerryDescriptionPart2_Persim[] = _("どんどん いろが あざやかに なる.");
static const u8 sBerryDescriptionPart1_Lum[] = _("そだつのに じかんが かかるが たいせつに");
static const u8 sBerryDescriptionPart2_Lum[] = _("そだてると みが 2つ つくことも ある.");
static const u8 sBerryDescriptionPart1_Sitrus[] = _("オレンとは きょうだいの ような そんざい.");
static const u8 sBerryDescriptionPart2_Sitrus[] = _("おおきくて あじも ととのっている.");
static const u8 sBerryDescriptionPart1_Figy[] = _("たべられた あとのような かたちの なかには");
static const u8 sBerryDescriptionPart2_Figy[] = _("からい せいぶんが つまっている.");
static const u8 sBerryDescriptionPart1_Wiki[] = _("まわりに ついている イボイボは ポケモンが");
static const u8 sBerryDescriptionPart2_Wiki[] = _("もちやすいように できたと いわれている.");
static const u8 sBerryDescriptionPart1_Mago[] = _("おおきく なれば なるほど みが まがる.");
static const u8 sBerryDescriptionPart2_Mago[] = _("まがるほど あまくて おいしい.");
static const u8 sBerryDescriptionPart1_Aguav[] = _("ちいさい サイズの はなで しかも ひかりを");
static const u8 sBerryDescriptionPart2_Aguav[] = _("ひつようと しない めずらしい きのみ.");
static const u8 sBerryDescriptionPart1_Iapapa[] = _("とても おおきな すっぱい きのみ.");
static const u8 sBerryDescriptionPart2_Iapapa[] = _("そだてるには みじかくても 1にち かかる.");
static const u8 sBerryDescriptionPart1_Razz[] = _("あかい みは たべると ちょっぴり からい.");
static const u8 sBerryDescriptionPart2_Razz[] = _("そだつのが はやく 4じかんで みを つける");
static const u8 sBerryDescriptionPart1_Bluk[] = _("そとがわは あおいいろだが たべると");
static const u8 sBerryDescriptionPart2_Bluk[] = _("くちの なかが まっくろに なる.");
static const u8 sBerryDescriptionPart1_Nanab[] = _("せかいで 7ばんめに はっけん されたので");
static const u8 sBerryDescriptionPart2_Nanab[] = _("ナナという せつが ゆうりょく. あまい.");
static const u8 sBerryDescriptionPart1_Wepear[] = _("ちいさな しろい はなが さく. にがさと");
static const u8 sBerryDescriptionPart2_Wepear[] = _("すっぱさが まざりあった びみょうな あじ.");
static const u8 sBerryDescriptionPart1_Pinap[] = _("かぜに よわく さむさにも よわい.");
static const u8 sBerryDescriptionPart2_Pinap[] = _("みの なかが からく そとがわが すっぱい.");
static const u8 sBerryDescriptionPart1_Pomeg[] = _("どんなに みずを あげても えいようが");
static const u8 sBerryDescriptionPart2_Pomeg[] = _("あっても 6つの み しか つけない.");
static const u8 sBerryDescriptionPart1_Kelpsy[] = _("ねっこの ような かたちの めずらしい");
static const u8 sBerryDescriptionPart2_Kelpsy[] = _("しゅるい. とても おおきな はなが さく.");
static const u8 sBerryDescriptionPart1_Qualot[] = _("みずが だいすき. ずっと あめが ふる");
static const u8 sBerryDescriptionPart2_Qualot[] = _("ばしょでも しっかりと そだつ.");
static const u8 sBerryDescriptionPart1_Hondew[] = _("とても こうかで なかなか めに することが");
static const u8 sBerryDescriptionPart2_Hondew[] = _("できない きのみ. とても おいしい.");
static const u8 sBerryDescriptionPart1_Grepa[] = _("やわらかさと まるい かたちからは");
static const u8 sBerryDescriptionPart2_Grepa[] = _("そうぞうが できないほど すっぱい.");
static const u8 sBerryDescriptionPart1_Tamato[] = _("くちびるが まがって しまうほど からい.");
static const u8 sBerryDescriptionPart2_Tamato[] = _("そだてるにも じかんが かかる.");
static const u8 sBerryDescriptionPart1_Cornn[] = _("おおむかしから はえていた. たくさん");
static const u8 sBerryDescriptionPart2_Cornn[] = _("うえないと みが つかないときも ある.");
static const u8 sBerryDescriptionPart1_Magost[] = _("とても あじの バランスが よいと");
static const u8 sBerryDescriptionPart2_Magost[] = _("ひょうばんの きのみ.");
static const u8 sBerryDescriptionPart1_Rabuta[] = _("たくさんの けが はえている めずらしい");
static const u8 sBerryDescriptionPart2_Rabuta[] = _("しゅるい. かなり にがい.");
static const u8 sBerryDescriptionPart1_Nomel[] = _("かなり すっぱい. 1くち たべると");
static const u8 sBerryDescriptionPart2_Nomel[] = _("3にちかん ほかの あじが しなくなる.");
static const u8 sBerryDescriptionPart1_Spelon[] = _("まっかになった みは とてつもなく からい.");
static const u8 sBerryDescriptionPart2_Spelon[] = _("イボからも からい せいぶんが でている.");
static const u8 sBerryDescriptionPart1_Pamtre[] = _("どこからともなく うみを ただよってくる.");
static const u8 sBerryDescriptionPart2_Pamtre[] = _("せかいの どこかで そだっている らしい.");
static const u8 sBerryDescriptionPart1_Watmel[] = _("とても おおきく 50センチを こえるものも");
static const u8 sBerryDescriptionPart2_Watmel[] = _("はっけん された. ものすごく あまい.");
static const u8 sBerryDescriptionPart1_Durin[] = _("みただけで にがい. あまりにも にがいので");
static const u8 sBerryDescriptionPart2_Durin[] = _("そのままで たべたひとは だれもいない.");
static const u8 sBerryDescriptionPart1_Belue[] = _("つるつるとして おいしそうだが とてつもなく");
static const u8 sBerryDescriptionPart2_Belue[] = _("すっぱい. そだてるにも じかんが かかる.");
static const u8 sBerryDescriptionPart1_Liechi[] = _("なぞのタネ. チイラのみには うみの");
static const u8 sBerryDescriptionPart2_Liechi[] = _("ちからが やどるという うわさが ある.");
static const u8 sBerryDescriptionPart1_Ganlon[] = _("なぞのタネ. リュガのみには りくの");
static const u8 sBerryDescriptionPart2_Ganlon[] = _("ちからが やどるという うわさが ある.");
static const u8 sBerryDescriptionPart1_Salac[] = _("なぞのタネ. カムラのみには そらの");
static const u8 sBerryDescriptionPart2_Salac[] = _("ちからが やどるという うわさが ある.");
static const u8 sBerryDescriptionPart1_Petaya[] = _("なぞのタネ. ヤタピのみには すべての");
static const u8 sBerryDescriptionPart2_Petaya[] = _("いきものの ちからが やどると いわれている");
static const u8 sBerryDescriptionPart1_Apicot[] = _("ふしぎな ふしぎな きのみ. なにが");
static const u8 sBerryDescriptionPart2_Apicot[] = _("おこるのか なにが できるのか わからない.");
static const u8 sBerryDescriptionPart1_Lansat[] = _("でんせつのみ と いわれている. この みを");
static const u8 sBerryDescriptionPart2_Lansat[] = _("もつと とても しあわせに なるらしい.");
static const u8 sBerryDescriptionPart1_Starf[] = _("あまりにも ちからが つよすぎるため");
static const u8 sBerryDescriptionPart2_Starf[] = _("せかいの はてに すてた まぼろしのみ.");
static const u8 sBerryDescriptionPart1_Enigma[] = _("しょうたい ふめいの きのみ.");
static const u8 sBerryDescriptionPart2_Enigma[] = _("ほしの ちからを もっている らしい.");

const struct Berry gBerries[] = {
    [ITEM_CHERI_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("ZREZA"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("CERIZ"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("LIEGIA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("AMRENA"),
        #else
            .name = _("CHERI"),
        #endif
            .firmness = BERRY_FIRMNESS_SOFT,
            .size = 20,
            .maxYield = 3,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Cheri,
            .description2 = sBerryDescriptionPart2_Cheri,
            .stageDuration = 3,
            .spicy = 10,
            .dry = 0,
            .sweet = 0,
            .bitter = 0,
            .sour = 0,
            .smoothness = 25
        },

    [ITEM_CHESTO_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("ATANIA"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("MARON"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("STAGNA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("MARON"),
        #else
            .name = _("CHESTO"),
        #endif
            .firmness = BERRY_FIRMNESS_SUPER_HARD,
            .size = 80,
            .maxYield = 3,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Chesto,
            .description2 = sBerryDescriptionPart2_Chesto,
            .stageDuration = 3,
            .spicy = 0,
            .dry = 10,
            .sweet = 0,
            .bitter = 0,
            .sour = 0,
            .smoothness = 25
        },

    [ITEM_PECHA_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("MELOC"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("PECHA"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("PESCA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("PIRSIF"),
        #else
            .name = _("PECHA"),
        #endif
            .firmness = BERRY_FIRMNESS_VERY_SOFT,
            .size = 40,
            .maxYield = 3,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Pecha,
            .description2 = sBerryDescriptionPart2_Pecha,
            .stageDuration = 3,
            .spicy = 0,
            .dry = 0,
            .sweet = 10,
            .bitter = 0,
            .sour = 0,
            .smoothness = 25
        },

    [ITEM_RAWST_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("SAFRE"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("FRAIVE"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("FRAGO"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("FRAGIA"),
        #else
            .name = _("RAWST"),
        #endif
            .firmness = BERRY_FIRMNESS_HARD,
            .size = 32,
            .maxYield = 3,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Rawst,
            .description2 = sBerryDescriptionPart2_Rawst,
            .stageDuration = 3,
            .spicy = 0,
            .dry = 0,
            .sweet = 0,
            .bitter = 10,
            .sour = 0,
            .smoothness = 25
        },

    [ITEM_ASPEAR_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("PERASI"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("WILLIA"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("PERINA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("WILBIR"),
        #else
            .name = _("ASPEAR"),
        #endif
            .firmness = BERRY_FIRMNESS_SUPER_HARD,
            .size = 50,
            .maxYield = 3,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Aspear,
            .description2 = sBerryDescriptionPart2_Aspear,
            .stageDuration = 3,
            .spicy = 0,
            .dry = 0,
            .sweet = 0,
            .bitter = 0,
            .sour = 10,
            .smoothness = 25
        },

    [ITEM_LEPPA_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("ZANAMA"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("MEPO"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("MELA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("JONAGO"),
        #else
            .name = _("LEPPA"),
        #endif
            .firmness = BERRY_FIRMNESS_VERY_HARD,
            .size = 28,
            .maxYield = 3,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Leppa,
            .description2 = sBerryDescriptionPart2_Leppa,
            .stageDuration = 4,
            .spicy = 10,
            .dry = 0,
            .sweet = 10,
            .bitter = 10,
            .sour = 10,
            .smoothness = 20
        },

    [ITEM_ORAN_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("ARANJA"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("ORAN"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("RANCIA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("SINEL"),
        #else
            .name = _("ORAN"),
        #endif
            .firmness = BERRY_FIRMNESS_SUPER_HARD,
            .size = 35,
            .maxYield = 3,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Oran,
            .description2 = sBerryDescriptionPart2_Oran,
            .stageDuration = 3,
            .spicy = 10,
            .dry = 10,
            .sweet = 10,
            .bitter = 10,
            .sour = 10,
            .smoothness = 20
        },

    [ITEM_PERSIM_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("CAQUIC"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("KIKA"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("KI"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("PERSIM"),
        #else
            .name = _("PERSIM"),
        #endif
            .firmness = BERRY_FIRMNESS_HARD,
            .size = 47,
            .maxYield = 3,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Persim,
            .description2 = sBerryDescriptionPart2_Persim,
            .stageDuration = 3,
            .spicy = 10,
            .dry = 10,
            .sweet = 10,
            .bitter = 10,
            .sour = 10,
            .smoothness = 20
        },

    [ITEM_LUM_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("ZIUELA"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("PRINE"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("PRUGNA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("PRUNUS"),
        #else
            .name = _("LUM"),
        #endif
            .firmness = BERRY_FIRMNESS_SUPER_HARD,
            .size = 34,
            .maxYield = 2,
            .minYield = 1,
            .description1 = sBerryDescriptionPart1_Lum,
            .description2 = sBerryDescriptionPart2_Lum,
            .stageDuration = 12,
            .spicy = 10,
            .dry = 10,
            .sweet = 10,
            .bitter = 10,
            .sour = 10,
            .smoothness = 20
        },

    [ITEM_SITRUS_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("ZIDRA"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("SITRUS"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("CEDRO"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("TSITRU"),
        #else
            .name = _("SITRUS"),
        #endif
            .firmness = BERRY_FIRMNESS_VERY_HARD,
            .size = 95,
            .maxYield = 3,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Sitrus,
            .description2 = sBerryDescriptionPart2_Sitrus,
            .stageDuration = 6,
            .spicy = 10,
            .dry = 10,
            .sweet = 10,
            .bitter = 10,
            .sour = 10,
            .smoothness = 20
        },

    [ITEM_FIGY_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("HIGOG"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("FIGUY"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("FICO"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("GIEFE"),
        #else
            .name = _("FIGY"),
        #endif
            .firmness = BERRY_FIRMNESS_SOFT,
            .size = 100,
            .maxYield = 3,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Figy,
            .description2 = sBerryDescriptionPart2_Figy,
            .stageDuration = 6,
            .spicy = 10,
            .dry = 0,
            .sweet = 0,
            .bitter = 0,
            .sour = 0,
            .smoothness = 25
        },

    [ITEM_WIKI_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("WIKI"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("WIKI"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("KIWI"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("WIKI"),
        #else
            .name = _("WIKI"),
        #endif
            .firmness = BERRY_FIRMNESS_HARD,
            .size = 115,
            .maxYield = 3,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Wiki,
            .description2 = sBerryDescriptionPart2_Wiki,
            .stageDuration = 6,
            .spicy = 0,
            .dry = 10,
            .sweet = 0,
            .bitter = 0,
            .sour = 0,
            .smoothness = 25
        },

    [ITEM_MAGO_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("ANGO"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("MAGO"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("MANGO"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("MAGO"),
        #else
            .name = _("MAGO"),
        #endif
            .firmness = BERRY_FIRMNESS_HARD,
            .size = 126,
            .maxYield = 3,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Mago,
            .description2 = sBerryDescriptionPart2_Mago,
            .stageDuration = 6,
            .spicy = 0,
            .dry = 0,
            .sweet = 10,
            .bitter = 0,
            .sour = 0,
            .smoothness = 25
        },

    [ITEM_AGUAV_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("GUAYA"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("GOWAV"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("GUAVA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("GAUVE"),
        #else
            .name = _("AGUAV"),
        #endif
            .firmness = BERRY_FIRMNESS_SUPER_HARD,
            .size = 64,
            .maxYield = 3,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Aguav,
            .description2 = sBerryDescriptionPart2_Aguav,
            .stageDuration = 6,
            .spicy = 0,
            .dry = 0,
            .sweet = 0,
            .bitter = 10,
            .sour = 0,
            .smoothness = 25
        },

    [ITEM_IAPAPA_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("PABAYA"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("PAPAYA"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("PAIA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("YAPA"),
        #else
            .name = _("IAPAPA"),
        #endif
            .firmness = BERRY_FIRMNESS_SOFT,
            .size = 223,
            .maxYield = 3,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Iapapa,
            .description2 = sBerryDescriptionPart2_Iapapa,
            .stageDuration = 6,
            .spicy = 0,
            .dry = 0,
            .sweet = 0,
            .bitter = 0,
            .sour = 10,
            .smoothness = 25
        },

    [ITEM_RAZZ_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("FRAMBU"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("FRAMBY"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("LAMPON"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("HIMMIH"),
        #else
            .name = _("RAZZ"),
        #endif
            .firmness = BERRY_FIRMNESS_VERY_HARD,
            .size = 120,
            .maxYield = 6,
            .minYield = 3,
            .description1 = sBerryDescriptionPart1_Razz,
            .description2 = sBerryDescriptionPart2_Razz,
            .stageDuration = 1,
            .spicy = 10,
            .dry = 10,
            .sweet = 0,
            .bitter = 0,
            .sour = 0,
            .smoothness = 20
        },

    [ITEM_BLUK_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("ORAM"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("REMU"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("MORA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("MORB"),
        #else
            .name = _("BLUK"),
        #endif
            .firmness = BERRY_FIRMNESS_SOFT,
            .size = 108,
            .maxYield = 6,
            .minYield = 3,
            .description1 = sBerryDescriptionPart1_Bluk,
            .description2 = sBerryDescriptionPart2_Bluk,
            .stageDuration = 1,
            .spicy = 0,
            .dry = 10,
            .sweet = 10,
            .bitter = 0,
            .sour = 0,
            .smoothness = 20
        },

    [ITEM_NANAB_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("LATANO"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("NANAB"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("BANA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("NANAB"),
        #else
            .name = _("NANAB"),
        #endif
            .firmness = BERRY_FIRMNESS_VERY_HARD,
            .size = 77,
            .maxYield = 6,
            .minYield = 3,
            .description1 = sBerryDescriptionPart1_Nanab,
            .description2 = sBerryDescriptionPart2_Nanab,
            .stageDuration = 1,
            .spicy = 0,
            .dry = 0,
            .sweet = 10,
            .bitter = 10,
            .sour = 0,
            .smoothness = 20
        },

    [ITEM_WEPEAR_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("PERAGU"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("REPOI"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("PERA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("NIRBE"),
        #else
            .name = _("WEPEAR"),
        #endif
            .firmness = BERRY_FIRMNESS_SUPER_HARD,
            .size = 74,
            .maxYield = 6,
            .minYield = 3,
            .description1 = sBerryDescriptionPart1_Wepear,
            .description2 = sBerryDescriptionPart2_Wepear,
            .stageDuration = 1,
            .spicy = 0,
            .dry = 0,
            .sweet = 0,
            .bitter = 10,
            .sour = 10,
            .smoothness = 20
        },

    [ITEM_PINAP_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("PINIA"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("NANANA"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("NANAS"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("SANANA"),
        #else
            .name = _("PINAP"),
        #endif
            .firmness = BERRY_FIRMNESS_HARD,
            .size = 80,
            .maxYield = 6,
            .minYield = 3,
            .description1 = sBerryDescriptionPart1_Pinap,
            .description2 = sBerryDescriptionPart2_Pinap,
            .stageDuration = 1,
            .spicy = 10,
            .dry = 0,
            .sweet = 0,
            .bitter = 0,
            .sour = 10,
            .smoothness = 20
        },

    [ITEM_POMEG_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("GRANA"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("GRENA"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("GRANA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("GRANA"),
        #else
            .name = _("POMEG"),
        #endif
            .firmness = BERRY_FIRMNESS_VERY_HARD,
            .size = 135,
            .maxYield = 6,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Pomeg,
            .description2 = sBerryDescriptionPart2_Pomeg,
            .stageDuration = 3,
            .spicy = 10,
            .dry = 0,
            .sweet = 10,
            .bitter = 10,
            .sour = 0,
            .smoothness = 20
        },

    [ITEM_KELPSY_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("ALGAMA"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("ALGA"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("LGA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("SETANG"),
        #else
            .name = _("KELPSY"),
        #endif
            .firmness = BERRY_FIRMNESS_HARD,
            .size = 150,
            .maxYield = 6,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Kelpsy,
            .description2 = sBerryDescriptionPart2_Kelpsy,
            .stageDuration = 3,
            .spicy = 0,
            .dry = 10,
            .sweet = 0,
            .bitter = 10,
            .sour = 10,
            .smoothness = 20
        },

    [ITEM_QUALOT_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("ISPERO"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("QUALOT"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("LOQUAT"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("QUALOT"),
        #else
            .name = _("QUALOT"),
        #endif
            .firmness = BERRY_FIRMNESS_HARD,
            .size = 110,
            .maxYield = 6,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Qualot,
            .description2 = sBerryDescriptionPart2_Qualot,
            .stageDuration = 3,
            .spicy = 10,
            .dry = 0,
            .sweet = 10,
            .bitter = 0,
            .sour = 10,
            .smoothness = 20
        },

    [ITEM_HONDEW_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("MELUCE"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("LONME"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("MELON"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("HONMEL"),
        #else
            .name = _("HONDEW"),
        #endif
            .firmness = BERRY_FIRMNESS_HARD,
            .size = 162,
            .maxYield = 6,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Hondew,
            .description2 = sBerryDescriptionPart2_Hondew,
            .stageDuration = 3,
            .spicy = 10,
            .dry = 10,
            .sweet = 0,
            .bitter = 10,
            .sour = 0,
            .smoothness = 20
        },

    [ITEM_GREPA_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("UVAV"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("RESIN"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("UVA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("LABRUS"),
        #else
            .name = _("GREPA"),
        #endif
            .firmness = BERRY_FIRMNESS_SOFT,
            .size = 149,
            .maxYield = 6,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Grepa,
            .description2 = sBerryDescriptionPart2_Grepa,
            .stageDuration = 3,
            .spicy = 0,
            .dry = 10,
            .sweet = 10,
            .bitter = 0,
            .sour = 10,
            .smoothness = 20
        },

    [ITEM_TAMATO_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("TAMATE"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("TAMATO"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("MODORO"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("TAMOT"),
        #else
            .name = _("TAMATO"),
        #endif
            .firmness = BERRY_FIRMNESS_SOFT,
            .size = 200,
            .maxYield = 4,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Tamato,
            .description2 = sBerryDescriptionPart2_Tamato,
            .stageDuration = 6,
            .spicy = 20,
            .dry = 10,
            .sweet = 0,
            .bitter = 0,
            .sour = 0,
            .smoothness = 30
        },

    [ITEM_CORNN_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("MAIS"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("SIAM"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("VENA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("SAIM"),
        #else
            .name = _("CORNN"),
        #endif
            .firmness = BERRY_FIRMNESS_HARD,
            .size = 75,
            .maxYield = 4,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Cornn,
            .description2 = sBerryDescriptionPart2_Cornn,
            .stageDuration = 6,
            .spicy = 0,
            .dry = 20,
            .sweet = 10,
            .bitter = 0,
            .sour = 0,
            .smoothness = 30
        },

    [ITEM_MAGOST_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("AOSTAN"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("MANGOU"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("GOSTAN"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("MAGOST"),
        #else
            .name = _("MAGOST"),
        #endif
            .firmness = BERRY_FIRMNESS_HARD,
            .size = 140,
            .maxYield = 4,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Magost,
            .description2 = sBerryDescriptionPart2_Magost,
            .stageDuration = 6,
            .spicy = 0,
            .dry = 0,
            .sweet = 20,
            .bitter = 10,
            .sour = 0,
            .smoothness = 30
        },

    [ITEM_RABUTA_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("RAUTAN"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("RABUTA"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("MBUTAN"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("RABUTA"),
        #else
            .name = _("RABUTA"),
        #endif
            .firmness = BERRY_FIRMNESS_SOFT,
            .size = 226,
            .maxYield = 4,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Rabuta,
            .description2 = sBerryDescriptionPart2_Rabuta,
            .stageDuration = 6,
            .spicy = 0,
            .dry = 0,
            .sweet = 0,
            .bitter = 20,
            .sour = 10,
            .smoothness = 30
        },

    [ITEM_NOMEL_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("MONLI"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("TRONCI"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("LEMON"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("TRONZI"),
        #else
            .name = _("NOMEL"),
        #endif
            .firmness = BERRY_FIRMNESS_SUPER_HARD,
            .size = 285,
            .maxYield = 4,
            .minYield = 2,
            .description1 = sBerryDescriptionPart1_Nomel,
            .description2 = sBerryDescriptionPart2_Nomel,
            .stageDuration = 6,
            .spicy = 10,
            .dry = 0,
            .sweet = 0,
            .bitter = 0,
            .sour = 20,
            .smoothness = 30
        },

    [ITEM_SPELON_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("WIKANO"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("KIWAN"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("MELOS"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("KIWAN"),
        #else
            .name = _("SPELON"),
        #endif
            .firmness = BERRY_FIRMNESS_SOFT,
            .size = 133,
            .maxYield = 2,
            .minYield = 1,
            .description1 = sBerryDescriptionPart1_Spelon,
            .description2 = sBerryDescriptionPart2_Spelon,
            .stageDuration = 18,
            .spicy = 40,
            .dry = 10,
            .sweet = 0,
            .bitter = 0,
            .sour = 0,
            .smoothness = 70
        },

    [ITEM_PAMTRE_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("PLAMA"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("PALMA"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("PALMA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("PALLM"),
        #else
            .name = _("PAMTRE"),
        #endif
            .firmness = BERRY_FIRMNESS_VERY_SOFT,
            .size = 244,
            .maxYield = 2,
            .minYield = 1,
            .description1 = sBerryDescriptionPart1_Pamtre,
            .description2 = sBerryDescriptionPart2_Pamtre,
            .stageDuration = 18,
            .spicy = 0,
            .dry = 40,
            .sweet = 10,
            .bitter = 0,
            .sour = 0,
            .smoothness = 70
        },

    [ITEM_WATMEL_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("SAMBIA"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("STEKPA"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("COMERO"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("WASMEL"),
        #else
            .name = _("WATMEL"),
        #endif
            .firmness = BERRY_FIRMNESS_SOFT,
            .size = 250,
            .maxYield = 2,
            .minYield = 1,
            .description1 = sBerryDescriptionPart1_Watmel,
            .description2 = sBerryDescriptionPart2_Watmel,
            .stageDuration = 18,
            .spicy = 0,
            .dry = 0,
            .sweet = 40,
            .bitter = 10,
            .sour = 0,
            .smoothness = 70
        },

    [ITEM_DURIN_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("RUDION"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("DURIN"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("DURIAN"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("DURIN"),
        #else
            .name = _("DURIN"),
        #endif
            .firmness = BERRY_FIRMNESS_HARD,
            .size = 280,
            .maxYield = 2,
            .minYield = 1,
            .description1 = sBerryDescriptionPart1_Durin,
            .description2 = sBerryDescriptionPart2_Durin,
            .stageDuration = 18,
            .spicy = 0,
            .dry = 0,
            .sweet = 0,
            .bitter = 40,
            .sour = 10,
            .smoothness = 70
        },

    [ITEM_BELUE_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("ANDANO"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("MYRTE"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("RTILLO"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("MYRTIL"),
        #else
            .name = _("BELUE"),
        #endif
            .firmness = BERRY_FIRMNESS_VERY_SOFT,
            .size = 300,
            .maxYield = 2,
            .minYield = 1,
            .description1 = sBerryDescriptionPart1_Belue,
            .description2 = sBerryDescriptionPart2_Belue,
            .stageDuration = 18,
            .spicy = 10,
            .dry = 0,
            .sweet = 0,
            .bitter = 0,
            .sour = 40,
            .smoothness = 70
        },

    [ITEM_LIECHI_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("LICHI"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("LICHII"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("LICI"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("LYDZI"),
        #else
            .name = _("LIECHI"),
        #endif
            .firmness = BERRY_FIRMNESS_VERY_HARD,
            .size = 111,
            .maxYield = 2,
            .minYield = 1,
            .description1 = sBerryDescriptionPart1_Liechi,
            .description2 = sBerryDescriptionPart2_Liechi,
            .stageDuration = 24,
            .spicy = 40,
            .dry = 0,
            .sweet = 40,
            .bitter = 0,
            .sour = 10,
            .smoothness = 80
        },

    [ITEM_GANLON_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("GONLAN"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("LINGAN"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("LONGAN"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("LINGAN"),
        #else
            .name = _("GANLON"),
        #endif
            .firmness = BERRY_FIRMNESS_VERY_HARD,
            .size = 33,
            .maxYield = 2,
            .minYield = 1,
            .description1 = sBerryDescriptionPart1_Ganlon,
            .description2 = sBerryDescriptionPart2_Ganlon,
            .stageDuration = 24,
            .spicy = 0,
            .dry = 40,
            .sweet = 0,
            .bitter = 40,
            .sour = 0,
            .smoothness = 80
        },

    [ITEM_SALAC_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("ASLAC"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("SAILAK"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("SALAK"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("SALKA"),
        #else
            .name = _("SALAC"),
        #endif
            .firmness = BERRY_FIRMNESS_VERY_HARD,
            .size = 95,
            .maxYield = 2,
            .minYield = 1,
            .description1 = sBerryDescriptionPart1_Salac,
            .description2 = sBerryDescriptionPart2_Salac,
            .stageDuration = 24,
            .spicy = 0,
            .dry = 0,
            .sweet = 40,
            .bitter = 0,
            .sour = 40,
            .smoothness = 80
        },

    [ITEM_PETAYA_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("YAPATI"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("PITAYE"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("PITAYA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("TAHAY"),
        #else
            .name = _("PETAYA"),
        #endif
            .firmness = BERRY_FIRMNESS_VERY_HARD,
            .size = 237,
            .maxYield = 2,
            .minYield = 1,
            .description1 = sBerryDescriptionPart1_Petaya,
            .description2 = sBerryDescriptionPart2_Petaya,
            .stageDuration = 24,
            .spicy = 40,
            .dry = 0,
            .sweet = 0,
            .bitter = 40,
            .sour = 0,
            .smoothness = 80
        },

    [ITEM_APICOT_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("ARICOC"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("ABRIKO"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("COCCA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("APIKO"),
        #else
            .name = _("APICOT"),
        #endif
            .firmness = BERRY_FIRMNESS_HARD,
            .size = 75,
            .maxYield = 2,
            .minYield = 1,
            .description1 = sBerryDescriptionPart1_Apicot,
            .description2 = sBerryDescriptionPart2_Apicot,
            .stageDuration = 24,
            .spicy = 0,
            .dry = 40,
            .sweet = 0,
            .bitter = 0,
            .sour = 40,
            .smoothness = 80
        },

    [ITEM_LANSAT_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("ZONLAN"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("LANSAT"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("LANGSA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("LANSAT"),
        #else
            .name = _("LANSAT"),
        #endif
            .firmness = BERRY_FIRMNESS_SOFT,
            .size = 97,
            .maxYield = 2,
            .minYield = 1,
            .description1 = sBerryDescriptionPart1_Lansat,
            .description2 = sBerryDescriptionPart2_Lansat,
            .stageDuration = 24,
            .spicy = 10,
            .dry = 10,
            .sweet = 10,
            .bitter = 10,
            .sour = 10,
            .smoothness = 30
        },

    [ITEM_STARF_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("ARABOL"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("FRISTA"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("MBOLA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("KRAMBO"),
        #else
            .name = _("STARF"),
        #endif
            .firmness = BERRY_FIRMNESS_SUPER_HARD,
            .size = 153,
            .maxYield = 2,
            .minYield = 1,
            .description1 = sBerryDescriptionPart1_Starf,
            .description2 = sBerryDescriptionPart2_Starf,
            .stageDuration = 24,
            .spicy = 10,
            .dry = 10,
            .sweet = 10,
            .bitter = 10,
            .sour = 10,
            .smoothness = 30
        },

    [ITEM_ENIGMA_BERRY - FIRST_BERRY_INDEX] =
        {
        #if GAME_LANGUAGE == LANGUAGE_SPANISH
            .name = _("ENIGMA"),
        #elif GAME_LANGUAGE == LANGUAGE_FRENCH
            .name = _("ENIGMA"),
        #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
            .name = _("ENIGMA"),
        #elif GAME_LANGUAGE == LANGUAGE_GERMAN
            .name = _("ENIGMA"),
        #else
            .name = _("ENIGMA"),
        #endif
            .firmness = BERRY_FIRMNESS_UNKNOWN,
            .size = 0,
            .maxYield = 2,
            .minYield = 1,
            .description1 = sBerryDescriptionPart1_Enigma,
            .description2 = sBerryDescriptionPart2_Enigma,
            .stageDuration = 24,
            .spicy = 40,
            .dry = 40,
            .sweet = 40,
            .bitter = 40,
            .sour = 40,
            .smoothness = 40
        },

};

const struct BerryCrushStats gBerryCrush_BerryData[] = {
    [ITEM_CHERI_BERRY  - FIRST_BERRY_INDEX] = { 50,  20},
    [ITEM_CHESTO_BERRY - FIRST_BERRY_INDEX] = { 50,  20},
    [ITEM_PECHA_BERRY  - FIRST_BERRY_INDEX] = { 50,  20},
    [ITEM_RAWST_BERRY  - FIRST_BERRY_INDEX] = { 50,  20},
    [ITEM_ASPEAR_BERRY - FIRST_BERRY_INDEX] = { 50,  20},
    [ITEM_LEPPA_BERRY  - FIRST_BERRY_INDEX] = { 50,  30},
    [ITEM_ORAN_BERRY   - FIRST_BERRY_INDEX] = { 50,  30},
    [ITEM_PERSIM_BERRY - FIRST_BERRY_INDEX] = { 50,  30},
    [ITEM_LUM_BERRY    - FIRST_BERRY_INDEX] = { 50,  30},
    [ITEM_SITRUS_BERRY - FIRST_BERRY_INDEX] = { 50,  30},
    [ITEM_FIGY_BERRY   - FIRST_BERRY_INDEX] = { 60,  50},
    [ITEM_WIKI_BERRY   - FIRST_BERRY_INDEX] = { 60,  50},
    [ITEM_MAGO_BERRY   - FIRST_BERRY_INDEX] = { 60,  50},
    [ITEM_AGUAV_BERRY  - FIRST_BERRY_INDEX] = { 60,  50},
    [ITEM_IAPAPA_BERRY - FIRST_BERRY_INDEX] = { 60,  50},
    [ITEM_RAZZ_BERRY   - FIRST_BERRY_INDEX] = { 80,  70},
    [ITEM_BLUK_BERRY   - FIRST_BERRY_INDEX] = { 80,  70},
    [ITEM_NANAB_BERRY  - FIRST_BERRY_INDEX] = { 80,  70},
    [ITEM_WEPEAR_BERRY - FIRST_BERRY_INDEX] = { 80,  70},
    [ITEM_PINAP_BERRY  - FIRST_BERRY_INDEX] = { 80,  70},
    [ITEM_POMEG_BERRY  - FIRST_BERRY_INDEX] = {100, 100},
    [ITEM_KELPSY_BERRY - FIRST_BERRY_INDEX] = {100, 100},
    [ITEM_QUALOT_BERRY - FIRST_BERRY_INDEX] = {100, 100},
    [ITEM_HONDEW_BERRY - FIRST_BERRY_INDEX] = {100, 100},
    [ITEM_GREPA_BERRY  - FIRST_BERRY_INDEX] = {100, 100},
    [ITEM_TAMATO_BERRY - FIRST_BERRY_INDEX] = {130, 150},
    [ITEM_CORNN_BERRY  - FIRST_BERRY_INDEX] = {130, 150},
    [ITEM_MAGOST_BERRY - FIRST_BERRY_INDEX] = {130, 150},
    [ITEM_RABUTA_BERRY - FIRST_BERRY_INDEX] = {130, 150},
    [ITEM_NOMEL_BERRY  - FIRST_BERRY_INDEX] = {130, 150},
    [ITEM_SPELON_BERRY - FIRST_BERRY_INDEX] = {160, 250},
    [ITEM_PAMTRE_BERRY - FIRST_BERRY_INDEX] = {160, 250},
    [ITEM_WATMEL_BERRY - FIRST_BERRY_INDEX] = {160, 250},
    [ITEM_DURIN_BERRY  - FIRST_BERRY_INDEX] = {160, 250},
    [ITEM_BELUE_BERRY  - FIRST_BERRY_INDEX] = {160, 250},
    [ITEM_LIECHI_BERRY - FIRST_BERRY_INDEX] = {180, 500},
    [ITEM_GANLON_BERRY - FIRST_BERRY_INDEX] = {180, 500},
    [ITEM_SALAC_BERRY  - FIRST_BERRY_INDEX] = {180, 500},
    [ITEM_PETAYA_BERRY - FIRST_BERRY_INDEX] = {180, 500},
    [ITEM_APICOT_BERRY - FIRST_BERRY_INDEX] = {180, 500},
    [ITEM_LANSAT_BERRY - FIRST_BERRY_INDEX] = {200, 750},
    [ITEM_STARF_BERRY  - FIRST_BERRY_INDEX] = {200, 750},
    [ITEM_ENIGMA_BERRY - FIRST_BERRY_INDEX] = {150, 200}
};

// Leftover from R/S
const struct BerryTree gBlankBerryTree = {};

#define ENIGMA_BERRY_STRUCT ({ \
    const struct Berry2 * berries = (const struct Berry2 *)gBerries; \
    berries[ITEM_ENIGMA_BERRY - FIRST_BERRY_INDEX]; \
})

static u32 GetEnigmaBerryChecksum(struct EnigmaBerry *);

void InitEnigmaBerry(void)
{
    s32 i;

    gSaveBlock1Ptr->enigmaBerry.berry = ENIGMA_BERRY_STRUCT;
    for (i = 0; i < 18; i++)
        gSaveBlock1Ptr->enigmaBerry.itemEffect[i] = 0;
    gSaveBlock1Ptr->enigmaBerry.holdEffect = 0;
    gSaveBlock1Ptr->enigmaBerry.holdEffectParam = 0;
    gSaveBlock1Ptr->enigmaBerry.checksum = GetEnigmaBerryChecksum(&gSaveBlock1Ptr->enigmaBerry);
}

void ClearEnigmaBerries(void)
{
    CpuFill16(0, &gSaveBlock1Ptr->enigmaBerry, sizeof(gSaveBlock1Ptr->enigmaBerry));
    InitEnigmaBerry();
}

struct ReceivedEnigmaBerry
{
    struct Berry2 berry;
    u8 unk_001C[0x4FA];
    u8 itemEffect[18];
    u8 holdEffect;
    u8 holdEffectParam;
};

void SetEnigmaBerry(u8 * berry)
{
    struct EnigmaBerry * enigmaBerry;
    struct ReceivedEnigmaBerry * src2;
    s32 i;

    ClearEnigmaBerries();

    src2 = (struct ReceivedEnigmaBerry *)berry;
    enigmaBerry = &gSaveBlock1Ptr->enigmaBerry;

    enigmaBerry->berry = src2->berry;
    for (i = 0; i < 18; i++)
        enigmaBerry->itemEffect[i] = src2->itemEffect[i];
    enigmaBerry->holdEffect = src2->holdEffect;
    enigmaBerry->holdEffectParam = src2->holdEffectParam;
    enigmaBerry->checksum = GetEnigmaBerryChecksum(enigmaBerry);
}

static u32 GetEnigmaBerryChecksum(struct EnigmaBerry * enigmaBerry)
{
    const u8 * src = (const u8 *)enigmaBerry;
    u32 result = 0;
    u32 i;

    for (i = 0; i < offsetof(struct EnigmaBerry, checksum); i++)
        result += src[i];

    return result;
}

bool32 IsEnigmaBerryValid(void)
{
    if (gSaveBlock1Ptr->enigmaBerry.berry.stageDuration == 0)
        return FALSE;
    if (gSaveBlock1Ptr->enigmaBerry.berry.maxYield == 0)
        return FALSE;
    if (GetEnigmaBerryChecksum(&gSaveBlock1Ptr->enigmaBerry) != gSaveBlock1Ptr->enigmaBerry.checksum)
        return FALSE;

    return TRUE;
}

const struct Berry * GetBerryInfo(u8 berryIdx)
{
    if (berryIdx == ITEM_TO_BERRY(ITEM_ENIGMA_BERRY) && IsEnigmaBerryValid())
        return (struct Berry *)&gSaveBlock1Ptr->enigmaBerry.berry;

    if (berryIdx == 0 || berryIdx > ITEM_TO_BERRY(ITEM_ENIGMA_BERRY))
        berryIdx = 1;

    return &gBerries[berryIdx - 1];
}

u8 ItemIdToBerryType(u16 itemId)
{
    if (itemId - FIRST_BERRY_INDEX < 0 || itemId - FIRST_BERRY_INDEX > ITEM_ENIGMA_BERRY - FIRST_BERRY_INDEX)
        return 1;

    return ITEM_TO_BERRY(itemId);
}

u16 BerryTypeToItemId(u16 berryType)
{
    if (berryType - 1 < 0 || berryType - 1 > ITEM_ENIGMA_BERRY - FIRST_BERRY_INDEX)
        return FIRST_BERRY_INDEX;

    return berryType + FIRST_BERRY_INDEX - 1;
}

void GetBerryNameByBerryType(u8 berryType, u8 * dest)
{
    const struct Berry * berry = GetBerryInfo(berryType);
    memcpy(dest, berry->name, 6);
    dest[6] = EOS;
}
