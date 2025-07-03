#if GAME_LANGUAGE == LANGUAGE_SPANISH
#define TEXT_INGAME_TRADE_NICKNAME_MR_MIME      _("MIMI")
#define TEXT_INGAME_TRADE_OTNAME_MR_MIME        _("RÚTEO")

#define TEXT_INGAME_TRADE_NICKNAME_JYNX         _("ZYNX")
#define TEXT_INGAME_TRADE_OTNAME_JYNX           _("CELESTO")

#define TEXT_INGAME_TRADE_NICKNAME_NIDORAN_FR   _("NIDRANA")
#define TEXT_INGAME_TRADE_NICKNAME_NIDORAN_LG   _("NIDRÁN")
#define TEXT_INGAME_TRADE_OTNAME_NIDORAN        _("QUICA")

#define TEXT_INGAME_TRADE_NICKNAME_FARFETCHD    _("FARFI")
#define TEXT_INGAME_TRADE_OTNAME_FARFETCHD      _("CARMELA")

#define TEXT_INGAME_TRADE_NICKNAME_NIDORINOA_FR _("NIDRINA")
#define TEXT_INGAME_TRADE_NICKNAME_NIDORINOA_LG _("NIDRINO")
#define TEXT_INGAME_TRADE_OTNAME_NIDORINOA      _("ONZANO")

#define TEXT_INGAME_TRADE_NICKNAME_LICKITUNG    _("LICKITITO")
#define TEXT_INGAME_TRADE_OTNAME_LICKITUNG      _("DIOCHO")

#define TEXT_INGAME_TRADE_NICKNAME_ELECTRODE    _("BOLICHI")
#define TEXT_INGAME_TRADE_OTNAME_ELECTRODE      _("CANEL")

#define TEXT_INGAME_TRADE_NICKNAME_TANGELA      _("TANGELITO")
#define TEXT_INGAME_TRADE_OTNAME_TANGELA        _("DULCE")

#define TEXT_INGAME_TRADE_NICKNAME_SEEL         _("SEELÍN")
#define TEXT_INGAME_TRADE_OTNAME_SEEL           _("GOYO")

#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
#define TEXT_INGAME_TRADE_NICKNAME_MR_MIME      _("MIMIEN")
#define TEXT_INGAME_TRADE_OTNAME_MR_MIME        _("REYLEY")

#define TEXT_INGAME_TRADE_NICKNAME_JYNX         _("ZYNX")
#define TEXT_INGAME_TRADE_OTNAME_JYNX           _("RINO")

#define TEXT_INGAME_TRADE_NICKNAME_NIDORAN_FR   _("MS. NIDO")
#define TEXT_INGAME_TRADE_NICKNAME_NIDORAN_LG   _("MR. NIDO")
#define TEXT_INGAME_TRADE_OTNAME_NIDORAN        _("SAIGE")

#define TEXT_INGAME_TRADE_NICKNAME_FARFETCHD    _("CH'DING")
#define TEXT_INGAME_TRADE_OTNAME_FARFETCHD      _("ELYSSA")

#define TEXT_INGAME_TRADE_NICKNAME_NIDORINOA_FR _("NINA")
#define TEXT_INGAME_TRADE_NICKNAME_NIDORINOA_LG _("NINO")
#define TEXT_INGAME_TRADE_OTNAME_NIDORINOA      _("TURNER")

#define TEXT_INGAME_TRADE_NICKNAME_LICKITUNG    _("MARC")
#define TEXT_INGAME_TRADE_OTNAME_LICKITUNG      _("HADEN")

#define TEXT_INGAME_TRADE_NICKNAME_ELECTRODE    _("ESPHERE")
#define TEXT_INGAME_TRADE_OTNAME_ELECTRODE      _("CLIFTON")

#define TEXT_INGAME_TRADE_NICKNAME_TANGELA      _("TANGENY")
#define TEXT_INGAME_TRADE_OTNAME_TANGELA        _("NORMA")

#define TEXT_INGAME_TRADE_NICKNAME_SEEL         _("SEELOR")
#define TEXT_INGAME_TRADE_OTNAME_SEEL           _("GARETT")

#else //LANGUAGE_ENGLISH
#define TEXT_INGAME_TRADE_NICKNAME_MR_MIME      _("MIMIEN")
#define TEXT_INGAME_TRADE_OTNAME_MR_MIME        _("REYLEY")

#define TEXT_INGAME_TRADE_NICKNAME_JYNX         _("ZYNX")
#define TEXT_INGAME_TRADE_OTNAME_JYNX           _("DONTAE")

