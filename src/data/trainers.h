const struct Trainer gTrainers[] = {
    [TRAINER_NONE] = {
        .trainerName = _(""),
    },
    [TRAINER_AQUA_LEADER] = {
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AquaLeader),
    },
    [TRAINER_AQUA_GRUNT_M] = {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AquaGruntM),
    },
    [TRAINER_AQUA_GRUNT_F] = {
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AquaGruntF),
    },
    [TRAINER_RS_AROMA_LADY] = {
        .trainerClass = TRAINER_CLASS_RS_AROMA_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RS_AROMA_LADY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSAromaLady),
    },
    [TRAINER_RS_RUIN_MANIAC] = {
        .trainerClass = TRAINER_CLASS_RS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RS_RUIN_MANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSRuinManiac),
    },
    [TRAINER_INTERVIEWER] = {
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Interviewer),
    },
    [TRAINER_RS_TUBER_F] = {
        .trainerClass = TRAINER_CLASS_RS_TUBER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_RS_TUBER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSTuberF),
    },
    [TRAINER_RS_TUBER_M] = {
        .trainerClass = TRAINER_CLASS_RS_TUBER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_TUBER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSTuberM),
    },
    [TRAINER_RS_COOLTRAINER_M] = {
        .trainerClass = TRAINER_CLASS_RS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_RS_COOLTRAINER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSCooltrainerM),
    },
    [TRAINER_RS_COOLTRAINER_F] = {
        .trainerClass = TRAINER_CLASS_RS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_RS_COOLTRAINER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSCooltrainerF),
    },
    [TRAINER_HEX_MANIAC] = {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HexManiac),
    },
    [TRAINER_RS_LADY] = {
        .trainerClass = TRAINER_CLASS_RS_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RS_LADY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSLady),
    },
    [TRAINER_RS_BEAUTY] = {
        .trainerClass = TRAINER_CLASS_RS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RS_BEAUTY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSBeauty),
    },
    [TRAINER_RICH_BOY] = {
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RichBoy),
    },
    [TRAINER_RS_POKEMANIAC] = {
        .trainerClass = TRAINER_CLASS_RS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_RS_POKEMANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSPokemaniac),
    },
    [TRAINER_RS_SWIMMER_M] = {
        .trainerClass = TRAINER_CLASS_RS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RS_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSSwimmerM),
    },
    [TRAINER_RS_BLACK_BELT] = {
        .trainerClass = TRAINER_CLASS_RS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_RS_BLACK_BELT,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSBlackBelt),
    },
    [TRAINER_GUITARIST] = {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Guitarist),
    },
    [TRAINER_KINDLER] = {
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kindler),
    },
    [TRAINER_RS_CAMPER] = {
        .trainerClass = TRAINER_CLASS_RS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSCamper),
    },
    [TRAINER_BUG_MANIAC] = {
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugManiac),
    },
    [TRAINER_RS_PSYCHIC_M] = {
        .trainerClass = TRAINER_CLASS_RS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_RS_PSYCHIC_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSPsychicM),
    },
    [TRAINER_RS_PSYCHIC_F] = {
        .trainerClass = TRAINER_CLASS_RS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_RS_PSYCHIC_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSPsychicF),
    },
    [TRAINER_RS_GENTLEMAN] = {
        .trainerClass = TRAINER_CLASS_RS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RS_GENTLEMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSGentleman),
    },
    [TRAINER_ELITE_FOUR_SIDNEY] = {
        .trainerClass = TRAINER_CLASS_RS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SIDNEY"),
        #elif SPANISH
        .trainerName = _("SIXTO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_EliteFourSidney),
    },
    [TRAINER_ELITE_FOUR_PHOEBE] = {
        .trainerClass = TRAINER_CLASS_RS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("PHOEBE"),
        #elif SPANISH
        .trainerName = _("FÁTIMA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_EliteFourPhoebe),
    },
    [TRAINER_LEADER_ROXANNE] = {
        .trainerClass = TRAINER_CLASS_RS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ROXANNE"),
        #elif SPANISH
        .trainerName = _("PETRA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LeaderRoxanne),
    },
    [TRAINER_LEADER_BRAWLY] = {
        .trainerClass = TRAINER_CLASS_RS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BRAWLY"),
        #elif SPANISH
        .trainerName = _("MARCIAL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LeaderBrawly),
    },
    [TRAINER_LEADER_TATE_LIZA] = {
        .trainerClass = TRAINER_CLASS_RS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TATE&LIZA"),
        #elif SPANISH
        .trainerName = _("VITO-LETI"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LeaderTateLiza),
    },
    [TRAINER_SCHOOL_KID_M] = {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SchoolKidM),
    },
    [TRAINER_SCHOOL_KID_F] = {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SchoolKidF),
    },
    [TRAINER_SR_AND_JR] = {
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SrAndJr),
    },
    [TRAINER_POKEFAN_M] = {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PokefanM),
    },
    [TRAINER_POKEFAN_F] = {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PokefanF),
    },
    [TRAINER_EXPERT_M] = {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ExpertM),
    },
    [TRAINER_EXPERT_F] = {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ExpertF),
    },
    [TRAINER_RS_YOUNGSTER] = {
        .trainerClass = TRAINER_CLASS_RS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSYoungster),
    },
    [TRAINER_RS_CHAMPION] = {
        .trainerClass = TRAINER_CLASS_RS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CHAMPION_STEVEN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSChampion),
    },
    [TRAINER_RS_FISHERMAN] = {
        .trainerClass = TRAINER_CLASS_RS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RS_FISHERMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSFisherman),
    },
    [TRAINER_CYCLING_TRIATHLETE_M] = {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CyclingTriathleteM),
    },
    [TRAINER_CYCLING_TRIATHLETE_F] = {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CyclingTriathleteF),
    },
    [TRAINER_RUNNING_TRIATHLETE_M] = {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RunningTriathleteM),
    },
    [TRAINER_RUNNING_TRIATHLETE_F] = {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RunningTriathleteF),
    },
    [TRAINER_SWIMMING_TRIATHLETE_M] = {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmingTriathleteM),
    },
    [TRAINER_SWIMMING_TRIATHLETE_F] = {
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmingTriathleteF),
    },
    [TRAINER_DRAGON_TAMER] = {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_DragonTamer),
    },
    [TRAINER_RS_BIRD_KEEPER] = {
        .trainerClass = TRAINER_CLASS_RS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_RS_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSBirdKeeper),
    },
    [TRAINER_NINJA_BOY] = {
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_NinjaBoy),
    },
    [TRAINER_BATTLE_GIRL] = {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BattleGirl),
    },
    [TRAINER_PARASOL_LADY] = {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ParasolLady),
    },
    [TRAINER_RS_SWIMMER_F] = {
        .trainerClass = TRAINER_CLASS_RS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RS_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSSwimmerF),
    },
    [TRAINER_RS_PICNICKER] = {
        .trainerClass = TRAINER_CLASS_RS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_RS_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSPicnicker),
    },
    [TRAINER_RS_TWINS] = {
        .trainerClass = TRAINER_CLASS_RS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_RS_TWINS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSTwins),
    },
    [TRAINER_RS_SAILOR] = {
        .trainerClass = TRAINER_CLASS_RS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_SAILOR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSSailor),
    },
    [TRAINER_BOARDER_M] = {
        .trainerClass = TRAINER_CLASS_BOARDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BoarderM),
    },
    [TRAINER_BOARDER_F] = {
        .trainerClass = TRAINER_CLASS_BOARDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BoarderF),
    },
    [TRAINER_COLLECTOR] = {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Collector),
    },
    [TRAINER_WALLY] = {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wally),
    },
    [TRAINER_BRENDAN] = {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_BRENDAN_1,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brendan),
    },
    [TRAINER_BRENDAN_2] = {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_BRENDAN_1,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brendan2),
    },
    [TRAINER_BRENDAN_3] = {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_BRENDAN_1,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brendan3),
    },
    [TRAINER_MAY] = {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RS_MAY_1,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_May),
    },
    [TRAINER_MAY_2] = {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RS_MAY_1,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_May2),
    },
    [TRAINER_MAY_3] = {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RS_MAY_1,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_May3),
    },
    [TRAINER_RS_PKMN_BREEDER_M] = {
        .trainerClass = TRAINER_CLASS_RS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_POKEMON_BREEDER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSPkmnBreederM),
    },
    [TRAINER_RS_PKMN_BREEDER_F] = {
        .trainerClass = TRAINER_CLASS_RS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RS_POKEMON_BREEDER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSPkmnBreederF),
    },
    [TRAINER_RS_PKMN_RANGER_M] = {
        .trainerClass = TRAINER_CLASS_RS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_RS_POKEMON_RANGER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSPkmnRangerM),
    },
    [TRAINER_RS_PKMN_RANGER_F] = {
        .trainerClass = TRAINER_CLASS_RS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_RS_POKEMON_RANGER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSPkmnRangerF),
    },
    [TRAINER_MAGMA_LEADER] = {
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MagmaLeader),
    },
    [TRAINER_MAGMA_GRUNT_M] = {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MagmaGruntM),
    },
    [TRAINER_MAMGA_GRUNT_F] = {
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MagmaGruntF),
    },
    [TRAINER_RS_LASS] = {
        .trainerClass = TRAINER_CLASS_RS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RS_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSLass),
    },
    [TRAINER_RS_BUG_CATCHER] = {
        .trainerClass = TRAINER_CLASS_RS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSBugCatcher),
    },
    [TRAINER_RS_HIKER] = {
        .trainerClass = TRAINER_CLASS_RS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RS_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSHiker),
    },
    [TRAINER_RS_YOUNG_COUPLE] = {
        .trainerClass = TRAINER_CLASS_RS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_RS_YOUNG_COUPLE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSYoungCouple),
    },
    [TRAINER_OLD_COUPLE] = {
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_OldCouple),
    },
    [TRAINER_RS_SIS_AND_BRO] = {
        .trainerClass = TRAINER_CLASS_RS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_RS_SIS_AND_BRO,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RSSisAndBro),
    },
    [TRAINER_AQUA_ADMIN_MATT] = {
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MATT"),
        #elif SPANISH
        .trainerName = _("MATÍAS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AquaAdminMatt),
    },
    [TRAINER_AQUA_ADMIN_SHELLY] = {
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SHELLY"),
        #elif SPANISH
        .trainerName = _("SILVINA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AquaAdminShelly),
    },
    [TRAINER_MAGMA_ADMIN_TABITHA] = {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TABITHA"),
        #elif SPANISH
        .trainerName = _("TATIANO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MagmaAdminTabitha),
    },
    [TRAINER_MAGMA_ADMIN_COURTNEY] = {
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("COURTNEY"),
        #elif SPANISH
        .trainerName = _("CAROLA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MagmaAdminCourtney),
    },
    [TRAINER_LEADER_WATTSON] = {
        .trainerClass = TRAINER_CLASS_RS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("WATTSON"),
        #elif SPANISH
        .trainerName = _("ERICO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LeaderWattson),
    },
    [TRAINER_LEADER_FLANNERY] = {
        .trainerClass = TRAINER_CLASS_RS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("FLANNERY"),
        #elif SPANISH
        .trainerName = _("CANDELA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LeaderFlannery),
    },
    [TRAINER_LEADER_NORMAN] = {
        .trainerClass = TRAINER_CLASS_RS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NORMAN"),
        #elif SPANISH
        .trainerName = _("NORMAN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LeaderNorman),
    },
    [TRAINER_LEADER_WINONA] = {
        .trainerClass = TRAINER_CLASS_RS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("WINONA"),
        #elif SPANISH
        .trainerName = _("ALANA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LeaderWinona),
    },
    [TRAINER_LEADER_WALLACE] = {
        .trainerClass = TRAINER_CLASS_RS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WALLACE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("WALLACE"),
        #elif SPANISH
        .trainerName = _("PLUBIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LeaderWallace),
    },
    [TRAINER_ELITE_FOUR_GLACIA] = {
        .trainerClass = TRAINER_CLASS_RS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GLACIA"),
        #elif SPANISH
        .trainerName = _("NÍVEA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_EliteFourGlacia),
    },
    [TRAINER_ELITE_FOUR_DRAKE] = {
        .trainerClass = TRAINER_CLASS_RS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DRAKE"),
        #elif SPANISH
        .trainerName = _("DRACÓN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_EliteFourDrake),
    },
    [TRAINER_YOUNGSTER_BEN] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BEN"),
        #elif SPANISH
        .trainerName = _("BEN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterBen),
    },
    [TRAINER_YOUNGSTER_CALVIN] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CALVIN"),
        #elif SPANISH
        .trainerName = _("CALIXTO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterCalvin),
    },
    [TRAINER_YOUNGSTER_JOSH] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JOSH"),
        #elif SPANISH
        .trainerName = _("JOSÉ"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterJosh),
    },
    [TRAINER_YOUNGSTER_TIMMY] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TIMMY"),
        #elif SPANISH
        .trainerName = _("TINO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterTimmy),
    },
    [TRAINER_YOUNGSTER_JOEY] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JOEY"),
        #elif SPANISH
        .trainerName = _("PEPE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterJoey),
    },
    [TRAINER_YOUNGSTER_DAN] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DAN"),
        #elif SPANISH
        .trainerName = _("DANE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterDan),
    },
    [TRAINER_YOUNGSTER_CHAD] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CHAD"),
        #elif SPANISH
        .trainerName = _("CIRO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterChad),
    },
    [TRAINER_YOUNGSTER_TYLER] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TYLER"),
        #elif SPANISH
        .trainerName = _("TILEN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterTyler),
    },
    [TRAINER_YOUNGSTER_EDDIE] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("EDDIE"),
        #elif SPANISH
        .trainerName = _("EDU"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterEddie),
    },
    [TRAINER_YOUNGSTER_DILLON] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DILLON"),
        #elif SPANISH
        .trainerName = _("DIONI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterDillon),
    },
    [TRAINER_YOUNGSTER_YASU] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("YASU"),
        #elif SPANISH
        .trainerName = _("YASU"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterYasu),
    },
    [TRAINER_YOUNGSTER_DAVE] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DAVE"),
        #elif SPANISH
        .trainerName = _("DAVI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterDave),
    },
    [TRAINER_YOUNGSTER_BEN_2] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BEN"),
        #elif SPANISH
        .trainerName = _("BEN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterBen2),
    },
    [TRAINER_BUG_CATCHER_RICK] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RICK"),
        #elif SPANISH
        .trainerName = _("JANO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherRick),
    },
    [TRAINER_BUG_CATCHER_DOUG] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DOUG"),
        #elif SPANISH
        .trainerName = _("DOMIN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherDoug),
    },
    [TRAINER_BUG_CATCHER_SAMMY] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SAMMY"),
        #elif SPANISH
        .trainerName = _("SAMI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherSammy),
    },
    [TRAINER_BUG_CATCHER_COLTON] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("COLTON"),
        #elif SPANISH
        .trainerName = _("CORNELIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherColton),
    },
    [TRAINER_BUG_CATCHER_GREG] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GREG"),
        #elif SPANISH
        .trainerName = _("GREGORIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherGreg),
    },
    [TRAINER_BUG_CATCHER_JAMES] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JAMES"),
        #elif SPANISH
        .trainerName = _("JAIME"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherJames),
    },
    [TRAINER_BUG_CATCHER_KENT] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KENT"),
        #elif SPANISH
        .trainerName = _("CASIMIRO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherKent),
    },
    [TRAINER_BUG_CATCHER_ROBBY] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ROBBY"),
        #elif SPANISH
        .trainerName = _("ROBI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherRobby),
    },
    [TRAINER_BUG_CATCHER_CALE] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CALE"),
        #elif SPANISH
        .trainerName = _("BUDI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherCale),
    },
    [TRAINER_BUG_CATCHER_KEIGO] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KEIGO"),
        #elif SPANISH
        .trainerName = _("KEIGO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherKeigo),
    },
    [TRAINER_BUG_CATCHER_ELIJAH] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ELIJAH"),
        #elif SPANISH
        .trainerName = _("JUALU"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherElijah),
    },
    [TRAINER_BUG_CATCHER_2] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcher2),
    },
    [TRAINER_BUG_CATCHER_BRENT] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BRENT"),
        #elif SPANISH
        .trainerName = _("BERNABÉ"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherBrent),
    },
    [TRAINER_BUG_CATCHER_CONNER] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CONNER"),
        #elif SPANISH
        .trainerName = _("ARIEL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherConner),
    },
    [TRAINER_LASS_JANICE] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JANICE"),
        #elif SPANISH
        .trainerName = _("LUCRECIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassJanice),
    },
    [TRAINER_LASS_SALLY] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SALLY"),
        #elif SPANISH
        .trainerName = _("SUSANA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassSally),
    },
    [TRAINER_LASS_ROBIN] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ROBIN"),
        #elif SPANISH
        .trainerName = _("ROBERTA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassRobin),
    },
    [TRAINER_LASS_CRISSY] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CRISSY"),
        #elif SPANISH
        .trainerName = _("CRISTI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassCrissy),
    },
    [TRAINER_LASS_MIRIAM] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MIRIAM"),
        #elif SPANISH
        .trainerName = _("MIRNA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassMiriam),
    },
    [TRAINER_LASS_IRIS] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("IRIS"),
        #elif SPANISH
        .trainerName = _("IRIS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassIris),
    },
    [TRAINER_LASS_RELI] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RELI"),
        #elif SPANISH
        .trainerName = _("RUTH"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassReli),
    },
    [TRAINER_LASS_ALI] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ALI"),
        #elif SPANISH
        .trainerName = _("MARGA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassAli),
    },
    [TRAINER_LASS_2] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lass2),
    },
    [TRAINER_LASS_HALEY] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HALEY"),
        #elif SPANISH
        .trainerName = _("HERMINIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassHaley),
    },
    [TRAINER_LASS_ANN] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ANN"),
        #elif SPANISH
        .trainerName = _("ADA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassAnn),
    },
    [TRAINER_LASS_DAWN] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DAWN"),
        #elif SPANISH
        .trainerName = _("ARRATE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassDawn),
    },
    [TRAINER_LASS_PAIGE] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("PAIGE"),
        #elif SPANISH
        .trainerName = _("LULÚ"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassPaige),
    },
    [TRAINER_LASS_ANDREA] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ANDREA"),
        #elif SPANISH
        .trainerName = _("ANDREA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassAndrea),
    },
    [TRAINER_LASS_MEGAN] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MEGAN"),
        #elif SPANISH
        .trainerName = _("VEVA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassMegan),
    },
    [TRAINER_LASS_JULIA] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JULIA"),
        #elif SPANISH
        .trainerName = _("GENO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassJulia),
    },
    [TRAINER_LASS_KAY] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KAY"),
        #elif SPANISH
        .trainerName = _("BUSA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassKay),
    },
    [TRAINER_LASS_LISA] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LISA"),
        #elif SPANISH
        .trainerName = _("LISA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassLisa),
    },
    [TRAINER_SAILOR_EDMOND] = {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("EDMOND"),
        #elif SPANISH
        .trainerName = _("EDMUNDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SailorEdmond),
    },
    [TRAINER_SAILOR_TREVOR] = {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TREVOR"),
        #elif SPANISH
        .trainerName = _("TORIBIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SailorTrevor),
    },
    [TRAINER_SAILOR_LEONARD] = {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LEONARD"),
        #elif SPANISH
        .trainerName = _("LEONARDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SailorLeonard),
    },
    [TRAINER_SAILOR_DUNCAN] = {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DUNCAN"),
        #elif SPANISH
        .trainerName = _("DATO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SailorDuncan),
    },
    [TRAINER_SAILOR_HUEY] = {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HUEY"),
        #elif SPANISH
        .trainerName = _("HUMBERTO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SailorHuey),
    },
    [TRAINER_SAILOR_DYLAN] = {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DYLAN"),
        #elif SPANISH
        .trainerName = _("DAN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SailorDylan),
    },
    [TRAINER_SAILOR_PHILLIP] = {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("PHILLIP"),
        #elif SPANISH
        .trainerName = _("FELIPE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SailorPhillip),
    },
    [TRAINER_SAILOR_DWAYNE] = {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DWAYNE"),
        #elif SPANISH
        .trainerName = _("DIMAS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SailorDwayne),
    },
    [TRAINER_CAMPER_LIAM] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LIAM"),
        #elif SPANISH
        .trainerName = _("ANGELITO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CamperLiam),
    },
    [TRAINER_CAMPER_SHANE] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SHANE"),
        #elif SPANISH
        .trainerName = _("CHANO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperShane),
    },
    [TRAINER_CAMPER_ETHAN] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ETHAN"),
        #elif SPANISH
        .trainerName = _("EZEQUIEL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperEthan),
    },
    [TRAINER_CAMPER_RICKY] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RICKY"),
        #elif SPANISH
        .trainerName = _("RICHI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperRicky),
    },
    [TRAINER_CAMPER_JEFF] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JEFF"),
        #elif SPANISH
        .trainerName = _("GENARO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperJeff),
    },
    [TRAINER_CAMPER_2] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Camper2),
    },
    [TRAINER_CAMPER_CHRIS] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CHRIS"),
        #elif SPANISH
        .trainerName = _("CRIS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperChris),
    },
    [TRAINER_CAMPER_DREW] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DREW"),
        #elif SPANISH
        .trainerName = _("DOROTEO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperDrew),
    },
    [TRAINER_PICNICKER_DIANA] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DIANA"),
        #elif SPANISH
        .trainerName = _("DIANA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerDiana),
    },
    [TRAINER_PICNICKER_NANCY] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NANCY"),
        #elif SPANISH
        .trainerName = _("NEREA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerNancy),
    },
    [TRAINER_PICNICKER_ISABELLE] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ISABELLE"),
        #elif SPANISH
        .trainerName = _("CHÍO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerIsabelle),
    },
    [TRAINER_PICNICKER_KELSEY] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KELSEY"),
        #elif SPANISH
        .trainerName = _("ELIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerKelsey),
    },
    [TRAINER_PICNICKER_ALICIA] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ALICIA"),
        #elif SPANISH
        .trainerName = _("NELI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerAlicia),
    },
    [TRAINER_PICNICKER_CAITLIN] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CAITLIN"),
        #elif SPANISH
        .trainerName = _("NOE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerCaitlin),
    },
    [TRAINER_PICNICKER_HEIDI] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HEIDI"),
        #elif SPANISH
        .trainerName = _("HILARIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerHeidi),
    },
    [TRAINER_PICNICKER_CAROL] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CAROL"),
        #elif SPANISH
        .trainerName = _("CÁROL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerCarol),
    },
    [TRAINER_PICNICKER_SOFIA] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SOFIA"),
        #elif SPANISH
        .trainerName = _("SOFÍA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerSofia),
    },
    [TRAINER_PICNICKER_MARTHA] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MARTHA"),
        #elif SPANISH
        .trainerName = _("MARTA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerMartha),
    },
    [TRAINER_PICNICKER_TINA] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TINA"),
        #elif SPANISH
        .trainerName = _("TEÓFILA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerTina),
    },
    [TRAINER_PICNICKER_HANNAH] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HANNAH"),
        #elif SPANISH
        .trainerName = _("ANA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerHannah),
    },
    [TRAINER_POKEMANIAC_MARK] = {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MARK"),
        #elif SPANISH
        .trainerName = _("MARCO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PokemaniacMark),
    },
    [TRAINER_POKEMANIAC_HERMAN] = {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HERMAN"),
        #elif SPANISH
        .trainerName = _("HERNANDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PokemaniacHerman),
    },
    [TRAINER_POKEMANIAC_COOPER] = {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("COOPER"),
        #elif SPANISH
        .trainerName = _("JULIÁN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PokemaniacCooper),
    },
    [TRAINER_POKEMANIAC_STEVE] = {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("STEVE"),
        #elif SPANISH
        .trainerName = _("ESTEBAN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PokemaniacSteve),
    },
    [TRAINER_POKEMANIAC_WINSTON] = {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("WINSTON"),
        #elif SPANISH
        .trainerName = _("DANI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PokemaniacWinston),
    },
    [TRAINER_POKEMANIAC_DAWSON] = {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DAWSON"),
        #elif SPANISH
        .trainerName = _("ISRAEL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PokemaniacDawson),
    },
    [TRAINER_POKEMANIAC_ASHTON] = {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ASHTON"),
        #elif SPANISH
        .trainerName = _("BASILIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PokemaniacAshton),
    },
    [TRAINER_SUPER_NERD_JOVAN] = {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JOVAN"),
        #elif SPANISH
        .trainerName = _("GUSTAVO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SuperNerdJovan),
    },
    [TRAINER_SUPER_NERD_MIGUEL] = {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MIGUEL"),
        #elif SPANISH
        .trainerName = _("MIGUEL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SuperNerdMiguel),
    },
    [TRAINER_SUPER_NERD_AIDAN] = {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("AIDAN"),
        #elif SPANISH
        .trainerName = _("ADRIÁN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_SuperNerdAidan),
    },
    [TRAINER_SUPER_NERD_GLENN] = {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GLENN"),
        #elif SPANISH
        .trainerName = _("LADIS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SuperNerdGlenn),
    },
    [TRAINER_SUPER_NERD_LESLIE] = {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LESLIE"),
        #elif SPANISH
        .trainerName = _("LES"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_SuperNerdLeslie),
    },
    [TRAINER_SUPER_NERD_1] = {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SuperNerd1),
    },
    [TRAINER_SUPER_NERD_2] = {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SuperNerd2),
    },
    [TRAINER_SUPER_NERD_3] = {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SuperNerd3),
    },
    [TRAINER_SUPER_NERD_ERIK] = {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ERIK"),
        #elif SPANISH
        .trainerName = _("ENRIQUE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SuperNerdErik),
    },
    [TRAINER_SUPER_NERD_AVERY] = {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("AVERY"),
        #elif SPANISH
        .trainerName = _("AVERO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SuperNerdAvery),
    },
    [TRAINER_SUPER_NERD_DEREK] = {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DEREK"),
        #elif SPANISH
        .trainerName = _("DANTE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SuperNerdDerek),
    },
    [TRAINER_SUPER_NERD_ZAC] = {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ZAC"),
        #elif SPANISH
        .trainerName = _("ZAC"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SuperNerdZac),
    },
    [TRAINER_HIKER_MARCOS] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MARCOS"),
        #elif SPANISH
        .trainerName = _("MARCOS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HikerMarcos),
    },
    [TRAINER_HIKER_FRANKLIN] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("FRANKLIN"),
        #elif SPANISH
        .trainerName = _("FRANCIS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HikerFranklin),
    },
    [TRAINER_HIKER_NOB] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NOB"),
        #elif SPANISH
        .trainerName = _("NOBORU"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HikerNob),
    },
    [TRAINER_HIKER_WAYNE] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("WAYNE"),
        #elif SPANISH
        .trainerName = _("UBALDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HikerWayne),
    },
    [TRAINER_HIKER_ALAN] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ALAN"),
        #elif SPANISH
        .trainerName = _("ALFONSO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_HikerAlan),
    },
    [TRAINER_HIKER_BRICE] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BRICE"),
        #elif SPANISH
        .trainerName = _("BALTASAR"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HikerBrice),
    },
    [TRAINER_HIKER_CLARK] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CLARK"),
        #elif SPANISH
        .trainerName = _("CARLO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_HikerClark),
    },
    [TRAINER_HIKER_TRENT] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TRENT"),
        #elif SPANISH
        .trainerName = _("TARSI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HikerTrent),
    },
    [TRAINER_HIKER_DUDLEY] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DUDLEY"),
        #elif SPANISH
        .trainerName = _("DINIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_HikerDudley),
    },
    [TRAINER_HIKER_ALLEN] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ALLEN"),
        #elif SPANISH
        .trainerName = _("ALFREDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_HikerAllen),
    },
    [TRAINER_HIKER_ERIC] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ERIC"),
        #elif SPANISH
        .trainerName = _("EVARISTO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HikerEric),
    },
    [TRAINER_HIKER_LENNY] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LENNY"),
        #elif SPANISH
        .trainerName = _("LUCIANO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HikerLenny),
    },
    [TRAINER_HIKER_OLIVER] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("OLIVER"),
        #elif SPANISH
        .trainerName = _("ÓSCAR"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HikerOliver),
    },
    [TRAINER_HIKER_LUCAS] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LUCAS"),
        #elif SPANISH
        .trainerName = _("LUCAS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_HikerLucas),
    },
    [TRAINER_BIKER_JARED] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JARED"),
        #elif SPANISH
        .trainerName = _("JAVIER"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_BikerJared),
    },
    [TRAINER_BIKER_MALIK] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MALIK"),
        #elif SPANISH
        .trainerName = _("MALEN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_BikerMalik),
    },
    [TRAINER_BIKER_ERNEST] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ERNEST"),
        #elif SPANISH
        .trainerName = _("ERNESTO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_BikerErnest),
    },
    [TRAINER_BIKER_ALEX] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ALEX"),
        #elif SPANISH
        .trainerName = _("SANDRO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_BikerAlex),
    },
    [TRAINER_BIKER_LAO] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LAO"),
        #elif SPANISH
        .trainerName = _("LAO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_BikerLao),
    },
    [TRAINER_BIKER_1] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Biker1),
    },
    [TRAINER_BIKER_HIDEO] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HIDEO"),
        #elif SPANISH
        .trainerName = _("HIDEO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BikerHideo),
    },
    [TRAINER_BIKER_RUBEN] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RUBEN"),
        #elif SPANISH
        .trainerName = _("RUBÉN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_BikerRuben),
    },
    [TRAINER_BIKER_BILLY] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BILLY"),
        #elif SPANISH
        .trainerName = _("BERTO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BikerBilly),
    },
    [TRAINER_BIKER_NIKOLAS] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NIKOLAS"),
        #elif SPANISH
        .trainerName = _("NICO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_BikerNikolas),
    },
    [TRAINER_BIKER_JAXON] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JAXON"),
        #elif SPANISH
        .trainerName = _("JULIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_BikerJaxon),
    },
    [TRAINER_BIKER_WILLIAM] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("WILLIAM"),
        #elif SPANISH
        .trainerName = _("GUILLERMO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_BikerWilliam),
    },
    [TRAINER_BIKER_LUKAS] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LUKAS"),
        #elif SPANISH
        .trainerName = _("LUCIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_BikerLukas),
    },
    [TRAINER_BIKER_ISAAC] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ISAAC"),
        #elif SPANISH
        .trainerName = _("ISAAC"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_BikerIsaac),
    },
    [TRAINER_BIKER_GERALD] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GERALD"),
        #elif SPANISH
        .trainerName = _("GERARDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_BikerGerald),
    },
    [TRAINER_BURGLAR_1] = {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Burglar1),
    },
    [TRAINER_BURGLAR_2] = {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Burglar2),
    },
    [TRAINER_BURGLAR_3] = {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Burglar3),
    },
    [TRAINER_BURGLAR_QUINN] = {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("QUINN"),
        #elif SPANISH
        .trainerName = _("OCTAVIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BurglarQuinn),
    },
    [TRAINER_BURGLAR_RAMON] = {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RAMON"),
        #elif SPANISH
        .trainerName = _("RAMÓN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BurglarRamon),
    },
    [TRAINER_BURGLAR_DUSTY] = {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DUSTY"),
        #elif SPANISH
        .trainerName = _("DACIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BurglarDusty),
    },
    [TRAINER_BURGLAR_ARNIE] = {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ARNIE"),
        #elif SPANISH
        .trainerName = _("AMADEO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BurglarArnie),
    },
    [TRAINER_BURGLAR_4] = {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Burglar4),
    },
    [TRAINER_BURGLAR_SIMON] = {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SIMON"),
        #elif SPANISH
        .trainerName = _("SIMÓN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BurglarSimon),
    },
    [TRAINER_BURGLAR_LEWIS] = {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LEWIS"),
        #elif SPANISH
        .trainerName = _("LAUREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BurglarLewis),
    },
    [TRAINER_ENGINEER_BAILY] = {
        .trainerClass = TRAINER_CLASS_ENGINEER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ENGINEER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BAILY"),
        #elif SPANISH
        .trainerName = _("MANOLO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_EngineerBaily),
    },
    [TRAINER_ENGINEER_BRAXTON] = {
        .trainerClass = TRAINER_CLASS_ENGINEER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ENGINEER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BRAXTON"),
        #elif SPANISH
        .trainerName = _("PERICO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_EngineerBraxton),
    },
    [TRAINER_ENGINEER_BERNIE] = {
        .trainerClass = TRAINER_CLASS_ENGINEER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ENGINEER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BERNIE"),
        #elif SPANISH
        .trainerName = _("BERNARDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_EngineerBernie),
    },
    [TRAINER_FISHERMAN_DALE] = {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DALE"),
        #elif SPANISH
        .trainerName = _("DANIEL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_FishermanDale),
    },
    [TRAINER_FISHERMAN_BARNY] = {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BARNY"),
        #elif SPANISH
        .trainerName = _("BELTRÁN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_FishermanBarny),
    },
    [TRAINER_FISHERMAN_NED] = {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NED"),
        #elif SPANISH
        .trainerName = _("NÉSTOR"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_FishermanNed),
    },
    [TRAINER_FISHERMAN_CHIP] = {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CHIP"),
        #elif SPANISH
        .trainerName = _("CHICHO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_FishermanChip),
    },
    [TRAINER_FISHERMAN_HANK] = {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HANK"),
        #elif SPANISH
        .trainerName = _("HILARIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_FishermanHank),
    },
    [TRAINER_FISHERMAN_ELLIOT] = {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ELLIOT"),
        #elif SPANISH
        .trainerName = _("ELOY"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_FishermanElliot),
    },
    [TRAINER_FISHERMAN_RONALD] = {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RONALD"),
        #elif SPANISH
        .trainerName = _("RONALDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_FishermanRonald),
    },
    [TRAINER_FISHERMAN_CLAUDE] = {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CLAUDE"),
        #elif SPANISH
        .trainerName = _("CLAUDIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_FishermanClaude),
    },
    [TRAINER_FISHERMAN_WADE] = {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("WADE"),
        #elif SPANISH
        .trainerName = _("GUIDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_FishermanWade),
    },
    [TRAINER_FISHERMAN_NOLAN] = {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NOLAN"),
        #elif SPANISH
        .trainerName = _("NARCISO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_FishermanNolan),
    },
    [TRAINER_FISHERMAN_ANDREW] = {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ANDREW"),
        #elif SPANISH
        .trainerName = _("ANDRÉS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_FishermanAndrew),
    },
    [TRAINER_SWIMMER_MALE_LUIS] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LUIS"),
        #elif SPANISH
        .trainerName = _("LUIS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleLuis),
    },
    [TRAINER_SWIMMER_MALE_RICHARD] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RICHARD"),
        #elif SPANISH
        .trainerName = _("RICARDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleRichard),
    },
    [TRAINER_SWIMMER_MALE_REECE] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("REECE"),
        #elif SPANISH
        .trainerName = _("MARCELO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleReece),
    },
    [TRAINER_SWIMMER_MALE_MATTHEW] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MATTHEW"),
        #elif SPANISH
        .trainerName = _("MATEO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleMatthew),
    },
    [TRAINER_SWIMMER_MALE_DOUGLAS] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DOUGLAS"),
        #elif SPANISH
        .trainerName = _("DOMINGO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleDouglas),
    },
    [TRAINER_SWIMMER_MALE_DAVID] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DAVID"),
        #elif SPANISH
        .trainerName = _("DAVID"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleDavid),
    },
    [TRAINER_SWIMMER_MALE_TONY] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TONY"),
        #elif SPANISH
        .trainerName = _("TONI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleTony),
    },
    [TRAINER_SWIMMER_MALE_AXLE] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("AXLE"),
        #elif SPANISH
        .trainerName = _("ALEJO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleAxle),
    },
    [TRAINER_SWIMMER_MALE_BARRY] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BARRY"),
        #elif SPANISH
        .trainerName = _("BORIS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleBarry),
    },
    [TRAINER_SWIMMER_MALE_DEAN] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DEAN"),
        #elif SPANISH
        .trainerName = _("DINO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleDean),
    },
    [TRAINER_SWIMMER_MALE_DARRIN] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DARRIN"),
        #elif SPANISH
        .trainerName = _("DARÍO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleDarrin),
    },
    [TRAINER_SWIMMER_MALE_SPENCER] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SPENCER"),
        #elif SPANISH
        .trainerName = _("SERGIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleSpencer),
    },
    [TRAINER_SWIMMER_MALE_JACK] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JACK"),
        #elif SPANISH
        .trainerName = _("OMAR"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleJack),
    },
    [TRAINER_SWIMMER_MALE_JEROME] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JEROME"),
        #elif SPANISH
        .trainerName = _("JEROMO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleJerome),
    },
    [TRAINER_SWIMMER_MALE_ROLAND] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ROLAND"),
        #elif SPANISH
        .trainerName = _("ROMÁN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleRoland),
    },
    [TRAINER_CUE_BALL_KOJI] = {
        .trainerClass = TRAINER_CLASS_CUE_BALL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KOJI"),
        #elif SPANISH
        .trainerName = _("KOJI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CueBallKoji),
    },
    [TRAINER_CUE_BALL_LUKE] = {
        .trainerClass = TRAINER_CLASS_CUE_BALL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LUKE"),
        #elif SPANISH
        .trainerName = _("LEO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CueBallLuke),
    },
    [TRAINER_CUE_BALL_CAMRON] = {
        .trainerClass = TRAINER_CLASS_CUE_BALL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CAMRON"),
        #elif SPANISH
        .trainerName = _("CADEL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CueBallCamron),
    },
    [TRAINER_CUE_BALL_RAUL] = {
        .trainerClass = TRAINER_CLASS_CUE_BALL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RAUL"),
        #elif SPANISH
        .trainerName = _("RALE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CueBallRaul),
    },
    [TRAINER_CUE_BALL_ISAIAH] = {
        .trainerClass = TRAINER_CLASS_CUE_BALL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ISAIAH"),
        #elif SPANISH
        .trainerName = _("ISAÍAS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CueBallIsaiah),
    },
    [TRAINER_CUE_BALL_ZEEK] = {
        .trainerClass = TRAINER_CLASS_CUE_BALL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ZEEK"),
        #elif SPANISH
        .trainerName = _("DERO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CueBallZeek),
    },
    [TRAINER_CUE_BALL_JAMAL] = {
        .trainerClass = TRAINER_CLASS_CUE_BALL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JAMAL"),
        #elif SPANISH
        .trainerName = _("JAVI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CueBallJamal),
    },
    [TRAINER_CUE_BALL_COREY] = {
        .trainerClass = TRAINER_CLASS_CUE_BALL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("COREY"),
        #elif SPANISH
        .trainerName = _("CEFE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CueBallCorey),
    },
    [TRAINER_CUE_BALL_CHASE] = {
        .trainerClass = TRAINER_CLASS_CUE_BALL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CHASE"),
        #elif SPANISH
        .trainerName = _("CONRADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CueBallChase),
    },
    [TRAINER_GAMER_HUGO] = {
        .trainerClass = TRAINER_CLASS_GAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HUGO"),
        #elif SPANISH
        .trainerName = _("HUGUE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GamerHugo),
    },
    [TRAINER_GAMER_JASPER] = {
        .trainerClass = TRAINER_CLASS_GAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JASPER"),
        #elif SPANISH
        .trainerName = _("JAREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GamerJasper),
    },
    [TRAINER_GAMER_DIRK] = {
        .trainerClass = TRAINER_CLASS_GAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DIRK"),
        #elif SPANISH
        .trainerName = _("GASPAR"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GamerDirk),
    },
    [TRAINER_GAMER_DARIAN] = {
        .trainerClass = TRAINER_CLASS_GAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DARIAN"),
        #elif SPANISH
        .trainerName = _("DARIAN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GamerDarian),
    },
    [TRAINER_GAMER_STAN] = {
        .trainerClass = TRAINER_CLASS_GAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("STAN"),
        #elif SPANISH
        .trainerName = _("EUSEBIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GamerStan),
    },
    [TRAINER_GAMER_1] = {
        .trainerClass = TRAINER_CLASS_GAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gamer1),
    },
    [TRAINER_GAMER_RICH] = {
        .trainerClass = TRAINER_CLASS_GAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RICH"),
        #elif SPANISH
        .trainerName = _("NORBER"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GamerRich),
    },
    [TRAINER_BEAUTY_BRIDGET] = {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BRIDGET"),
        #elif SPANISH
        .trainerName = _("BRÍGIDA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BeautyBridget),
    },
    [TRAINER_BEAUTY_TAMIA] = {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TAMIA"),
        #elif SPANISH
        .trainerName = _("PURI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BeautyTamia),
    },
    [TRAINER_BEAUTY_LORI] = {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LORI"),
        #elif SPANISH
        .trainerName = _("LARA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BeautyLori),
    },
    [TRAINER_BEAUTY_LOLA] = {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LOLA"),
        #elif SPANISH
        .trainerName = _("LOLA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BeautyLola),
    },
    [TRAINER_BEAUTY_SHEILA] = {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SHEILA"),
        #elif SPANISH
        .trainerName = _("SOL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BeautySheila),
    },
    [TRAINER_SWIMMER_FEMALE_TIFFANY] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TIFFANY"),
        #elif SPANISH
        .trainerName = _("TIZIANA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerFemaleTiffany),
    },
    [TRAINER_SWIMMER_FEMALE_NORA] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NORA"),
        #elif SPANISH
        .trainerName = _("NORA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerFemaleNora),
    },
    [TRAINER_SWIMMER_FEMALE_MELISSA] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MELISSA"),
        #elif SPANISH
        .trainerName = _("MELISA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerFemaleMelissa),
    },
    [TRAINER_BEAUTY_GRACE] = {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRACE"),
        #elif SPANISH
        .trainerName = _("GRACIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BeautyGrace),
    },
    [TRAINER_BEAUTY_OLIVIA] = {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("OLIVIA"),
        #elif SPANISH
        .trainerName = _("OLIVIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BeautyOlivia),
    },
    [TRAINER_BEAUTY_LAUREN] = {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LAUREN"),
        #elif SPANISH
        .trainerName = _("LUCERO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BeautyLauren),
    },
    [TRAINER_SWIMMER_FEMALE_ANYA] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ANYA"),
        #elif SPANISH
        .trainerName = _("ANIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerFemaleAnya),
    },
    [TRAINER_SWIMMER_FEMALE_ALICE] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ALICE"),
        #elif SPANISH
        .trainerName = _("ALICIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerFemaleAlice),
    },
    [TRAINER_SWIMMER_FEMALE_CONNIE] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CONNIE"),
        #elif SPANISH
        .trainerName = _("CORO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerFemaleConnie),
    },
    [TRAINER_SWIMMER_FEMALE_SHIRLEY] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SHIRLEY"),
        #elif SPANISH
        .trainerName = _("SILVIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerFemaleShirley),
    },
    [TRAINER_PSYCHIC_JOHAN] = {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JOHAN"),
        #elif SPANISH
        .trainerName = _("LUISMI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PsychicJohan),
    },
    [TRAINER_PSYCHIC_TYRON] = {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TYRON"),
        #elif SPANISH
        .trainerName = _("TOR"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PsychicTyron),
    },
    [TRAINER_PSYCHIC_CAMERON] = {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CAMERON"),
        #elif SPANISH
        .trainerName = _("SILVIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PsychicCameron),
    },
    [TRAINER_PSYCHIC_PRESTON] = {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("PRESTON"),
        #elif SPANISH
        .trainerName = _("PATRICIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PsychicPreston),
    },
    [TRAINER_ROCKER_RANDALL] = {
        .trainerClass = TRAINER_CLASS_ROCKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RANDALL"),
        #elif SPANISH
        .trainerName = _("ANTONIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RockerRandall),
    },
    [TRAINER_ROCKER_LUCA] = {
        .trainerClass = TRAINER_CLASS_ROCKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LUCA"),
        #elif SPANISH
        .trainerName = _("MONE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RockerLuca),
    },
    [TRAINER_JUGGLER_DALTON] = {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DALTON"),
        #elif SPANISH
        .trainerName = _("RODRIGO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_JugglerDalton),
    },
    [TRAINER_JUGGLER_NELSON] = {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NELSON"),
        #elif SPANISH
        .trainerName = _("MODESTO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_JugglerNelson),
    },
    [TRAINER_JUGGLER_KIRK] = {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KIRK"),
        #elif SPANISH
        .trainerName = _("ÁNGEL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_JugglerKirk),
    },
    [TRAINER_JUGGLER_SHAWN] = {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SHAWN"),
        #elif SPANISH
        .trainerName = _("ISMA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_JugglerShawn),
    },
    [TRAINER_JUGGLER_GREGORY] = {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GREGORY"),
        #elif SPANISH
        .trainerName = _("GRAU"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_JugglerGregory),
    },
    [TRAINER_JUGGLER_EDWARD] = {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("EDWARD"),
        #elif SPANISH
        .trainerName = _("EDUARDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_JugglerEdward),
    },
    [TRAINER_JUGGLER_KAYDEN] = {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KAYDEN"),
        #elif SPANISH
        .trainerName = _("LENO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_JugglerKayden),
    },
    [TRAINER_JUGGLER_NATE] = {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NATE"),
        #elif SPANISH
        .trainerName = _("NANDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_JugglerNate),
    },
    [TRAINER_TAMER_PHIL] = {
        .trainerClass = TRAINER_CLASS_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_TAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("PHIL"),
        #elif SPANISH
        .trainerName = _("PEDRO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TamerPhil),
    },
    [TRAINER_TAMER_EDGAR] = {
        .trainerClass = TRAINER_CLASS_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_TAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("EDGAR"),
        #elif SPANISH
        .trainerName = _("EFRAÍN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TamerEdgar),
    },
    [TRAINER_TAMER_JASON] = {
        .trainerClass = TRAINER_CLASS_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_TAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JASON"),
        #elif SPANISH
        .trainerName = _("JAIRO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TamerJason),
    },
    [TRAINER_TAMER_COLE] = {
        .trainerClass = TRAINER_CLASS_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_TAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("COLE"),
        #elif SPANISH
        .trainerName = _("CAMILO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TamerCole),
    },
    [TRAINER_TAMER_VINCENT] = {
        .trainerClass = TRAINER_CLASS_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_TAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("VINCENT"),
        #elif SPANISH
        .trainerName = _("VICENTE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TamerVincent),
    },
    [TRAINER_TAMER_JOHN] = {
        .trainerClass = TRAINER_CLASS_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_TAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JOHN"),
        #elif SPANISH
        .trainerName = _("JULI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TamerJohn),
    },
    [TRAINER_BIRD_KEEPER_SEBASTIAN] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SEBASTIAN"),
        #elif SPANISH
        .trainerName = _("SEBASTIÁN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperSebastian),
    },
    [TRAINER_BIRD_KEEPER_PERRY] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("PERRY"),
        #elif SPANISH
        .trainerName = _("PASTOR"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperPerry),
    },
    [TRAINER_BIRD_KEEPER_ROBERT] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ROBERT"),
        #elif SPANISH
        .trainerName = _("ROBERTO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperRobert),
    },
    [TRAINER_BIRD_KEEPER_DONALD] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DONALD"),
        #elif SPANISH
        .trainerName = _("DONATO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperDonald),
    },
    [TRAINER_BIRD_KEEPER_BENNY] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BENNY"),
        #elif SPANISH
        .trainerName = _("BENI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperBenny),
    },
    [TRAINER_BIRD_KEEPER_EDWIN] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("EDWIN"),
        #elif SPANISH
        .trainerName = _("EDGARDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperEdwin),
    },
    [TRAINER_BIRD_KEEPER_CHESTER] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CHESTER"),
        #elif SPANISH
        .trainerName = _("CELSO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperChester),
    },
    [TRAINER_BIRD_KEEPER_WILTON] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("WILTON"),
        #elif SPANISH
        .trainerName = _("VALENTÍN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperWilton),
    },
    [TRAINER_BIRD_KEEPER_RAMIRO] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RAMIRO"),
        #elif SPANISH
        .trainerName = _("RAMIRO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperRamiro),
    },
    [TRAINER_BIRD_KEEPER_JACOB] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JACOB"),
        #elif SPANISH
        .trainerName = _("JACOBO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperJacob),
    },
    [TRAINER_BIRD_KEEPER_ROGER] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ROGER"),
        #elif SPANISH
        .trainerName = _("ROGE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperRoger),
    },
    [TRAINER_BIRD_KEEPER_REED] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("REED"),
        #elif SPANISH
        .trainerName = _("REMO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperReed),
    },
    [TRAINER_BIRD_KEEPER_KEITH] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KEITH"),
        #elif SPANISH
        .trainerName = _("IMANOL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperKeith),
    },
    [TRAINER_BIRD_KEEPER_CARTER] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CARTER"),
        #elif SPANISH
        .trainerName = _("CAYETANO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperCarter),
    },
    [TRAINER_BIRD_KEEPER_MITCH] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MITCH"),
        #elif SPANISH
        .trainerName = _("MELCHOR"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperMitch),
    },
    [TRAINER_BIRD_KEEPER_BECK] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BECK"),
        #elif SPANISH
        .trainerName = _("BALDOMERO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperBeck),
    },
    [TRAINER_BIRD_KEEPER_MARLON] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MARLON"),
        #elif SPANISH
        .trainerName = _("MAURO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperMarlon),
    },
    [TRAINER_BLACK_BELT_KOICHI] = {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KOICHI"),
        #elif SPANISH
        .trainerName = _("KOICHI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_BlackBeltKoichi),
    },
    [TRAINER_BLACK_BELT_MIKE] = {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MIKE"),
        #elif SPANISH
        .trainerName = _("MIGUE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_BlackBeltMike),
    },
    [TRAINER_BLACK_BELT_HIDEKI] = {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HIDEKI"),
        #elif SPANISH
        .trainerName = _("HIDEKI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_BlackBeltHideki),
    },
    [TRAINER_BLACK_BELT_AARON] = {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("AARON"),
        #elif SPANISH
        .trainerName = _("AARÓN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_BlackBeltAaron),
    },
    [TRAINER_BLACK_BELT_HITOSHI] = {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HITOSHI"),
        #elif SPANISH
        .trainerName = _("HITOSHI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_BlackBeltHitoshi),
    },
    [TRAINER_BLACK_BELT_ATSUSHI] = {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ATSUSHI"),
        #elif SPANISH
        .trainerName = _("ATSUSHI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_BlackBeltAtsushi),
    },
    [TRAINER_BLACK_BELT_KIYO] = {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KIYO"),
        #elif SPANISH
        .trainerName = _("HIRO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_BlackBeltKiyo),
    },
    [TRAINER_BLACK_BELT_TAKASHI] = {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TAKASHI"),
        #elif SPANISH
        .trainerName = _("TAKASHI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_BlackBeltTakashi),
    },
    [TRAINER_BLACK_BELT_DAISUKE] = {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DAISUKE"),
        #elif SPANISH
        .trainerName = _("DAISUKE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_BlackBeltDaisuke),
    },
    [TRAINER_RIVAL_OAKS_LAB_SQUIRTLE] = {
        .trainerClass = TRAINER_CLASS_RIVAL_EARLY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_EARLY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RivalOaksLabSquirtle),
    },
    [TRAINER_RIVAL_OAKS_LAB_BULBASAUR] = {
        .trainerClass = TRAINER_CLASS_RIVAL_EARLY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_EARLY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RivalOaksLabBulbasaur),
    },
    [TRAINER_RIVAL_OAKS_LAB_CHARMANDER] = {
        .trainerClass = TRAINER_CLASS_RIVAL_EARLY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_EARLY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RivalOaksLabCharmander),
    },
    [TRAINER_RIVAL_ROUTE22_EARLY_SQUIRTLE] = {
        .trainerClass = TRAINER_CLASS_RIVAL_EARLY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_EARLY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_RivalRoute22EarlySquirtle),
    },
    [TRAINER_RIVAL_ROUTE22_EARLY_BULBASAUR] = {
        .trainerClass = TRAINER_CLASS_RIVAL_EARLY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_EARLY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_RivalRoute22EarlyBulbasaur),
    },
    [TRAINER_RIVAL_ROUTE22_EARLY_CHARMANDER] = {
        .trainerClass = TRAINER_CLASS_RIVAL_EARLY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_EARLY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_RivalRoute22EarlyCharmander),
    },
    [TRAINER_RIVAL_CERULEAN_SQUIRTLE] = {
        .trainerClass = TRAINER_CLASS_RIVAL_EARLY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_EARLY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_RivalCeruleanSquirtle),
    },
    [TRAINER_RIVAL_CERULEAN_BULBASAUR] = {
        .trainerClass = TRAINER_CLASS_RIVAL_EARLY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_EARLY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_RivalCeruleanBulbasaur),
    },
    [TRAINER_RIVAL_CERULEAN_CHARMANDER] = {
        .trainerClass = TRAINER_CLASS_RIVAL_EARLY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_EARLY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_RivalCeruleanCharmander),
    },
    [TRAINER_SCIENTIST_TED] = {
        .trainerClass = TRAINER_CLASS_SCIENTIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TED"),
        #elif SPANISH
        .trainerName = _("TICO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ScientistTed),
    },
    [TRAINER_SCIENTIST_CONNOR] = {
        .trainerClass = TRAINER_CLASS_SCIENTIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CONNOR"),
        #elif SPANISH
        .trainerName = _("ROGELIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_ScientistConnor),
    },
    [TRAINER_SCIENTIST_JERRY] = {
        .trainerClass = TRAINER_CLASS_SCIENTIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JERRY"),
        #elif SPANISH
        .trainerName = _("JERÓNIMO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ScientistJerry),
    },
    [TRAINER_SCIENTIST_JOSE] = {
        .trainerClass = TRAINER_CLASS_SCIENTIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JOSE"),
        #elif SPANISH
        .trainerName = _("JOSE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_ScientistJose),
    },
    [TRAINER_SCIENTIST_RODNEY] = {
        .trainerClass = TRAINER_CLASS_SCIENTIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RODNEY"),
        #elif SPANISH
        .trainerName = _("RODOLFO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ScientistRodney),
    },
    [TRAINER_SCIENTIST_BEAU] = {
        .trainerClass = TRAINER_CLASS_SCIENTIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BEAU"),
        #elif SPANISH
        .trainerName = _("BENITO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_ScientistBeau),
    },
    [TRAINER_SCIENTIST_TAYLOR] = {
        .trainerClass = TRAINER_CLASS_SCIENTIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TAYLOR"),
        #elif SPANISH
        .trainerName = _("TIRSO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_ScientistTaylor),
    },
    [TRAINER_SCIENTIST_JOSHUA] = {
        .trainerClass = TRAINER_CLASS_SCIENTIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JOSHUA"),
        #elif SPANISH
        .trainerName = _("JOSUÉ"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ScientistJoshua),
    },
    [TRAINER_SCIENTIST_PARKER] = {
        .trainerClass = TRAINER_CLASS_SCIENTIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("PARKER"),
        #elif SPANISH
        .trainerName = _("PASCUAL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ScientistParker),
    },
    [TRAINER_SCIENTIST_ED] = {
        .trainerClass = TRAINER_CLASS_SCIENTIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ED"),
        #elif SPANISH
        .trainerName = _("MANU"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_ScientistEd),
    },
    [TRAINER_SCIENTIST_TRAVIS] = {
        .trainerClass = TRAINER_CLASS_SCIENTIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TRAVIS"),
        #elif SPANISH
        .trainerName = _("TOBÍAS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ScientistTravis),
    },
    [TRAINER_SCIENTIST_BRAYDON] = {
        .trainerClass = TRAINER_CLASS_SCIENTIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BRAYDON"),
        #elif SPANISH
        .trainerName = _("ARTURO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ScientistBraydon),
    },
    [TRAINER_SCIENTIST_IVAN] = {
        .trainerClass = TRAINER_CLASS_SCIENTIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("IVAN"),
        #elif SPANISH
        .trainerName = _("IVÁN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ScientistIvan),
    },
    [TRAINER_BOSS_GIOVANNI] = {
        .trainerClass = TRAINER_CLASS_BOSS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_LEADER_GIOVANNI,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GIOVANNI"),
        #elif SPANISH
        .trainerName = _("GIOVANNI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BossGiovanni),
    },
    [TRAINER_BOSS_GIOVANNI_2] = {
        .trainerClass = TRAINER_CLASS_BOSS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_LEADER_GIOVANNI,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GIOVANNI"),
        #elif SPANISH
        .trainerName = _("GIOVANNI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BossGiovanni2),
    },
    [TRAINER_LEADER_GIOVANNI] = {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_LEADER_GIOVANNI,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GIOVANNI"),
        #elif SPANISH
        .trainerName = _("GIOVANNI"),
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_LeaderGiovanni),
    },
    [TRAINER_TEAM_ROCKET_GRUNT] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_2] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt2),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_3] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt3),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_4] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt4),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_5] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt5),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_6] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt6),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_7] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt7),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_8] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt8),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_9] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt9),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_10] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_TeamRocketGrunt10),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_11] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt11),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_12] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_TeamRocketGrunt12),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_13] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_TeamRocketGrunt13),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_14] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt14),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_15] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt15),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_16] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt16),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_17] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt17),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_18] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt18),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_19] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt19),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_20] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt20),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_21] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt21),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_22] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt22),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_23] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt23),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_24] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt24),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_25] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt25),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_26] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt26),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_27] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt27),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_28] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt28),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_29] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt29),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_30] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt30),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_31] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt31),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_32] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_TeamRocketGrunt32),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_33] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt33),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_34] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt34),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_35] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt35),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_36] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt36),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_37] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt37),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_38] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt38),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_39] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt39),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_40] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt40),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_41] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt41),
    },
    [TRAINER_COOLTRAINER_SAMUEL] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SAMUEL"),
        #elif SPANISH
        .trainerName = _("SAMUEL"),
        #endif
        .items = {ITEM_SUPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerSamuel),
    },
    [TRAINER_COOLTRAINER_GEORGE] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GEORGE"),
        #elif SPANISH
        .trainerName = _("JORGE"),
        #endif
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerGeorge),
    },
    [TRAINER_COOLTRAINER_COLBY] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("COLBY"),
        #elif SPANISH
        .trainerName = _("ADÁN"),
        #endif
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerColby),
    },
    [TRAINER_COOLTRAINER_PAUL] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("PAUL"),
        #elif SPANISH
        .trainerName = _("PAULINO"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerPaul),
    },
    [TRAINER_COOLTRAINER_ROLANDO] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ROLANDO"),
        #elif SPANISH
        .trainerName = _("ROLAN"),
        #endif
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerRolando),
    },
    [TRAINER_COOLTRAINER_GILBERT] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GILBERT"),
        #elif SPANISH
        .trainerName = _("GILBERTO"),
        #endif
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerGilbert),
    },
    [TRAINER_COOLTRAINER_OWEN] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("OWEN"),
        #elif SPANISH
        .trainerName = _("ODÓN"),
        #endif
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerOwen),
    },
    [TRAINER_COOLTRAINER_BERKE] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BERKE"),
        #elif SPANISH
        .trainerName = _("BLAS"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerBerke),
    },
    [TRAINER_COOLTRAINER_YUJI] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("YUJI"),
        #elif SPANISH
        .trainerName = _("YUJI"),
        #endif
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerYuji),
    },
    [TRAINER_COOLTRAINER_WARREN] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("WARREN"),
        #elif SPANISH
        .trainerName = _("VALERIO"),
        #endif
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerWarren),
    },
    [TRAINER_COOLTRAINER_MARY] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MARY"),
        #elif SPANISH
        .trainerName = _("MARI"),
        #endif
        .items = {ITEM_SUPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerMary),
    },
    [TRAINER_COOLTRAINER_CAROLINE] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CAROLINE"),
        #elif SPANISH
        .trainerName = _("CAROLINA"),
        #endif
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerCaroline),
    },
    [TRAINER_COOLTRAINER_ALEXA] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ALEXA"),
        #elif SPANISH
        .trainerName = _("ALEJANDRA"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerAlexa),
    },
    [TRAINER_COOLTRAINER_SHANNON] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SHANNON"),
        #elif SPANISH
        .trainerName = _("SABRINA"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerShannon),
    },
    [TRAINER_COOLTRAINER_NAOMI] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NAOMI"),
        #elif SPANISH
        .trainerName = _("NOEMÍ"),
        #endif
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerNaomi),
    },
    [TRAINER_COOLTRAINER_BROOKE] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BROOKE"),
        #elif SPANISH
        .trainerName = _("BERTA"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerBrooke),
    },
    [TRAINER_COOLTRAINER_AUSTINA] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("AUSTINA"),
        #elif SPANISH
        .trainerName = _("AGUSTINA"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerAustina),
    },
    [TRAINER_COOLTRAINER_JULIE] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JULIE"),
        #elif SPANISH
        .trainerName = _("JULIA"),
        #endif
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerJulie),
    },
    [TRAINER_ELITE_FOUR_LORELEI] = {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_LORELEI,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LORELEI"),
        #elif SPANISH
        .trainerName = _("LORELEI"),
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_EliteFourLorelei),
    },
    [TRAINER_ELITE_FOUR_BRUNO] = {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_BRUNO,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BRUNO"),
        #elif SPANISH
        .trainerName = _("BRUNO"),
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_EliteFourBruno),
    },
    [TRAINER_ELITE_FOUR_AGATHA] = {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_AGATHA,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("AGATHA"),
        #elif SPANISH
        .trainerName = _("AGATHA"),
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_EliteFourAgatha),
    },
    [TRAINER_ELITE_FOUR_LANCE] = {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_LANCE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LANCE"),
        #elif SPANISH
        .trainerName = _("LANCE"),
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_EliteFourLance),
    },
    [TRAINER_LEADER_BROCK] = {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BROCK,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BROCK"),
        #elif SPANISH
        .trainerName = _("BROCK"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_LeaderBrock),
    },
    [TRAINER_LEADER_MISTY] = {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_MISTY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MISTY"),
        #elif SPANISH
        .trainerName = _("MISTY"),
        #endif
        .items = {ITEM_SUPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_LeaderMisty),
    },
    [TRAINER_LEADER_LT_SURGE] = {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_LT_SURGE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LT. SURGE"),
        #elif SPANISH
        .trainerName = _("LT. SURGE"),
        #endif
        .items = {ITEM_SUPER_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_LeaderLtSurge),
    },
    [TRAINER_LEADER_ERIKA] = {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ERIKA,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ERIKA"),
        #elif SPANISH
        .trainerName = _("ERIKA"),
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_LeaderErika),
    },
    [TRAINER_LEADER_KOGA] = {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_KOGA,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KOGA"),
        #elif SPANISH
        .trainerName = _("KOGA"),
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_LeaderKoga),
    },
    [TRAINER_LEADER_BLAINE] = {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BLAINE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BLAINE"),
        #elif SPANISH
        .trainerName = _("BLAINE"),
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_LeaderBlaine),
    },
    [TRAINER_LEADER_SABRINA] = {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_SABRINA,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SABRINA"),
        #elif SPANISH
        .trainerName = _("SABRINA"),
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_LeaderSabrina),
    },
    [TRAINER_GENTLEMAN_THOMAS] = {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("THOMAS"),
        #elif SPANISH
        .trainerName = _("TOMÁS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GentlemanThomas),
    },
    [TRAINER_GENTLEMAN_ARTHUR] = {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ARTHUR"),
        #elif SPANISH
        .trainerName = _("ARMANDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GentlemanArthur),
    },
    [TRAINER_GENTLEMAN_TUCKER] = {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TUCKER"),
        #elif SPANISH
        .trainerName = _("TITO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GentlemanTucker),
    },
    [TRAINER_GENTLEMAN_NORTON] = {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NORTON"),
        #elif SPANISH
        .trainerName = _("NICANOR"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GentlemanNorton),
    },
    [TRAINER_GENTLEMAN_WALTER] = {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("WALTER"),
        #elif SPANISH
        .trainerName = _("GABINO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GentlemanWalter),
    },
    [TRAINER_RIVAL_SS_ANNE_SQUIRTLE] = {
        .trainerClass = TRAINER_CLASS_RIVAL_LATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_LATE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RivalSsAnneSquirtle),
    },
    [TRAINER_RIVAL_SS_ANNE_BULBASAUR] = {
        .trainerClass = TRAINER_CLASS_RIVAL_LATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_LATE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RivalSsAnneBulbasaur),
    },
    [TRAINER_RIVAL_SS_ANNE_CHARMANDER] = {
        .trainerClass = TRAINER_CLASS_RIVAL_LATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_LATE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RivalSsAnneCharmander),
    },
    [TRAINER_RIVAL_POKEMON_TOWER_SQUIRTLE] = {
        .trainerClass = TRAINER_CLASS_RIVAL_LATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_LATE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RivalPokemonTowerSquirtle),
    },
    [TRAINER_RIVAL_POKEMON_TOWER_BULBASAUR] = {
        .trainerClass = TRAINER_CLASS_RIVAL_LATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_LATE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RivalPokemonTowerBulbasaur),
    },
    [TRAINER_RIVAL_POKEMON_TOWER_CHARMANDER] = {
        .trainerClass = TRAINER_CLASS_RIVAL_LATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_LATE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RivalPokemonTowerCharmander),
    },
    [TRAINER_RIVAL_SILPH_SQUIRTLE] = {
        .trainerClass = TRAINER_CLASS_RIVAL_LATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_LATE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RivalSilphSquirtle),
    },
    [TRAINER_RIVAL_SILPH_BULBASAUR] = {
        .trainerClass = TRAINER_CLASS_RIVAL_LATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_LATE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RivalSilphBulbasaur),
    },
    [TRAINER_RIVAL_SILPH_CHARMANDER] = {
        .trainerClass = TRAINER_CLASS_RIVAL_LATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_LATE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RivalSilphCharmander),
    },
    [TRAINER_RIVAL_ROUTE22_LATE_SQUIRTLE] = {
        .trainerClass = TRAINER_CLASS_RIVAL_LATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_LATE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_RivalRoute22LateSquirtle),
    },
    [TRAINER_RIVAL_ROUTE22_LATE_BULBASAUR] = {
        .trainerClass = TRAINER_CLASS_RIVAL_LATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_LATE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_RivalRoute22LateBulbasaur),
    },
    [TRAINER_RIVAL_ROUTE22_LATE_CHARMANDER] = {
        .trainerClass = TRAINER_CLASS_RIVAL_LATE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RIVAL_LATE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_RivalRoute22LateCharmander),
    },
    [TRAINER_CHAMPION_FIRST_SQUIRTLE] = {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CHAMPION_RIVAL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_ChampionFirstSquirtle),
    },
    [TRAINER_CHAMPION_FIRST_BULBASAUR] = {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CHAMPION_RIVAL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_ChampionFirstBulbasaur),
    },
    [TRAINER_CHAMPION_FIRST_CHARMANDER] = {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CHAMPION_RIVAL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_ChampionFirstCharmander),
    },
    [TRAINER_CHANNELER_PATRICIA] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("PATRICIA"),
        #elif SPANISH
        .trainerName = _("PATRICIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ChannelerPatricia),
    },
    [TRAINER_CHANNELER_CARLY] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CARLY"),
        #elif SPANISH
        .trainerName = _("CARI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ChannelerCarly),
    },
    [TRAINER_CHANNELER_HOPE] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HOPE"),
        #elif SPANISH
        .trainerName = _("ESPE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ChannelerHope),
    },
    [TRAINER_CHANNELER_PAULA] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("PAULA"),
        #elif SPANISH
        .trainerName = _("PAULA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ChannelerPaula),
    },
    [TRAINER_CHANNELER_LAUREL] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LAUREL"),
        #elif SPANISH
        .trainerName = _("LORENA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ChannelerLaurel),
    },
    [TRAINER_CHANNELER_JODY] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JODY"),
        #elif SPANISH
        .trainerName = _("JIMENA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ChannelerJody),
    },
    [TRAINER_CHANNELER_TAMMY] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TAMMY"),
        #elif SPANISH
        .trainerName = _("TAMARA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ChannelerTammy),
    },
    [TRAINER_CHANNELER_RUTH] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RUTH"),
        #elif SPANISH
        .trainerName = _("RENATA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ChannelerRuth),
    },
    [TRAINER_CHANNELER_KARINA] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KARINA"),
        #elif SPANISH
        .trainerName = _("LINA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ChannelerKarina),
    },
    [TRAINER_CHANNELER_JANAE] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JANAE"),
        #elif SPANISH
        .trainerName = _("JANA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ChannelerJanae),
    },
    [TRAINER_CHANNELER_ANGELICA] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ANGELICA"),
        #elif SPANISH
        .trainerName = _("ANGÉLICA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ChannelerAngelica),
    },
    [TRAINER_CHANNELER_EMILIA] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("EMILIA"),
        #elif SPANISH
        .trainerName = _("EMILIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ChannelerEmilia),
    },
    [TRAINER_CHANNELER_JENNIFER] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JENNIFER"),
        #elif SPANISH
        .trainerName = _("JULIANA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ChannelerJennifer),
    },
    [TRAINER_CHANNELER_1] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Channeler1),
    },
    [TRAINER_CHANNELER_2] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Channeler2),
    },
    [TRAINER_CHANNELER_3] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Channeler3),
    },
    [TRAINER_CHANNELER_4] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Channeler4),
    },
    [TRAINER_CHANNELER_5] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Channeler5),
    },
    [TRAINER_CHANNELER_6] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Channeler6),
    },
    [TRAINER_CHANNELER_7] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Channeler7),
    },
    [TRAINER_CHANNELER_8] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Channeler8),
    },
    [TRAINER_CHANNELER_AMANDA] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("AMANDA"),
        #elif SPANISH
        .trainerName = _("DALIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ChannelerAmanda),
    },
    [TRAINER_CHANNELER_STACY] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("STACY"),
        #elif SPANISH
        .trainerName = _("NARCISA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ChannelerStacy),
    },
    [TRAINER_CHANNELER_TASHA] = {
        .trainerClass = TRAINER_CLASS_CHANNELER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TASHA"),
        #elif SPANISH
        .trainerName = _("TIRSA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ChannelerTasha),
    },
    [TRAINER_HIKER_JEREMY] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JEREMY"),
        #elif SPANISH
        .trainerName = _("ADOLFO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HikerJeremy),
    },
    [TRAINER_PICNICKER_ALMA] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ALMA"),
        #elif SPANISH
        .trainerName = _("ALMA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerAlma),
    },
    [TRAINER_PICNICKER_SUSIE] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SUSIE"),
        #elif SPANISH
        .trainerName = _("SUSI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerSusie),
    },
    [TRAINER_PICNICKER_VALERIE] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("VALERIE"),
        #elif SPANISH
        .trainerName = _("VALERIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerValerie),
    },
    [TRAINER_PICNICKER_GWEN] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GWEN"),
        #elif SPANISH
        .trainerName = _("GEMA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerGwen),
    },
    [TRAINER_BIKER_VIRGIL] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("VIRGIL"),
        #elif SPANISH
        .trainerName = _("VIRGILIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_BikerVirgil),
    },
    [TRAINER_CAMPER_FLINT] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("FLINT"),
        #elif SPANISH
        .trainerName = _("FIDEL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperFlint),
    },
    [TRAINER_PICNICKER_MISSY] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MISSY"),
        #elif SPANISH
        .trainerName = _("MERCE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerMissy),
    },
    [TRAINER_PICNICKER_IRENE] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("IRENE"),
        #elif SPANISH
        .trainerName = _("IRENE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerIrene),
    },
    [TRAINER_PICNICKER_DANA] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DANA"),
        #elif SPANISH
        .trainerName = _("DORA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerDana),
    },
    [TRAINER_PICNICKER_ARIANA] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ARIANA"),
        #elif SPANISH
        .trainerName = _("ARIANA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerAriana),
    },
    [TRAINER_PICNICKER_LEAH] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LEAH"),
        #elif SPANISH
        .trainerName = _("LEA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerLeah),
    },
    [TRAINER_CAMPER_JUSTIN] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JUSTIN"),
        #elif SPANISH
        .trainerName = _("JUSTI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperJustin),
    },
    [TRAINER_PICNICKER_YAZMIN] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("YAZMIN"),
        #elif SPANISH
        .trainerName = _("ACEN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerYazmin),
    },
    [TRAINER_PICNICKER_KINDRA] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KINDRA"),
        #elif SPANISH
        .trainerName = _("CLEO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerKindra),
    },
    [TRAINER_PICNICKER_BECKY] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BECKY"),
        #elif SPANISH
        .trainerName = _("BETINA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerBecky),
    },
    [TRAINER_PICNICKER_CELIA] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CELIA"),
        #elif SPANISH
        .trainerName = _("CELIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerCelia),
    },
    [TRAINER_GENTLEMAN_BROOKS] = {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BROOKS"),
        #elif SPANISH
        .trainerName = _("CELIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GentlemanBrooks),
    },
    [TRAINER_GENTLEMAN_LAMAR] = {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LAMAR"),
        #elif SPANISH
        .trainerName = _("LENER"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GentlemanLamar),
    },
    [TRAINER_TWINS_ELI_ANNE] = {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ELI & ANNE"),
        #elif SPANISH
        .trainerName = _("TITA-LIN"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TwinsEliAnne),
    },
    [TRAINER_COOL_COUPLE_RAY_TYRA] = {
        .trainerClass = TRAINER_CLASS_COOL_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOL_COUPLE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RAY & TYRA"),
        #elif SPANISH
        .trainerName = _("DESI-TULA"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CoolCoupleRayTyra),
    },
    [TRAINER_YOUNG_COUPLE_GIA_JES] = {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GIA & JES"),
        #elif SPANISH
        .trainerName = _("AGA-ARE"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungCoupleGiaJes),
    },
    [TRAINER_TWINS_KIRI_JAN] = {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KIRI & JAN"),
        #elif SPANISH
        .trainerName = _("LENA-TEA"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TwinsKiriJan),
    },
    [TRAINER_CRUSH_KIN_RON_MYA] = {
        .trainerClass = TRAINER_CLASS_CRUSH_KIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RON & MYA"),
        #elif SPANISH
        .trainerName = _("TIN-TINA"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_CrushKinRonMya),
    },
    [TRAINER_YOUNG_COUPLE_LEA_JED] = {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LEA & JED"),
        #elif SPANISH
        .trainerName = _("LIZ-JOEL"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungCoupleLeaJed),
    },
    [TRAINER_SIS_AND_BRO_LIA_LUC] = {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LIA & LUC"),
        #elif SPANISH
        .trainerName = _("CATI-TEC"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SisAndBroLiaLuc),
    },
    [TRAINER_SIS_AND_BRO_LIL_IAN] = {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LIL & IAN"),
        #elif SPANISH
        .trainerName = _("ÍA-IGOR"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SisAndBroLilIan),
    },
    [TRAINER_BUG_CATCHER_3] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcher3),
    },
    [TRAINER_BUG_CATCHER_4] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcher4),
    },
    [TRAINER_BUG_CATCHER_5] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcher5),
    },
    [TRAINER_BUG_CATCHER_6] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcher6),
    },
    [TRAINER_BUG_CATCHER_7] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcher7),
    },
    [TRAINER_BUG_CATCHER_8] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcher8),
    },
    [TRAINER_YOUNGSTER_BEN_3] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BEN"),
        #elif SPANISH
        .trainerName = _("BEN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterBen3),
    },
    [TRAINER_YOUNGSTER_BEN_4] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BEN"),
        #elif SPANISH
        .trainerName = _("BEN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterBen4),
    },
    [TRAINER_YOUNGSTER_CHAD_2] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CHAD"),
        #elif SPANISH
        .trainerName = _("CIRO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterChad2),
    },
    [TRAINER_LASS_RELI_2] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RELI"),
        #elif SPANISH
        .trainerName = _("RUTH"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassReli2),
    },
    [TRAINER_LASS_RELI_3] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RELI"),
        #elif SPANISH
        .trainerName = _("RUTH"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassReli3),
    },
    [TRAINER_YOUNGSTER_TIMMY_2] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TIMMY"),
        #elif SPANISH
        .trainerName = _("TINO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterTimmy2),
    },
    [TRAINER_YOUNGSTER_TIMMY_3] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TIMMY"),
        #elif SPANISH
        .trainerName = _("TINO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterTimmy3),
    },
    [TRAINER_YOUNGSTER_TIMMY_4] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TIMMY"),
        #elif SPANISH
        .trainerName = _("TINO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterTimmy4),
    },
    [TRAINER_YOUNGSTER_CHAD_3] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CHAD"),
        #elif SPANISH
        .trainerName = _("CIRO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterChad3),
    },
    [TRAINER_LASS_JANICE_2] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JANICE"),
        #elif SPANISH
        .trainerName = _("LUCRECIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassJanice2),
    },
    [TRAINER_LASS_JANICE_3] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JANICE"),
        #elif SPANISH
        .trainerName = _("LUCRECIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassJanice3),
    },
    [TRAINER_YOUNGSTER_CHAD_4] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CHAD"),
        #elif SPANISH
        .trainerName = _("CIRO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterChad4),
    },
    [TRAINER_HIKER_FRANKLIN_2] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("FRANKLIN"),
        #elif SPANISH
        .trainerName = _("FRANCIS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HikerFranklin2),
    },
    [TRAINER_PKMN_PROF_PROF_OAK] = {
        .trainerClass = TRAINER_CLASS_PKMN_PROF,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PROFESSOR_OAK,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("PROF. OAK"),
        #elif SPANISH
        .trainerName = _("PROF. OAK"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PkmnProfProfOak),
    },
    [TRAINER_PLAYER_BRENDAN] = {
        .trainerClass = TRAINER_CLASS_PLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RS_BRENDAN_2,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BRENDAN"),
        #elif SPANISH
        .trainerName = _("BRUNO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PlayerBrendan),
    },
    [TRAINER_PLAYER_MAY] = {
        .trainerClass = TRAINER_CLASS_PLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RS_MAY_2,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MAY"),
        #elif SPANISH
        .trainerName = _("AURA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PlayerMay),
    },
    [TRAINER_PLAYER_RED] = {
        .trainerClass = TRAINER_CLASS_PLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RED,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RED"),
        #elif SPANISH
        .trainerName = _("JORO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PlayerRed),
    },
    [TRAINER_PLAYER_LEAF] = {
        .trainerClass = TRAINER_CLASS_PLAYER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEAF,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LEAF"),
        #elif SPANISH
        .trainerName = _("JAHO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PlayerLeaf),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_42] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt42),
    },
    [TRAINER_PSYCHIC_JACLYN] = {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JACLYN"),
        #elif SPANISH
        .trainerName = _("JACINTA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PsychicJaclyn),
    },
    [TRAINER_CRUSH_GIRL_SHARON] = {
        .trainerClass = TRAINER_CLASS_CRUSH_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SHARON"),
        #elif SPANISH
        .trainerName = _("SILVANA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_CrushGirlSharon),
    },
    [TRAINER_TUBER_AMIRA] = {
        .trainerClass = TRAINER_CLASS_TUBER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("AMIRA"),
        #elif SPANISH
        .trainerName = _("PIZPI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TuberAmira),
    },
    [TRAINER_PKMN_BREEDER_ALIZE] = {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ALIZE"),
        #elif SPANISH
        .trainerName = _("FLOR"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PkmnBreederAlize),
    },
    [TRAINER_PKMN_RANGER_NICOLAS] = {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NICOLAS"),
        #elif SPANISH
        .trainerName = _("NICOLÁS"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PkmnRangerNicolas),
    },
    [TRAINER_PKMN_RANGER_MADELINE] = {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MADELINE"),
        #elif SPANISH
        .trainerName = _("MIRANDA"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PkmnRangerMadeline),
    },
    [TRAINER_AROMA_LADY_NIKKI] = {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NIKKI"),
        #elif SPANISH
        .trainerName = _("MÓNICA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AromaLadyNikki),
    },
    [TRAINER_RUIN_MANIAC_STANLY] = {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("STANLY"),
        #elif SPANISH
        .trainerName = _("SILVANO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RuinManiacStanly),
    },
    [TRAINER_LADY_JACKI] = {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JACKI"),
        #elif SPANISH
        .trainerName = _("JADE"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_LadyJacki),
    },
    [TRAINER_PAINTER_DAISY] = {
        .trainerClass = TRAINER_CLASS_PAINTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PAINTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DAISY"),
        #elif SPANISH
        .trainerName = _("AZUCENA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PainterDaisy),
    },
    [TRAINER_BIKER_GOON] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GOON"),
        #elif SPANISH
        .trainerName = _("QUIQUE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_BikerGoon),
    },
    [TRAINER_BIKER_GOON_2] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GOON"),
        #elif SPANISH
        .trainerName = _("QUIQUE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_BikerGoon2),
    },
    [TRAINER_BIKER_GOON_3] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GOON"),
        #elif SPANISH
        .trainerName = _("QUIQUE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BikerGoon3),
    },
    [TRAINER_BIKER_2] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _(""),
        #elif SPANISH
        .trainerName = _(""),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Biker2),
    },
    [TRAINER_BUG_CATCHER_ANTHONY] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ANTHONY"),
        #elif SPANISH
        .trainerName = _("ANTÓN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherAnthony),
    },
    [TRAINER_BUG_CATCHER_CHARLIE] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CHARLIE"),
        #elif SPANISH
        .trainerName = _("CARMELO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherCharlie),
    },
    [TRAINER_TWINS_ELI_ANNE_2] = {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ELI & ANNE"),
        #elif SPANISH
        .trainerName = _("TITA-LIN"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TwinsEliAnne2),
    },
    [TRAINER_YOUNGSTER_JOHNSON] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JOHNSON"),
        #elif SPANISH
        .trainerName = _("FLAVIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterJohnson),
    },
    [TRAINER_BIKER_RICARDO] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RICARDO"),
        #elif SPANISH
        .trainerName = _("LOREN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_BikerRicardo),
    },
    [TRAINER_BIKER_JAREN] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JAREN"),
        #elif SPANISH
        .trainerName = _("JARO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BikerJaren),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_43] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt43),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_44] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt44),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_45] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt45),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_46] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt46),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_47] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt47),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_48] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt48),
    },
    [TRAINER_TEAM_ROCKET_ADMIN] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ADMIN"),
        #elif SPANISH
        .trainerName = _("ADMIN"),
        #endif
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_TeamRocketAdmin),
    },
    [TRAINER_TEAM_ROCKET_ADMIN_2] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ADMIN"),
        #elif SPANISH
        .trainerName = _("ADMIN"),
        #endif
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_TeamRocketAdmin2),
    },
    [TRAINER_SCIENTIST_GIDEON] = {
        .trainerClass = TRAINER_CLASS_SCIENTIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GIDEON"),
        #elif SPANISH
        .trainerName = _("GIL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_ScientistGideon),
    },
    [TRAINER_SWIMMER_FEMALE_AMARA] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("AMARA"),
        #elif SPANISH
        .trainerName = _("AMARA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerFemaleAmara),
    },
    [TRAINER_SWIMMER_FEMALE_MARIA] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MARIA"),
        #elif SPANISH
        .trainerName = _("MIRIAM"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerFemaleMaria),
    },
    [TRAINER_SWIMMER_FEMALE_ABIGAIL] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ABIGAIL"),
        #elif SPANISH
        .trainerName = _("ADELA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerFemaleAbigail),
    },
    [TRAINER_SWIMMER_MALE_FINN] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("FINN"),
        #elif SPANISH
        .trainerName = _("AMARO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleFinn),
    },
    [TRAINER_SWIMMER_MALE_GARRETT] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GARRETT"),
        #elif SPANISH
        .trainerName = _("MONTI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleGarrett),
    },
    [TRAINER_FISHERMAN_TOMMY] = {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TOMMY"),
        #elif SPANISH
        .trainerName = _("TOMI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_FishermanTommy),
    },
    [TRAINER_CRUSH_GIRL_TANYA] = {
        .trainerClass = TRAINER_CLASS_CRUSH_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TANYA"),
        #elif SPANISH
        .trainerName = _("TANIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_CrushGirlTanya),
    },
    [TRAINER_BLACK_BELT_SHEA] = {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SHEA"),
        #elif SPANISH
        .trainerName = _("SHEA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_BlackBeltShea),
    },
    [TRAINER_BLACK_BELT_HUGH] = {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HUGH"),
        #elif SPANISH
        .trainerName = _("HUGO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_BlackBeltHugh),
    },
    [TRAINER_CAMPER_BRYCE] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BRYCE"),
        #elif SPANISH
        .trainerName = _("SUSO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperBryce),
    },
    [TRAINER_PICNICKER_CLAIRE] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CLAIRE"),
        #elif SPANISH
        .trainerName = _("ISA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerClaire),
    },
    [TRAINER_CRUSH_KIN_MIK_KIA] = {
        .trainerClass = TRAINER_CLASS_CRUSH_KIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MIK & KIA"),
        #elif SPANISH
        .trainerName = _("FER-PÍA"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_CrushKinMikKia),
    },
    [TRAINER_AROMA_LADY_VIOLET] = {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("VIOLET"),
        #elif SPANISH
        .trainerName = _("VIOLETA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AromaLadyViolet),
    },
    [TRAINER_TUBER_ALEXIS] = {
        .trainerClass = TRAINER_CLASS_TUBER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ALEXIS"),
        #elif SPANISH
        .trainerName = _("ALEXA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TuberAlexis),
    },
    [TRAINER_TWINS_JOY_MEG] = {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JOY & MEG"),
        #elif SPANISH
        .trainerName = _("FELI-MATI"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TwinsJoyMeg),
    },
    [TRAINER_SWIMMER_FEMALE_TISHA] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TISHA"),
        #elif SPANISH
        .trainerName = _("TALÍA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerFemaleTisha),
    },
    [TRAINER_PAINTER_CELINA] = {
        .trainerClass = TRAINER_CLASS_PAINTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PAINTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CELINA"),
        #elif SPANISH
        .trainerName = _("ANABEL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PainterCelina),
    },
    [TRAINER_PAINTER_RAYNA] = {
        .trainerClass = TRAINER_CLASS_PAINTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PAINTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RAYNA"),
        #elif SPANISH
        .trainerName = _("RANIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PainterRayna),
    },
    [TRAINER_LADY_GILLIAN] = {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GILLIAN"),
        #elif SPANISH
        .trainerName = _("GALENIA"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_LadyGillian),
    },
    [TRAINER_YOUNGSTER_DESTIN] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DESTIN"),
        #elif SPANISH
        .trainerName = _("DIEGO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterDestin),
    },
    [TRAINER_SWIMMER_MALE_TOBY] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TOBY"),
        #elif SPANISH
        .trainerName = _("TANIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleToby),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_49] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt49),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_50] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_TeamRocketGrunt50),
    },
    [TRAINER_TEAM_ROCKET_GRUNT_51] = {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRUNT"),
        #elif SPANISH
        .trainerName = _("SOLDADO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TeamRocketGrunt51),
    },
    [TRAINER_BIRD_KEEPER_MILO] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MILO"),
        #elif SPANISH
        .trainerName = _("MILO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperMilo),
    },
    [TRAINER_BIRD_KEEPER_CHAZ] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CHAZ"),
        #elif SPANISH
        .trainerName = _("TEO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperChaz),
    },
    [TRAINER_BIRD_KEEPER_HAROLD] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HAROLD"),
        #elif SPANISH
        .trainerName = _("HORACIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperHarold),
    },
    [TRAINER_FISHERMAN_TYLOR] = {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TYLOR"),
        #elif SPANISH
        .trainerName = _("TONIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_FishermanTylor),
    },
    [TRAINER_SWIMMER_MALE_MYMO] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MYMO"),
        #elif SPANISH
        .trainerName = _("JUAN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleMymo),
    },
    [TRAINER_SWIMMER_FEMALE_NICOLE] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NICOLE"),
        #elif SPANISH
        .trainerName = _("NICOLASA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerFemaleNicole),
    },
    [TRAINER_SIS_AND_BRO_AVA_GEB] = {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("AVA & GEB"),
        #elif SPANISH
        .trainerName = _("ALI-ROS"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SisAndBroAvaGeb),
    },
    [TRAINER_AROMA_LADY_ROSE] = {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ROSE"),
        #elif SPANISH
        .trainerName = _("ROSA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AromaLadyRose),
    },
    [TRAINER_SWIMMER_MALE_SAMIR] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SAMIR"),
        #elif SPANISH
        .trainerName = _("SAMEL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleSamir),
    },
    [TRAINER_SWIMMER_FEMALE_DENISE] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DENISE"),
        #elif SPANISH
        .trainerName = _("DESIRÉ"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerFemaleDenise),
    },
    [TRAINER_TWINS_MIU_MIA] = {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MIU & MIA"),
        #elif SPANISH
        .trainerName = _("MARU-MÍA"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TwinsMiuMia),
    },
    [TRAINER_HIKER_EARL] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("EARL"),
        #elif SPANISH
        .trainerName = _("VÍCTOR"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HikerEarl),
    },
    [TRAINER_RUIN_MANIAC_FOSTER] = {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("FOSTER"),
        #elif SPANISH
        .trainerName = _("FAUSTO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RuinManiacFoster),
    },
    [TRAINER_RUIN_MANIAC_LARRY] = {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LARRY"),
        #elif SPANISH
        .trainerName = _("LEANDRO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RuinManiacLarry),
    },
    [TRAINER_HIKER_DARYL] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DARYL"),
        #elif SPANISH
        .trainerName = _("CIPRI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HikerDaryl),
    },
    [TRAINER_POKEMANIAC_HECTOR] = {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HECTOR"),
        #elif SPANISH
        .trainerName = _("HÉCTOR"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PokemaniacHector),
    },
    [TRAINER_PSYCHIC_DARIO] = {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DARIO"),
        #elif SPANISH
        .trainerName = _("FERMÍN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PsychicDario),
    },
    [TRAINER_PSYCHIC_RODETTE] = {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RODETTE"),
        #elif SPANISH
        .trainerName = _("ROSANA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PsychicRodette),
    },
    [TRAINER_AROMA_LADY_MIAH] = {
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MIAH"),
        #elif SPANISH
        .trainerName = _("JAZMÍN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AromaLadyMiah),
    },
    [TRAINER_YOUNG_COUPLE_EVE_JON] = {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("EVE & JON"),
        #elif SPANISH
        .trainerName = _("ELE-RUS"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungCoupleEveJon),
    },
    [TRAINER_JUGGLER_MASON] = {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MASON"),
        #elif SPANISH
        .trainerName = _("MARIANO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_JugglerMason),
    },
    [TRAINER_CRUSH_GIRL_CYNDY] = {
        .trainerClass = TRAINER_CLASS_CRUSH_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CYNDY"),
        #elif SPANISH
        .trainerName = _("CECILIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_CrushGirlCyndy),
    },
    [TRAINER_CRUSH_GIRL_JOCELYN] = {
        .trainerClass = TRAINER_CLASS_CRUSH_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JOCELYN"),
        #elif SPANISH
        .trainerName = _("CESARINA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_CrushGirlJocelyn),
    },
    [TRAINER_TAMER_EVAN] = {
        .trainerClass = TRAINER_CLASS_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_TAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("EVAN"),
        #elif SPANISH
        .trainerName = _("BLASCO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TamerEvan),
    },
    [TRAINER_POKEMANIAC_MARK_2] = {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MARK"),
        #elif SPANISH
        .trainerName = _("MARCO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PokemaniacMark2),
    },
    [TRAINER_PKMN_RANGER_LOGAN] = {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LOGAN"),
        #elif SPANISH
        .trainerName = _("GONZALO"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PkmnRangerLogan),
    },
    [TRAINER_PKMN_RANGER_JACKSON] = {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JACKSON"),
        #elif SPANISH
        .trainerName = _("JOAQUÍN"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PkmnRangerJackson),
    },
    [TRAINER_PKMN_RANGER_BETH] = {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BETH"),
        #elif SPANISH
        .trainerName = _("BEATRIZ"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PkmnRangerBeth),
    },
    [TRAINER_PKMN_RANGER_KATELYN] = {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KATELYN"),
        #elif SPANISH
        .trainerName = _("CATALINA"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PkmnRangerKatelyn),
    },
    [TRAINER_COOLTRAINER_LEROY] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LEROY"),
        #elif SPANISH
        .trainerName = _("LORENZO"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerLeroy),
    },
    [TRAINER_COOLTRAINER_MICHELLE] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MICHELLE"),
        #elif SPANISH
        .trainerName = _("MICAELA"),
        #endif
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerMichelle),
    },
    [TRAINER_COOL_COUPLE_LEX_NYA] = {
        .trainerClass = TRAINER_CLASS_COOL_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOL_COUPLE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LEX & NYA"),
        #elif SPANISH
        .trainerName = _("LINO-ABA"),
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CoolCoupleLexNya),
    },
    [TRAINER_RUIN_MANIAC_BRANDON] = {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BRANDON"),
        #elif SPANISH
        .trainerName = _("BARTOLO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RuinManiacBrandon),
    },
    [TRAINER_RUIN_MANIAC_BENJAMIN] = {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BENJAMIN"),
        #elif SPANISH
        .trainerName = _("BENJAMÍN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_RuinManiacBenjamin),
    },
    [TRAINER_PAINTER_EDNA] = {
        .trainerClass = TRAINER_CLASS_PAINTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PAINTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("EDNA"),
        #elif SPANISH
        .trainerName = _("ELSA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PainterEdna),
    },
    [TRAINER_GENTLEMAN_CLIFFORD] = {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CLIFFORD"),
        #elif SPANISH
        .trainerName = _("CLEN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GentlemanClifford),
    },
    [TRAINER_LADY_SELPHY] = {
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SELPHY"),
        #elif SPANISH
        .trainerName = _("CONSU"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_CUSTOM_MOVES(sParty_LadySelphy),
    },
    [TRAINER_RUIN_MANIAC_LAWSON] = {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LAWSON"),
        #elif SPANISH
        .trainerName = _("LENI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RuinManiacLawson),
    },
    [TRAINER_PSYCHIC_LAURA] = {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LAURA"),
        #elif SPANISH
        .trainerName = _("LAURA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PsychicLaura),
    },
    [TRAINER_PKMN_BREEDER_BETHANY] = {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BETHANY"),
        #elif SPANISH
        .trainerName = _("MARISA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PkmnBreederBethany),
    },
    [TRAINER_PKMN_BREEDER_ALLISON] = {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ALLISON"),
        #elif SPANISH
        .trainerName = _("ARACELI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PkmnBreederAllison),
    },
    [TRAINER_BUG_CATCHER_GARRET] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GARRET"),
        #elif SPANISH
        .trainerName = _("GABRIEL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherGarret),
    },
    [TRAINER_BUG_CATCHER_JONAH] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JONAH"),
        #elif SPANISH
        .trainerName = _("JONÁS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherJonah),
    },
    [TRAINER_BUG_CATCHER_VANCE] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("VANCE"),
        #elif SPANISH
        .trainerName = _("VAN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherVance),
    },
    [TRAINER_YOUNGSTER_NASH] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NASH"),
        #elif SPANISH
        .trainerName = _("NEMO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterNash),
    },
    [TRAINER_YOUNGSTER_CORDELL] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CORDELL"),
        #elif SPANISH
        .trainerName = _("JUACO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterCordell),
    },
    [TRAINER_LASS_DALIA] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DALIA"),
        #elif SPANISH
        .trainerName = _("DALILA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassDalia),
    },
    [TRAINER_LASS_JOANA] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JOANA"),
        #elif SPANISH
        .trainerName = _("SONIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassJoana),
    },
    [TRAINER_CAMPER_RILEY] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RILEY"),
        #elif SPANISH
        .trainerName = _("RAÚL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperRiley),
    },
    [TRAINER_PICNICKER_MARCY] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MARCY"),
        #elif SPANISH
        .trainerName = _("MARCELA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerMarcy),
    },
    [TRAINER_RUIN_MANIAC_LAYTON] = {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LAYTON"),
        #elif SPANISH
        .trainerName = _("LANTEO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RuinManiacLayton),
    },
    [TRAINER_PICNICKER_KELSEY_2] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KELSEY"),
        #elif SPANISH
        .trainerName = _("ELIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerKelsey2),
    },
    [TRAINER_PICNICKER_KELSEY_3] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KELSEY"),
        #elif SPANISH
        .trainerName = _("ELIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerKelsey3),
    },
    [TRAINER_PICNICKER_KELSEY_4] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KELSEY"),
        #elif SPANISH
        .trainerName = _("ELIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerKelsey4),
    },
    [TRAINER_CAMPER_RICKY_2] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RICKY"),
        #elif SPANISH
        .trainerName = _("RICHI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperRicky2),
    },
    [TRAINER_CAMPER_RICKY_3] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RICKY"),
        #elif SPANISH
        .trainerName = _("RICHI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperRicky3),
    },
    [TRAINER_CAMPER_RICKY_4] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RICKY"),
        #elif SPANISH
        .trainerName = _("RICHI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperRicky4),
    },
    [TRAINER_CAMPER_JEFF_2] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JEFF"),
        #elif SPANISH
        .trainerName = _("GENARO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperJeff2),
    },
    [TRAINER_CAMPER_JEFF_3] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JEFF"),
        #elif SPANISH
        .trainerName = _("GENARO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperJeff3),
    },
    [TRAINER_CAMPER_JEFF_4] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JEFF"),
        #elif SPANISH
        .trainerName = _("GENARO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperJeff4),
    },
    [TRAINER_PICNICKER_ISABELLE_2] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ISABELLE"),
        #elif SPANISH
        .trainerName = _("CHÍO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerIsabelle2),
    },
    [TRAINER_PICNICKER_ISABELLE_3] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ISABELLE"),
        #elif SPANISH
        .trainerName = _("CHÍO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerIsabelle3),
    },
    [TRAINER_PICNICKER_ISABELLE_4] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ISABELLE"),
        #elif SPANISH
        .trainerName = _("CHÍO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerIsabelle4),
    },
    [TRAINER_YOUNGSTER_YASU_2] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("YASU"),
        #elif SPANISH
        .trainerName = _("YASU"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterYasu2),
    },
    [TRAINER_YOUNGSTER_YASU_3] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("YASU"),
        #elif SPANISH
        .trainerName = _("YASU"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterYasu3),
    },
    [TRAINER_ENGINEER_BERNIE_2] = {
        .trainerClass = TRAINER_CLASS_ENGINEER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ENGINEER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BERNIE"),
        #elif SPANISH
        .trainerName = _("BERNARDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_EngineerBernie2),
    },
    [TRAINER_GAMER_DARIAN_2] = {
        .trainerClass = TRAINER_CLASS_GAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DARIAN"),
        #elif SPANISH
        .trainerName = _("DARIAN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GamerDarian2),
    },
    [TRAINER_CAMPER_CHRIS_2] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CHRIS"),
        #elif SPANISH
        .trainerName = _("CRIS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperChris2),
    },
    [TRAINER_CAMPER_CHRIS_3] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CHRIS"),
        #elif SPANISH
        .trainerName = _("CRIS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperChris3),
    },
    [TRAINER_CAMPER_CHRIS_4] = {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CHRIS"),
        #elif SPANISH
        .trainerName = _("CRIS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CamperChris4),
    },
    [TRAINER_PICNICKER_ALICIA_2] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ALICIA"),
        #elif SPANISH
        .trainerName = _("NELI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerAlicia2),
    },
    [TRAINER_PICNICKER_ALICIA_3] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ALICIA"),
        #elif SPANISH
        .trainerName = _("NELI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerAlicia3),
    },
    [TRAINER_PICNICKER_ALICIA_4] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ALICIA"),
        #elif SPANISH
        .trainerName = _("NELI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerAlicia4),
    },
    [TRAINER_HIKER_JEREMY_2] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JEREMY"),
        #elif SPANISH
        .trainerName = _("ADOLFO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HikerJeremy2),
    },
    [TRAINER_POKEMANIAC_MARK_3] = {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MARK"),
        #elif SPANISH
        .trainerName = _("MARCO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PokemaniacMark3),
    },
    [TRAINER_POKEMANIAC_HERMAN_2] = {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HERMAN"),
        #elif SPANISH
        .trainerName = _("HERNANDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PokemaniacHerman2),
    },
    [TRAINER_POKEMANIAC_HERMAN_3] = {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HERMAN"),
        #elif SPANISH
        .trainerName = _("HERNANDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PokemaniacHerman3),
    },
    [TRAINER_HIKER_TRENT_2] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TRENT"),
        #elif SPANISH
        .trainerName = _("TARSI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HikerTrent2),
    },
    [TRAINER_LASS_MEGAN_2] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MEGAN"),
        #elif SPANISH
        .trainerName = _("VEVA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassMegan2),
    },
    [TRAINER_LASS_MEGAN_3] = {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MEGAN"),
        #elif SPANISH
        .trainerName = _("VEVA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LassMegan3),
    },
    [TRAINER_SUPER_NERD_GLENN_2] = {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GLENN"),
        #elif SPANISH
        .trainerName = _("LADIS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SuperNerdGlenn2),
    },
    [TRAINER_GAMER_RICH_2] = {
        .trainerClass = TRAINER_CLASS_GAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_GAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RICH"),
        #elif SPANISH
        .trainerName = _("NORBER"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_GamerRich2),
    },
    [TRAINER_BIKER_JAREN_2] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JAREN"),
        #elif SPANISH
        .trainerName = _("JARO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BikerJaren2),
    },
    [TRAINER_FISHERMAN_ELLIOT_2] = {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ELLIOT"),
        #elif SPANISH
        .trainerName = _("ELOY"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_FishermanElliot2),
    },
    [TRAINER_ROCKER_LUCA_2] = {
        .trainerClass = TRAINER_CLASS_ROCKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ROCKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LUCA"),
        #elif SPANISH
        .trainerName = _("MONE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RockerLuca2),
    },
    [TRAINER_BEAUTY_SHEILA_2] = {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SHEILA"),
        #elif SPANISH
        .trainerName = _("SOL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BeautySheila2),
    },
    [TRAINER_BIRD_KEEPER_ROBERT_2] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ROBERT"),
        #elif SPANISH
        .trainerName = _("ROBERTO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperRobert2),
    },
    [TRAINER_BIRD_KEEPER_ROBERT_3] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ROBERT"),
        #elif SPANISH
        .trainerName = _("ROBERTO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperRobert3),
    },
    [TRAINER_PICNICKER_SUSIE_2] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SUSIE"),
        #elif SPANISH
        .trainerName = _("SUSI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerSusie2),
    },
    [TRAINER_PICNICKER_SUSIE_3] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SUSIE"),
        #elif SPANISH
        .trainerName = _("SUSI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerSusie3),
    },
    [TRAINER_PICNICKER_SUSIE_4] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SUSIE"),
        #elif SPANISH
        .trainerName = _("SUSI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerSusie4),
    },
    [TRAINER_BIKER_LUKAS_2] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LUKAS"),
        #elif SPANISH
        .trainerName = _("LUCIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BikerLukas2),
    },
    [TRAINER_BIRD_KEEPER_BENNY_2] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BENNY"),
        #elif SPANISH
        .trainerName = _("BENI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperBenny2),
    },
    [TRAINER_BIRD_KEEPER_BENNY_3] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BENNY"),
        #elif SPANISH
        .trainerName = _("BENI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperBenny3),
    },
    [TRAINER_BIRD_KEEPER_MARLON_2] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MARLON"),
        #elif SPANISH
        .trainerName = _("MAURO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperMarlon2),
    },
    [TRAINER_BIRD_KEEPER_MARLON_3] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MARLON"),
        #elif SPANISH
        .trainerName = _("MAURO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperMarlon3),
    },
    [TRAINER_BEAUTY_GRACE_2] = {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GRACE"),
        #elif SPANISH
        .trainerName = _("GRACIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BeautyGrace2),
    },
    [TRAINER_BIRD_KEEPER_CHESTER_2] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CHESTER"),
        #elif SPANISH
        .trainerName = _("CELSO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperChester2),
    },
    [TRAINER_BIRD_KEEPER_CHESTER_3] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CHESTER"),
        #elif SPANISH
        .trainerName = _("CELSO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperChester3),
    },
    [TRAINER_PICNICKER_BECKY_2] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BECKY"),
        #elif SPANISH
        .trainerName = _("BETINA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerBecky2),
    },
    [TRAINER_PICNICKER_BECKY_3] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BECKY"),
        #elif SPANISH
        .trainerName = _("BETINA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerBecky3),
    },
    [TRAINER_PICNICKER_BECKY_4] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BECKY"),
        #elif SPANISH
        .trainerName = _("BETINA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerBecky4),
    },
    [TRAINER_CRUSH_KIN_RON_MYA_2] = {
        .trainerClass = TRAINER_CLASS_CRUSH_KIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RON & MYA"),
        #elif SPANISH
        .trainerName = _("TIN-TINA"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_CrushKinRonMya2),
    },
    [TRAINER_CRUSH_KIN_RON_MYA_3] = {
        .trainerClass = TRAINER_CLASS_CRUSH_KIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RON & MYA"),
        #elif SPANISH
        .trainerName = _("TIN-TINA"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_CrushKinRonMya3),
    },
    [TRAINER_CRUSH_KIN_RON_MYA_4] = {
        .trainerClass = TRAINER_CLASS_CRUSH_KIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RON & MYA"),
        #elif SPANISH
        .trainerName = _("TIN-TINA"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_CrushKinRonMya4),
    },
    [TRAINER_BIKER_RUBEN_2] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RUBEN"),
        #elif SPANISH
        .trainerName = _("RUBÉN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BikerRuben2),
    },
    [TRAINER_CUE_BALL_CAMRON_2] = {
        .trainerClass = TRAINER_CLASS_CUE_BALL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CAMRON"),
        #elif SPANISH
        .trainerName = _("CADEL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CueBallCamron2),
    },
    [TRAINER_BIKER_JAXON_2] = {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JAXON"),
        #elif SPANISH
        .trainerName = _("JULIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BikerJaxon2),
    },
    [TRAINER_CUE_BALL_ISAIAH_2] = {
        .trainerClass = TRAINER_CLASS_CUE_BALL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ISAIAH"),
        #elif SPANISH
        .trainerName = _("ISAÍAS"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CueBallIsaiah2),
    },
    [TRAINER_CUE_BALL_COREY_2] = {
        .trainerClass = TRAINER_CLASS_CUE_BALL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("COREY"),
        #elif SPANISH
        .trainerName = _("CEFE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CueBallCorey2),
    },
    [TRAINER_BIRD_KEEPER_JACOB_2] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JACOB"),
        #elif SPANISH
        .trainerName = _("JACOBO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperJacob2),
    },
    [TRAINER_BIRD_KEEPER_JACOB_3] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JACOB"),
        #elif SPANISH
        .trainerName = _("JACOBO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperJacob3),
    },
    [TRAINER_SWIMMER_FEMALE_ALICE_2] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ALICE"),
        #elif SPANISH
        .trainerName = _("ALICIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerFemaleAlice2),
    },
    [TRAINER_SWIMMER_MALE_DARRIN_2] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DARRIN"),
        #elif SPANISH
        .trainerName = _("DARÍO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleDarrin2),
    },
    [TRAINER_PICNICKER_MISSY_2] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MISSY"),
        #elif SPANISH
        .trainerName = _("MERCE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerMissy2),
    },
    [TRAINER_PICNICKER_MISSY_3] = {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MISSY"),
        #elif SPANISH
        .trainerName = _("MERCE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PicnickerMissy3),
    },
    [TRAINER_FISHERMAN_WADE_2] = {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("WADE"),
        #elif SPANISH
        .trainerName = _("GUIDO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_FishermanWade2),
    },
    [TRAINER_SWIMMER_MALE_JACK_2] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JACK"),
        #elif SPANISH
        .trainerName = _("OMAR"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleJack2),
    },
    [TRAINER_SIS_AND_BRO_LIL_IAN_2] = {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LIL & IAN"),
        #elif SPANISH
        .trainerName = _("ÍA-IGOR"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SisAndBroLilIan2),
    },
    [TRAINER_SIS_AND_BRO_LIL_IAN_3] = {
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LIL & IAN"),
        #elif SPANISH
        .trainerName = _("ÍA-IGOR"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SisAndBroLilIan3),
    },
    [TRAINER_SWIMMER_MALE_FINN_2] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("FINN"),
        #elif SPANISH
        .trainerName = _("AMARO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleFinn2),
    },
    [TRAINER_CRUSH_GIRL_SHARON_2] = {
        .trainerClass = TRAINER_CLASS_CRUSH_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SHARON"),
        #elif SPANISH
        .trainerName = _("SILVANA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_CrushGirlSharon2),
    },
    [TRAINER_CRUSH_GIRL_SHARON_3] = {
        .trainerClass = TRAINER_CLASS_CRUSH_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SHARON"),
        #elif SPANISH
        .trainerName = _("SILVANA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_CrushGirlSharon3),
    },
    [TRAINER_CRUSH_GIRL_TANYA_2] = {
        .trainerClass = TRAINER_CLASS_CRUSH_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TANYA"),
        #elif SPANISH
        .trainerName = _("TANIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_CrushGirlTanya2),
    },
    [TRAINER_CRUSH_GIRL_TANYA_3] = {
        .trainerClass = TRAINER_CLASS_CRUSH_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TANYA"),
        #elif SPANISH
        .trainerName = _("TANIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_CrushGirlTanya3),
    },
    [TRAINER_BLACK_BELT_SHEA_2] = {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SHEA"),
        #elif SPANISH
        .trainerName = _("SHEA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_BlackBeltShea2),
    },
    [TRAINER_BLACK_BELT_SHEA_3] = {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SHEA"),
        #elif SPANISH
        .trainerName = _("SHEA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_BlackBeltShea3),
    },
    [TRAINER_BLACK_BELT_HUGH_2] = {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HUGH"),
        #elif SPANISH
        .trainerName = _("HUGO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_BlackBeltHugh2),
    },
    [TRAINER_BLACK_BELT_HUGH_3] = {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HUGH"),
        #elif SPANISH
        .trainerName = _("HUGO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_BlackBeltHugh3),
    },
    [TRAINER_CRUSH_KIN_MIK_KIA_2] = {
        .trainerClass = TRAINER_CLASS_CRUSH_KIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MIK & KIA"),
        #elif SPANISH
        .trainerName = _("FER-PÍA"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_CrushKinMikKia2),
    },
    [TRAINER_CRUSH_KIN_MIK_KIA_3] = {
        .trainerClass = TRAINER_CLASS_CRUSH_KIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MIK & KIA"),
        #elif SPANISH
        .trainerName = _("FER-PÍA"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_CrushKinMikKia3),
    },
    [TRAINER_TUBER_AMIRA_2] = {
        .trainerClass = TRAINER_CLASS_TUBER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("AMIRA"),
        #elif SPANISH
        .trainerName = _("PIZPI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TuberAmira2),
    },
    [TRAINER_TWINS_JOY_MEG_2] = {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JOY & MEG"),
        #elif SPANISH
        .trainerName = _("FELI-MATI"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TwinsJoyMeg2),
    },
    [TRAINER_PAINTER_RAYNA_2] = {
        .trainerClass = TRAINER_CLASS_PAINTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PAINTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RAYNA"),
        #elif SPANISH
        .trainerName = _("RANIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PainterRayna2),
    },
    [TRAINER_YOUNGSTER_DESTIN_2] = {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DESTIN"),
        #elif SPANISH
        .trainerName = _("DIEGO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungsterDestin2),
    },
    [TRAINER_PKMN_BREEDER_ALIZE_2] = {
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("ALIZE"),
        #elif SPANISH
        .trainerName = _("FLOR"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PkmnBreederAlize2),
    },
    [TRAINER_YOUNG_COUPLE_GIA_JES_2] = {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GIA & JES"),
        #elif SPANISH
        .trainerName = _("AGA-ARE"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungCoupleGiaJes2),
    },
    [TRAINER_YOUNG_COUPLE_GIA_JES_3] = {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("GIA & JES"),
        #elif SPANISH
        .trainerName = _("AGA-ARE"),
        #endif
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_YoungCoupleGiaJes3),
    },
    [TRAINER_BIRD_KEEPER_MILO_2] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MILO"),
        #elif SPANISH
        .trainerName = _("MILO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperMilo2),
    },
    [TRAINER_BIRD_KEEPER_CHAZ_2] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CHAZ"),
        #elif SPANISH
        .trainerName = _("TEO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperChaz2),
    },
    [TRAINER_BIRD_KEEPER_HAROLD_2] = {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HAROLD"),
        #elif SPANISH
        .trainerName = _("HORACIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BirdKeeperHarold2),
    },
    [TRAINER_SWIMMER_FEMALE_NICOLE_2] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NICOLE"),
        #elif SPANISH
        .trainerName = _("NICOLASA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerFemaleNicole2),
    },
    [TRAINER_PSYCHIC_JACLYN_2] = {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JACLYN"),
        #elif SPANISH
        .trainerName = _("JACINTA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PsychicJaclyn2),
    },
    [TRAINER_SWIMMER_MALE_SAMIR_2] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("SAMIR"),
        #elif SPANISH
        .trainerName = _("SAMEL"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleSamir2),
    },
    [TRAINER_HIKER_EARL_2] = {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("EARL"),
        #elif SPANISH
        .trainerName = _("VÍCTOR"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_HikerEarl2),
    },
    [TRAINER_RUIN_MANIAC_LARRY_2] = {
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LARRY"),
        #elif SPANISH
        .trainerName = _("LEANDRO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_RuinManiacLarry2),
    },
    [TRAINER_POKEMANIAC_HECTOR_2] = {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("HECTOR"),
        #elif SPANISH
        .trainerName = _("HÉCTOR"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_PokemaniacHector2),
    },
    [TRAINER_PSYCHIC_DARIO_2] = {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("DARIO"),
        #elif SPANISH
        .trainerName = _("FERMÍN"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PsychicDario2),
    },
    [TRAINER_PSYCHIC_RODETTE_2] = {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("RODETTE"),
        #elif SPANISH
        .trainerName = _("ROSANA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PsychicRodette2),
    },
    [TRAINER_JUGGLER_MASON_2] = {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MASON"),
        #elif SPANISH
        .trainerName = _("MARIANO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_JugglerMason2),
    },
    [TRAINER_PKMN_RANGER_NICOLAS_2] = {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("NICOLAS"),
        #elif SPANISH
        .trainerName = _("NICOLÁS"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PkmnRangerNicolas2),
    },
    [TRAINER_PKMN_RANGER_MADELINE_2] = {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MADELINE"),
        #elif SPANISH
        .trainerName = _("MIRANDA"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PkmnRangerMadeline2),
    },
    [TRAINER_CRUSH_GIRL_CYNDY_2] = {
        .trainerClass = TRAINER_CLASS_CRUSH_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("CYNDY"),
        #elif SPANISH
        .trainerName = _("CECILIA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = ITEM_DEFAULT_MOVES(sParty_CrushGirlCyndy2),
    },
    [TRAINER_TAMER_EVAN_2] = {
        .trainerClass = TRAINER_CLASS_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_TAMER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("EVAN"),
        #elif SPANISH
        .trainerName = _("BLASCO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_TamerEvan2),
    },
    [TRAINER_PKMN_RANGER_JACKSON_2] = {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("JACKSON"),
        #elif SPANISH
        .trainerName = _("JOAQUÍN"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PkmnRangerJackson2),
    },
    [TRAINER_PKMN_RANGER_KATELYN_2] = {
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("KATELYN"),
        #elif SPANISH
        .trainerName = _("CATALINA"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_PkmnRangerKatelyn2),
    },
    [TRAINER_COOLTRAINER_LEROY_2] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LEROY"),
        #elif SPANISH
        .trainerName = _("LORENZO"),
        #endif
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerLeroy2),
    },
    [TRAINER_COOLTRAINER_MICHELLE_2] = {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MICHELLE"),
        #elif SPANISH
        .trainerName = _("MICAELA"),
        #endif
        .items = {ITEM_HYPER_POTION},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CooltrainerMichelle2),
    },
    [TRAINER_COOL_COUPLE_LEX_NYA_2] = {
        .trainerClass = TRAINER_CLASS_COOL_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOL_COUPLE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LEX & NYA"),
        #elif SPANISH
        .trainerName = _("LINO-ABA"),
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_CoolCoupleLexNya2),
    },
    [TRAINER_BUG_CATCHER_COLTON_2] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("COLTON"),
        #elif SPANISH
        .trainerName = _("CORNELIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherColton2),
    },
    [TRAINER_BUG_CATCHER_COLTON_3] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("COLTON"),
        #elif SPANISH
        .trainerName = _("CORNELIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherColton3),
    },
    [TRAINER_BUG_CATCHER_COLTON_4] = {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("COLTON"),
        #elif SPANISH
        .trainerName = _("CORNELIO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_BugCatcherColton4),
    },
    [TRAINER_SWIMMER_MALE_MATTHEW_2] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MATTHEW"),
        #elif SPANISH
        .trainerName = _("MATEO"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleMatthew2),
    },
    [TRAINER_SWIMMER_MALE_TONY_2] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TONY"),
        #elif SPANISH
        .trainerName = _("TONI"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerMaleTony2),
    },
    [TRAINER_SWIMMER_FEMALE_MELISSA_2] = {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("MELISSA"),
        #elif SPANISH
        .trainerName = _("MELISA"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_SwimmerFemaleMelissa2),
    },
    [TRAINER_ELITE_FOUR_LORELEI_2] = {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_LORELEI,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LORELEI"),
        #elif SPANISH
        .trainerName = _("LORELEI"),
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_EliteFourLorelei2),
    },
    [TRAINER_ELITE_FOUR_BRUNO_2] = {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_BRUNO,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("BRUNO"),
        #elif SPANISH
        .trainerName = _("BRUNO"),
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_EliteFourBruno2),
    },
    [TRAINER_ELITE_FOUR_AGATHA_2] = {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_AGATHA,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("AGATHA"),
        #elif SPANISH
        .trainerName = _("AGATHA"),
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_EliteFourAgatha2),
    },
    [TRAINER_ELITE_FOUR_LANCE_2] = {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_LANCE,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("LANCE"),
        #elif SPANISH
        .trainerName = _("LANCE"),
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_EliteFourLance2),
    },
    [TRAINER_CHAMPION_REMATCH_SQUIRTLE] = {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CHAMPION_RIVAL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_ChampionRematchSquirtle),
    },
    [TRAINER_CHAMPION_REMATCH_BULBASAUR] = {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CHAMPION_RIVAL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_ChampionRematchBulbasaur),
    },
    [TRAINER_CHAMPION_REMATCH_CHARMANDER] = {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CHAMPION_RIVAL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("TERRY"),
        #elif SPANISH
        .trainerName = _("TEREN"),
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_ChampionRematchCharmander),
    },
    [TRAINER_CUE_BALL_PAXTON] = {
        .trainerClass = TRAINER_CLASS_CUE_BALL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #if ENGLISH || ITALIAN //test
        .trainerName = _("PAXTON"),
        #elif SPANISH
        .trainerName = _("GUILLE"),
        #endif
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_CueBallPaxton),
    },
};
