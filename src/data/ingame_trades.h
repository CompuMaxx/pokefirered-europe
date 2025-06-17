static const struct InGameTrade sInGameTrades[] = {
    [INGAME_TRADE_MR_MIME] = 
    {
    #if ENGLISH || ITALIAN //test
        .nickname = _("MIMIEN"),
    #elif SPANISH
        .nickname = _("MIMI"),
    #endif
        .species = SPECIES_MR_MIME,
        .ivs = {20, 15, 17, 24, 23, 22},
        .abilityNum = 0,
        .otId = 1985,
        .conditions = {5, 5, 5, 30, 5},
        .personality = 0x00009cae,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
    #if ENGLISH || ITALIAN //test
        .otName = _("REYLEY"),
    #elif SPANISH
        .otName= _("RÚTEO"),
    #endif
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_ABRA
    }, 
    [INGAME_TRADE_JYNX] = 
    {
    #if ENGLISH || ITALIAN //test
        .nickname = _("ZYNX"),
    #elif SPANISH
        .nickname = _("ZYNX"),
    #endif
        .species = SPECIES_JYNX,
        .ivs = {18, 17, 18, 22, 25, 21},
        .abilityNum = 0,
        .otId = 36728,
        .conditions = {5, 30, 5, 5, 5},
        .personality = 0x498a2e1d,
        .heldItem = ITEM_FAB_MAIL,
        .mailNum = 0,
    #if ENGLISH || ITALIAN //test
        .otName = _("DONTAE"),
    #elif SPANISH
        .otName= _("CELESTO"),
    #endif
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_POLIWHIRL
    }, 
    [INGAME_TRADE_NIDORAN] = 
    {
#if defined(FIRERED)
    #if ENGLISH || ITALIAN //test
        .nickname = _("MS. NIDO"),
    #elif SPANISH
        .nickname = _("NIDRANA"),
    #endif
        .species = SPECIES_NIDORAN_F,
        .ivs = {22, 18, 25, 19, 15, 22},
        .abilityNum = 0,
        .otId = 63184,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x4c970b89,
        .heldItem = ITEM_TINY_MUSHROOM,
        .mailNum = 255,
    #if ENGLISH || ITALIAN //test
        .otName = _("SAIGE"),
    #elif SPANISH
        .otName= _("QUICA"),
    #endif
        .otGender = FEMALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_NIDORAN_M
#elif defined(LEAFGREEN)
    #if ENGLISH || ITALIAN //test
        .nickname = _("MR. NIDO"),
    #elif SPANISH
        .nickname = _("NIDRÁN"),
    #endif
        .species = SPECIES_NIDORAN_M,
        .ivs = {19, 25, 18, 22, 22, 15},
        .abilityNum = 0,
        .otId = 63184,
        .conditions = {30, 5, 5, 5, 5},
        .personality = 0x4c970b9e,
        .heldItem = ITEM_TINY_MUSHROOM,
        .mailNum = 255,
    #if ENGLISH || ITALIAN //test
        .otName = _("SAIGE"),
    #elif SPANISH
        .otName= _("QUICA"),
    #endif
        .otGender = FEMALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_NIDORAN_F
#endif
    }, 
    [INGAME_TRADE_FARFETCHD] = 
    {
    #if ENGLISH || ITALIAN //test
        .nickname = _("CH'DING"),
    #elif SPANISH
        .nickname = _("FARFI"),
    #endif
        .species = SPECIES_FARFETCHD,
        .ivs = {20, 25, 21, 24, 15, 20},
        .abilityNum = 0,
        .otId = 8810,
        .conditions = {30, 5, 5, 5, 5},
        .personality = 0x151943d7,
        .heldItem = ITEM_STICK,
        .mailNum = 255,
    #if ENGLISH || ITALIAN //test
        .otName = _("ELYSSA"),
    #elif SPANISH
        .otName= _("CARMELA"),
    #endif
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_SPEAROW
    }, 
    [INGAME_TRADE_NIDORINOA] = 
    {
#if defined(FIRERED)
    #if ENGLISH || ITALIAN //test
        .nickname = _("NINA"),
    #elif SPANISH
        .nickname = _("NIDRINA"),
    #endif
        .species = SPECIES_NIDORINA,
        .ivs = {22, 25, 18, 19, 22, 15},
        .abilityNum = 0,
        .otId = 13637,
        .conditions = {5, 5, 30, 5, 5},
        .personality = 0x00eeca15,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
    #if ENGLISH || ITALIAN //test
        .otName = _("TURNER"),
    #elif SPANISH
        .otName= _("ONZANO"),
    #endif
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_NIDORINO
#elif defined(LEAFGREEN)
    #if ENGLISH || ITALIAN //test
        .nickname = _("NINO"),
    #elif SPANISH
        .nickname = _("NIDRINO"),
    #endif
        .species = SPECIES_NIDORINO,
        .ivs = {19, 18, 25, 22, 15, 22},
        .abilityNum = 0,
        .otId = 13637,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x00eeca19,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
    #if ENGLISH || ITALIAN //test
        .otName = _("TURNER"),
    #elif SPANISH
        .otName= _("ONZANO"),
    #endif
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_NIDORINA
#endif
    }, 
    [INGAME_TRADE_LICKITUNG] = 
    {
    #if ENGLISH || ITALIAN //test
        .nickname = _("MARC"),
    #elif SPANISH
        .nickname = _("LICKITITO"),
    #endif
        .species = SPECIES_LICKITUNG,
        .ivs = {24, 19, 21, 15, 23, 21},
        .abilityNum = 0,
        .otId = 1239,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x451308ab,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
    #if ENGLISH || ITALIAN //test
        .otName = _("HADEN"),
    #elif SPANISH
        .otName= _("DIOCHO"),
    #endif
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
    #if ENGLISH || ITALIAN //test
        .nickname = _("ESPHERE"),
    #elif SPANISH
        .nickname = _("BOLICHI"),
    #endif
        .species = SPECIES_ELECTRODE,
        .ivs = {19, 16, 18, 25, 25, 19},
        .abilityNum = 1,
        .otId = 50298,
        .conditions = {30, 5, 5, 5, 5},
        .personality = 0x06341016,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
    #if ENGLISH || ITALIAN //test
        .otName = _("CLIFTON"),
    #elif SPANISH
        .otName= _("CANEL"),
    #endif
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_RAICHU
    }, 
    [INGAME_TRADE_TANGELA] = 
    {
    #if ENGLISH || ITALIAN //test
        .nickname = _("TANGENY"),
    #elif SPANISH
        .nickname = _("TANGELITO"),
    #endif
        .species = SPECIES_TANGELA,
        .ivs = {22, 17, 25, 16, 23, 20},
        .abilityNum = 0,
        .otId = 60042,
        .conditions = {5, 5, 30, 5, 5},
        .personality = 0x5c77ecfa,
        .heldItem = ITEM_STARDUST,
        .mailNum = 255,
    #if ENGLISH || ITALIAN //test
        .otName = _("NORMA"),
    #elif SPANISH
        .otName= _("DULCE"),
    #endif
        .otGender = FEMALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_VENONAT
    },
    [INGAME_TRADE_SEEL] = 
    {
    #if ENGLISH || ITALIAN //test
        .nickname = _("SEELOR"),
    #elif SPANISH
        .nickname = _("SEELÍN"),
    #endif
        .species = SPECIES_SEEL,
        .ivs = {24, 15, 22, 16, 23, 22},
        .abilityNum = 0,
        .otId = 9853,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x482cac89,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
    #if ENGLISH || ITALIAN //test
        .otName = _("GARETT"),
    #elif SPANISH
        .otName= _("GOYO"),
    #endif
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_PONYTA
    }
};

static const u16 sInGameTradeMailMessages[][10] = {
    #if ENGLISH || ITALIAN //test
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
    #elif SPANISH
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
    #endif
};