#define TEXT_INGAME_TRADE_NICKNAME_NIDORAN_FR   _("MS. NIDO")
#define TEXT_INGAME_TRADE_NICKNAME_NIDORAN_LG   _("MR. NIDO")
#define TEXT_INGAME_TRADE_OTNAME_NIDORAN        _("SAIGE")

#define TEXT_INGAME_TRADE_NICKNAME_FARFETCHD    _("CH'DING")
#define TEXT_INGAME_TRADE_OTNAME_FARFETCHD      _("ELYSSA")

#define TEXT_INGAME_TRADE_NICKNAME_NIDORINOA_FR _("NINA")
#define TEXT_INGAME_TRADE_NICKNAME_NIDORINOA_LG _("NINO")
#define TEXT_INGAME_TRADE_OTNAME_NIDORINOA      _("TURNER")

#define TEXT_INGAME_TRADE_NICKNAME_LICKITUNG    _("MARC")
#define TEXT_INGAME_TRADE_OTNAME_LICKITUNG      _("HADEN")

#define TEXT_INGAME_TRADE_NICKNAME_ELECTRODE    _("ESPHERE")
#define TEXT_INGAME_TRADE_OTNAME_ELECTRODE      _("CLIFTON")

#define TEXT_INGAME_TRADE_NICKNAME_TANGELA      _("TANGENY")
#define TEXT_INGAME_TRADE_OTNAME_TANGELA        _("NORMA")

#define TEXT_INGAME_TRADE_NICKNAME_SEEL         _("SEELOR")
#define TEXT_INGAME_TRADE_OTNAME_SEEL           _("GARETT")
#endif

static const struct InGameTrade sInGameTrades[] = {
    [INGAME_TRADE_MR_MIME] = 
    {
        .nickname = TEXT_INGAME_TRADE_NICKNAME_MR_MIME,
        .species = SPECIES_MR_MIME,
        .ivs = {20, 15, 17, 24, 23, 22},
        .abilityNum = 0,
        .otId = 1985,
        .conditions = {5, 5, 5, 30, 5},
        .personality = 0x00009cae,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = TEXT_INGAME_TRADE_OTNAME_MR_MIME,
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_ABRA
    }, 
    [INGAME_TRADE_JYNX] = 
    {
        .nickname = TEXT_INGAME_TRADE_NICKNAME_JYNX,
        .species = SPECIES_JYNX,
        .ivs = {18, 17, 18, 22, 25, 21},
        .abilityNum = 0,
        .otId = 36728,
        .conditions = {5, 30, 5, 5, 5},
        .personality = 0x498a2e1d,
        .heldItem = ITEM_FAB_MAIL,
        .mailNum = 0,
        .otName = TEXT_INGAME_TRADE_OTNAME_JYNX,
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_POLIWHIRL
    }, 
    [INGAME_TRADE_NIDORAN] = 
    {
#if defined(FIRERED)
        .nickname = TEXT_INGAME_TRADE_NICKNAME_NIDORAN_FR,
        .species = SPECIES_NIDORAN_F,
        .ivs = {22, 18, 25, 19, 15, 22},
        .abilityNum = 0,
        .otId = 63184,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x4c970b89,
        .heldItem = ITEM_TINY_MUSHROOM,
        .mailNum = 255,
        .otName = TEXT_INGAME_TRADE_OTNAME_NIDORAN,
        .otGender = FEMALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_NIDORAN_M
#elif defined(LEAFGREEN)
        .nickname = TEXT_INGAME_TRADE_NICKNAME_NIDORAN_LG,
        .species = SPECIES_NIDORAN_M,
        .ivs = {19, 25, 18, 22, 22, 15},
        .abilityNum = 0,
        .otId = 63184,
        .conditions = {30, 5, 5, 5, 5},
        .personality = 0x4c970b9e,
        .heldItem = ITEM_TINY_MUSHROOM,
        .mailNum = 255,
        .otName = TEXT_INGAME_TRADE_OTNAME_NIDORAN,
        .otGender = FEMALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_NIDORAN_F
#endif
    }, 
    [INGAME_TRADE_FARFETCHD] = 
    {
        .nickname = TEXT_INGAME_TRADE_NICKNAME_FARFETCHD,
        .species = SPECIES_FARFETCHD,
        .ivs = {20, 25, 21, 24, 15, 20},
        .abilityNum = 0,
        .otId = 8810,
        .conditions = {30, 5, 5, 5, 5},
        .personality = 0x151943d7,
        .heldItem = ITEM_STICK,
        .mailNum = 255,
        .otName = TEXT_INGAME_TRADE_OTNAME_FARFETCHD,
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_SPEAROW
    }, 
    [INGAME_TRADE_NIDORINOA] = 
    {
#if defined(FIRERED)
        .nickname = TEXT_INGAME_TRADE_NICKNAME_NIDORINOA_FR,
        .species = SPECIES_NIDORINA,
        .ivs = {22, 25, 18, 19, 22, 15},
        .abilityNum = 0,
        .otId = 13637,
        .conditions = {5, 5, 30, 5, 5},
        .personality = 0x00eeca15,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = TEXT_INGAME_TRADE_OTNAME_NIDORINOA,
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_NIDORINO
#elif defined(LEAFGREEN)
        .nickname = TEXT_INGAME_TRADE_NICKNAME_NIDORINOA_LG,
        .species = SPECIES_NIDORINO,
        .ivs = {19, 18, 25, 22, 15, 22},
        .abilityNum = 0,
        .otId = 13637,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x00eeca19,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = TEXT_INGAME_TRADE_OTNAME_NIDORINOA,
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_NIDORINA
#endif
    }, 
    [INGAME_TRADE_LICKITUNG] = 
    {
        .nickname = TEXT_INGAME_TRADE_NICKNAME_LICKITUNG,
        .species = SPECIES_LICKITUNG,
        .ivs = {24, 19, 21, 15, 23, 21},
        .abilityNum = 0,
        .otId = 1239,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x451308ab,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = TEXT_INGAME_TRADE_OTNAME_LICKITUNG,
        .otGender = MALE,
        .sheen = 10,
#if defined(FIRERED)
        .requestedSpecies = SPECIES_GOLDUCK
#elif defined(LEAFGREEN)
        .requestedSpecies = SPECIES_SLOWBRO
#endif
    }, 
    [INGAME_TRADE_ELECTRODE] = 
    {
        .nickname = TEXT_INGAME_TRADE_NICKNAME_ELECTRODE,
        .species = SPECIES_ELECTRODE,
        .ivs = {19, 16, 18, 25, 25, 19},
        .abilityNum = 1,
        .otId = 50298,
        .conditions = {30, 5, 5, 5, 5},
        .personality = 0x06341016,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = TEXT_INGAME_TRADE_OTNAME_ELECTRODE,
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_RAICHU
    }, 
    [INGAME_TRADE_TANGELA] = 
    {
        .nickname = TEXT_INGAME_TRADE_NICKNAME_TANGELA,
        .species = SPECIES_TANGELA,
        .ivs = {22, 17, 25, 16, 23, 20},
        .abilityNum = 0,
        .otId = 60042,
        .conditions = {5, 5, 30, 5, 5},
        .personality = 0x5c77ecfa,
        .heldItem = ITEM_STARDUST,
        .mailNum = 255,
        .otName = TEXT_INGAME_TRADE_OTNAME_TANGELA,
        .otGender = FEMALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_VENONAT
    },
    [INGAME_TRADE_SEEL] = 
    {
        .nickname = TEXT_INGAME_TRADE_NICKNAME_SEEL,
        .species = SPECIES_SEEL,
        .ivs = {24, 15, 22, 16, 23, 22},
        .abilityNum = 0,
        .otId = 9853,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x482cac89,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = TEXT_INGAME_TRADE_OTNAME_SEEL,
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_PONYTA
    }
};

static const u16 sInGameTradeMailMessages[][10] = {
    #if GAME_LANGUAGE == LANGUAGE_SPANISH
    {
        EC_WORD_EXCL_EXCL,
        EC_WORD_HAVE,
        EC_WORD_NITWIT,
        EC_WORD_BE,
        EC_WORD_MUCH,
        EC_WORD_MISS,
        EC_POKEMON(JYNX),
        EC_WORD_EXCL,
        EC_WORD_UNDEFINED
    }
    #elif GAME_LANGUAGE == LANGUAGE_ITALIAN
    {
        EC_WORD_IS,
        EC_WORD_A,
        EC_POKEMON(JYNX),
        EC_WORD_BORED,
        EC_WORD_HEALTHY,
        EC_WORD_EXCL,
        EC_WORD_UNDEFINED,
        EC_WORD_UNDEFINED,
        EC_WORD_UNDEFINED,
    }
    #else //LANGUAGE_ENGLISH
    {
        EC_WORD_THAT_S,
        EC_WORD_A,
        EC_WORD_HEALTHY,
        EC_POKEMON(JYNX),
        EC_WORD_EXCL,
        EC_WORD_BE,
        EC_WORD_KIND,
        EC_WORD_TO,
        EC_WORD_IT
    }
    #endif
};
