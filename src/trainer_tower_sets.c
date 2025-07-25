#include "global.h"
#include "cereader_tool.h"
#include "trainer_tower.h"
#include "text.h"
#include "constants/easy_chat.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/trainer_tower.h"
#include "constants/trainers.h"

// Dummy strings must be declared explicitly for the sake of modern gcc
#define DUMMY_TOWER_MON(iv) {.hpIV = iv, .attackIV = iv, .defenseIV = iv, .speedIV = iv, .spAttackIV = iv, .spDefenseIV = iv, .nickname = _("$$$$$$$$$$")}
#define DUMMY_TOWER_TEAM(iv) {.name = _(""), .textColor = 1, .speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED}, .speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED}, .speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED}, .speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED}, .mons = {DUMMY_TOWER_MON(iv), DUMMY_TOWER_MON(iv), DUMMY_TOWER_MON(iv), DUMMY_TOWER_MON(iv), DUMMY_TOWER_MON(iv), DUMMY_TOWER_MON(iv)}}

static const struct TrainerTowerFloor sTrainerTowerFloor_Single_4 = {
	.id = 1,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_SINGLE,
	.prize = TTPRIZE_WHITE_HERB,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("CAMILO"),
			.facilityClass = FACILITY_CLASS_YOUNGSTER,
			.textColor = 1,
			.speechBefore = {EC_WORD_WHERE, EC_WORD_AT, EC_WORD_NITWIT, EC_WORD_CAN_T, EC_WORD_CAN_T_WIN, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_MUFUFU, EC_WORD_HERE_IT_IS, EC_WORD_YEAH, EC_WORD_HEHEHE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_OI_OI_OI, EC_WORD_UNDEFINED, EC_WORD_EXCL_EXCL, EC_WORD_DOWN, EC_WORD_IF_I_LOSE, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_EXCL_EXCL, EC_WORD_LET_S, EC_WORD_EXCITING, EC_WORD_UNDEFINED, EC_WORD_APPROVED, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("VALENTINO"),
			.facilityClass = FACILITY_CLASS_YOUNGSTER,
			.textColor = 1,
			.speechBefore = {EC_WORD_AHAHA, EC_WORD_EVEN_SO, EC_WORD_REFUSE, EC_WORD_QUES, EC_WORD_CAN_WIN, EC_WORD_EXCL},
			.speechWin = {EC_WORD_WELCOME, EC_WORD_EXCL, EC_WORD_GOOD_BYE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WILL, EC_WORD_WON, EC_WORD_LET_S, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WILL_BE_HERE, EC_WORD_REFRESHING, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("CYRIL"),
			.facilityClass = FACILITY_CLASS_YOUNGSTER,
			.textColor = 1,
			.speechBefore = {EC_WORD_AHAHA, EC_WORD_YOU, EC_WORD_ISN_T, EC_WORD_COULD, EC_WORD_NOT, EC_WORD_OFFENSIVE},
			.speechWin = {EC_WORD_EXCUSE, EC_WORD_EXCL, EC_WORD_GOOD_BYE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_GRAAAH, EC_WORD_DEFEATED, EC_WORD_TOTALLY, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_SNORT, EC_WORD_SNORT, EC_WORD_I_VE, EC_WORD_LOST, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("HENDRIK"),
			.facilityClass = FACILITY_CLASS_YOUNGSTER,
			.textColor = 1,
			.speechBefore = {EC_WORD_AHAHA, EC_WORD_YOU, EC_WORD_GOING, EC_WORD_DON_T, EC_WORD_WHERE, EC_WORD_EXCL},
			.speechWin = {EC_WORD_AS, EC_WORD_EXCL, EC_WORD_GOOD_BYE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_HIYAH, EC_WORD_EXCL_EXCL, EC_WORD_DONE, EC_WORD_IN, EC_WORD_COMPLETE, EC_WORD_EXCL_EXCL},
			.speechAfter = {EC_WORD_TCH, EC_WORD_TCH, EC_WORD_YOU_RE, EC_WORD_TOO_STRONG, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("COLE"),
			.facilityClass = FACILITY_CLASS_YOUNGSTER,
			.textColor = 1,
			.speechBefore = {EC_WORD_AHAHA, EC_WORD_YOU_RE, EC_WORD_NOT, EC_WORD_GOING, EC_WORD_ANYWHERE, EC_WORD_EXCL},
			.speechWin = {EC_WORD_ALL_RIGHT, EC_WORD_EXCL, EC_WORD_BYE_BYE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_HIYAH, EC_WORD_EXCL_EXCL, EC_WORD_DONE, EC_WORD_IN, EC_WORD_TOTALLY, EC_WORD_EXCL_EXCL},
			.speechAfter = {EC_WORD_TCH, EC_WORD_TCH, EC_WORD_YOU_RE, EC_WORD_TOO_STRONG, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#endif
			.mons = {
				{
					.species = SPECIES_RATICATE,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_SHOCK_WAVE, MOVE_HYPER_FANG, MOVE_SCARY_FACE, MOVE_ENDEAVOR},
					.hpEV = 110,
					.attackEV = 0,
					.defenseEV = 200,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 200,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x16, // FEMALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RATTATAC"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RATTIKARL"),
					#else
					.nickname = _("RATICATE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MAGMAR,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_FIRE_PUNCH, MOVE_SUNNY_DAY, MOVE_SMOG, MOVE_STRENGTH},
					.hpEV = 100,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 210,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x56, // MALE HASTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MAGMAR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MAGMAR"),
					#else
					.nickname = _("MAGMAR"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MAGCARGO,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_FLAMETHROWER, MOVE_AMNESIA, MOVE_BODY_SLAM, MOVE_HARDEN},
					.hpEV = 110,
					.attackEV = 200,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 200,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x02, // FEMALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("VOLCAROPOD"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MAGCARGO"),
					#else
					.nickname = _("MAGCARGO"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PRIMEAPE,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_OVERHEAT, MOVE_SEISMIC_TOSS, MOVE_SWAGGER, MOVE_KARATE_CHOP},
					.hpEV = 100,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 210,
					.spAttackEV = 200,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x87, // MALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("COLOSSINGE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RASAFF"),
					#else
					.nickname = _("PRIMEAPE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GOLBAT,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_GIGA_DRAIN, MOVE_CONFUSE_RAY, MOVE_SLUDGE_BOMB, MOVE_MEAN_LOOK},
					.hpEV = 0,
					.attackEV = 200,
					.defenseEV = 0,
					.speedEV = 110,
					.spAttackEV = 200,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x81, // MALE NAUGHTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NOSFERALTO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GOLBAT"),
					#else
					.nickname = _("GOLBAT"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SLOWBRO,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_SUNNY_DAY, MOVE_YAWN, MOVE_FLAMETHROWER, MOVE_CONFUSION},
					.hpEV = 100,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 210,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x11, // FEMALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("FLAGADOSS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LAHMUS"),
					#else
					.nickname = _("SLOWBRO"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00016aab
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Single_7 = {
	.id = 2,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_SINGLE,
	.prize = TTPRIZE_DRAGON_SCALE,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("JAN"),
			.facilityClass = FACILITY_CLASS_BURGLAR,
			.textColor = 1,
			.speechBefore = {EC_WORD_EXCL_EXCL, EC_WORD_WONDER, EC_WORD_LISTEN, EC_WORD_LOSS, EC_WORD_COLD, EC_WORD_EXCL},
			.speechWin = {EC_WORD_EXCL_EXCL, EC_WORD_LET_S, EC_WORD_PLUS, EC_WORD_NITWIT, EC_WORD_PATTERN, EC_WORD_EXCL},
			.speechLose = {EC_WORD_ARRGH, EC_WORD_UNDEFINED, EC_WORD_NO, EC_WORD_UNDEFINED, EC_WORD_COUNT_ON, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_ABSOLUTELY, EC_WORD_LIKE, EC_WORD_FORGETS, EC_WORD_POKEMON, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("JACK"),
			.facilityClass = FACILITY_CLASS_BURGLAR,
			.textColor = 1,
			.speechBefore = {EC_WORD_HE_S, EC_WORD_UNDEFINED, EC_WORD_THAT_WAS, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_AS_IF, EC_WORD_DISLIKE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WHOM, EC_WORD_WILL, EC_WORD_SEE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_ABOVE, EC_WORD_IF, EC_WORD_WORK, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("ILAN"),
			.facilityClass = FACILITY_CLASS_BURGLAR,
			.textColor = 1,
			.speechBefore = {EC_WORD_I, EC_WORD_DIDN_T, EC_WORD_A, EC_MOVE2(THIEF), EC_WORD_GIVES, EC_WORD_EXCL},
			.speechWin = {EC_WORD_DO, EC_WORD_MY, EC_WORD_TIME, EC_WORD_WITH, EC_WORD_HIM, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_EEK, EC_WORD_EXCL_EXCL, EC_WORD_FORGIVE, EC_WORD_DON_T, EC_WORD_GIVE_UP, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_I, EC_WORD_ISN_T, EC_WORD_DIDN_T, EC_WORD_PLUS, EC_WORD_OF, EC_MOVE2(THIEF)},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("PAVEL"),
			.facilityClass = FACILITY_CLASS_BURGLAR,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_A, EC_MOVE2(THIEF), EC_WORD_EXCL, EC_WORD_GIMME, EC_WORD_SOMETHING},
			.speechWin = {EC_WORD_YOU_VE, EC_WORD_NOTHING, EC_WORD_WHAT, EC_WORD_I, EC_WORD_NEED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_EEK, EC_WORD_EXCL_EXCL, EC_WORD_I, EC_WORD_SORRY, EC_WORD_I, EC_WORD_GIVE_UP},
			.speechAfter = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_NONE, EC_MOVE2(THIEF), EC_WORD_MORE, EC_WORD_MAKE},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("JAC"),
			.facilityClass = FACILITY_CLASS_BURGLAR,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_A, EC_MOVE2(THIEF), EC_WORD_EXCL, EC_WORD_GIVE_ME, EC_WORD_SOMETHING},
			.speechWin = {EC_WORD_YOU_VE, EC_WORD_GOT, EC_WORD_NOTHING, EC_WORD_THAT, EC_WORD_I, EC_WORD_WANT},
			.speechLose = {EC_WORD_EEK, EC_WORD_EXCL_EXCL, EC_WORD_I_AM, EC_WORD_SORRY, EC_WORD_I, EC_WORD_SURRENDER},
			.speechAfter = {EC_WORD_I, EC_WORD_WILL, EC_WORD_STOP, EC_WORD_BEING, EC_WORD_A, EC_MOVE2(THIEF)},
		#endif
			.mons = {
				{
					.species = SPECIES_MEOWTH,
					.heldItem = ITEM_LIECHI_BERRY,
					.moves = {MOVE_SWAGGER, MOVE_SUBSTITUTE, MOVE_FAKE_OUT, MOVE_SLASH},
					.hpEV = 200,
					.attackEV = 110,
					.defenseEV = 0,
					.speedEV = 200,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 138 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x8A, // MALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MIAOUSS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MAUZI"),
					#else
					.nickname = _("MEOWTH"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_FLAREON,
					.heldItem = ITEM_PETAYA_BERRY,
					.moves = {MOVE_FLAMETHROWER, MOVE_BITE, MOVE_SAND_ATTACK, MOVE_FIRE_SPIN},
					.hpEV = 110,
					.attackEV = 0,
					.defenseEV = 200,
					.speedEV = 0,
					.spAttackEV = 200,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x07, // FEMALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PYROLI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("FLAMARA"),
					#else
					.nickname = _("FLAREON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PORYGON,
					.heldItem = ITEM_PETAYA_BERRY,
					.moves = {MOVE_TRI_ATTACK, MOVE_RECYCLE, MOVE_PSYBEAM, MOVE_CONVERSION_2},
					.hpEV = 100,
					.attackEV = 0,
					.defenseEV = 210,
					.speedEV = 0,
					.spAttackEV = 200,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x07, // GENDERLESS RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PORYGON"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PORYGON"),
					#else
					.nickname = _("PORYGON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CHANSEY,
					.heldItem = ITEM_LUCKY_PUNCH,
					.moves = {MOVE_FLAMETHROWER, MOVE_LIGHT_SCREEN, MOVE_BODY_SLAM, MOVE_MINIMIZE},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x10, // FEMALE MILD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LEVEINARD"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("CHANEIRA"),
					#else
					.nickname = _("CHANSEY"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_FARFETCHD,
					.heldItem = ITEM_STICK,
					.moves = {MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE, MOVE_FLY, MOVE_SAND_ATTACK},
					.hpEV = 100,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 0,
					.spDefenseEV = 110,
					.otId = 133 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x85, // MALE IMPISH
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("CANARTICHO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PORENTA"),
					#else
					.nickname = _("FARFETCH'D"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MR_MIME,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_SUBSTITUTE, MOVE_SHOCK_WAVE, MOVE_LIGHT_SCREEN, MOVE_BRICK_BREAK},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 130 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x82, // MALE BOLD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("M. MIME"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PANTIMOS"),
					#else
					.nickname = _("MR. MIME"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00016456
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Single_Unused = {
	.id = 3,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_SINGLE,
	.prize = TTPRIZE_IRON,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("MIRLA"),
			.facilityClass = FACILITY_CLASS_PSYCHIC_F,
			.textColor = 1,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("MILLY"),
			.facilityClass = FACILITY_CLASS_PSYCHIC_F,
			.textColor = 1,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("LUCILLE"),
			.facilityClass = FACILITY_CLASS_PSYCHIC_F,
			.textColor = 1,
			.speechBefore = {EC_WORD_LOOKS, EC_WORD_FEELING, EC_MOVE(FOCUS_ENERGY), EC_WORD_OF, EC_WORD_WHO_IS, EC_WORD_POKEMON},
			.speechWin = {EC_WORD_THIS_IS_IT_EXCL, EC_MOVE(FOCUS_ENERGY), EC_WORD_ELLIPSIS, EC_WORD_UNBELIEVABLE, EC_WORD_ISN_T_IT_QUES, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_THAT_WAS, EC_WORD_A, EC_MOVE(NIGHTMARE), EC_WORD_UNBELIEVABLE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_THAT_WAS, EC_WORD_JUST, EC_WORD_A, EC_WORD_DREAM, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("BEATE"),
			.facilityClass = FACILITY_CLASS_PSYCHIC_F,
			.textColor = 1,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("MILY"),
			.facilityClass = FACILITY_CLASS_PSYCHIC_F,
			.textColor = 1,
			.speechBefore = {EC_WORD_LOOK, EC_WORD_AT, EC_WORD_MY, EC_WORD_POKEMON, EC_MOVE2(SUPERPOWER), EC_WORD_EXCL},
			.speechWin = {EC_WORD_ISN_T, EC_WORD_IT, EC_WORD_INCREDIBLE, EC_WORD_QUES, EC_WORD_POKEMON, EC_WORD_POWER},
			.speechLose = {EC_WORD_THIS, EC_WORD_IS, EC_WORD_AN, EC_WORD_AWFUL, EC_MOVE(NIGHTMARE), EC_WORD_ELLIPSIS_EXCL},
			.speechAfter = {EC_WORD_THIS, EC_WORD_IS, EC_WORD_A, EC_WORD_DREAM, EC_WORD_NOTHING, EC_WORD_MORE},
		#endif
			.mons = {
				{
					.species = SPECIES_CHANSEY,
					.heldItem = ITEM_ORAN_BERRY,
					.moves = {MOVE_LIGHT_SCREEN, MOVE_EGG_BOMB, MOVE_MINIMIZE, MOVE_SECRET_POWER},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x08, // FEMALE IMPISH
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LEVEINARD"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("CHANEIRA"),
					#else
					.nickname = _("CHANSEY"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CLEFABLE,
					.heldItem = ITEM_ORAN_BERRY,
					.moves = {MOVE_METRONOME, MOVE_REFLECT, MOVE_SING, MOVE_POUND},
					.hpEV = 110,
					.attackEV = 0,
					.defenseEV = 200,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 200,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x16, // FEMALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MELODELFE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PIXI"),
					#else
					.nickname = _("CLEFABLE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_TOGETIC,
					.heldItem = ITEM_ORAN_BERRY,
					.moves = {MOVE_METRONOME, MOVE_REFLECT, MOVE_SWEET_KISS, MOVE_PECK},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x16, // FEMALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TOGETIC"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TOGETIC"),
					#else
					.nickname = _("TOGETIC"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_TOGETIC,
					.heldItem = ITEM_ORAN_BERRY,
					.moves = {MOVE_METRONOME, MOVE_HIDDEN_POWER, MOVE_ATTRACT, MOVE_LIGHT_SCREEN},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x20, // MALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TOGETIC"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TOGETIC"),
					#else
					.nickname = _("TOGETIC"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CHANSEY,
					.heldItem = ITEM_ORAN_BERRY,
					.moves = {MOVE_FLAMETHROWER, MOVE_SOFT_BOILED, MOVE_LIGHT_SCREEN, MOVE_SECRET_POWER},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x05, // FEMALE BOLD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LEVEINARD"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("CHANEIRA"),
					#else
					.nickname = _("CHANSEY"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CLEFABLE,
					.heldItem = ITEM_ORAN_BERRY,
					.moves = {MOVE_REFLECT, MOVE_FLAMETHROWER, MOVE_SING, MOVE_BODY_SLAM},
					.hpEV = 110,
					.attackEV = 0,
					.defenseEV = 200,
					.speedEV = 0,
					.spAttackEV = 200,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0xC0, // MALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MELODELFE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PIXI"),
					#else
					.nickname = _("CLEFABLE"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x000164ec
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Double_5 = {
	.id = 4,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_DOUBLE,
	.prize = TTPRIZE_CHOICE_BAND,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("DEN-ANI"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_DOES, EC_WORD_NITWIT, EC_WORD_OR, EC_WORD_LISTEN, EC_WORD_WIN, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_WENT, EC_WORD_FOR_NOW, EC_WORD_BATTLE, EC_WORD_VERY, EC_WORD_ANTICIPATION, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_CRIES, EC_WORD_UNDEFINED, EC_WORD_HEY, EC_WORD_UNDEFINED, EC_WORD_LISTENING, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_LET_S, EC_WORD_LEFT, EC_WORD_INCREDIBLE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("JOE & ANNI"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_TODAY, EC_WORD_AS_IF, EC_WORD_LOSE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_CONGRATS, EC_WORD_EXCL, EC_WORD_THIN, EC_WORD_FIGHTING, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_INCREDIBLE, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WILL, EC_WORD_WON, EC_WORD_THOSE_ARE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("JOS & ANNE"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_CAN, EC_WORD_NOT, EC_WORD_LOSE, EC_WORD_VERSUS, EC_WORD_HIM, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_EXCUSE, EC_WORD_PLAYS, EC_WORD_EXCELLENT, EC_WORD_FIGHTING, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNBELIEVABLE, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_I_AM, EC_WORD_DISAPPOINTED, EC_WORD_BUT, EC_WORD_YOU_VE, EC_WORD_WINS, EC_WORD_ELLIPSIS},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("URS&KARO"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_I, EC_WORD_WON_T, EC_WORD_LOSE, EC_WORD_VERSUS, EC_WORD_BABE, EC_WORD_HERE},
			.speechWin = {EC_WORD_VERY, EC_WORD_ALL_RIGHT, EC_WORD_EXCL, EC_WORD_VERY, EC_WORD_ALL_RIGHT, EC_WORD_FIGHTING},
			.speechLose = {EC_WORD_UNBELIEVABLE, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_I_AM, EC_WORD_DISAPPOINTED, EC_WORD_BUT, EC_WORD_YOU, EC_WORD_WINS, EC_WORD_ELLIPSIS},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("JOS & ANNE"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_I, EC_WORD_CAN_T, EC_WORD_LOSE, EC_WORD_TO, EC_WORD_YOU, EC_WORD_HERE},
			.speechWin = {EC_WORD_VERY, EC_WORD_WELL, EC_WORD_DONE, EC_WORD_EXCL, EC_WORD_GOOD, EC_WORD_BATTLE},
			.speechLose = {EC_WORD_UNBELIEVABLE, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_I_AM, EC_WORD_DISAPPOINTED, EC_WORD_BUT, EC_WORD_YOU, EC_WORD_WIN, EC_WORD_ELLIPSIS},
		#endif
			.mons = {
				{
					.species = SPECIES_RAPIDASH,
					.heldItem = ITEM_WHITE_HERB,
					.moves = {MOVE_BOUNCE, MOVE_OVERHEAT, MOVE_HYPNOSIS, MOVE_RETURN},
					.hpEV = 100,
					.attackEV = 100,
					.defenseEV = 0,
					.speedEV = 110,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 1,
					.personality = 0x10, // FEMALE MILD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GALOPA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GALLOPA"),
					#else
					.nickname = _("RAPIDASH"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_NINETALES,
					.heldItem = ITEM_CHARCOAL,
					.moves = {MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_HEAT_WAVE, MOVE_DIG},
					.hpEV = 110,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 200,
					.spAttackEV = 200,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x15, // FEMALE GENTLE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("FEUNARD"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("VULNONA"),
					#else
					.nickname = _("NINETALES"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MISDREAVUS,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_GRUDGE, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
					.hpEV = 200,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 210,
					.spAttackEV = 100,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x0A, // FEMALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("FEUFOREVE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TRAUNFUGIL"),
					#else
					.nickname = _("MISDREAVUS"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ALAKAZAM,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_LIGHT_SCREEN, MOVE_RECOVER, MOVE_PSYCHIC, MOVE_THUNDER_PUNCH},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x0A, // FEMALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ALAKAZAM"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SIMSALA"),
					#else
					.nickname = _("ALAKAZAM"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_BLISSEY,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_LIGHT_SCREEN, MOVE_ATTRACT, MOVE_RETURN, MOVE_PSYCHIC},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 1,
					.personality = 0x16, // FEMALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LEUPHORIE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("HEITEIRA"),
					#else
					.nickname = _("BLISSEY"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CROBAT,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_TOXIC, MOVE_FLY, MOVE_CONFUSE_RAY, MOVE_SHADOW_BALL},
					.hpEV = 100,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 210,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x17, // FEMALE CAREFUL
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NOSTENFER"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("IKSBAT"),
					#else
					.nickname = _("CROBAT"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("DEN-ANI"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_I, EC_WORD_OR, EC_WORD_LISTEN, EC_WORD_WIN, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_WIN, EC_WORD_IS, EC_WORD_BEING, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_QUES_EXCL, EC_WORD_NITWIT, EC_WORD_I, EC_WORD_PLAYS, EC_WORD_LOSE, EC_WORD_QUES},
			.speechAfter = {EC_WORD_LET_S, EC_WORD_LEFT, EC_WORD_APPROVED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("JOE & ANNI"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_THAT_WAS, EC_WORD_MEAN, EC_WORD_IF_I_LOSE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_SORRY, EC_WORD_ELLIPSIS, EC_WORD_BUT, EC_WORD_WILL, EC_WORD_LOST, EC_WORD_EXCL},
			.speechLose = {EC_WORD_NOPE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_BUT, EC_WORD_HOW, EC_WORD_IS_IT_QUES, EC_WORD_FAINTED, EC_WORD_IF_I_LOSE, EC_WORD_QUES_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("JOS & ANNE"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_PARDON, EC_WORD_EXCL_EXCL, EC_WORD_LIKELY_TO, EC_WORD_LOSE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_PERFECT, EC_WORD_EXCL, EC_WORD_VICTORY, EC_WORD_FOR, EC_WORD_WE, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_LOST, EC_WORD_QUES_EXCL, EC_WORD_IT_S, EC_WORD_NOT, EC_WORD_JOKING, EC_WORD_QUES},
			.speechAfter = {EC_WORD_WHY, EC_WORD_I_VE, EC_WORD_LOST, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("URS&KARO"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_HERE_GOES, EC_WORD_EXCL_EXCL, EC_WORD_DO, EC_WORD_READY, EC_WORD_TO, EC_WORD_LOSE},
			.speechWin = {EC_WORD_PERFECT, EC_WORD_EXCL, EC_WORD_WE, EC_WORD_GOT, EC_WORD_WON, EC_WORD_EXCL},
			.speechLose = {EC_WORD_LOST, EC_WORD_QUES_EXCL, EC_WORD_YOU, EC_WORD_MUST_BE, EC_WORD_FULL, EC_WORD_JOKING},
			.speechAfter = {EC_WORD_HOW_DO, EC_WORD_CAN, EC_WORD_I, EC_WORD_THAT, EC_WORD_LOSE, EC_WORD_QUES},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("JOS & ANNE"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_HERE_GOES, EC_WORD_EXCL_EXCL, EC_WORD_GET, EC_WORD_READY, EC_WORD_TO, EC_WORD_LOSE},
			.speechWin = {EC_WORD_PERFECT, EC_WORD_EXCL, EC_WORD_WE, EC_WORD_GET, EC_WORD_THE, EC_WORD_WIN},
			.speechLose = {EC_WORD_LOST, EC_WORD_QUES_EXCL, EC_WORD_YOU, EC_WORD_MUST_BE, EC_WORD_JOKING, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_HOW, EC_WORD_COULD, EC_WORD_I, EC_WORD_LOSE, EC_WORD_THIS, EC_WORD_QUES},
		#endif
			.mons = {
				{
					.species = SPECIES_HOUNDOOM,
					.heldItem = ITEM_CHARCOAL,
					.moves = {MOVE_TAUNT, MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_CRUNCH},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 1,
					.personality = 0x82, // MALE BOLD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("DEMOLOSSE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("HUNDEMON"),
					#else
					.nickname = _("HOUNDOOM"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_AERODACTYL,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_ROAR, MOVE_FIRE_BLAST, MOVE_HYPER_BEAM, MOVE_AERIAL_ACE},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 1,
					.personality = 0x33, // MALE LONELY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PTERA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("AERODACTYL"),
					#else
					.nickname = _("AERODACTYL"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ARCANINE,
					.heldItem = ITEM_CHARCOAL,
					.moves = {MOVE_HEAT_WAVE, MOVE_EXTREME_SPEED, MOVE_ROAR, MOVE_DIG},
					.hpEV = 210,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 200,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x56, // MALE HASTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ARCANIN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ARKANI"),
					#else
					.nickname = _("ARCANINE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_WEEZING,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_EXPLOSION, MOVE_SMOKESCREEN, MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT},
					.hpEV = 100,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 110,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x8E, // MALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("SMOGOGO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SMOGMOG"),
					#else
					.nickname = _("WEEZING"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CHARIZARD,
					.heldItem = ITEM_WHITE_HERB,
					.moves = {MOVE_OVERHEAT, MOVE_OUTRAGE, MOVE_DRAGON_RAGE, MOVE_SMOKESCREEN},
					.hpEV = 100,
					.attackEV = 110,
					.defenseEV = 0,
					.speedEV = 100,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x33, // MALE LONELY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("DRACAUFEU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GLURAK"),
					#else
					.nickname = _("CHARIZARD"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GENGAR,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT},
					.hpEV = 55,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x87, // MALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ECTOPLASMA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GENGAR"),
					#else
					.nickname = _("GENGAR"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00017908
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Double_6 = {
	.id = 5,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_DOUBLE,
	.prize = TTPRIZE_CALCIUM,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("EMI-ALE"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_WILL_BE_HERE, EC_WORD_EVERY, EC_WORD_ALL_RIGHT, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_EXCL_EXCL, EC_WORD_EVEN_SO, EC_WORD_ABSOLUTELY, EC_WORD_LIKE, EC_WORD_FIGHTS, EC_WORD_EXCL},
			.speechLose = {EC_WORD_WHERE, EC_WORD_ABSOLUTELY, EC_WORD_AROUND, EC_WORD_OK_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_QUES_EXCL, EC_WORD_AND, EC_WORD_YOU, EC_WORD_WHO, EC_WORD_LET_S, EC_WORD_QUES},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("EMI & ALE"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_OR, EC_WORD_LOWS, EC_WORD_TO, EC_WORD_THIN, EC_WORD_I_VE, EC_WORD_EXCL},
			.speechWin = {EC_WORD_IS, EC_WORD_PERFECT, EC_WORD_BEAUTIFUL, EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_NATURALLY, EC_WORD_AS_IF, EC_WORD_WILL_BE_HERE, EC_WORD_VERY, EC_WORD_STRONG, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_BUT, EC_WORD_WONDER, EC_WORD_WILL_BE_HERE, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("EMY & ALEK"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_IN, EC_WORD_FULL, EC_WORD_HAPPINESS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_OH, EC_WORD_OH, EC_WORD_HE_S, EC_WORD_REALLY, EC_WORD_UNBELIEVABLE, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_AIYEEH, EC_WORD_UNDEFINED, EC_WORD_YOU_RE, EC_WORD_NOT, EC_WORD_SERIOUS, EC_WORD_QUES},
			.speechAfter = {EC_WORD_WHO, EC_WORD_ELLIPSIS, EC_WORD_DOES, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("EVA&TIM"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_SO, EC_WORD_LOST, EC_WORD_IN, EC_WORD_LOVEY_DOVEY, EC_WORD_HAPPINESS},
			.speechWin = {EC_WORD_OH, EC_WORD_OH, EC_WORD_HE, EC_WORD_IS, EC_WORD_QUITE, EC_WORD_AWESOME},
			.speechLose = {EC_WORD_AIYEEH, EC_WORD_EXCL_EXCL, EC_WORD_YOU, EC_WORD_ARE, EC_WORD_DON_T, EC_WORD_SERIOUSLY},
			.speechAfter = {EC_WORD_WHO, EC_WORD_ARE, EC_WORD_YOU, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("EMY & ALEK"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_SO, EC_WORD_LOST, EC_WORD_IN, EC_WORD_LOVEY_DOVEY, EC_WORD_HAPPINESS},
			.speechWin = {EC_WORD_OH, EC_WORD_OH, EC_WORD_HE, EC_WORD_IS, EC_WORD_REALLY, EC_WORD_AWESOME},
			.speechLose = {EC_WORD_AIYEEH, EC_WORD_EXCL_EXCL, EC_WORD_YOU_RE, EC_WORD_NOT, EC_WORD_SERIOUS, EC_WORD_QUES},
			.speechAfter = {EC_WORD_WHO, EC_WORD_ARE, EC_WORD_YOU, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#endif
			.mons = {
				{
					.species = SPECIES_TAUROS,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_FLAMETHROWER, MOVE_REST, MOVE_SHOCK_WAVE, MOVE_DOUBLE_TEAM},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0A, // MALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TAUROS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TAUROS"),
					#else
					.nickname = _("TAUROS"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_KANGASKHAN,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_FLAMETHROWER, MOVE_DIZZY_PUNCH, MOVE_REST, MOVE_FAKE_OUT},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x02, // FEMALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("KANGOUREX"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KANGAMA"),
					#else
					.nickname = _("KANGASKHAN"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_FEAROW,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_DOUBLE_EDGE, MOVE_REST},
					.hpEV = 100,
					.attackEV = 210,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x94, // MALE CAREFUL
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RAPASDEPIC"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("IBITAK"),
					#else
					.nickname = _("FEAROW"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_TOGETIC,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_FLAMETHROWER, MOVE_LIGHT_SCREEN, MOVE_REST, MOVE_ANCIENT_POWER},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x24, // MALE HASTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TOGETIC"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TOGETIC"),
					#else
					.nickname = _("TOGETIC"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PIDGEOT,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_STEEL_WING, MOVE_FLY, MOVE_MIRROR_MOVE, MOVE_REST},
					.hpEV = 100,
					.attackEV = 110,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0D, // FEMALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ROUCARNAGE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TAUBOSS"),
					#else
					.nickname = _("PIDGEOT"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_URSARING,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_REST, MOVE_SNORE, MOVE_DIG, MOVE_SLASH},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x8A, // MALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("URSARING"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("URSARING"),
					#else
					.nickname = _("URSARING"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("EMI-ALE"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_WILL_BE_HERE, EC_WORD_VERY, EC_WORD_CARES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_JUST, EC_WORD_AREN_T, EC_WORD_IS, EC_WORD_FOR_NOW, EC_MOVE(CHARM), EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WHERE, EC_WORD_WEREN_T, EC_WORD_BE, EC_WORD_THESE_WERE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_BUT, EC_WORD_UNDEFINED, EC_WORD_QUES_EXCL, EC_WORD_WHO, EC_WORD_LET_S, EC_WORD_QUES},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("EMI & ALE"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_OH, EC_WORD_ELLIPSIS, EC_WORD_WEREN_T, EC_WORD_BETTER, EC_WORD_HEAR, EC_WORD_EXCL},
			.speechWin = {EC_WORD_THESE_WERE, EC_WORD_PROBABLY, EC_WORD_BETTER, EC_WORD_DUDE, EC_WORD_HEH, EC_WORD_QUES},
			.speechLose = {EC_WORD_LOWS, EC_WORD_AS_IF, EC_WORD_WILL_BE_HERE, EC_WORD_VERY, EC_WORD_STRONG, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_TRY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("EMY & ALEK"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_GIDDY, EC_WORD_OF, EC_WORD_THIS_IS_IT_EXCL, EC_WORD_JOY, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_WHOAH, EC_WORD_ELLIPSIS, EC_WORD_THIS_IS_IT_EXCL, EC_WORD_GIRL, EC_WORD_IS, EC_WORD_LOVEY_DOVEY},
			.speechLose = {EC_WORD_WAAAH, EC_WORD_EXCL_EXCL, EC_WORD_IT_S, EC_WORD_JOKING, EC_WORD_HUH_QUES, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_EH_QUES, EC_WORD_WHO, EC_WORD_DOES, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("EVA&TIM"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_GIDDY, EC_WORD_FROM, EC_WORD_LOVEY_DOVEY, EC_WORD_JOY, EC_WORD_EXCL_EXCL},
			.speechWin = {EC_WORD_SIGH, EC_WORD_ELLIPSIS, EC_WORD_MY, EC_WORD_GIRL, EC_WORD_IS, EC_WORD_CUTE},
			.speechLose = {EC_WORD_WAAAH, EC_WORD_EXCL_EXCL, EC_WORD_YOU, EC_WORD_ARE, EC_WORD_DON_T, EC_WORD_SERIOUSLY},
			.speechAfter = {EC_WORD_QUES_EXCL, EC_WORD_ELLIPSIS, EC_WORD_WHO, EC_WORD_ARE, EC_WORD_YOU, EC_WORD_QUES},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("EMY & ALEK"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_GIDDY, EC_WORD_WITH, EC_WORD_LOVEY_DOVEY, EC_WORD_JOY, EC_WORD_EXCL_EXCL},
			.speechWin = {EC_WORD_SIGH, EC_WORD_ELLIPSIS, EC_WORD_MY, EC_WORD_GIRL, EC_WORD_IS, EC_WORD_CUTE},
			.speechLose = {EC_WORD_WAAAH, EC_WORD_EXCL_EXCL, EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_BE, EC_WORD_SERIOUS},
			.speechAfter = {EC_WORD_WAIT, EC_WORD_ELLIPSIS, EC_WORD_WHO, EC_WORD_ARE, EC_WORD_YOU, EC_WORD_QUES},
		#endif
			.mons = {
				{
					.species = SPECIES_LICKITUNG,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_FLAMETHROWER, MOVE_EARTHQUAKE, MOVE_REST, MOVE_SLEEP_TALK},
					.hpEV = 0,
					.attackEV = 100,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 55,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x16, // FEMALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("EXCELANGUE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SCHLURP"),
					#else
					.nickname = _("LICKITUNG"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_NOCTOWL,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_REFLECT, MOVE_AERIAL_ACE},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0B, // FEMALE HASTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NOARFANG"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NOCTUH"),
					#else
					.nickname = _("NOCTOWL"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_FURRET,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_FLAMETHROWER, MOVE_AMNESIA, MOVE_SHOCK_WAVE, MOVE_SLASH},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x0E, // FEMALE NAIVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("FOUINAR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("WIESENIOR"),
					#else
					.nickname = _("FURRET"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_RATICATE,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_SUPER_FANG, MOVE_QUICK_ATTACK, MOVE_SWAGGER, MOVE_ENDEAVOR},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x8A, // MALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RATTATAC"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RATTIKARL"),
					#else
					.nickname = _("RATICATE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_WIGGLYTUFF,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_SUNNY_DAY, MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_BODY_SLAM},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0B, // FEMALE HASTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GRODOUDOU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KNUDDELUFF"),
					#else
					.nickname = _("WIGGLYTUFF"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PORYGON2,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_THUNDERBOLT, MOVE_CONVERSION_2, MOVE_TRI_ATTACK, MOVE_RECOVER},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0A, // GENDERLESS TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PORYGON2"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PORYGON2"),
					#else
					.nickname = _("PORYGON2"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00015d3b
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Double_2 = {
	.id = 6,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_DOUBLE,
	.prize = TTPRIZE_HP_UP,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("FIL-RENA"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_BELONGS_TO, EC_WORD_NITWIT, EC_WORD_WIN, EC_WORD_OH_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_SORRY, EC_WORD_UNDEFINED, EC_WORD_GWAHAHAHA, EC_WORD_UNDEFINED, EC_WORD_HIYAH, EC_WORD_LALALA},
			.speechLose = {EC_WORD_SIGH, EC_WORD_UNDEFINED, EC_WORD_FUFUFU, EC_WORD_UNDEFINED, EC_WORD_WAAAH, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_SIGH, EC_WORD_UNDEFINED, EC_WORD_ALWAYS, EC_WORD_FAINTED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("JO & GINA"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_STORES, EC_WORD_THOSE_ARE, EC_WORD_WEREN_T, EC_WORD_AT, EC_WORD_STRATEGY, EC_WORD_QUES},
			.speechWin = {EC_WORD_MUCH, EC_WORD_BUT, EC_WORD_COULD, EC_WORD_WON, EC_WORD_WON_T, EC_WORD_EXCL},
			.speechLose = {EC_WORD_REFRESHING, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_LOSE, EC_WORD_ALWAYS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("JO & HALEY"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_TO_US, EC_WORD_USE, EC_WORD_THIS_IS_IT_EXCL, EC_WORD_STRATEGY, EC_WORD_OKAY, EC_WORD_QUES},
			.speechWin = {EC_WORD_YAY, EC_WORD_TO_ME, EC_WORD_WINS, EC_WORD_EXCL, EC_WORD_FORGIVE, EC_WORD_EXCL},
			.speechLose = {EC_WORD_GWAH, EC_WORD_EXCL, EC_WORD_THAT_WAS, EC_WORD_REALLY, EC_WORD_TERRIBLE, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_DO, EC_WORD_REALLY, EC_WORD_ANOTHER, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("UDO&GABI"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_WE, EC_WORD_GOT, EC_WORD_THESE, EC_WORD_STRATEGY, EC_WORD_OK_QUES, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_YAY, EC_WORD_WE, EC_WORD_WON, EC_WORD_EXCL, EC_WORD_SORRY, EC_WORD_EXCL},
			.speechLose = {EC_WORD_URGH, EC_WORD_EXCL, EC_WORD_THAT_WAS, EC_WORD_QUITE, EC_WORD_TERRIBLE, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_I, EC_WORD_LOSE, EC_WORD_ALWAYS, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("JO & HALEY"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_WE_RE, EC_WORD_USING, EC_WORD_THAT, EC_WORD_STRATEGY, EC_WORD_OKAY, EC_WORD_QUES},
			.speechWin = {EC_WORD_YAY, EC_WORD_WE, EC_WORD_WON, EC_WORD_EXCL, EC_WORD_SORRY, EC_WORD_EXCL},
			.speechLose = {EC_WORD_AWW, EC_WORD_EXCL, EC_WORD_THAT_WAS, EC_WORD_REALLY, EC_WORD_TERRIBLE, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_ALL, EC_WORD_I, EC_WORD_DO, EC_WORD_IS, EC_WORD_LOSE, EC_WORD_ELLIPSIS},
		#endif
			.mons = {
				{
					.species = SPECIES_SNEASEL,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_SHADOW_BALL, MOVE_SUNNY_DAY, MOVE_TAUNT, MOVE_AERIAL_ACE},
					.hpEV = 200,
					.attackEV = 0,
					.defenseEV = 50,
					.speedEV = 210,
					.spAttackEV = 0,
					.spDefenseEV = 50,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x0D, // FEMALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("FARFURET"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SNIEBEL"),
					#else
					.nickname = _("SNEASEL"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ALAKAZAM,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_FIRE_PUNCH, MOVE_RECOVER, MOVE_PSYCHIC, MOVE_SUNNY_DAY},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x05, // FEMALE BOLD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ALAKAZAM"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SIMSALA"),
					#else
					.nickname = _("ALAKAZAM"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_HITMONTOP,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_MEGA_KICK, MOVE_ENDEAVOR, MOVE_DIG, MOVE_SUNNY_DAY},
					.hpEV = 100,
					.attackEV = 210,
					.defenseEV = 0,
					.speedEV = 200,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x08, // MALE IMPISH
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("KAPOERA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KAPOERA"),
					#else
					.nickname = _("HITMONTOP"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GIRAFARIG,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_LIGHT_SCREEN, MOVE_SUNNY_DAY, MOVE_SHADOW_BALL, MOVE_PSYBEAM},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x0A, // FEMALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GIRAFARIG"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GIRAFARIG"),
					#else
					.nickname = _("GIRAFARIG"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_XATU,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_SUNNY_DAY, MOVE_DRILL_PECK, MOVE_CONFUSE_RAY, MOVE_PSYCHIC},
					.hpEV = 110,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x14, // FEMALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("XATU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("XATU"),
					#else
					.nickname = _("XATU"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MR_MIME,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_REFLECT, MOVE_SUNNY_DAY, MOVE_PSYCHIC, MOVE_SHOCK_WAVE},
					.hpEV = 110,
					.attackEV = 0,
					.defenseEV = 200,
					.speedEV = 200,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x05, // FEMALE BOLD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("M. MIME"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PANTIMOS"),
					#else
					.nickname = _("MR. MIME"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("FIL-RENA"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_HEY_THERE, EC_WORD_SNORT, EC_WORD_MOVE, EC_WORD_UNDEFINED, EC_WORD_EEK, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_HAH, EC_WORD_UNDEFINED, EC_WORD_HERE_IT_IS, EC_WORD_UNDEFINED, EC_WORD_UH_HUH, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_AWW, EC_WORD_UNDEFINED, EC_WORD_GIVE_ME, EC_WORD_UNDEFINED, EC_WORD_AWW, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_SIGH, EC_WORD_UNDEFINED, EC_WORD_FOREVER, EC_WORD_CAN, EC_WORD_WIN, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("JO & GINA"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_JUST, EC_WORD_AS_IF, EC_WORD_I_WAS, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNBELIEVABLE, EC_WORD_UNDEFINED, EC_WORD_COULD, EC_WORD_WON, EC_WORD_WON_T, EC_WORD_EXCL},
			.speechLose = {EC_WORD_EASY, EC_WORD_ELLIPSIS, EC_WORD_LOWS, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_SNORT, EC_WORD_ELLIPSIS, EC_WORD_BUT, EC_WORD_WILL_BE_HERE, EC_WORD_INVINCIBLE, EC_WORD_ELLIPSIS},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("JO & HALEY"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_HEY_THERE, EC_WORD_UNDEFINED, EC_WORD_DOESN_T, EC_WORD_WIN, EC_WORD_HUH_QUES, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_SERIOUS, EC_WORD_QUES, EC_WORD_TO_ME, EC_WORD_REALLY, EC_WORD_WINS, EC_WORD_QUES},
			.speechLose = {EC_WORD_WIMPY, EC_WORD_ELLIPSIS, EC_WORD_TO_ME, EC_WORD_SUMMER, EC_WORD_WEAK, EC_WORD_ELLIPSIS},
			.speechAfter = {EC_WORD_AHAHA, EC_WORD_TO_ME, EC_WORD_SUMMER, EC_WORD_RECOMMEND, EC_WORD_BAD, EC_WORD_ELLIPSIS},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("UDO&GABI"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_YOU, EC_WORD_YOU, EC_WORD_YOU, EC_WORD_WINS, EC_WORD_BETTER, EC_WORD_DON_T},
			.speechWin = {EC_WORD_YOU, EC_WORD_DON_T, EC_WORD_JOKING, EC_WORD_QUES, EC_WORD_WE, EC_WORD_WON},
			.speechLose = {EC_WORD_WIMPY, EC_WORD_ELLIPSIS, EC_WORD_WE, EC_WORD_BEEN, EC_WORD_WEAK, EC_WORD_ELLIPSIS},
			.speechAfter = {EC_WORD_HAHAHA, EC_WORD_ELLIPSIS, EC_WORD_WE_RE, EC_WORD_FULL, EC_WORD_USELESS, EC_WORD_ELLIPSIS},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("JO & HALEY"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_YOU, EC_WORD_YOU, EC_WORD_YOU, EC_WORD_BETTER, EC_WORD_NOT, EC_WORD_WIN},
			.speechWin = {EC_WORD_YOU_RE, EC_WORD_NOT, EC_WORD_JOKING, EC_WORD_QUES, EC_WORD_WE, EC_WORD_WON},
			.speechLose = {EC_WORD_WIMPY, EC_WORD_ELLIPSIS, EC_WORD_WE, EC_WORD_WERE, EC_WORD_WEAK, EC_WORD_ELLIPSIS},
			.speechAfter = {EC_WORD_HAHAHA, EC_WORD_ELLIPSIS, EC_WORD_WE_RE, EC_WORD_TOTALLY, EC_WORD_USELESS, EC_WORD_ELLIPSIS},
		#endif
			.mons = {
				{
					.species = SPECIES_HYPNO,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_FIRE_PUNCH, MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_NIGHTMARE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x87, // MALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("HYPNOMADE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("HYPNO"),
					#else
					.nickname = _("HYPNO"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_HITMONCHAN,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_DETECT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0F, // MALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TYGNON"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NOCKCHAN"),
					#else
					.nickname = _("HITMONCHAN"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MACHAMP,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_FLAMETHROWER, MOVE_BRICK_BREAK, MOVE_SCARY_FACE, MOVE_DIG},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x43, // MALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MACKOGNEUR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MACHOMEI"),
					#else
					.nickname = _("MACHAMP"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_HOUNDOOM,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_ROAR, MOVE_FLAMETHROWER, MOVE_BITE, MOVE_PROTECT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x87, // MALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("DEMOLOSSE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("HUNDEMON"),
					#else
					.nickname = _("HOUNDOOM"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PRIMEAPE,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_OVERHEAT, MOVE_SWAGGER, MOVE_SEISMIC_TOSS, MOVE_DOUBLE_TEAM},
					.hpEV = 100,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 110,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x8C, // MALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("COLOSSINGE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RASAFF"),
					#else
					.nickname = _("PRIMEAPE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_HERACROSS,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_LEER},
					.hpEV = 110,
					.attackEV = 0,
					.defenseEV = 200,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 200,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x85, // MALE IMPISH
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("SCARHINO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SKARABORN"),
					#else
					.nickname = _("HERACROSS"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x000160b1
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Knockout_1 = {
	.id = 7,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_KNOCKOUT,
	.prize = TTPRIZE_METAL_COAT,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("JORDI"),
			.facilityClass = FACILITY_CLASS_BIKER,
			.textColor = 3,
			.speechBefore = {EC_WORD_HEH, EC_WORD_UNDEFINED, EC_WORD_EXCL_EXCL, EC_WORD_GUARD, EC_WORD_NEAR, EC_WORD_EXCL},
			.speechWin = {EC_WORD_LET_S, EC_WORD_VERY, EC_WORD_BUT, EC_WORD_NITWIT, EC_WORD_VERY, EC_WORD_APPROVED},
			.speechLose = {EC_WORD_LET_S, EC_WORD_VERY, EC_WORD_BUT, EC_WORD_NITWIT, EC_WORD_VERY, EC_WORD_PATTERN},
			.speechAfter = {EC_WORD_WHOAH, EC_WORD_UNDEFINED, EC_WORD_LET_S, EC_WORD_VERY, EC_WORD_APPROVED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("JORDY"),
			.facilityClass = FACILITY_CLASS_BIKER,
			.textColor = 3,
			.speechBefore = {EC_WORD_WHICH, EC_WORD_PLEASE, EC_WORD_TAKE_THAT, EC_WORD_TOO_LATE, EC_WORD_LIMBER, EC_WORD_ELLIPSIS},
			.speechWin = {EC_WORD_REFUSE, EC_WORD_MEAN, EC_WORD_HOME, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_SOMETIME, EC_WORD_THERE, EC_WORD_CHANGE, EC_WORD_ALSO, EC_WORD_IF_I_LOSE, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_BUT, EC_WORD_HOW, EC_WORD_IS_IT_QUES, EC_WORD_FAINTED, EC_WORD_IF_I_LOSE, EC_WORD_QUES},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("ANGELO"),
			.facilityClass = FACILITY_CLASS_BIKER,
			.textColor = 3,
			.speechBefore = {EC_WORD_AHAHA, EC_WORD_AHAHA, EC_WORD_WIMPY, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_WHERE, EC_WORD_PUSHOVER, EC_WORD_YOU_RE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WHAT, EC_WORD_FIGHTING, EC_WORD_EXCELLENT, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_DARN, EC_WORD_EXCL, EC_WORD_I, EC_WORD_ISN_T, EC_WORD_UNDERSTAND, EC_WORD_NOT},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("MIGUEL"),
			.facilityClass = FACILITY_CLASS_BIKER,
			.textColor = 3,
			.speechBefore = {EC_WORD_DON_T, EC_WORD_MAKE, EC_WORD_ME, EC_WORD_GIGGLE, EC_WORD_YOU, EC_WORD_PUSHOVER},
			.speechWin = {EC_WORD_WHAT, EC_WORD_FOR, EC_WORD_AN, EC_WORD_PUSHOVER, EC_WORD_YOU_RE, EC_WORD_EXCL},
			.speechLose = {EC_WORD_YOU, EC_WORD_GOT, EC_WORD_FULL, EC_WORD_FIGHTING, EC_WORD_MAKE, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_DARN, EC_WORD_EXCL, EC_WORD_I, EC_WORD_UNDERSTAND, EC_WORD_IT, EC_WORD_DON_T},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("JORDY"),
			.facilityClass = FACILITY_CLASS_BIKER,
			.textColor = 3,
			.speechBefore = {EC_WORD_DON_T, EC_WORD_MAKE, EC_WORD_ME, EC_WORD_GIGGLE, EC_WORD_YOU, EC_WORD_PUSHOVER},
			.speechWin = {EC_WORD_WHAT, EC_WORD_A_LITTLE, EC_WORD_PUSHOVER, EC_WORD_YOU, EC_WORD_ARE, EC_WORD_EXCL},
			.speechLose = {EC_WORD_YOU, EC_WORD_WERE, EC_WORD_READY, EC_WORD_TO, EC_WORD_ROCK, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_DARN, EC_WORD_EXCL, EC_WORD_I, EC_WORD_DON_T, EC_WORD_GET, EC_WORD_IT},
		#endif
			.mons = {
				{
					.species = SPECIES_MAGBY,
					.heldItem = ITEM_LAX_INCENSE,
					.moves = {MOVE_SMOKESCREEN, MOVE_CONFUSE_RAY, MOVE_FLAMETHROWER, MOVE_SCREECH},
					.hpEV = 210,
					.attackEV = 30,
					.defenseEV = 30,
					.speedEV = 0,
					.spAttackEV = 210,
					.spDefenseEV = 30,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x43, // MALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MAGBY"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MAGBY"),
					#else
					.nickname = _("MAGBY"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_CLEFFA,
					.heldItem = ITEM_LAX_INCENSE,
					.moves = {MOVE_ATTRACT, MOVE_CHARM, MOVE_SECRET_POWER, MOVE_FLASH},
					.hpEV = 210,
					.attackEV = 210,
					.defenseEV = 30,
					.speedEV = 0,
					.spAttackEV = 30,
					.spDefenseEV = 30,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0xCA, // MALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MELO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PII"),
					#else
					.nickname = _("CLEFFA"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_IGGLYBUFF,
					.heldItem = ITEM_LAX_INCENSE,
					.moves = {MOVE_SING, MOVE_HIDDEN_POWER, MOVE_CHARM, MOVE_DOUBLE_TEAM},
					.hpEV = 210,
					.attackEV = 0,
					.defenseEV = 45,
					.speedEV = 210,
					.spAttackEV = 0,
					.spDefenseEV = 45,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0xD2, // MALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TOUDOUDOU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("FLUFFELUFF"),
					#else
					.nickname = _("IGGLYBUFF"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SMOOCHUM,
					.heldItem = ITEM_LAX_INCENSE,
					.moves = {MOVE_FAKE_TEARS, MOVE_PSYCHIC, MOVE_MEAN_LOOK, MOVE_SING},
					.hpEV = 210,
					.attackEV = 0,
					.defenseEV = 45,
					.speedEV = 0,
					.spAttackEV = 210,
					.spDefenseEV = 45,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x11, // FEMALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LIPPOUTI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KUSSILLA"),
					#else
					.nickname = _("SMOOCHUM"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_TOGEPI,
					.heldItem = ITEM_LAX_INCENSE,
					.moves = {MOVE_SWEET_KISS, MOVE_YAWN, MOVE_ANCIENT_POWER, MOVE_DOUBLE_TEAM},
					.hpEV = 210,
					.attackEV = 210,
					.defenseEV = 45,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 45,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x34, // MALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TOGEPI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TOGEPI"),
					#else
					.nickname = _("TOGEPI"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_PICHU,
					.heldItem = ITEM_LAX_INCENSE,
					.moves = {MOVE_THUNDER_WAVE, MOVE_SHOCK_WAVE, MOVE_SWEET_KISS, MOVE_FLASH},
					.hpEV = 210,
					.attackEV = 0,
					.defenseEV = 45,
					.speedEV = 0,
					.spAttackEV = 210,
					.spDefenseEV = 45,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x8E, // MALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PICHU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PICHU"),
					#else
					.nickname = _("PICHU"),
					#endif
					.friendship = 0
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("ERNESTO"),
			.facilityClass = FACILITY_CLASS_BIKER,
			.textColor = 1,
			.speechBefore = {EC_WORD_LET_S, EC_WORD_EXCITING, EC_WORD_LOWS, EC_WORD_RECOMMEND, EC_WORD_FIGHTS, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_WHERE, EC_WORD_LET_S, EC_WORD_VERY, EC_WORD_GUTSY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WILL_BE_HERE, EC_WORD_PLUS, EC_WORD_NITWIT, EC_WORD_DEFEATED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_EXCL_EXCL, EC_WORD_DOWN, EC_WORD_IF_I_LOSE, EC_WORD_EXCL, EC_WORD_SIGH, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("ERNEST"),
			.facilityClass = FACILITY_CLASS_BIKER,
			.textColor = 1,
			.speechBefore = {EC_WORD_AS_IF, EC_WORD_WILL_BE_HERE, EC_WORD_AWFULLY, EC_WORD_MEAN, EC_WORD_NAP, EC_WORD_QUES},
			.speechWin = {EC_WORD_LOWS, EC_WORD_AS_IF, EC_WORD_GUTSY, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_SCARY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_NOW, EC_WORD_PRAISE, EC_WORD_NAP, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("ERNEST"),
			.facilityClass = FACILITY_CLASS_BIKER,
			.textColor = 1,
			.speechBefore = {EC_WORD_DID, EC_WORD_SLEEP, EC_WORD_CASE, EC_WORD_CHILDREN, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_LACKS, EC_WORD_OF, EC_WORD_GUTSY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_I_AM, EC_WORD_TOTALLY, EC_WORD_EAT, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_I_AM, EC_WORD_TIRED, EC_WORD_WILL, EC_WORD_MAKE, EC_WORD_AN, EC_WORD_NAP},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("ELERT"),
			.facilityClass = FACILITY_CLASS_BIKER,
			.textColor = 1,
			.speechBefore = {EC_WORD_IS_IT_QUES, EC_WORD_SLEEP, EC_WORD_TIME, EC_WORD_FOR, EC_WORD_CHILDREN, EC_WORD_EXCL},
			.speechWin = {EC_WORD_DON_T, EC_WORD_GUTSY, EC_WORD_THOSE_WERE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WHY, EC_WORD_DID, EC_WORD_YOU, EC_WORD_CRUSH, EC_WORD_ME, EC_WORD_QUES},
			.speechAfter = {EC_WORD_I_AM, EC_WORD_DEFEATED, EC_WORD_I, EC_WORD_NEED, EC_WORD_A, EC_WORD_NAP},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("ERNEST"),
			.facilityClass = FACILITY_CLASS_BIKER,
			.textColor = 1,
			.speechBefore = {EC_WORD_IT_S, EC_WORD_SLEEP, EC_WORD_TIME, EC_WORD_FOR, EC_WORD_CHILDREN, EC_WORD_EXCL},
			.speechWin = {EC_WORD_NOT, EC_WORD_GUTSY, EC_WORD_ENOUGH, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WHY, EC_WORD_DID, EC_WORD_YOU, EC_WORD_CRUSH, EC_WORD_ME, EC_WORD_QUES},
			.speechAfter = {EC_WORD_I_AM, EC_WORD_BEAT, EC_WORD_I, EC_WORD_NEED, EC_WORD_A, EC_WORD_NAP},
		#endif
			.mons = {
				{
					.species = SPECIES_CLEFFA,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_SWEET_KISS, MOVE_FRUSTRATION, MOVE_SING, MOVE_ATTRACT},
					.hpEV = 210,
					.attackEV = 210,
					.defenseEV = 45,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 45,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0xCA, // MALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MELO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PII"),
					#else
					.nickname = _("CLEFFA"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_MAGBY,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_FRUSTRATION, MOVE_CONFUSE_RAY, MOVE_FLAMETHROWER, MOVE_TOXIC},
					.hpEV = 90,
					.attackEV = 210,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 210,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x4D, // MALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MAGBY"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MAGBY"),
					#else
					.nickname = _("MAGBY"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_TOGEPI,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_FRUSTRATION, MOVE_DOUBLE_TEAM, MOVE_TOXIC, MOVE_SWEET_KISS},
					.hpEV = 210,
					.attackEV = 210,
					.defenseEV = 45,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 45,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x34, // MALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TOGEPI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TOGEPI"),
					#else
					.nickname = _("TOGEPI"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_SMOOCHUM,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_MEAN_LOOK, MOVE_PERISH_SONG, MOVE_TOXIC, MOVE_FLASH},
					.hpEV = 90,
					.attackEV = 0,
					.defenseEV = 210,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 210,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x16, // FEMALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LIPPOUTI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KUSSILLA"),
					#else
					.nickname = _("SMOOCHUM"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_IGGLYBUFF,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_DOUBLE_TEAM, MOVE_SWEET_KISS, MOVE_SEISMIC_TOSS, MOVE_FLASH},
					.hpEV = 210,
					.attackEV = 0,
					.defenseEV = 45,
					.speedEV = 210,
					.spAttackEV = 0,
					.spDefenseEV = 45,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x0A, // FEMALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TOUDOUDOU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("FLUFFELUFF"),
					#else
					.nickname = _("IGGLYBUFF"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_PICHU,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_TAIL_WHIP, MOVE_FRUSTRATION, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
					.hpEV = 90,
					.attackEV = 210,
					.defenseEV = 0,
					.speedEV = 210,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PICHU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PICHU"),
					#else
					.nickname = _("PICHU"),
					#endif
					.friendship = 0
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("GABI"),
			.facilityClass = FACILITY_CLASS_CUE_BALL,
			.textColor = 1,
			.speechBefore = {EC_WORD_LAY, EC_WORD_OR, EC_WORD_LISTEN, EC_WORD_GIVES, EC_WORD_NATURALLY, EC_WORD_IF_I_LOSE},
			.speechWin = {EC_WORD_NEAR, EC_WORD_UNDEFINED, EC_WORD_WHERE, EC_WORD_CAN_T, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_EXCL_EXCL, EC_WORD_BUT, EC_WORD_ANTICIPATION, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_A_TINY_BIT, EC_WORD_NEXT, EC_WORD_BATTLE, EC_WORD_IS, EC_WORD_ANY, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("GABRIEL"),
			.facilityClass = FACILITY_CLASS_CUE_BALL,
			.textColor = 1,
			.speechBefore = {EC_WORD_LET_ME_WIN, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_TRUMP_CARD, EC_WORD_EXCL, EC_WORD_AGREE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_HOW, EC_WORD_QUES_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WEREN_T, EC_WORD_ANOTHER, EC_WORD_TIME, EC_WORD_WIN, EC_WORD_ISN_T_IT_QUES, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("GABRIEL"),
			.facilityClass = FACILITY_CLASS_CUE_BALL,
			.textColor = 1,
			.speechBefore = {EC_WORD_AIYEEH, EC_WORD_I_VE_ARRIVED, EC_WORD_FOR, EC_WORD_SIBLINGS, EC_WORD_FIGHT, EC_WORD_EXCL},
			.speechWin = {EC_WORD_I_AM, EC_WORD_INVINCIBLE, EC_WORD_UNDERSTOOD, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_THAT_WAS, EC_WORD_EH_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WILL, EC_WORD_WIN, EC_WORD_THE, EC_WORD_NEXT, EC_WORD_FIGHTING, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("KARL"),
			.facilityClass = FACILITY_CLASS_CUE_BALL,
			.textColor = 1,
			.speechBefore = {EC_WORD_YAHOO, EC_WORD_EXCL, EC_WORD_HERE_I_COME, EC_WORD_BABE, EC_WORD_TO, EC_WORD_SWARM},
			.speechWin = {EC_WORD_I_AM, EC_WORD_INVINCIBLE, EC_WORD_YOU, EC_WORD_MUST_BE, EC_WORD_KNOW, EC_WORD_ELLIPSIS},
			.speechLose = {EC_WORD_WHAT, EC_WORD_WAS, EC_WORD_THAT, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_NEXT, EC_WORD_TIME, EC_WORD_WILL, EC_WORD_I, EC_WORD_WIN, EC_WORD_EXCL},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("GABRIEL"),
			.facilityClass = FACILITY_CLASS_CUE_BALL,
			.textColor = 1,
			.speechBefore = {EC_WORD_YAHOO, EC_WORD_EXCL, EC_WORD_HERE_I_COME, EC_WORD_TO, EC_WORD_SWARM, EC_WORD_YOU},
			.speechWin = {EC_WORD_I_AM, EC_WORD_INVINCIBLE, EC_WORD_YOU, EC_WORD_GOT, EC_WORD_THAT, EC_WORD_QUES},
			.speechLose = {EC_WORD_WHAT, EC_WORD_WAS, EC_WORD_THAT, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_I_AM, EC_WORD_GOING, EC_WORD_TO, EC_WORD_WIN, EC_WORD_NEXT, EC_WORD_TIME},
		#endif
			.mons = {
				{
					.species = SPECIES_PICHU,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_THUNDER_WAVE, MOVE_FRUSTRATION, MOVE_THUNDERBOLT, MOVE_ATTRACT},
					.hpEV = 90,
					.attackEV = 210,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 210,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x81, // MALE NAUGHTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PICHU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PICHU"),
					#else
					.nickname = _("PICHU"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_TOGEPI,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_ATTRACT, MOVE_FRUSTRATION, MOVE_TOXIC, MOVE_SUBSTITUTE},
					.hpEV = 210,
					.attackEV = 210,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 90,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x33, // MALE LONELY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TOGEPI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TOGEPI"),
					#else
					.nickname = _("TOGEPI"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_CLEFFA,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_ENCORE, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_FLASH},
					.hpEV = 210,
					.attackEV = 0,
					.defenseEV = 150,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 150,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0xCF, // MALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MELO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PII"),
					#else
					.nickname = _("CLEFFA"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_IGGLYBUFF,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_ATTRACT, MOVE_SUBSTITUTE, MOVE_SING, MOVE_PERISH_SONG},
					.hpEV = 210,
					.attackEV = 0,
					.defenseEV = 210,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 90,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0xCF, // MALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TOUDOUDOU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("FLUFFELUFF"),
					#else
					.nickname = _("IGGLYBUFF"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_SMOOCHUM,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_SWEET_KISS, MOVE_PERISH_SONG, MOVE_TOXIC, MOVE_ATTRACT},
					.hpEV = 110,
					.attackEV = 0,
					.defenseEV = 200,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 200,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x16, // FEMALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LIPPOUTI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KUSSILLA"),
					#else
					.nickname = _("SMOOCHUM"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_MAGBY,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_LEER, MOVE_FRUSTRATION, MOVE_SUBSTITUTE, MOVE_FLAMETHROWER},
					.hpEV = 90,
					.attackEV = 210,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 210,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x4D, // MALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MAGBY"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MAGBY"),
					#else
					.nickname = _("MAGBY"),
					#endif
					.friendship = 0
				},
			}
		},
	},
	.checksum = 0x00017a4a
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Knockout_2 = {
	.id = 8,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_KNOCKOUT,
	.prize = TTPRIZE_UP_GRADE,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("MIGUE"),
			.facilityClass = FACILITY_CLASS_HIKER,
			.textColor = 5,
			.speechBefore = {EC_WORD_TOO_LATE, EC_WORD_POKEMON, EC_WORD_WAS, EC_WORD_VERY, EC_WORD_FULL, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_ABSOLUTELY, EC_WORD_DID, EC_WORD_NITWIT, EC_WORD_LET_S, EC_WORD_VERY, EC_WORD_PATTERN},
			.speechLose = {EC_WORD_ABSOLUTELY, EC_WORD_DID, EC_WORD_NITWIT, EC_WORD_ISN_T_IT_QUES, EC_WORD_VERY, EC_WORD_PATTERN},
			.speechAfter = {EC_WORD_EXCL_EXCL, EC_WORD_DOWN, EC_WORD_INCREDIBLE, EC_WORD_UNDEFINED, EC_WORD_LET_S, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("MIKE"),
			.facilityClass = FACILITY_CLASS_HIKER,
			.textColor = 5,
			.speechBefore = {EC_WORD_ALL, EC_WORD_TOO, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_BREAK, EC_WORD_EXCL},
			.speechWin = {EC_WORD_AND, EC_WORD_LET_S, EC_WORD_WILL_BE_HERE, EC_WORD_NATURALLY, EC_WORD_STRONG, EC_WORD_QUES},
			.speechLose = {EC_WORD_FOR, EC_WORD_WILL, EC_WORD_EXCUSE_ME, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_CONGRATS, EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("MAXIME"),
			.facilityClass = FACILITY_CLASS_HIKER,
			.textColor = 5,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_SUPER, EC_WORD_POWER, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_EXCUSE_ME, EC_WORD_OR, EC_WORD_IS, EC_WORD_HER, EC_MOVE(STRENGTH), EC_WORD_EXCL},
			.speechLose = {EC_WORD_I_VE, EC_WORD_SUMMER, EC_WORD_DEFEATED, EC_WORD_WITH, EC_WORD_YOURS, EC_MOVE2(FAKE_OUT)},
			.speechAfter = {EC_WORD_YEAH, EC_WORD_VERY, EC_WORD_GOOD, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("MELVIN"),
			.facilityClass = FACILITY_CLASS_HIKER,
			.textColor = 5,
			.speechBefore = {EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_FULL, EC_WORD_FROM, EC_WORD_POWER},
			.speechWin = {EC_WORD_WHAT_S_UP_QUES, EC_WORD_WHERE, EC_WORD_IS, EC_WORD_YOURS, EC_WORD_POWER, EC_WORD_QUES},
			.speechLose = {EC_WORD_YOU_VE, EC_WORD_ME, EC_WORD_WITH, EC_MOVE2(FAKE_OUT), EC_WORD_DEFEATED, EC_WORD_ELLIPSIS},
			.speechAfter = {EC_WORD_OH_YEAH, EC_WORD_EXCL, EC_WORD_IT_S, EC_WORD_VERY, EC_WORD_EXCELLENT, EC_WORD_EXCL},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("MIKE"),
			.facilityClass = FACILITY_CLASS_HIKER,
			.textColor = 5,
			.speechBefore = {EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_FULL, EC_WORD_OF, EC_WORD_POWER},
			.speechWin = {EC_WORD_WHAT_S_UP_QUES, EC_WORD_WHERE, EC_WORD_IS, EC_WORD_YOUR, EC_WORD_POWER, EC_WORD_QUES},
			.speechLose = {EC_WORD_YOU, EC_WORD_GOT, EC_WORD_ME, EC_WORD_WITH, EC_WORD_YOUR, EC_MOVE2(FAKE_OUT)},
			.speechAfter = {EC_WORD_OH_YEAH, EC_WORD_EXCL, EC_WORD_THAT_S, EC_WORD_PRETTY, EC_WORD_EXCELLENT, EC_WORD_EXCL},
		#endif
			.mons = {
				{
					.species = SPECIES_PINSIR,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_GUILLOTINE, MOVE_BRICK_BREAK, MOVE_DIG, MOVE_REVENGE},
					.hpEV = 100,
					.attackEV = 210,
					.defenseEV = 0,
					.speedEV = 100,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("SCARABRUTE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PINSIR"),
					#else
					.nickname = _("PINSIR"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CHARIZARD,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_DRAGON_CLAW, MOVE_METAL_CLAW, MOVE_AERIAL_ACE, MOVE_OUTRAGE},
					.hpEV = 200,
					.attackEV = 200,
					.defenseEV = 0,
					.speedEV = 110,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x35, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("DRACAUFEU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GLURAK"),
					#else
					.nickname = _("CHARIZARD"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_RHYDON,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_MEGAHORN, MOVE_HORN_DRILL, MOVE_CRUSH_CLAW, MOVE_BRICK_BREAK},
					.hpEV = 100,
					.attackEV = 210,
					.defenseEV = 200,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x09, // FEMALE LAX
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RHINOFEROS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RIZEROS"),
					#else
					.nickname = _("RHYDON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ARCANINE,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_EXTREME_SPEED, MOVE_IRON_TAIL, MOVE_AERIAL_ACE, MOVE_DIG},
					.hpEV = 110,
					.attackEV = 200,
					.defenseEV = 0,
					.speedEV = 200,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x3F, // MALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ARCANIN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ARKANI"),
					#else
					.nickname = _("ARCANINE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GOLEM,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_DOUBLE_EDGE, MOVE_ROLLOUT, MOVE_BRICK_BREAK, MOVE_DIG},
					.hpEV = 100,
					.attackEV = 210,
					.defenseEV = 200,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x02, // FEMALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GROLEM"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GEOWAZ"),
					#else
					.nickname = _("GOLEM"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_HOUNDOOM,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_CRUNCH, MOVE_REVERSAL, MOVE_DOUBLE_EDGE, MOVE_COUNTER},
					.hpEV = 200,
					.attackEV = 110,
					.defenseEV = 200,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 1,
					.personality = 0x08, // FEMALE IMPISH
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("DEMOLOSSE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("HUNDEMON"),
					#else
					.nickname = _("HOUNDOOM"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("REBECA"),
			.facilityClass = FACILITY_CLASS_CRUSH_GIRL,
			.textColor = 5,
			.speechBefore = {EC_WORD_I, EC_WORD_FOREVER, EC_WORD_FAINTED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_MUFUFU, EC_WORD_UNDEFINED, EC_WORD_LISTEN, EC_WORD_FORGETS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_ARRGH, EC_WORD_UNDEFINED, EC_WORD_CRY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_THAT_S, EC_WORD_THESE_WERE, EC_WORD_IS, EC_WORD_NITWIT, EC_WORD_LET_S, EC_WORD_APPROVED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("REBECCA"),
			.facilityClass = FACILITY_CLASS_CRUSH_GIRL,
			.textColor = 5,
			.speechBefore = {EC_WORD_WIN, EC_WORD_ISN_T_IT_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_EHEHE, EC_WORD_ELLIPSIS, EC_WORD_ARE, EC_WORD_PLUS, EC_WORD_STRONG, EC_WORD_EXCL},
			.speechLose = {EC_WORD_SHOCKED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_SIGH, EC_WORD_ELLIPSIS, EC_WORD_WILL_BE_HERE, EC_WORD_PLUS, EC_WORD_STRONG, EC_WORD_ELLIPSIS},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("REBECCA"),
			.facilityClass = FACILITY_CLASS_CRUSH_GIRL,
			.textColor = 5,
			.speechBefore = {EC_WORD_I, EC_WORD_COULD, EC_WORD_WIN, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_THAT_WAS, EC_WORD_HOT, EC_WORD_BUT, EC_WORD_I_AM, EC_WORD_OVERWHELMING, EC_WORD_EXCL},
			.speechLose = {EC_WORD_ARRGH, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_YOU_RE, EC_WORD_FANTASTIC, EC_WORD_I_AM, EC_WORD_IN, EC_WORD_ANGER, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("SILKE"),
			.facilityClass = FACILITY_CLASS_CRUSH_GIRL,
			.textColor = 5,
			.speechBefore = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_WINS, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_TO, EC_WORD_WELL, EC_WORD_BUT, EC_WORD_I_AM, EC_WORD_OVERWHELMING, EC_WORD_EXCL},
			.speechLose = {EC_WORD_ARRGH, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_YOU, EC_WORD_ANGERS, EC_WORD_ME, EC_WORD_BUT, EC_WORD_YOU_RE, EC_WORD_TOUGH},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("REBECCA"),
			.facilityClass = FACILITY_CLASS_CRUSH_GIRL,
			.textColor = 5,
			.speechBefore = {EC_WORD_I, EC_WORD_WILL, EC_WORD_WIN, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_IT_S, EC_WORD_TOO, EC_WORD_BAD, EC_WORD_BUT, EC_WORD_I_AM, EC_WORD_OVERWHELMING},
			.speechLose = {EC_WORD_ARRGH, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_YOU, EC_WORD_ANGER, EC_WORD_ME, EC_WORD_BUT, EC_WORD_YOU_RE, EC_WORD_TOUGH},
		#endif
			.mons = {
				{
					.species = SPECIES_SANDSLASH,
					.heldItem = ITEM_SILK_SCARF,
					.moves = {MOVE_CRUSH_CLAW, MOVE_DIG, MOVE_DOUBLE_EDGE, MOVE_AERIAL_ACE},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x0D, // FEMALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("SABLAIREAU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SANDAMER"),
					#else
					.nickname = _("SANDSLASH"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_DRAGONAIR,
					.heldItem = ITEM_SILK_SCARF,
					.moves = {MOVE_OUTRAGE, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE, MOVE_SLAM},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x03, // FEMALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("DRACO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("DRAGONIR"),
					#else
					.nickname = _("DRAGONAIR"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_RAPIDASH,
					.heldItem = ITEM_SILK_SCARF,
					.moves = {MOVE_BOUNCE, MOVE_IRON_TAIL, MOVE_THRASH, MOVE_DOUBLE_EDGE},
					.hpEV = 110,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 1,
					.personality = 0x94, // MALE CAREFUL
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GALOPA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GALLOPA"),
					#else
					.nickname = _("RAPIDASH"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_FLAREON,
					.heldItem = ITEM_SILK_SCARF,
					.moves = {MOVE_IRON_TAIL, MOVE_FLAIL, MOVE_BITE, MOVE_DOUBLE_EDGE},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x21, // MALE IMPISH
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PYROLI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("FLAMARA"),
					#else
					.nickname = _("FLAREON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_NIDOQUEEN,
					.heldItem = ITEM_SILK_SCARF,
					.moves = {MOVE_SUPERPOWER, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_COUNTER},
					.hpEV = 110,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x17, // FEMALE CAREFUL
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NIDOQUEEN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NIDOQUEEN"),
					#else
					.nickname = _("NIDOQUEEN"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PERSIAN,
					.heldItem = ITEM_SILK_SCARF,
					.moves = {MOVE_RETURN, MOVE_AERIAL_ACE, MOVE_IRON_TAIL, MOVE_DIG},
					.hpEV = 110,
					.attackEV = 200,
					.defenseEV = 0,
					.speedEV = 200,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PERSIAN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SNOBILIKAT"),
					#else
					.nickname = _("PERSIAN"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("NICOLÁS"),
			.facilityClass = FACILITY_CLASS_BLACK_BELT,
			.textColor = 5,
			.speechBefore = {EC_WORD_MEET_YOU, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_WHERE, EC_WORD_OVER, EC_WORD_COME_ON, EC_WORD_UNDEFINED, EC_WORD_PATTERN, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WHERE, EC_WORD_LET_S, EC_WORD_EVERY, EC_WORD_PATTERN, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WHOM, EC_WORD_NITWIT, EC_WORD_FORGETS, EC_WORD_A_LOT, EC_WORD_PLUS, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("DYLAN"),
			.facilityClass = FACILITY_CLASS_BLACK_BELT,
			.textColor = 5,
			.speechBefore = {EC_WORD_STOP, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_WILL_BE_HERE, EC_WORD_LOWS, EC_WORD_WEAK, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_INCREDIBLE, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_TODAY, EC_WORD_AS_IF, EC_WORD_NON_STOP, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("NICOLAS"),
			.facilityClass = FACILITY_CLASS_BLACK_BELT,
			.textColor = 5,
			.speechBefore = {EC_WORD_NOW, EC_WORD_IF, EC_WORD_ENOUGH, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_YOU_RE, EC_WORD_TOO_WEAK, EC_WORD_FOR, EC_WORD_WHO_WAS, EC_WORD_WHEN_I_WIN, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WHY, EC_WORD_THIS_IS_IT_EXCL, EC_WORD_LOSS, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_DID, EC_WORD_LEARN, EC_WORD_LAY, EC_WORD_PLUS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("ALFONS"),
			.facilityClass = FACILITY_CLASS_BLACK_BELT,
			.textColor = 5,
			.speechBefore = {EC_WORD_HERE, EC_WORD_IS, EC_WORD_WHERE, EC_WORD_STOP, EC_WORD_IS, EC_WORD_EXCL},
			.speechWin = {EC_WORD_YOU_RE, EC_WORD_TOO_WEAK, EC_WORD_TO, EC_WORD_EVER, EC_WORD_FAINT, EC_WORD_ME},
			.speechLose = {EC_WORD_WHY, EC_WORD_COULD, EC_WORD_I, EC_WORD_BABE, EC_WORD_DON_T, EC_WORD_FAINT},
			.speechAfter = {EC_WORD_I, EC_WORD_MUST_BE, EC_WORD_MORE, EC_WORD_TRAIN, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("NICOLAS"),
			.facilityClass = FACILITY_CLASS_BLACK_BELT,
			.textColor = 5,
			.speechBefore = {EC_WORD_THIS, EC_WORD_IS, EC_WORD_WHERE, EC_WORD_YOU, EC_WORD_STOP, EC_WORD_EXCL},
			.speechWin = {EC_WORD_YOU_RE, EC_WORD_TOO_WEAK, EC_WORD_TO, EC_WORD_EVER, EC_WORD_BEAT, EC_WORD_ME},
			.speechLose = {EC_WORD_WHY, EC_WORD_COULDN_T, EC_WORD_I, EC_WORD_BEAT, EC_WORD_YOU, EC_WORD_QUES},
			.speechAfter = {EC_WORD_I, EC_WORD_HAVE, EC_WORD_TO, EC_WORD_TRAIN, EC_WORD_SOME, EC_WORD_MORE},
		#endif
			.mons = {
				{
					.species = SPECIES_HITMONLEE,
					.heldItem = ITEM_KINGS_ROCK,
					.moves = {MOVE_MEGA_KICK, MOVE_REVERSAL, MOVE_FOCUS_PUNCH, MOVE_BRICK_BREAK},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x08, // MALE IMPISH
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("KICKLEE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KICKLEE"),
					#else
					.nickname = _("HITMONLEE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SCYTHER,
					.heldItem = ITEM_KINGS_ROCK,
					.moves = {MOVE_SLASH, MOVE_REVERSAL, MOVE_STEEL_WING, MOVE_AERIAL_ACE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x17, // FEMALE CAREFUL
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("INSECATEUR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SICHLOR"),
					#else
					.nickname = _("SCYTHER"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MAGMAR,
					.heldItem = ITEM_KINGS_ROCK,
					.moves = {MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK, MOVE_IRON_TAIL},
					.hpEV = 110,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x53, // MALE IMPISH
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MAGMAR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MAGMAR"),
					#else
					.nickname = _("MAGMAR"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MACHAMP,
					.heldItem = ITEM_KINGS_ROCK,
					.moves = {MOVE_DYNAMIC_PUNCH, MOVE_DIG, MOVE_CROSS_CHOP, MOVE_REVENGE},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x3F, // MALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MACKOGNEUR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MACHOMEI"),
					#else
					.nickname = _("MACHAMP"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PRIMEAPE,
					.heldItem = ITEM_KINGS_ROCK,
					.moves = {MOVE_THRASH, MOVE_CROSS_CHOP, MOVE_IRON_TAIL, MOVE_AERIAL_ACE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 200,
					.speedEV = 110,
					.spAttackEV = 0,
					.spDefenseEV = 200,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x08, // FEMALE IMPISH
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("COLOSSINGE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RASAFF"),
					#else
					.nickname = _("PRIMEAPE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_POLIWRATH,
					.heldItem = ITEM_KINGS_ROCK,
					.moves = {MOVE_BODY_SLAM, MOVE_DIG, MOVE_MEGA_KICK, MOVE_COUNTER},
					.hpEV = 110,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x0D, // FEMALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TARTARD"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("QUAPPO"),
					#else
					.nickname = _("POLIWRATH"),
					#endif
					.friendship = 255
				},
			}
		},
	},
	.checksum = 0x00016f05
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Single_5 = {
	.id = 9,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_SINGLE,
	.prize = TTPRIZE_HP_UP,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("PEPE"),
			.facilityClass = FACILITY_CLASS_CAMPER,
			.textColor = 1,
			.speechBefore = {EC_WORD_TOO_LATE, EC_WORD_POKEMON, EC_WORD_WAS, EC_WORD_LEFT, EC_WORD_FULL, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_WAS, EC_WORD_FULL, EC_WORD_OH_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_AS_MUCH_AS, EC_WORD_POKEMON, EC_WORD_WAS, EC_WORD_LEFT, EC_WORD_FULL, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_KNOW, EC_WORD_ONLY, EC_WORD_RANK, EC_WORD_UNDEFINED, EC_WORD_IS, EC_WORD_MATCH_UP},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("JOEY"),
			.facilityClass = FACILITY_CLASS_CAMPER,
			.textColor = 1,
			.speechBefore = {EC_WORD_ALL, EC_WORD_TOO, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_TOO_STRONG, EC_WORD_EXCL},
			.speechWin = {EC_WORD_WHICH, EC_WORD_IS_IT_QUES, EC_WORD_SAYS, EC_WORD_THOSE_WERE, EC_WORD_QUES, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WILL, EC_WORD_POKEMON, EC_WORD_TOO_STRONG, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_FUNNY, EC_WORD_TERRIBLE, EC_WORD_AROUND, EC_WORD_POKEMON, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("JO"),
			.facilityClass = FACILITY_CLASS_CAMPER,
			.textColor = 1,
			.speechBefore = {EC_WORD_WHO_IS, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_HEALTHY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_THAT_WAS, EC_WORD_A_LOT, EC_WORD_RECOMMEND, EC_WORD_HERE, EC_WORD_POKEMON, EC_WORD_QUES},
			.speechLose = {EC_WORD_YOUR, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_REALLY, EC_WORD_HEALTHY, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_HER, EC_WORD_MATCH_UP, EC_WORD_IS, EC_WORD_EXCELLENT, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("LUDGER"),
			.facilityClass = FACILITY_CLASS_CAMPER,
			.textColor = 1,
			.speechBefore = {EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_TERRIBLE, EC_WORD_TOUGH, EC_WORD_EXCL},
			.speechWin = {EC_WORD_BEEN, EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_TO, EC_WORD_A_LOT, EC_WORD_QUES},
			.speechLose = {EC_WORD_YOURS, EC_WORD_POKEMON, EC_WORD_THOSE, EC_WORD_A_LOT, EC_WORD_TO, EC_WORD_TOUGH},
			.speechAfter = {EC_WORD_ABSOLUTELY, EC_WORD_WAY, EC_WORD_POKEMON, EC_WORD_MATCH_UP, EC_WORD_IS, EC_WORD_IMPORTANT},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("JOEY"),
			.facilityClass = FACILITY_CLASS_CAMPER,
			.textColor = 1,
			.speechBefore = {EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_SCARY, EC_WORD_STRONG, EC_WORD_EXCL},
			.speechWin = {EC_WORD_WERE, EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_TOO, EC_WORD_MUCH, EC_WORD_QUES},
			.speechLose = {EC_WORD_YOUR, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_WAY, EC_WORD_TOO_STRONG, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_THE, EC_WORD_WAY, EC_WORD_POKEMON, EC_WORD_MATCH_UP, EC_WORD_IS, EC_WORD_IMPORTANT},
		#endif
			.mons = {
				{
					.species = SPECIES_MURKROW,
					.heldItem = ITEM_BLACK_GLASSES,
					.moves = {MOVE_FAINT_ATTACK, MOVE_AERIAL_ACE, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x89, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("CORNEBRE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KRAMURX"),
					#else
					.nickname = _("MURKROW"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_TAUROS,
					.heldItem = ITEM_SILK_SCARF,
					.moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_ROCK_TOMB, MOVE_PURSUIT},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0C, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TAUROS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TAUROS"),
					#else
					.nickname = _("TAUROS"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SLOWBRO,
					.heldItem = ITEM_MYSTIC_WATER,
					.moves = {MOVE_AMNESIA, MOVE_PSYCHIC, MOVE_SURF, MOVE_ICE_BEAM},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x89, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("FLAGADOSS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LAHMUS"),
					#else
					.nickname = _("SLOWBRO"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ARBOK,
					.heldItem = ITEM_POISON_BARB,
					.moves = {MOVE_IRON_TAIL, MOVE_SLUDGE_BOMB, MOVE_ROCK_SLIDE, MOVE_TOXIC},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x89, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ARBOK"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ARBOK"),
					#else
					.nickname = _("ARBOK"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_NIDOKING,
					.heldItem = ITEM_SOFT_SAND,
					.moves = {MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_SLUDGE_BOMB, MOVE_ROCK_SLIDE},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0C, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NIDOKING"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NIDOKING"),
					#else
					.nickname = _("NIDOKING"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_RAPIDASH,
					.heldItem = ITEM_CHARCOAL,
					.moves = {MOVE_FLAMETHROWER, MOVE_BOUNCE, MOVE_QUICK_ATTACK, MOVE_DOUBLE_KICK},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x89, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GALOPA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GALLOPA"),
					#else
					.nickname = _("RAPIDASH"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00016417
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Single_8 = {
	.id = 10,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_SINGLE,
	.prize = TTPRIZE_METAL_COAT,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("LILA"),
			.facilityClass = FACILITY_CLASS_PKMN_BREEDER,
			.textColor = 1,
			.speechBefore = {EC_WORD_QUES_EXCL, EC_WORD_AND, EC_WORD_YOU, EC_WORD_DOWN, EC_WORD_DIDN_T, EC_WORD_QUES},
			.speechWin = {EC_WORD_I, EC_WORD_TRUST, EC_WORD_THE, EC_WORD_TOO_LATE, EC_WORD_POKEMON, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WHERE, EC_WORD_SINCE, EC_WORD_TALKING, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_ANYWHERE, EC_WORD_THE, EC_WORD_AS_MUCH_AS, EC_WORD_POKEMON, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("LILLY"),
			.facilityClass = FACILITY_CLASS_PKMN_BREEDER,
			.textColor = 1,
			.speechBefore = {EC_WORD_LIVING, EC_WORD_AROUND, EC_WORD_POKEMON, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_POKEMON, EC_WORD_EXCL, EC_WORD_WEAKENED, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_IS_IT_QUES, EC_WORD_LOST, EC_WORD_TO_THEM, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_DISASTER, EC_WORD_ALL, EC_WORD_POKEMON, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("FLO"),
			.facilityClass = FACILITY_CLASS_PKMN_BREEDER,
			.textColor = 1,
			.speechBefore = {EC_WORD_WANT, EC_WORD_SOMETHING, EC_WORD_THING, EC_WORD_IN, EC_MOVE(SKILL_SWAP), EC_WORD_EXCL},
			.speechWin = {EC_WORD_LIKE, EC_WORD_WHO_IS, EC_WORD_POKEMON, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_NEED, EC_WORD_OF, EC_WORD_SOMETHING, EC_WORD_THING, EC_WORD_IN, EC_MOVE(SKILL_SWAP)},
			.speechAfter = {EC_WORD_I_VE, EC_WORD_ALWAYS, EC_WORD_TRUST, EC_WORD_IN, EC_WORD_WHO_IS, EC_WORD_POKEMON},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("LILLY"),
			.facilityClass = FACILITY_CLASS_PKMN_BREEDER,
			.textColor = 1,
			.speechBefore = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_SOMETHING, EC_WORD_BACK, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_I, EC_WORD_BELIEVE, EC_WORD_ON, EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_EXCL},
			.speechLose = {EC_WORD_I, EC_WORD_NEED, EC_WORD_SOMETHING, EC_WORD_BACK, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_GOT, EC_WORD_ALWAYS, EC_WORD_MY, EC_WORD_TRUST},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("LILY"),
			.facilityClass = FACILITY_CLASS_PKMN_BREEDER,
			.textColor = 1,
			.speechBefore = {EC_WORD_I, EC_WORD_WANT, EC_WORD_SOMETHING, EC_WORD_IN, EC_MOVE(RETURN), EC_WORD_EXCL},
			.speechWin = {EC_WORD_I, EC_WORD_BELIEVE, EC_WORD_IN, EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_EXCL},
			.speechLose = {EC_WORD_I, EC_WORD_NEED, EC_WORD_SOMETHING, EC_WORD_IN, EC_MOVE(RETURN), EC_WORD_ELLIPSIS},
			.speechAfter = {EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_HAVE, EC_WORD_MY, EC_WORD_TRUST, EC_WORD_FOREVER},
		#endif
			.mons = {
				{
					.species = SPECIES_CLEFAIRY,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_CHARM, MOVE_METRONOME, MOVE_RETURN, MOVE_REST},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x0C, // FEMALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MELOFEE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PIEPI"),
					#else
					.nickname = _("CLEFAIRY"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_TOGEPI,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_CHARM, MOVE_METRONOME, MOVE_RETURN, MOVE_REST},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x0C, // FEMALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TOGEPI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TOGEPI"),
					#else
					.nickname = _("TOGEPI"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MEOWTH,
					.heldItem = ITEM_SILK_SCARF,
					.moves = {MOVE_CHARM, MOVE_ASSIST, MOVE_RETURN, MOVE_REST},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x89, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MIAOUSS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MAUZI"),
					#else
					.nickname = _("MEOWTH"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_JIGGLYPUFF,
					.heldItem = ITEM_SILK_SCARF,
					.moves = {MOVE_CHARM, MOVE_ROLLOUT, MOVE_RETURN, MOVE_REST},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x0C, // FEMALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RONDOUDOU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PUMMELUFF"),
					#else
					.nickname = _("JIGGLYPUFF"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SNORLAX,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_CHARM, MOVE_ROLLOUT, MOVE_RETURN, MOVE_REST},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x25, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RONFLEX"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RELAXO"),
					#else
					.nickname = _("SNORLAX"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SNUBBULL,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_CHARM, MOVE_LICK, MOVE_RETURN, MOVE_REST},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x0C, // FEMALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("SNUBBULL"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SNUBBULL"),
					#else
					.nickname = _("SNUBBULL"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00016cb7
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Single_2 = {
	.id = 11,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_SINGLE,
	.prize = TTPRIZE_UP_GRADE,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("BARTOLO"),
			.facilityClass = FACILITY_CLASS_BUG_CATCHER,
			.textColor = 1,
			.speechBefore = {EC_WORD_A_TINY_BIT, EC_WORD_POISON, EC_WORD_IS, EC_WORD_HOPELESS, EC_WORD_OH_QUES, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_A_TINY_BIT, EC_WORD_POISON, EC_WORD_IS, EC_WORD_LEFT, EC_WORD_HOPELESS, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_LET_S, EC_WORD_INCREDIBLE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_A_TINY_BIT, EC_WORD_POISON, EC_WORD_IS, EC_WORD_A_LITTLE, EC_WORD_BAD, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("MAT"),
			.facilityClass = FACILITY_CLASS_BUG_CATCHER,
			.textColor = 1,
			.speechBefore = {EC_WORD_IT, EC_WORD_POISON, EC_WORD_IS, EC_WORD_SCARY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_AGREE, EC_WORD_IT, EC_WORD_POISON, EC_WORD_IS, EC_WORD_THIN, EC_WORD_EXCL},
			.speechLose = {EC_WORD_IT, EC_WORD_POISON, EC_WORD_AS_IF, EC_WORD_IS, EC_WORD_LATE, EC_WORD_QUES_EXCL},
			.speechAfter = {EC_WORD_DISASTER, EC_WORD_IT, EC_WORD_POISON, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("FLORENT"),
			.facilityClass = FACILITY_CLASS_BUG_CATCHER,
			.textColor = 1,
			.speechBefore = {EC_WORD_THE, EC_WORD_POISON, EC_WORD_IT_S, EC_WORD_PSYCHIC, EC_WORD_HUH_QUES, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDERSTOOD, EC_WORD_QUES, EC_WORD_THE, EC_WORD_POISON, EC_WORD_IT_S, EC_WORD_TERRIBLE},
			.speechLose = {EC_WORD_EH_QUES, EC_WORD_THE, EC_WORD_POISON, EC_WORD_EVEN_SO, EC_WORD_NOT, EC_WORD_WALKS},
			.speechAfter = {EC_WORD_THE, EC_WORD_POISON, EC_WORD_IT_S, EC_WORD_FEELING, EC_MOVE(TORMENT), EC_WORD_HUH_QUES},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("BRUNO"),
			.facilityClass = FACILITY_CLASS_BUG_CATCHER,
			.textColor = 1,
			.speechBefore = {EC_WORD_POISON, EC_WORD_IS, EC_WORD_SO, EC_WORD_VERY, EC_WORD_AWFUL, EC_WORD_ISN_T_IT_QUES},
			.speechWin = {EC_WORD_LOOKS, EC_WORD_QUES, EC_WORD_IS, EC_WORD_POISON, EC_WORD_DON_T, EC_WORD_TERRIBLE},
			.speechLose = {EC_WORD_EH_QUES, EC_WORD_OUR, EC_WORD_POISON, EC_WORD_WASN_T, EC_WORD_ALL_RIGHT, EC_WORD_QUES_EXCL},
			.speechAfter = {EC_WORD_POISON, EC_WORD_IS, EC_WORD_A, EC_WORD_TERRIBLE, EC_MOVE(TORMENT), EC_WORD_ISN_T_IT_QUES},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("BRANDON"),
			.facilityClass = FACILITY_CLASS_BUG_CATCHER,
			.textColor = 1,
			.speechBefore = {EC_WORD_POISON, EC_WORD_IS, EC_WORD_JUST, EC_WORD_SO, EC_WORD_AWFUL, EC_WORD_ISN_T_IT_QUES},
			.speechWin = {EC_WORD_SEE, EC_WORD_QUES, EC_WORD_ISN_T, EC_WORD_POISON, EC_WORD_TERRIBLE, EC_WORD_QUES},
			.speechLose = {EC_WORD_HUH_QUES, EC_WORD_OUR, EC_WORD_POISON, EC_WORD_DIDN_T, EC_WORD_WORK, EC_WORD_QUES},
			.speechAfter = {EC_WORD_POISON, EC_WORD_IS, EC_WORD_A, EC_WORD_TERRIBLE, EC_MOVE(TORMENT), EC_WORD_ISN_T_IT_QUES},
		#endif
			.mons = {
				{
					.species = SPECIES_BUTTERFREE,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_SILVER_WIND, MOVE_SLEEP_POWDER, MOVE_PSYCHIC, MOVE_SUPERSONIC},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x8A, // MALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PAPILUSION"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SMETTBO"),
					#else
					.nickname = _("BUTTERFREE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_BEEDRILL,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_SLUDGE_BOMB, MOVE_TWINEEDLE, MOVE_DOUBLE_TEAM, MOVE_AERIAL_ACE},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x8A, // MALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("DARDARGNAN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("BIBOR"),
					#else
					.nickname = _("BEEDRILL"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PARASECT,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_GIGA_DRAIN, MOVE_LIGHT_SCREEN, MOVE_STUN_SPORE, MOVE_SLASH},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x8A, // MALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PARASECT"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PARASEK"),
					#else
					.nickname = _("PARASECT"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_YANMA,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_HYPNOSIS, MOVE_SONIC_BOOM, MOVE_QUICK_ATTACK, MOVE_AERIAL_ACE},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 1,
					.personality = 0x8A, // MALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("YANMA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("YANMA"),
					#else
					.nickname = _("YANMA"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SHUCKLE,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_TOXIC, MOVE_ROCK_TOMB, MOVE_PROTECT, MOVE_REST},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x8A, // MALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("CARATROC"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("POTTROTT"),
					#else
					.nickname = _("SHUCKLE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_FORRETRESS,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_PROTECT, MOVE_SANDSTORM},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x8A, // MALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("FORETRESS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("FORSTELLKA"),
					#else
					.nickname = _("FORRETRESS"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00016e1f
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Double_3 = {
	.id = 12,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_DOUBLE,
	.prize = TTPRIZE_IRON,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("RIC-ELA"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_JUST, EC_WORD_BROTHER, EC_WORD_IS, EC_WORD_INCREDIBLE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_JUST, EC_WORD_BROTHER, EC_WORD_IS, EC_WORD_FOR_NOW, EC_WORD_GENIUS, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_JUST, EC_WORD_BROTHER, EC_WORD_IS, EC_WORD_FOR_NOW, EC_WORD_PATTERN, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_EXCL_EXCL, EC_WORD_BROTHER, EC_WORD_BELONGS_TO, EC_WORD_NITWIT, EC_WORD_FIGHTS, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("RIC & RITA"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_WITH, EC_WORD_BROTHER, EC_WORD_IS, EC_WORD_BEAUTIFUL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_WITH, EC_WORD_BROTHER, EC_WORD_IS, EC_WORD_VERY, EC_WORD_BEAUTIFUL, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WITH, EC_WORD_BROTHER, EC_WORD_IS, EC_WORD_LOWS, EC_WORD_BEAUTIFUL, EC_WORD_QUES},
			.speechAfter = {EC_WORD_WITH, EC_WORD_BROTHER, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("RIC & LILI"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_MY, EC_WORD_BROTHER, EC_WORD_IS, EC_WORD_REALLY, EC_WORD_UNBELIEVABLE, EC_WORD_EXCL_EXCL},
			.speechWin = {EC_WORD_MY, EC_WORD_BROTHER, EC_WORD_IS, EC_WORD_RECOMMEND, EC_WORD_EXCUSE, EC_WORD_EXCL_EXCL},
			.speechLose = {EC_WORD_MY, EC_WORD_BROTHER, EC_WORD_IS, EC_WORD_NOT, EC_WORD_UNBELIEVABLE, EC_WORD_QUES},
			.speechAfter = {EC_WORD_MY, EC_WORD_BROTHER, EC_WORD_FIGHTING, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("MAX&KLARA"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_MY, EC_WORD_BIG, EC_WORD_BROTHER, EC_WORD_IS, EC_WORD_VERY, EC_WORD_CUTE},
			.speechWin = {EC_WORD_MY, EC_WORD_BIG, EC_WORD_BROTHER, EC_WORD_IS, EC_WORD_TO, EC_WORD_CUTE},
			.speechLose = {EC_WORD_MY, EC_WORD_BIG, EC_WORD_BROTHER, EC_WORD_IS, EC_WORD_DON_T, EC_WORD_CUTE},
			.speechAfter = {EC_WORD_BIG, EC_WORD_BROTHER, EC_WORD_FIGHT, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("RIC & RENE"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_MY, EC_WORD_BIG, EC_WORD_BROTHER, EC_WORD_IS, EC_WORD_REALLY, EC_WORD_AWESOME},
			.speechWin = {EC_WORD_MY, EC_WORD_BIG, EC_WORD_BROTHER, EC_WORD_IS, EC_WORD_TOO, EC_WORD_AWESOME},
			.speechLose = {EC_WORD_MY, EC_WORD_BIG, EC_WORD_BROTHER, EC_WORD_ISN_T, EC_WORD_AWESOME, EC_WORD_QUES},
			.speechAfter = {EC_WORD_BIG, EC_WORD_BROTHER, EC_WORD_FIGHT, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#endif
			.mons = {
				{
					.species = SPECIES_HITMONLEE,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_ROCK_TOMB, MOVE_HI_JUMP_KICK, MOVE_BULK_UP, MOVE_PROTECT},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x02, // MALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("KICKLEE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KICKLEE"),
					#else
					.nickname = _("HITMONLEE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_RHYDON,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_MEGAHORN, MOVE_ROCK_BLAST, MOVE_BRICK_BREAK, MOVE_PROTECT},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x7F, // MALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RHINOFEROS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RIZEROS"),
					#else
					.nickname = _("RHYDON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GOLEM,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_BRICK_BREAK, MOVE_ROCK_BLAST, MOVE_DIG, MOVE_PROTECT},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x02, // FEMALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GROLEM"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GEOWAZ"),
					#else
					.nickname = _("GOLEM"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MAGMAR,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_FIRE_PUNCH, MOVE_BRICK_BREAK, MOVE_CONFUSE_RAY, MOVE_PROTECT},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x4F, // MALE NAUGHTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MAGMAR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MAGMAR"),
					#else
					.nickname = _("MAGMAR"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_HERACROSS,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_MEGAHORN, MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_PROTECT},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x7F, // MALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("SCARHINO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SKARABORN"),
					#else
					.nickname = _("HERACROSS"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_POLIWRATH,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_FOCUS_PUNCH, MOVE_SURF, MOVE_BULK_UP, MOVE_PROTECT},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x97, // MALE LONELY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TARTARD"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("QUAPPO"),
					#else
					.nickname = _("POLIWRATH"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("RIC-ELA"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_ISN_T_IT_QUES, EC_WORD_FOR_NOW, EC_WORD_MASTER, EC_WORD_THE, EC_WORD_POKEMON, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_ISN_T_IT_QUES, EC_WORD_A_TINY_BIT, EC_WORD_PLUS, EC_WORD_MASTER, EC_WORD_THE, EC_WORD_POKEMON},
			.speechLose = {EC_WORD_JOKING, EC_WORD_WHERE, EC_WORD_ISN_T_IT_QUES, EC_WORD_EVERY, EC_WORD_MASTER, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WHOM, EC_WORD_NITWIT, EC_WORD_BE, EC_WORD_SPIRALING, EC_WORD_INSIDE, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("RIC & RITA"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_ARE, EC_WORD_THIN, EC_WORD_AND, EC_WORD_VERY, EC_WORD_BEAUTIFUL, EC_WORD_EXCL},
			.speechWin = {EC_WORD_ARE, EC_WORD_THIN, EC_WORD_AND, EC_WORD_LOWS, EC_WORD_BEAUTIFUL, EC_WORD_EXCL},
			.speechLose = {EC_WORD_AS_IF, EC_WORD_ARE, EC_WORD_THIN, EC_WORD_AND, EC_WORD_BEAUTIFUL, EC_WORD_QUES},
			.speechAfter = {EC_WORD_GIVE, EC_WORD_ALWAYS, EC_WORD_NOT_VERY, EC_WORD_WITH, EC_WORD_ABOVE, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("RIC & LILI"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_REALLY, EC_WORD_UNBELIEVABLE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_I_AM, EC_WORD_RECOMMEND, EC_WORD_AWESOME, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_HUH_QUES, EC_WORD_EH_QUES, EC_WORD_I_AM, EC_WORD_NOT, EC_WORD_AWESOME, EC_WORD_QUES},
			.speechAfter = {EC_WORD_WILL, EC_WORD_MAKE, EC_WORD_OF, EC_WORD_MY, EC_WORD_BETTER, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("MAX&KLARA"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_REALLY, EC_WORD_CUTE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_I_AM, EC_WORD_TO, EC_WORD_CUTE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_EH_QUES, EC_WORD_I_AM, EC_WORD_NOT_VERY, EC_WORD_CUTE, EC_WORD_QUES, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_I, EC_WORD_GIVE, EC_WORD_MY, EC_WORD_BEST, EC_WORD_EXCL, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("RIC & RENE"),
			.facilityClass = FACILITY_CLASS_CRUSH_KIN,
			.textColor = 5,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_REALLY, EC_WORD_AWESOME, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_I_AM, EC_WORD_TOO, EC_WORD_AWESOME, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_HUH_QUES, EC_WORD_UNDEFINED, EC_WORD_I_AM, EC_WORD_NOT_VERY, EC_WORD_AWESOME, EC_WORD_QUES},
			.speechAfter = {EC_WORD_I, EC_WORD_WILL, EC_WORD_DO, EC_WORD_MY, EC_WORD_BEST, EC_WORD_EXCL},
		#endif
			.mons = {
				{
					.species = SPECIES_MACHAMP,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_CROSS_CHOP, MOVE_SEISMIC_TOSS, MOVE_ROCK_TOMB, MOVE_PROTECT},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x4E, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MACKOGNEUR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MACHOMEI"),
					#else
					.nickname = _("MACHAMP"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PINSIR,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_ROCK_TOMB, MOVE_SEISMIC_TOSS, MOVE_SUBMISSION, MOVE_PROTECT},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("SCARABRUTE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PINSIR"),
					#else
					.nickname = _("PINSIR"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MAROWAK,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_BRICK_BREAK, MOVE_BONEMERANG, MOVE_AERIAL_ACE, MOVE_PROTECT},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x03, // FEMALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("OSSATUEUR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KNOGGA"),
					#else
					.nickname = _("MAROWAK"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_HITMONCHAN,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_MACH_PUNCH, MOVE_THUNDER_PUNCH, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x03, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TYGNON"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NOCKCHAN"),
					#else
					.nickname = _("HITMONCHAN"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ELECTABUZZ,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK, MOVE_THUNDER_WAVE, MOVE_PROTECT},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x4F, // MALE NAUGHTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ELEKTEK"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ELEKTEK"),
					#else
					.nickname = _("ELECTABUZZ"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_POLIWRATH,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_FOCUS_PUNCH, MOVE_SURF, MOVE_BULK_UP, MOVE_PROTECT},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x97, // MALE LONELY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TARTARD"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("QUAPPO"),
					#else
					.nickname = _("POLIWRATH"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x000166b4
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Double_1 = {
	.id = 13,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_DOUBLE,
	.prize = TTPRIZE_DRAGON_SCALE,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("CEA-NEA"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 5,
			.speechBefore = {EC_WORD_OR, EC_WORD_LISTEN, EC_WORD_HOWEVER, EC_WORD_THEIR, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_MUFUFU, EC_WORD_GIGGLE, EC_WORD_EXCUSE_ME, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_FUFUFU, EC_WORD_UNDEFINED, EC_WORD_HEHE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WHOM, EC_WORD_NITWIT, EC_WORD_FIGHTS, EC_WORD_PLUS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("JEN & KIRA"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 5,
			.speechBefore = {EC_WORD_WHICH, EC_WORD_GIVE, EC_WORD_MAKING, EC_WORD_HOW, EC_WORD_ARE, EC_WORD_STRONG},
			.speechWin = {EC_WORD_AGREE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_OOPS, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_IS, EC_WORD_ABOVE, EC_WORD_ALLOW, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("ERY & KIRA"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 5,
			.speechBefore = {EC_WORD_WILL, EC_WORD_MAKE, EC_WORD_OF, EC_WORD_MY, EC_WORD_BETTER, EC_WORD_EXCL},
			.speechWin = {EC_WORD_EHEHE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_ARRGH, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WILL, EC_WORD_MAKE, EC_WORD_LAY, EC_WORD_BETTER, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("LENA&PETRA"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 5,
			.speechBefore = {EC_WORD_I, EC_WORD_WILL, EC_WORD_IT, EC_WORD_TOUGH, EC_WORD_TRIES, EC_WORD_EXCL},
			.speechWin = {EC_WORD_EHEHE, EC_WORD_YAY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WAAAH, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_I, EC_WORD_WILL, EC_WORD_TRIES, EC_WORD_BETTER, EC_WORD_TO, EC_WORD_HIS},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("JEN & KIRA"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 5,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_GOING, EC_WORD_TO, EC_WORD_TRY, EC_WORD_HARD, EC_WORD_EXCL},
			.speechWin = {EC_WORD_EHEHE, EC_WORD_YAY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WAAAH, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_I, EC_WORD_WILL, EC_WORD_TRY, EC_WORD_TO, EC_WORD_GET, EC_WORD_BETTER},
		#endif
			.mons = {
				{
					.species = SPECIES_JOLTEON,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_QUICK_ATTACK, MOVE_THUNDERBOLT, MOVE_DOUBLE_KICK, MOVE_PIN_MISSILE},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x29, // MALE MILD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("VOLTALI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("BLITZA"),
					#else
					.nickname = _("JOLTEON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ESPEON,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_QUICK_ATTACK, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_BITE},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x29, // MALE MILD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MENTALI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PSIANA"),
					#else
					.nickname = _("ESPEON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_FLAREON,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_QUICK_ATTACK, MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_IRON_TAIL},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x33, // MALE LONELY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PYROLI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("FLAMARA"),
					#else
					.nickname = _("FLAREON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_VAPOREON,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_QUICK_ATTACK, MOVE_WATERFALL, MOVE_ICE_BEAM, MOVE_BITE},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x10, // FEMALE MILD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("AQUALI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("AQUANA"),
					#else
					.nickname = _("VAPOREON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_EEVEE,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_QUICK_ATTACK, MOVE_DOUBLE_EDGE, MOVE_BITE, MOVE_IRON_TAIL},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x10, // FEMALE MILD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("EVOLI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("EVOLI"),
					#else
					.nickname = _("EEVEE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_UMBREON,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_QUICK_ATTACK, MOVE_FAINT_ATTACK, MOVE_SHADOW_BALL, MOVE_IRON_TAIL},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x10, // FEMALE MILD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NOCTALI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NACHTARA"),
					#else
					.nickname = _("UMBREON"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("CEA-NEA"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 3,
			.speechBefore = {EC_WORD_BELONGS_TO, EC_WORD_NITWIT, EC_WORD_FIGHTS, EC_WORD_MISS, EC_WORD_THOSE_ARE, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_AIYEEH, EC_WORD_DASH_DASH_DASH, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_CRIES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_ON, EC_WORD_FIGHTS, EC_WORD_PLUS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("JEN & KIRA"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 3,
			.speechBefore = {EC_WORD_OR, EC_WORD_VERY, EC_WORD_TOO_STRONG, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_AGREE, EC_WORD_UNDEFINED, EC_WORD_AHAHA, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WAAAH, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_ABOVE, EC_WORD_WEREN_T, EC_WORD_ESCAPE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("ERY & KIRA"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 3,
			.speechBefore = {EC_WORD_GO, EC_WORD_EXCL_EXCL, EC_WORD_GO_AHEAD, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_GIGGLE, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_ARRGH, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_DID, EC_WORD_WORKING, EC_WORD_BETTER, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("LENA&PETRA"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 3,
			.speechBefore = {EC_WORD_LET_S, EC_WORD_TRIES, EC_WORD_TOUGH, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_GIGGLE, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WAAAH, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WE, EC_WORD_MUST_BE, EC_WORD_WORKING, EC_WORD_BETTER, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("JEN & KIRA"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 3,
			.speechBefore = {EC_WORD_LET_S, EC_WORD_TRY, EC_WORD_HARD, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_GIGGLE, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WAAAH, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WE, EC_WORD_HAVE, EC_WORD_TO, EC_WORD_WORK, EC_WORD_BETTER, EC_WORD_UNDEFINED},
		#endif
			.mons = {
				{
					.species = SPECIES_JOLTEON,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HELPING_HAND, MOVE_THUNDERBOLT},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 10 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x0A, // FEMALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("VOLTALI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("BLITZA"),
					#else
					.nickname = _("JOLTEON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ESPEON,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_HELPING_HAND, MOVE_PSYCHIC},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 10 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x0A, // FEMALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MENTALI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PSIANA"),
					#else
					.nickname = _("ESPEON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_FLAREON,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HELPING_HAND, MOVE_FLAMETHROWER},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 13 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x0D, // FEMALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PYROLI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("FLAMARA"),
					#else
					.nickname = _("FLAREON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_VAPOREON,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HELPING_HAND, MOVE_SURF},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 35 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x23, // MALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("AQUALI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("AQUANA"),
					#else
					.nickname = _("VAPOREON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_EEVEE,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HELPING_HAND, MOVE_DOUBLE_EDGE},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 35 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x23, // MALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("EVOLI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("EVOLI"),
					#else
					.nickname = _("EEVEE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_UMBREON,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HELPING_HAND, MOVE_FAINT_ATTACK},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 35 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x23, // MALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NOCTALI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NACHTARA"),
					#else
					.nickname = _("UMBREON"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00017fc2
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Double_4 = {
	.id = 14,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_DOUBLE,
	.prize = TTPRIZE_MENTAL_HERB,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("NEL-MAI"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_USING, EC_MOVE(EARTHQUAKE), EC_WORD_IS, EC_WORD_VERY, EC_WORD_DONE, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_QUES_EXCL, EC_WORD_LAY, EC_WORD_WILL, EC_WORD_UNDEFINED, EC_WORD_GIDDY, EC_WORD_QUES},
			.speechLose = {EC_WORD_ABSOLUTELY, EC_WORD_PLAYS, EC_WORD_GIDDY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_JUST, EC_WORD_AREN_T, EC_WORD_WHERE, EC_WORD_DON_T, EC_WORD_HAPPY, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("ISAC & MAG"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_THAT_WAS, EC_WORD_ANY, EC_MOVE(EARTHQUAKE), EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_MISS, EC_WORD_SURPRISE, EC_WORD_EH_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_BUT, EC_WORD_MISS, EC_WORD_SURPRISE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_LAY, EC_WORD_WEREN_T, EC_WORD_BETTER, EC_WORD_DUDE, EC_WORD_ARE, EC_WORD_HAPPILY},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("ISAC & MAG"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_WITH, EC_WORD_THIS, EC_MOVE(EARTHQUAKE), EC_WORD_YOU_RE, EC_WORD_WEIRD, EC_WORD_EXCL},
			.speechWin = {EC_WORD_YOU, EC_WORD_SIBLINGS, EC_WORD_SENSE, EC_WORD_NOT, EC_WORD_WEIRD, EC_WORD_QUES},
			.speechLose = {EC_WORD_I_AM, EC_WORD_ALL, EC_WORD_WEIRD, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_TO_HER, EC_WORD_NOT, EC_WORD_FEAR, EC_WORD_SHE_IS, EC_WORD_LOVEY_DOVEY, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("HANS&ANNA"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_OUR, EC_MOVE(EARTHQUAKE), EC_WORD_DOESN_T, EC_WORD_BABE, EC_WORD_SHAKY, EC_WORD_EXCL},
			.speechWin = {EC_WORD_FEELING, EC_WORD_SHAKY, EC_WORD_EH_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_I_AM, EC_WORD_FULL, EC_WORD_SHAKY, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_MY, EC_WORD_GIRL, EC_WORD_ISN_T, EC_WORD_SHAKY, EC_WORD_SHE_IS, EC_WORD_LOVEY_DOVEY},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("ISAC & MAG"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_OUR, EC_MOVE(EARTHQUAKE), EC_WORD_WILL, EC_WORD_MAKE, EC_WORD_YOU, EC_WORD_SHAKY},
			.speechWin = {EC_WORD_FEELING, EC_WORD_SHAKY, EC_WORD_HUH_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_I_AM, EC_WORD_ALL, EC_WORD_SHAKY, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_MY, EC_WORD_GIRL, EC_WORD_ISN_T, EC_WORD_SHAKY, EC_WORD_SHE_IS, EC_WORD_LOVEY_DOVEY},
		#endif
			.mons = {
				{
					.species = SPECIES_NIDOKING,
					.heldItem = ITEM_SOFT_SAND,
					.moves = {MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_SHADOW_BALL, MOVE_FIRE_BLAST},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x03, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NIDOKING"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NIDOKING"),
					#else
					.nickname = _("NIDOKING"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GLIGAR,
					.heldItem = ITEM_SOFT_SAND,
					.moves = {MOVE_EARTHQUAKE, MOVE_QUICK_ATTACK, MOVE_AERIAL_ACE, MOVE_IRON_TAIL},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("SCORPLANE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SKORGLA"),
					#else
					.nickname = _("GLIGAR"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_QUAGSIRE,
					.heldItem = ITEM_SOFT_SAND,
					.moves = {MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_BLIZZARD, MOVE_BRICK_BREAK},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MARAISTE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MORLORD"),
					#else
					.nickname = _("QUAGSIRE"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_PILOSWINE,
					.heldItem = ITEM_SOFT_SAND,
					.moves = {MOVE_EARTHQUAKE, MOVE_BLIZZARD, MOVE_ANCIENT_POWER, MOVE_BODY_SLAM},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("COCHIGNON"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KEIFEL"),
					#else
					.nickname = _("PILOSWINE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GOLEM,
					.heldItem = ITEM_SOFT_SAND,
					.moves = {MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_BRICK_BREAK, MOVE_EXPLOSION},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GROLEM"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GEOWAZ"),
					#else
					.nickname = _("GOLEM"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_STEELIX,
					.heldItem = ITEM_SOFT_SAND,
					.moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_DRAGON_BREATH, MOVE_DOUBLE_EDGE},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("STEELIX"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("STAHLOS"),
					#else
					.nickname = _("STEELIX"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("NEL-MAI"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_MOVE(EARTHQUAKE), EC_WORD_IS, EC_WORD_LEFT, EC_WORD_DONE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_HUMPH, EC_WORD_UNDEFINED, EC_MOVE(EARTHQUAKE), EC_WORD_IS, EC_WORD_AROUND, EC_WORD_PLUS},
			.speechLose = {EC_WORD_SIGH, EC_WORD_UNDEFINED, EC_WORD_WILL_BE_HERE, EC_WORD_HAPPY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_AROUND, EC_WORD_NITWIT, EC_WORD_WILL_BE_HERE, EC_WORD_IS, EC_WORD_ALL_RIGHT, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("ISAC & MAG"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_ALL, EC_WORD_TOO, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_RIPPED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_PLAY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_ISN_T_IT_QUES, EC_WORD_AS_IF, EC_WORD_ARE, EC_WORD_VERY, EC_WORD_SHAKY, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_IT, EC_WORD_WITH, EC_WORD_BOY, EC_WORD_IS, EC_WORD_HAPPILY, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("ISAC & MAG"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_WHO_IS, EC_WORD_POKEMON, EC_WORD_ARE, EC_WORD_NOT, EC_WORD_HEALTHY, EC_WORD_EXCL_EXCL},
			.speechWin = {EC_WORD_YOU_VE, EC_WORD_EXCUSE, EC_WORD_UNDERSTOOD, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_HUH_QUES, EC_WORD_I_VE, EC_WORD_FEAR, EC_WORD_ME, EC_WORD_NOW, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_I_VE, EC_WORD_NOT, EC_WORD_FEAR, EC_WORD_I_AM, EC_WORD_LOVEY_DOVEY, EC_WORD_ELLIPSIS},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("HANS&ANNA"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_WHO_WAS, EC_WORD_POKEMON, EC_WORD_WILL, EC_WORD_DON_T, EC_WORD_SHAKY, EC_WORD_EXCL},
			.speechWin = {EC_WORD_LOOKS, EC_WORD_QUES, EC_WORD_I, EC_WORD_HAVE, EC_WORD_DON_T, EC_WORD_LAY},
			.speechLose = {EC_WORD_EH_QUES, EC_WORD_YOU, EC_WORD_MAKE, EC_WORD_ME, EC_WORD_SHAKY, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_I_AM, EC_WORD_LOVEY_DOVEY, EC_WORD_FOR, EC_WORD_HE, EC_WORD_DON_T, EC_WORD_SHAKY},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("ISAC & MAG"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 1,
			.speechBefore = {EC_WORD_MY, EC_WORD_POKEMON, EC_WORD_DOESN_T, EC_WORD_GET, EC_WORD_ALL, EC_WORD_SHAKY},
			.speechWin = {EC_WORD_SEE, EC_WORD_QUES, EC_WORD_I, EC_WORD_DIDN_T, EC_WORD_LIE, EC_WORD_EXCL},
			.speechLose = {EC_WORD_HUH_QUES, EC_WORD_YOU, EC_WORD_LEFT, EC_WORD_ME, EC_WORD_FEELING, EC_WORD_SHAKY},
			.speechAfter = {EC_WORD_I_AM, EC_WORD_LOVEY_DOVEY, EC_WORD_FOR, EC_WORD_HIM, EC_WORD_NOT, EC_WORD_SHAKY},
		#endif
			.mons = {
				{
					.species = SPECIES_SKARMORY,
					.heldItem = ITEM_KINGS_ROCK,
					.moves = {MOVE_SANDSTORM, MOVE_STEEL_WING, MOVE_AIR_CUTTER, MOVE_SPIKES},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0B, // FEMALE HASTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("AIRMURE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PANZAERON"),
					#else
					.nickname = _("SKARMORY"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MANTINE,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_AERIAL_ACE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x0B, // FEMALE HASTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("DEMANTA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MANTAX"),
					#else
					.nickname = _("MANTINE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_JUMPLUFF,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_TAIL_WHIP, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_AERIAL_ACE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0B, // FEMALE HASTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("COTOVOL"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PAPUNGHA"),
					#else
					.nickname = _("JUMPLUFF"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GENGAR,
					.heldItem = ITEM_KINGS_ROCK,
					.moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_PSYCHIC},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0B, // FEMALE HASTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ECTOPLASMA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GENGAR"),
					#else
					.nickname = _("GENGAR"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CROBAT,
					.heldItem = ITEM_KINGS_ROCK,
					.moves = {MOVE_GIGA_DRAIN, MOVE_POISON_FANG, MOVE_FLY, MOVE_STEEL_WING},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0B, // FEMALE HASTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NOSTENFER"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("IKSBAT"),
					#else
					.nickname = _("CROBAT"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_XATU,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_AERIAL_ACE, MOVE_LIGHT_SCREEN},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0B, // FEMALE HASTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("XATU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("XATU"),
					#else
					.nickname = _("XATU"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00016bb0
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Knockout_8 = {
	.id = 15,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_KNOCKOUT,
	.prize = TTPRIZE_BRIGHT_POWDER,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("CHELO"),
			.facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
			.textColor = 7,
			.speechBefore = {EC_WORD_ISN_T_IT_QUES, EC_WORD_VERY, EC_WORD_UPSIDE_DOWN, EC_WORD_MISS, EC_WORD_THAT_S, EC_WORD_NATURE},
			.speechWin = {EC_WORD_FEELING, EC_WORD_MINUS, EC_WORD_ISN_T_IT_QUES, EC_WORD_UPSIDE_DOWN, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_BELONGS_TO, EC_WORD_NITWIT, EC_WORD_BE, EC_WORD_EXCELLENT, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WHERE, EC_WORD_BELONGS_TO, EC_WORD_NITWIT, EC_WORD_USING, EC_MOVE2(TOXIC), EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("PATRIZIA"),
			.facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
			.textColor = 7,
			.speechBefore = {EC_WORD_IT, EC_WORD_GREEN, EC_WORD_IS, EC_WORD_IMPORTANT, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_PLAYED, EC_WORD_THOSE_WERE, EC_WORD_IF_I_LOSE, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_LOOKS, EC_WORD_HEARING, EC_WORD_NITWIT, EC_WORD_IT, EC_WORD_GREEN, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_AS_IF, EC_WORD_FORGET, EC_WORD_MUST_BE, EC_WORD_IT, EC_WORD_GREEN, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("CHELSEA"),
			.facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
			.textColor = 7,
			.speechBefore = {EC_WORD_FEELING, EC_WORD_NATURE, EC_WORD_IS, EC_WORD_REALLY, EC_WORD_FANTASTIC, EC_WORD_EXCL},
			.speechWin = {EC_WORD_FEELING, EC_WORD_LOSS, EC_WORD_IS, EC_WORD_FOR, EC_WORD_HIM, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_LET_S, EC_WORD_NICE, EC_WORD_WITH, EC_WORD_FEELING, EC_WORD_NATURE, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_NOT, EC_WORD_OF, EC_WORD_POISON, EC_WORD_FOR, EC_WORD_FEELING, EC_WORD_NATURE},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("JUDITH"),
			.facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
			.textColor = 7,
			.speechBefore = {EC_WORD_ABSOLUTELY, EC_WORD_GREEN, EC_WORD_WORLD, EC_WORD_IS, EC_WORD_IMPORTANT, EC_WORD_ISN_T_IT_QUES},
			.speechWin = {EC_WORD_YOU, EC_WORD_GOT, EC_WORD_LOST, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_BE, EC_WORD_NICE, EC_WORD_TO, EC_WORD_THE, EC_WORD_GREEN, EC_WORD_WORLD},
			.speechAfter = {EC_WORD_POISON, EC_WORD_NEVER, EC_WORD_ABSOLUTELY, EC_WORD_GREEN, EC_WORD_WORLD, EC_WORD_EXCL},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("CHELSEA"),
			.facilityClass = FACILITY_CLASS_PKMN_RANGER_F,
			.textColor = 7,
			.speechBefore = {EC_WORD_THE, EC_WORD_GREEN, EC_WORD_WORLD, EC_WORD_IS, EC_WORD_IMPORTANT, EC_WORD_ISN_T_IT_QUES},
			.speechWin = {EC_WORD_YOU, EC_WORD_TAKE, EC_WORD_THE, EC_WORD_LOSS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_BE, EC_WORD_KIND, EC_WORD_TO, EC_WORD_THE, EC_WORD_GREEN, EC_WORD_WORLD},
			.speechAfter = {EC_WORD_DON_T, EC_WORD_EVER, EC_WORD_POISON, EC_WORD_THE, EC_WORD_GREEN, EC_WORD_WORLD},
		#endif
			.mons = {
				{
					.species = SPECIES_VILEPLUME,
					.heldItem = ITEM_PETAYA_BERRY,
					.moves = {MOVE_INGRAIN, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_STUN_SPORE},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x11, // FEMALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RAFFLESIA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GIFLOR"),
					#else
					.nickname = _("VILEPLUME"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_STARMIE,
					.heldItem = ITEM_PETAYA_BERRY,
					.moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_WATERFALL, MOVE_RECOVER},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 1,
					.personality = 0x10, // GENDERLESS MILD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("STAROSS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("STARMIE"),
					#else
					.nickname = _("STARMIE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_URSARING,
					.heldItem = ITEM_LIECHI_BERRY,
					.moves = {MOVE_FAINT_ATTACK, MOVE_BODY_SLAM, MOVE_BRICK_BREAK, MOVE_ROCK_TOMB},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x01, // FEMALE LONELY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("URSARING"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("URSARING"),
					#else
					.nickname = _("URSARING"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_NOCTOWL,
					.heldItem = ITEM_LIECHI_BERRY,
					.moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_FAINT_ATTACK, MOVE_AERIAL_ACE},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x01, // FEMALE LONELY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NOARFANG"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NOCTUH"),
					#else
					.nickname = _("NOCTOWL"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_NINETALES,
					.heldItem = ITEM_PETAYA_BERRY,
					.moves = {MOVE_GRUDGE, MOVE_OVERHEAT, MOVE_FAINT_ATTACK, MOVE_WILL_O_WISP},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x10, // FEMALE MILD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("FEUNARD"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("VULNONA"),
					#else
					.nickname = _("NINETALES"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_LEDIAN,
					.heldItem = ITEM_LIECHI_BERRY,
					.moves = {MOVE_SILVER_WIND, MOVE_SWIFT, MOVE_AERIAL_ACE, MOVE_TOXIC},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x01, // FEMALE LONELY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("COXYCLAQUE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LEDIAN"),
					#else
					.nickname = _("LEDIAN"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("TREMEL"),
			.facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
			.textColor = 7,
			.speechBefore = {EC_WORD_THAT_S, EC_WORD_NATURE, EC_WORD_PRAISE, EC_WORD_COMPLETE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_I, EC_WORD_WHOM, EC_MOVE(CHARM), EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_YOU, EC_WORD_HAVE, EC_WORD_A_LITTLE, EC_WORD_LIE, EC_WORD_COMPLETE, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_THAT_S, EC_WORD_NATURE, EC_WORD_IS, EC_WORD_GREEN, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("MIRKO"),
			.facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
			.textColor = 7,
			.speechBefore = {EC_WORD_IT, EC_WORD_GREEN, EC_WORD_IS, EC_WORD_WEREN_T, EC_WORD_BETTER, EC_WORD_LIFE},
			.speechWin = {EC_WORD_PLAYED, EC_WORD_VERY, EC_WORD_THOSE_WERE, EC_WORD_WEREN_T, EC_WORD_LOSS, EC_WORD_QUES},
			.speechLose = {EC_WORD_WEREN_T, EC_MOVE2(PROTECT), EC_WORD_NOT_VERY, EC_WORD_GREEN, EC_WORD_IS, EC_WORD_IMPORTANT},
			.speechAfter = {EC_WORD_IT, EC_WORD_GREEN, EC_WORD_IS, EC_WORD_INVINCIBLE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("JOSHUA"),
			.facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
			.textColor = 7,
			.speechBefore = {EC_WORD_ADORE, EC_WORD_THE, EC_WORD_WORLD, EC_WORD_OF, EC_WORD_FEELING, EC_WORD_NATURE},
			.speechWin = {EC_WORD_TAKE_THAT, EC_WORD_YOU_VE, EC_WORD_LOST, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_RULE, EC_WORD_THE, EC_WORD_WORLD, EC_WORD_OF, EC_WORD_FEELING, EC_WORD_NATURE},
			.speechAfter = {EC_WORD_RELEASE, EC_WORD_THE, EC_WORD_WORLD, EC_WORD_OF, EC_WORD_FEELING, EC_WORD_NATURE},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("OTMAR"),
			.facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
			.textColor = 7,
			.speechBefore = {EC_WORD_I_AM, EC_MOVE2(PROTECT), EC_WORD_FOR, EC_WORD_ABSOLUTELY, EC_WORD_GREEN, EC_WORD_WORLD},
			.speechWin = {EC_WORD_TAKE_THAT, EC_WORD_EXCL, EC_WORD_LOST, EC_WORD_IS, EC_WORD_FOR, EC_WORD_BABE},
			.speechLose = {EC_MOVE2(PROTECT), EC_WORD_FOR, EC_WORD_ABSOLUTELY, EC_WORD_GREEN, EC_WORD_WORLD, EC_WORD_EXCL},
			.speechAfter = {EC_MOVE2(PROTECT), EC_WORD_AND, EC_WORD_RESUSCITATE, EC_WORD_ABSOLUTELY, EC_WORD_GREEN, EC_WORD_WORLD},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("TRENTON"),
			.facilityClass = FACILITY_CLASS_PKMN_RANGER_M,
			.textColor = 7,
			.speechBefore = {EC_WORD_I, EC_MOVE2(PROTECT), EC_WORD_THE, EC_WORD_GREAT, EC_WORD_GREEN, EC_WORD_WORLD},
			.speechWin = {EC_WORD_TAKE_THAT, EC_WORD_EXCL, EC_WORD_THE, EC_WORD_LOSS, EC_WORD_IS, EC_WORD_YOURS},
			.speechLose = {EC_MOVE2(PROTECT), EC_WORD_THE, EC_WORD_GREEN, EC_WORD_WORLD, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_MOVE2(PROTECT), EC_WORD_AND, EC_WORD_RESUSCITATE, EC_WORD_THE, EC_WORD_GREEN, EC_WORD_WORLD},
		#endif
			.mons = {
				{
					.species = SPECIES_GYARADOS,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_EARTHQUAKE, MOVE_WATERFALL, MOVE_BLIZZARD, MOVE_HYPER_BEAM},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x88, // MALE HASTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LEVIATOR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GARADOS"),
					#else
					.nickname = _("GYARADOS"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_VICTREEBEL,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_REFLECT, MOVE_ATTRACT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x8E, // MALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("EMPIFLOR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SARZENIA"),
					#else
					.nickname = _("VICTREEBEL"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_DONPHAN,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x97, // MALE LONELY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("DONPHAN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("DONPHAN"),
					#else
					.nickname = _("DONPHAN"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_FEAROW,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_FAINT_ATTACK, MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_DOUBLE_TEAM},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x97, // MALE LONELY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RAPASDEPIC"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("IBITAK"),
					#else
					.nickname = _("FEAROW"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ARCANINE,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_EXTREME_SPEED, MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_AERIAL_ACE},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x4F, // MALE NAUGHTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ARCANIN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ARKANI"),
					#else
					.nickname = _("ARCANINE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ARIADOS,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_SIGNAL_BEAM, MOVE_TOXIC},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x97, // MALE LONELY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MIGALOS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ARIADOS"),
					#else
					.nickname = _("ARIADOS"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("ALBERTO"),
			.facilityClass = FACILITY_CLASS_COOLTRAINER_M,
			.textColor = 7,
			.speechBefore = {EC_WORD_AHAHA, EC_WORD_UNDEFINED, EC_WORD_EEK, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_LET_S, EC_WORD_VERY, EC_WORD_FUNNY, EC_WORD_UNDEFINED, EC_WORD_GWAHAHAHA, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_RICKETY, EC_WORD_UNDEFINED, EC_WORD_LET_S, EC_WORD_VERY, EC_WORD_APPROVED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WILL_BE_HERE, EC_WORD_DOWNCAST, EC_WORD_LATER, EC_WORD_HIT, EC_WORD_CAN_WIN, EC_WORD_BATTLE},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("ALBERT"),
			.facilityClass = FACILITY_CLASS_COOLTRAINER_M,
			.textColor = 7,
			.speechBefore = {EC_WORD_IS, EC_WORD_ENTERTAINING, EC_WORD_UNDERSTOOD, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_WILL_BE_HERE, EC_WORD_WEAK, EC_WORD_NITWIT, EC_WORD_CONCEDE, EC_WORD_ENTERTAINING, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WILL_BE_HERE, EC_WORD_REFRESHING, EC_WORD_NITWIT, EC_WORD_CONCEDE, EC_WORD_ENTERTAINING, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_NOW, EC_WORD_TRAINS, EC_WORD_ALLOW, EC_WORD_MEAN, EC_WORD_NAP, EC_WORD_ELLIPSIS},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("ALBERT"),
			.facilityClass = FACILITY_CLASS_COOLTRAINER_M,
			.textColor = 7,
			.speechBefore = {EC_WORD_WE_RE, EC_WORD_A, EC_WORD_FIGHTING, EC_WORD_FUNNY, EC_WORD_NOW, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_YOU_RE, EC_WORD_A_LOT, EC_WORD_TOO_WEAK, EC_WORD_EXCL, EC_WORD_NOT, EC_WORD_FUNNY},
			.speechLose = {EC_WORD_THAT_WAS, EC_WORD_REALLY, EC_WORD_FUNNY, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_I_AM, EC_WORD_VERY, EC_WORD_TIRED, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("PABLO"),
			.facilityClass = FACILITY_CLASS_COOLTRAINER_M,
			.textColor = 7,
			.speechBefore = {EC_WORD_LET_S, EC_WORD_AN, EC_WORD_EXCITING, EC_WORD_TIME, EC_WORD_HERE, EC_WORD_GOT},
			.speechWin = {EC_WORD_YOU_RE, EC_WORD_TOO_WEAK, EC_WORD_FOR, EC_WORD_EXCITING, EC_WORD_THING, EC_WORD_EXCL},
			.speechLose = {EC_WORD_YOU_RE, EC_WORD_TOUGH, EC_WORD_THAT_WAS, EC_WORD_WILD, EC_WORD_AND, EC_WORD_EXCITING},
			.speechAfter = {EC_WORD_I_AM, EC_WORD_TIRED, EC_WORD_AFTER, EC_WORD_THESE, EC_WORD_EXCITING, EC_WORD_FIGHTING},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("ALBERT"),
			.facilityClass = FACILITY_CLASS_COOLTRAINER_M,
			.textColor = 7,
			.speechBefore = {EC_WORD_LET_S, EC_WORD_HAVE, EC_WORD_AN, EC_WORD_EXCITING, EC_WORD_TIME, EC_WORD_HERE},
			.speechWin = {EC_WORD_YOU_RE, EC_WORD_TOO_WEAK, EC_WORD_TO, EC_WORD_MAKE, EC_WORD_THINGS, EC_WORD_EXCITING},
			.speechLose = {EC_WORD_YOU_RE, EC_WORD_STRONG, EC_WORD_THAT_WAS, EC_WORD_WILD, EC_WORD_AND, EC_WORD_EXCITING},
			.speechAfter = {EC_WORD_I_AM, EC_WORD_TIRED, EC_WORD_AFTER, EC_WORD_THAT, EC_WORD_EXCITING, EC_WORD_MATCH},
		#endif
			.mons = {
				{
					.species = SPECIES_KINGDRA,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_TWISTER, MOVE_OCTAZOOKA, MOVE_AURORA_BEAM, MOVE_RETURN},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x15, // FEMALE GENTLE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("HYPOROI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SEEDRAKING"),
					#else
					.nickname = _("KINGDRA"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GOLEM,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_DOUBLE_EDGE},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 1,
					.personality = 0x7F, // MALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GROLEM"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GEOWAZ"),
					#else
					.nickname = _("GOLEM"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_DRAGONITE,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_THUNDER, MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_DRAGON_CLAW},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x01, // FEMALE LONELY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("DRACOLOSSE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("DRAGORAN"),
					#else
					.nickname = _("DRAGONITE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_TYRANITAR,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_THUNDER, MOVE_FIRE_BLAST},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x97, // MALE LONELY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TYRANOCIF"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("DESPOTAR"),
					#else
					.nickname = _("TYRANITAR"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_AMPHAROS,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_REFLECT, MOVE_THUNDER, MOVE_BRICK_BREAK, MOVE_RETURN},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x13, // FEMALE RASH
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PHARAMP"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("AMPHAROS"),
					#else
					.nickname = _("AMPHAROS"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_VENUSAUR,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_BODY_SLAM},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x2A, // MALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("FLORIZARRE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("BISAFLOR"),
					#else
					.nickname = _("VENUSAUR"),
					#endif
					.friendship = 255
				},
			}
		},
	},
	.checksum = 0x0001844c
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Knockout_3 = {
	.id = 16,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_KNOCKOUT,
	.prize = TTPRIZE_CALCIUM,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("CARMINA"),
			.facilityClass = FACILITY_CLASS_PICNICKER,
			.textColor = 1,
			.speechBefore = {EC_WORD_EEK, EC_WORD_UNDEFINED, EC_WORD_OR, EC_WORD_LISTEN, EC_WORD_WIN, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_I, EC_WORD_ALWAYS, EC_WORD_DOES, EC_WORD_WIN, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNBELIEVABLE, EC_WORD_UNDEFINED, EC_WORD_HUMPH, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_ABSOLUTELY, EC_WORD_TALENT, EC_WORD_PLUS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("CAROLA"),
			.facilityClass = FACILITY_CLASS_PICNICKER,
			.textColor = 1,
			.speechBefore = {EC_WORD_AS_IF, EC_WORD_PLEASE, EC_WORD_IF_I_LOSE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_AGREE, EC_WORD_UNDEFINED, EC_WORD_AS_IF, EC_WORD_PLEASE, EC_WORD_IF_I_LOSE, EC_WORD_EXCL},
			.speechLose = {EC_WORD_BUT, EC_WORD_NATURALLY, EC_WORD_AS_IF, EC_WORD_PLEASE, EC_WORD_IF_I_WIN, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_WILL_BE_HERE, EC_WORD_REFRESHING, EC_WORD_NITWIT, EC_WORD_DON_T, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("CLEO"),
			.facilityClass = FACILITY_CLASS_PICNICKER,
			.textColor = 1,
			.speechBefore = {EC_WORD_IT_S, EC_WORD_A, EC_WORD_FIGHTING, EC_WORD_EXCL, EC_WORD_WILL, EC_WORD_WIN},
			.speechWin = {EC_WORD_I_VE, EC_WORD_SAID, EC_WORD_WILL, EC_WORD_WIN, EC_WORD_ISN_T_IT_QUES, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_OH, EC_WORD_ELLIPSIS, EC_WORD_LOST, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_YOU_RE, EC_WORD_RECOMMEND, EC_WORD_WEIRD, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("HELGA"),
			.facilityClass = FACILITY_CLASS_PICNICKER,
			.textColor = 1,
			.speechBefore = {EC_WORD_LET_S, EC_WORD_FIGHT, EC_WORD_I, EC_WORD_WON_T, EC_WORD_LOSE, EC_WORD_EXCL},
			.speechWin = {EC_WORD_I, EC_WORD_SAID, EC_WORD_LET_ME_WIN, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_OH_QUES, EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS, EC_WORD_HAVE, EC_WORD_I, EC_WORD_LOST, EC_WORD_QUES},
			.speechAfter = {EC_WORD_YOU_RE, EC_WORD_TOO_STRONG, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("CAMRYN"),
			.facilityClass = FACILITY_CLASS_PICNICKER,
			.textColor = 1,
			.speechBefore = {EC_WORD_LET_S, EC_WORD_BATTLE, EC_WORD_I, EC_WORD_WON_T, EC_WORD_LOSE, EC_WORD_EXCL},
			.speechWin = {EC_WORD_I, EC_WORD_SAID, EC_WORD_THAT, EC_WORD_I, EC_WORD_WOULD, EC_WORD_WIN},
			.speechLose = {EC_WORD_OH_QUES, EC_WORD_ELLIPSIS_ELLIPSIS_ELLIPSIS, EC_WORD_DID, EC_WORD_I, EC_WORD_LOSE, EC_WORD_QUES},
			.speechAfter = {EC_WORD_YOU_RE, EC_WORD_TOO_STRONG, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#endif
			.mons = {
				{
					.species = SPECIES_MURKROW,
					.heldItem = ITEM_BLACK_GLASSES,
					.moves = {MOVE_AERIAL_ACE, MOVE_SHADOW_BALL, MOVE_FAINT_ATTACK, MOVE_CONFUSE_RAY},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x89, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("CORNEBRE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KRAMURX"),
					#else
					.nickname = _("MURKROW"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_RAPIDASH,
					.heldItem = ITEM_CHARCOAL,
					.moves = {MOVE_BOUNCE, MOVE_FLAMETHROWER, MOVE_QUICK_ATTACK, MOVE_DOUBLE_KICK},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x0C, // FEMALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GALOPA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GALLOPA"),
					#else
					.nickname = _("RAPIDASH"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MILTANK,
					.heldItem = ITEM_SILK_SCARF,
					.moves = {MOVE_MILK_DRINK, MOVE_BRICK_BREAK, MOVE_BODY_SLAM, MOVE_SHADOW_BALL},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0C, // FEMALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ECREMEUH"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MILTANK"),
					#else
					.nickname = _("MILTANK"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GOLDUCK,
					.heldItem = ITEM_MYSTIC_WATER,
					.moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_LIGHT_SCREEN},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x89, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("AKWAKWAK"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ENTORON"),
					#else
					.nickname = _("GOLDUCK"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SANDSLASH,
					.heldItem = ITEM_SOFT_SAND,
					.moves = {MOVE_SANDSTORM, MOVE_AERIAL_ACE, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x89, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("SABLAIREAU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SANDAMER"),
					#else
					.nickname = _("SANDSLASH"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_NIDOQUEEN,
					.heldItem = ITEM_HARD_STONE,
					.moves = {MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_SLUDGE_BOMB, MOVE_ROCK_SLIDE},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0C, // FEMALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NIDOQUEEN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NIDOQUEEN"),
					#else
					.nickname = _("NIDOQUEEN"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("NATALIA"),
			.facilityClass = FACILITY_CLASS_AROMA_LADY,
			.textColor = 1,
			.speechBefore = {EC_WORD_QUES_EXCL, EC_WORD_LAY, EC_WORD_LIKE, EC_WORD_A_TINY_BIT, EC_MOVE(SWEET_SCENT), EC_WORD_QUES},
			.speechWin = {EC_WORD_I, EC_WORD_UP, EC_WORD_NITWIT, EC_WORD_DOES, EC_WORD_WIN, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_SURRENDER, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_ABSOLUTELY, EC_WORD_LIKE, EC_WORD_THAT_S, EC_MOVE(AROMATHERAPY), EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("NATALIA"),
			.facilityClass = FACILITY_CLASS_AROMA_LADY,
			.textColor = 1,
			.speechBefore = {EC_WORD_WHICH, EC_WORD_LIKES, EC_MOVE(SWEET_SCENT), EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_BEAUTIFUL, EC_WORD_EH_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_ON, EC_WORD_AS_IF, EC_WORD_IS, EC_WORD_LOWS, EC_WORD_BEAUTIFUL, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_WHICH, EC_WORD_LIKES, EC_MOVE(AROMATHERAPY), EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("NATALIA"),
			.facilityClass = FACILITY_CLASS_AROMA_LADY,
			.textColor = 1,
			.speechBefore = {EC_WORD_YOU, EC_WORD_KNOWS, EC_WORD_NOT, EC_WORD_THIS, EC_MOVE(SWEET_SCENT), EC_WORD_QUES},
			.speechWin = {EC_WORD_IT_S, EC_WORD_KIND, EC_WORD_HUH_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_THAT_WAS, EC_WORD_NOT, EC_WORD_EXCUSE, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WITH, EC_MOVE(AROMATHERAPY), EC_WORD_ALL, EC_WORD_IS, EC_WORD_PLUS, EC_WORD_REFRESHING},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("NADINE"),
			.facilityClass = FACILITY_CLASS_AROMA_LADY,
			.textColor = 1,
			.speechBefore = {EC_WORD_LIKES, EC_WORD_YOU, EC_WORD_THESE, EC_MOVE(SWEET_SCENT), EC_WORD_QUES, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_WAS, EC_WORD_THAT, EC_WORD_DON_T, EC_WORD_NICE, EC_WORD_QUES, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_THAT, EC_WORD_WASN_T, EC_WORD_ALL_RIGHT, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_I, EC_MOVE2(REFRESH), EC_WORD_THING, EC_WORD_WITH, EC_WORD_REFRESHING, EC_MOVE(AROMATHERAPY)},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("NATALIA"),
			.facilityClass = FACILITY_CLASS_AROMA_LADY,
			.textColor = 1,
			.speechBefore = {EC_WORD_THIS, EC_MOVE(SWEET_SCENT), EC_WORD_YOU, EC_WORD_LIKE, EC_WORD_IT, EC_WORD_QUES},
			.speechWin = {EC_WORD_WASN_T, EC_WORD_THAT, EC_WORD_NICE, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_THAT, EC_WORD_WASN_T, EC_WORD_GOOD, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_I, EC_MOVE2(REFRESH), EC_WORD_THINGS, EC_WORD_WITH, EC_WORD_REFRESHING, EC_MOVE(AROMATHERAPY)},
		#endif
			.mons = {
				{
					.species = SPECIES_BELLOSSOM,
					.heldItem = ITEM_PERSIM_BERRY,
					.moves = {MOVE_SWEET_SCENT, MOVE_ATTRACT, MOVE_PETAL_DANCE, MOVE_FLAIL},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0C, // FEMALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("JOLIFLOR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("BLUBELLA"),
					#else
					.nickname = _("BELLOSSOM"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_VICTREEBEL,
					.heldItem = ITEM_MIRACLE_SEED,
					.moves = {MOVE_SWEET_SCENT, MOVE_ATTRACT, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x89, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("EMPIFLOR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SARZENIA"),
					#else
					.nickname = _("VICTREEBEL"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PARASECT,
					.heldItem = ITEM_MIRACLE_SEED,
					.moves = {MOVE_SWEET_SCENT, MOVE_ATTRACT, MOVE_GIGA_DRAIN, MOVE_AERIAL_ACE},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x89, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PARASECT"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PARASEK"),
					#else
					.nickname = _("PARASECT"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_VILEPLUME,
					.heldItem = ITEM_PERSIM_BERRY,
					.moves = {MOVE_SWEET_SCENT, MOVE_ATTRACT, MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0C, // FEMALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RAFFLESIA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GIFLOR"),
					#else
					.nickname = _("VILEPLUME"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_VENUSAUR,
					.heldItem = ITEM_PERSIM_BERRY,
					.moves = {MOVE_SWEET_SCENT, MOVE_ATTRACT, MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0C, // FEMALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("FLORIZARRE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("BISAFLOR"),
					#else
					.nickname = _("VENUSAUR"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MEGANIUM,
					.heldItem = ITEM_MIRACLE_SEED,
					.moves = {MOVE_SWEET_SCENT, MOVE_ATTRACT, MOVE_GIGA_DRAIN, MOVE_BODY_SLAM},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x25, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MEGANIUM"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MEGANIE"),
					#else
					.nickname = _("MEGANIUM"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("NOELIA"),
			.facilityClass = FACILITY_CLASS_COOLTRAINER_F,
			.textColor = 7,
			.speechBefore = {EC_WORD_WONDER, EC_WORD_LISTEN, EC_WORD_LOSS, EC_WORD_UNDEFINED, EC_WORD_OOPS, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_SORRY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_PLAYS, EC_WORD_LOSE, EC_WORD_I, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_FIGHTS, EC_WORD_MISS, EC_WORD_STRONG, EC_WORD_IS, EC_WORD_AROUND, EC_WORD_SPIRALING},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("KATIA"),
			.facilityClass = FACILITY_CLASS_COOLTRAINER_F,
			.textColor = 7,
			.speechBefore = {EC_WORD_WELCOME, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_APOLOGIZE, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNBELIEVABLE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WEREN_T, EC_WORD_SINCE, EC_WORD_POWER, EC_WORD_IS, EC_WORD_NATURAL, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("RANIA"),
			.facilityClass = FACILITY_CLASS_COOLTRAINER_F,
			.textColor = 7,
			.speechBefore = {EC_WORD_THIS_IS_IT_EXCL, EC_WORD_TIMES, EC_WORD_LIKELY_TO, EC_WORD_LOSE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_FORGIVE, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_IT_S, EC_WORD_REALLY, EC_WORD_HARD, EC_WORD_EVEN_SO, EC_WORD_BELIEVE, EC_WORD_ELLIPSIS},
			.speechAfter = {EC_WORD_HER, EC_WORD_PURE_POWER, EC_WORD_IS, EC_WORD_EXCELLENT, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("KARIN"),
			.facilityClass = FACILITY_CLASS_COOLTRAINER_F,
			.textColor = 7,
			.speechBefore = {EC_WORD_TO, EC_WORD_AWFUL, EC_WORD_IS_IT_QUES, EC_WORD_FOR, EC_WORD_BABE, EC_WORD_DONE},
			.speechWin = {EC_WORD_SORRY, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_THAT, EC_WORD_IS, EC_WORD_HARD, EC_WORD_TO, EC_WORD_BELIEVE, EC_WORD_ELLIPSIS},
			.speechAfter = {EC_WORD_YOU_VE, EC_WORD_PURE_POWER, EC_WORD_THAT, EC_WORD_IS, EC_WORD_NATURAL, EC_WORD_QUES},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("KATHLEEN"),
			.facilityClass = FACILITY_CLASS_COOLTRAINER_F,
			.textColor = 7,
			.speechBefore = {EC_WORD_TOO, EC_WORD_BAD, EC_WORD_IT_S, EC_WORD_OVER, EC_WORD_FOR, EC_WORD_YOU},
			.speechWin = {EC_WORD_SORRY, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_THIS, EC_WORD_IS, EC_WORD_HARD, EC_WORD_TO, EC_WORD_BELIEVE, EC_WORD_ELLIPSIS},
			.speechAfter = {EC_WORD_YOU, EC_WORD_HAVE, EC_WORD_PURE_POWER, EC_WORD_THAT, EC_WORD_IS, EC_WORD_NATURAL},
		#endif
			.mons = {
				{
					.species = SPECIES_MAROWAK,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_BONEMERANG, MOVE_AERIAL_ACE},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x89, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("OSSATUEUR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KNOGGA"),
					#else
					.nickname = _("MAROWAK"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_LAPRAS,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_PSYCHIC, MOVE_THUNDER},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x0C, // FEMALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LOKHLASS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LAPRAS"),
					#else
					.nickname = _("LAPRAS"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ARCANINE,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_EXTREME_SPEED, MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_AERIAL_ACE},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x57, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ARCANIN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ARKANI"),
					#else
					.nickname = _("ARCANINE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_RAICHU,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_THUNDERBOLT, MOVE_QUICK_ATTACK, MOVE_DOUBLE_TEAM, MOVE_IRON_TAIL},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x89, // MALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RAICHU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RAICHU"),
					#else
					.nickname = _("RAICHU"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_TOGETIC,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_ANCIENT_POWER, MOVE_SWEET_KISS, MOVE_PSYCHIC, MOVE_MAGICAL_LEAF},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x0C, // FEMALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TOGETIC"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TOGETIC"),
					#else
					.nickname = _("TOGETIC"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SNORLAX,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_BODY_SLAM, MOVE_REST, MOVE_SNORE, MOVE_SHADOW_BALL},
					.hpEV = 84,
					.attackEV = 84,
					.defenseEV = 84,
					.speedEV = 84,
					.spAttackEV = 84,
					.spDefenseEV = 84,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x0C, // FEMALE SERIOUS
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RONFLEX"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RELAXO"),
					#else
					.nickname = _("SNORLAX"),
					#endif
					.friendship = 255
				},
			}
		},
	},
	.checksum = 0x0001738c
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Single_6 = {
	.id = 17,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_SINGLE,
	.prize = TTPRIZE_CARBOS,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("BORJA"),
			.facilityClass = FACILITY_CLASS_SWIMMER_M,
			.textColor = 1,
			.speechBefore = {EC_WORD_WILL_BE_HERE, EC_WORD_SATISFIED, EC_WORD_MISS, EC_WORD_JUST, EC_WORD_STRONG, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_DASH_DASH_DASH, EC_WORD_UNDEFINED, EC_WORD_ISN_T_IT_QUES, EC_WORD_A_TINY_BIT, EC_WORD_SPIRALING, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_MMM, EC_WORD_UNDEFINED, EC_WORD_DOWN, EC_WORD_WHY, EC_WORD_LIE, EC_WORD_LOSS},
			.speechAfter = {EC_WORD_AWFULLY, EC_WORD_WHY, EC_WORD_LIE, EC_WORD_FIGHTS, EC_WORD_IS, EC_WORD_HAPPILY},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("BRACCO"),
			.facilityClass = FACILITY_CLASS_SWIMMER_M,
			.textColor = 1,
			.speechBefore = {EC_WORD_WEREN_T, EC_WORD_BETTER, EC_MOVE(STRENGTH), EC_WORD_SATISFIED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_HIGHS, EC_WORD_IS_IT_QUES, EC_WORD_WON, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_LUKEWARM, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_GIVE_ME, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("GASPARD"),
			.facilityClass = FACILITY_CLASS_SWIMMER_M,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_TRY, EC_WORD_OF, EC_WORD_ME, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_EH_QUES, EC_WORD_I_VE, EC_WORD_WINS, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_SHOCKED, EC_WORD_EXCL, EC_WORD_I_VE, EC_WORD_LOST, EC_WORD_DAUGHTER, EC_WORD_JOY},
			.speechAfter = {EC_WORD_GOOD, EC_WORD_WORK, EC_WORD_YOU_RE, EC_WORD_REALLY, EC_WORD_FANTASTIC, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("HUGO"),
			.facilityClass = FACILITY_CLASS_SWIMMER_M,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_WITH, EC_WORD_WHO_WAS, EC_WORD_TOUGHNESS, EC_WORD_VERY, EC_WORD_HAPPY},
			.speechWin = {EC_WORD_WROOOAAR_EXCL, EC_WORD_EXCL, EC_WORD_SERIOUS, EC_WORD_I_VE, EC_WORD_WON, EC_WORD_QUES},
			.speechLose = {EC_WORD_YOU_VE, EC_WORD_ME, EC_WORD_OFF, EC_WORD_HAPPY, EC_WORD_SHAKY, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_ALL_RIGHT, EC_WORD_WORK, EC_WORD_EXCL, EC_WORD_YOU, EC_WORD_ARE, EC_WORD_FABULOUS},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("BRADEN"),
			.facilityClass = FACILITY_CLASS_SWIMMER_M,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_PRETTY, EC_WORD_HAPPY, EC_WORD_WITH, EC_WORD_MY, EC_WORD_TOUGHNESS},
			.speechWin = {EC_WORD_WROOOAAR_EXCL, EC_WORD_UNDEFINED, EC_WORD_SERIOUSLY, EC_WORD_I, EC_WORD_WON, EC_WORD_QUES},
			.speechLose = {EC_WORD_YOU, EC_WORD_SHOCKED, EC_WORD_ME, EC_WORD_OUT, EC_WORD_OF, EC_WORD_HAPPINESS},
			.speechAfter = {EC_WORD_NICE, EC_WORD_WORK, EC_WORD_YOU, EC_WORD_EXCL, EC_WORD_YOU_RE, EC_WORD_FABULOUS},
		#endif
			.mons = {
				{
					.species = SPECIES_VAPOREON,
					.heldItem = ITEM_CHERI_BERRY,
					.moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_WISH},
					.hpEV = 100,
					.attackEV = 0,
					.defenseEV = 110,
					.speedEV = 0,
					.spAttackEV = 200,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x11, // FEMALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("AQUALI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("AQUANA"),
					#else
					.nickname = _("VAPOREON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SLOWBRO,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_SURF, MOVE_CONFUSION, MOVE_AMNESIA, MOVE_DISABLE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x91, // MALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("FLAGADOSS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LAHMUS"),
					#else
					.nickname = _("SLOWBRO"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_POLITOED,
					.heldItem = ITEM_CHESTO_BERRY,
					.moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_HYPNOSIS, MOVE_SWAGGER},
					.hpEV = 100,
					.attackEV = 100,
					.defenseEV = 110,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x96, // MALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TARPAUD"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("QUAXO"),
					#else
					.nickname = _("POLITOED"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_TENTACRUEL,
					.heldItem = ITEM_POISON_BARB,
					.moves = {MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
					.hpEV = 100,
					.attackEV = 0,
					.defenseEV = 110,
					.speedEV = 0,
					.spAttackEV = 200,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x00, // FEMALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TENTACRUEL"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TENTOXA"),
					#else
					.nickname = _("TENTACRUEL"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_RATICATE,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_SUPER_FANG, MOVE_HYPER_FANG, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK},
					.hpEV = 110,
					.attackEV = 200,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RATTATAC"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RATTIKARL"),
					#else
					.nickname = _("RATICATE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_DUNSPARCE,
					.heldItem = ITEM_PERSIM_BERRY,
					.moves = {MOVE_WATER_PULSE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_YAWN},
					.hpEV = 255,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x7F, // MALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("INSOLOURDO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("DUMMISEL"),
					#else
					.nickname = _("DUNSPARCE"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00016530
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Mixed_1 = {
	.id = 18,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_SINGLE,
	.prize = TTPRIZE_KINGS_ROCK,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("AMANDA"),
			.facilityClass = FACILITY_CLASS_COOLTRAINER_F,
			.textColor = 7,
			.speechBefore = {EC_WORD_GWAH, EC_WORD_UNDEFINED, EC_WORD_SINCE, EC_WORD_ONCE, EC_WORD_THING, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_TODAY, EC_WORD_ABSOLUTELY, EC_WORD_TIMES, EC_WORD_LIE, EC_WORD_HAS, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_NOW, EC_WORD_WHOM, EC_WORD_HAS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_BUT, EC_WORD_WHERE, EC_WORD_LIE, EC_WORD_REALLY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("ALLYSON"),
			.facilityClass = FACILITY_CLASS_COOLTRAINER_F,
			.textColor = 7,
			.speechBefore = {EC_WORD_TODAY, EC_WORD_AS_IF, EC_WORD_LOSE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_TODAY, EC_WORD_WHOM, EC_WORD_DISASTER, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_TODAY, EC_WORD_AS_IF, EC_WORD_PLEASE, EC_WORD_LOWS, EC_WORD_IF_I_WIN, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_TODAY, EC_WORD_WILL_BE_HERE, EC_WORD_KIND, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("ALINE"),
			.facilityClass = FACILITY_CLASS_COOLTRAINER_F,
			.textColor = 7,
			.speechBefore = {EC_WORD_WILL, EC_WORD_NOT, EC_WORD_LAY, EC_WORD_LOSE, EC_WORD_TODAY, EC_WORD_EXCL},
			.speechWin = {EC_WORD_YES, EC_WORD_EXCL_EXCL, EC_WORD_I_AM, EC_WORD_HEALTHY, EC_WORD_TODAY, EC_WORD_EXCL},
			.speechLose = {EC_WORD_I_VE, EC_WORD_SUMMER, EC_WORD_SURPRISE, EC_WORD_AND, EC_WORD_I_VE, EC_WORD_LOST},
			.speechAfter = {EC_WORD_YOU_RE, EC_WORD_RECOMMEND, EC_WORD_HEALTHY, EC_WORD_TODAY, EC_WORD_IT_S, EC_WORD_ALL},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("DAGMAR"),
			.facilityClass = FACILITY_CLASS_COOLTRAINER_F,
			.textColor = 7,
			.speechBefore = {EC_WORD_TODAY, EC_WORD_WON_T, EC_WORD_I, EC_WORD_LOSE, EC_WORD_EXCL, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_YES, EC_WORD_EXCL_EXCL, EC_WORD_TODAY, EC_WORD_ADORE, EC_WORD_I, EC_WORD_ME},
			.speechLose = {EC_WORD_I_WAS, EC_WORD_CONFUSED, EC_WORD_OVER, EC_WORD_THING, EC_WORD_I, EC_WORD_MODE},
			.speechAfter = {EC_WORD_YOU_RE, EC_WORD_TODAY, EC_WORD_TOO_STRONG, EC_WORD_IT_S, EC_WORD_ALL, EC_WORD_EXCL},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("ALLYSON"),
			.facilityClass = FACILITY_CLASS_COOLTRAINER_F,
			.textColor = 7,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_NOT, EC_WORD_ABOUT, EC_WORD_TO, EC_WORD_LOSE, EC_WORD_TODAY},
			.speechWin = {EC_WORD_YES, EC_WORD_EXCL_EXCL, EC_WORD_I, EC_WORD_ADORE, EC_WORD_MYSELF, EC_WORD_TODAY},
			.speechLose = {EC_WORD_I_WAS, EC_WORD_CONFUSED, EC_WORD_ABOUT, EC_WORD_THINGS, EC_WORD_I, EC_WORD_THINK},
			.speechAfter = {EC_WORD_YOU_RE, EC_WORD_TOO, EC_WORD_STRONG, EC_WORD_TODAY, EC_WORD_THAT_S, EC_WORD_ALL},
		#endif
			.mons = {
				{
					.species = SPECIES_STARMIE,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_RECOVER},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 1,
					.personality = 0x0F, // GENDERLESS MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("STAROSS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("STARMIE"),
					#else
					.nickname = _("STARMIE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_BLASTOISE,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_MIRROR_COAT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x32, // MALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TORTANK"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TURTOK"),
					#else
					.nickname = _("BLASTOISE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_KINGDRA,
					.heldItem = ITEM_CHESTO_BERRY,
					.moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_DRAGON_BREATH, MOVE_REST},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x8C, // MALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("HYPOROI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SEEDRAKING"),
					#else
					.nickname = _("KINGDRA"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_QUAGSIRE,
					.heldItem = ITEM_CHESTO_BERRY,
					.moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_REST},
					.hpEV = 0,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 155,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x16, // FEMALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MARAISTE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MORLORD"),
					#else
					.nickname = _("QUAGSIRE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_LAPRAS,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_ATTRACT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 1,
					.personality = 0x0F, // FEMALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LOKHLASS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LAPRAS"),
					#else
					.nickname = _("LAPRAS"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_DRAGONITE,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_LIGHT_SCREEN},
					.hpEV = 0,
					.attackEV = 100,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 155,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x96, // MALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("DRACOLOSSE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("DRAGORAN"),
					#else
					.nickname = _("DRAGONITE"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00016e32
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Single_1 = {
	.id = 19,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_SINGLE,
	.prize = TTPRIZE_UP_GRADE,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("ÁLVARO"),
			.facilityClass = FACILITY_CLASS_SAILOR,
			.textColor = 5,
			.speechBefore = {EC_WORD_ACCEPT, EC_WORD_UNDEFINED, EC_WORD_EEK, EC_WORD_UNDEFINED, EC_WORD_EH_QUES, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_TCH, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_LET_S, EC_WORD_NATURALLY, EC_WORD_PERSON, EC_WORD_UNAVOIDABLE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_AROUND, EC_WORD_CONCEDE, EC_WORD_HAVE, EC_WORD_STRONG, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("ALBERTO"),
			.facilityClass = FACILITY_CLASS_SAILOR,
			.textColor = 5,
			.speechBefore = {EC_WORD_GIVES, EC_WORD_SOON, EC_WORD_MEAN, EC_WORD_IF_I_LOSE, EC_WORD_OKAY, EC_WORD_QUES},
			.speechWin = {EC_WORD_BORING, EC_WORD_IF_I_WIN, EC_WORD_ALWAYS, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_SURRENDER, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_NOW, EC_WORD_AS_IF, EC_WORD_WHEN_I_WIN, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("RONAN"),
			.facilityClass = FACILITY_CLASS_SAILOR,
			.textColor = 5,
			.speechBefore = {EC_WORD_GO, EC_WORD_EXCL, EC_WORD_THAT_S, EC_WORD_WORK, EC_WORD_NOW, EC_WORD_EXCL_EXCL},
			.speechWin = {EC_WORD_YO, EC_WORD_EXCL_EXCL, EC_WORD_LIKELY_TO, EC_WORD_GIVE_UP, EC_WORD_HUH_QUES, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_RECOMMEND, EC_WORD_LATE, EC_WORD_ELLIPSIS, EC_WORD_WILL, EC_WORD_GIVE_UP, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_OKAY, EC_WORD_I_VE, EC_WORD_UNDERSTOOD, EC_WORD_ELLIPSIS, EC_WORD_I_VE, EC_WORD_LOST},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("ANSELM"),
			.facilityClass = FACILITY_CLASS_SAILOR,
			.textColor = 5,
			.speechBefore = {EC_WORD_LET_S, EC_WORD_NOW, EC_WORD_WITH, EC_WORD_THAT, EC_WORD_BEGINNING, EC_WORD_EXCL},
			.speechWin = {EC_WORD_YO, EC_WORD_EXCL_EXCL, EC_WORD_YOU, EC_WORD_GIVE, EC_WORD_OUT, EC_WORD_NOW},
			.speechLose = {EC_WORD_IS_IT_QUES, EC_WORD_DONE, EC_WORD_ELLIPSIS, EC_WORD_I, EC_WORD_GIVE_UP, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_OK_QUES, EC_WORD_I, EC_WORD_CONCEDE, EC_WORD_ELLIPSIS, EC_WORD_I, EC_WORD_LOST},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("ALBERTO"),
			.facilityClass = FACILITY_CLASS_SAILOR,
			.textColor = 5,
			.speechBefore = {EC_WORD_LET_S, EC_WORD_GET, EC_WORD_WITH, EC_WORD_IT, EC_WORD_RIGHT, EC_WORD_AWAY},
			.speechWin = {EC_WORD_YO, EC_WORD_EXCL_EXCL, EC_WORD_YOU, EC_WORD_GIVE_UP, EC_WORD_NOW, EC_WORD_EH_QUES},
			.speechLose = {EC_WORD_IT_S, EC_WORD_ALL, EC_WORD_OVER, EC_WORD_ELLIPSIS, EC_WORD_I, EC_WORD_SURRENDER},
			.speechAfter = {EC_WORD_OKAY, EC_WORD_I, EC_WORD_CONCEDE, EC_WORD_ELLIPSIS, EC_WORD_I, EC_WORD_LOST},
		#endif
			.mons = {
				{
					.species = SPECIES_FERALIGATR,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_DRAGON_CLAW},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x32, // MALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ALIGATUEUR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("IMPERGATOR"),
					#else
					.nickname = _("FERALIGATR"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_POLIWRATH,
					.heldItem = ITEM_KINGS_ROCK,
					.moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_MEGA_KICK, MOVE_ROCK_TOMB},
					.hpEV = 100,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 1,
					.personality = 0x96, // MALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TARTARD"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("QUAPPO"),
					#else
					.nickname = _("POLIWRATH"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_KANGASKHAN,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_CRUSH_CLAW, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_AERIAL_ACE},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 130,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 125,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x03, // FEMALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("KANGOUREX"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KANGAMA"),
					#else
					.nickname = _("KANGASKHAN"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MILTANK,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_ROCK_TOMB, MOVE_MILK_DRINK},
					.hpEV = 155,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x03, // FEMALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ECREMEUH"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MILTANK"),
					#else
					.nickname = _("MILTANK"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GOLDUCK,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_CROSS_CHOP, MOVE_SURF, MOVE_ICE_BEAM, MOVE_DISABLE},
					.hpEV = 0,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 210,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 1,
					.personality = 0x96, // MALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("AKWAKWAK"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ENTORON"),
					#else
					.nickname = _("GOLDUCK"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GRANBULL,
					.heldItem = ITEM_LIECHI_BERRY,
					.moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 130,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 125,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0xCA, // MALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GRANBULL"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GRANBULL"),
					#else
					.nickname = _("GRANBULL"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00016890
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Mixed_5 = {
	.id = 20,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_DOUBLE,
	.prize = TTPRIZE_METAL_COAT,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("BEA-BLEN"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 4,
			.speechBefore = {EC_WORD_GO, EC_WORD_UNDEFINED, EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_BROTHER, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_EXCL_EXCL, EC_WORD_HAPPILY, EC_WORD_GUARD, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_EXCL_EXCL, EC_WORD_PLAYS, EC_WORD_LOSE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WILL_BE_HERE, EC_WORD_LEFT, EC_WORD_VERY, EC_WORD_DISAPPOINTS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("KAT & MAX"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 4,
			.speechBefore = {EC_WORD_HE_S, EC_WORD_UNDEFINED, EC_WORD_GO, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_YOU_VE, EC_WORD_UNDEFINED, EC_WORD_BROTHER, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_TODAY, EC_WORD_OK_QUES, EC_WORD_IS, EC_WORD_SLIDE, EC_WORD_THOSE_WERE, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_BROTHER, EC_WORD_EXCL, EC_WORD_SPIRIT, EC_WORD_NITWIT, EC_WORD_DON_T, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("KAT & NINO"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 4,
			.speechBefore = {EC_WORD_WILL, EC_WORD_GIVE, EC_WORD_THE, EC_WORD_BEST, EC_WORD_OF, EC_WORD_ME},
			.speechWin = {EC_WORD_EXCUSE, EC_WORD_PLAYS, EC_WORD_MY, EC_WORD_AWESOME, EC_WORD_BROTHER, EC_WORD_EXCL},
			.speechLose = {EC_WORD_SIGH, EC_WORD_ELLIPSIS, EC_WORD_IT_S, EC_WORD_FEELING, EC_WORD_LIFE, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_OKAY, EC_WORD_MY, EC_WORD_AWESOME, EC_WORD_BROTHER, EC_WORD_BESIDE, EC_WORD_HIM},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("UTE&BERT"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 4,
			.speechBefore = {EC_WORD_I, EC_WORD_WILL, EC_WORD_MY, EC_WORD_BEST, EC_WORD_GIVE, EC_WORD_EXCL},
			.speechWin = {EC_WORD_TOTALLY, EC_WORD_DON_T, EC_WORD_DONE, EC_WORD_MY, EC_WORD_LOVEY_DOVEY, EC_WORD_BROTHER},
			.speechLose = {EC_WORD_SIGH, EC_WORD_ELLIPSIS, EC_WORD_SO, EC_WORD_GOING, EC_WORD_THAT, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_OK_QUES, EC_WORD_MY, EC_WORD_LOVEY_DOVEY, EC_WORD_BROTHER, EC_WORD_BATTLE, EC_WORD_BATTLE},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("KAT & KIPP"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 4,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_GOING, EC_WORD_TO, EC_WORD_TRY, EC_WORD_MY, EC_WORD_BEST},
			.speechWin = {EC_WORD_WAY, EC_WORD_TO, EC_WORD_GO, EC_WORD_MY, EC_WORD_AWESOME, EC_WORD_BROTHER},
			.speechLose = {EC_WORD_SIGH, EC_WORD_ELLIPSIS, EC_WORD_THAT_S, EC_WORD_HOW, EC_WORD_IT, EC_WORD_GOES},
			.speechAfter = {EC_WORD_OKAY, EC_WORD_MY, EC_WORD_AWESOME, EC_WORD_BROTHER, EC_WORD_FIGHT, EC_WORD_FIGHT},
		#endif
			.mons = {
				{
					.species = SPECIES_SNEASEL,
					.heldItem = ITEM_RAWST_BERRY,
					.moves = {MOVE_DIG, MOVE_TORMENT, MOVE_REFLECT, MOVE_TAUNT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 155,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x0D, // FEMALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("FARFURET"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SNIEBEL"),
					#else
					.nickname = _("SNEASEL"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_OMASTAR,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_DIVE, MOVE_LEER, MOVE_TICKLE, MOVE_SUPERSONIC},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x2D, // MALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("AMONISTAR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("AMOROSO"),
					#else
					.nickname = _("OMASTAR"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_DEWGONG,
					.heldItem = ITEM_PERSIM_BERRY,
					.moves = {MOVE_DIVE, MOVE_ENCORE, MOVE_GROWL, MOVE_SAFEGUARD},
					.hpEV = 200,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 210,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x14, // FEMALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LAMANTINE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("JUGONG"),
					#else
					.nickname = _("DEWGONG"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_QUAGSIRE,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_DIVE, MOVE_YAWN, MOVE_AMNESIA, MOVE_SAFEGUARD},
					.hpEV = 200,
					.attackEV = 0,
					.defenseEV = 110,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 200,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x91, // MALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MARAISTE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MORLORD"),
					#else
					.nickname = _("QUAGSIRE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CORSOLA,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_DIG, MOVE_MIRROR_COAT, MOVE_RECOVER, MOVE_CONFUSE_RAY},
					.hpEV = 155,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x17, // FEMALE CAREFUL
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("CORAYON"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("CORASONN"),
					#else
					.nickname = _("CORSOLA"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SANDSLASH,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_DIG, MOVE_COUNTER, MOVE_DEFENSE_CURL, MOVE_SAND_ATTACK},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x94, // MALE CAREFUL
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("SABLAIREAU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SANDAMER"),
					#else
					.nickname = _("SANDSLASH"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("BEA-BLEN"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 4,
			.speechBefore = {EC_WORD_GO, EC_WORD_UNDEFINED, EC_WORD_YOU, EC_WORD_CAN_T, EC_WORD_SISTER, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_EXCL_EXCL, EC_WORD_DOWN, EC_WORD_BATTLE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_EXCL_EXCL, EC_WORD_DOWN, EC_WORD_BAD, EC_WORD_NITWIT, EC_WORD_ISN_T_IT_QUES, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_WILL_BE_HERE, EC_WORD_LEFT, EC_WORD_VERY, EC_WORD_DISAPPOINTED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("KAT & MAX"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 4,
			.speechBefore = {EC_WORD_BUT, EC_WORD_NOW, EC_WORD_THERE, EC_WORD_PLAYED, EC_WORD_HIGHS, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_AS_IF, EC_WORD_STORY, EC_WORD_LOWS, EC_WORD_IF_I_LOSE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_MISHEARD, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_DISLIKE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("KAT & NINO"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 4,
			.speechBefore = {EC_WORD_FUFUFU, EC_WORD_ELLIPSIS, EC_WORD_TO_US, EC_WORD_WINS, EC_WORD_ALWAYS, EC_WORD_EXCL},
			.speechWin = {EC_WORD_FUFUFU, EC_WORD_ELLIPSIS, EC_WORD_RECOMMEND, EC_WORD_HEALTHY, EC_WORD_FOR, EC_WORD_LOSE},
			.speechLose = {EC_WORD_EH_QUES, EC_WORD_IT_S, EC_WORD_JOKING, EC_WORD_HUH_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WAAAH, EC_WORD_WAAAH, EC_WORD_OH, EC_WORD_WHERE, EC_WORD_SISTER, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("UTE&BERT"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 4,
			.speechBefore = {EC_WORD_FUFUFU, EC_WORD_ELLIPSIS, EC_WORD_WE, EC_WORD_LOSE, EC_WORD_NEVER, EC_WORD_EXCL},
			.speechWin = {EC_WORD_FUFUFU, EC_WORD_ELLIPSIS, EC_WORD_WE_RE, EC_WORD_TOO_STRONG, EC_WORD_TO, EC_WORD_LOSE},
			.speechLose = {EC_WORD_WHAT, EC_WORD_EH_QUES, EC_WORD_MAKE, EC_WORD_YOU, EC_WORD_JOKING, EC_WORD_QUES},
			.speechAfter = {EC_WORD_WAAAH, EC_WORD_WAAAH, EC_WORD_OH, EC_WORD_BIG, EC_WORD_SISTER, EC_WORD_EXCL},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("KAT & KIPP"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 4,
			.speechBefore = {EC_WORD_FUFUFU, EC_WORD_ELLIPSIS, EC_WORD_WE, EC_WORD_NEVER, EC_WORD_LOSE, EC_WORD_EXCL},
			.speechWin = {EC_WORD_FUFUFU, EC_WORD_ELLIPSIS, EC_WORD_WE_RE, EC_WORD_TOO_STRONG, EC_WORD_TO, EC_WORD_LOSE},
			.speechLose = {EC_WORD_WHAT, EC_WORD_HUH_QUES, EC_WORD_ARE, EC_WORD_YOU, EC_WORD_JOKING, EC_WORD_QUES},
			.speechAfter = {EC_WORD_WAAAH, EC_WORD_WAAAH, EC_WORD_OH, EC_WORD_BIG, EC_WORD_SISTER, EC_WORD_EXCL},
		#endif
			.mons = {
				{
					.species = SPECIES_FURRET,
					.heldItem = ITEM_KINGS_ROCK,
					.moves = {MOVE_DIG, MOVE_AMNESIA, MOVE_DEFENSE_CURL, MOVE_FOLLOW_ME},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("FOUINAR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("WIESENIOR"),
					#else
					.nickname = _("FURRET"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_AZUMARILL,
					.heldItem = ITEM_WHITE_HERB,
					.moves = {MOVE_DIVE, MOVE_LIGHT_SCREEN, MOVE_TAIL_WHIP, MOVE_DEFENSE_CURL},
					.hpEV = 155,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x14, // FEMALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("AZUMARILL"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("AZUMARILL"),
					#else
					.nickname = _("AZUMARILL"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_KINGLER,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_DIVE, MOVE_HARDEN, MOVE_LEER, MOVE_AMNESIA},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x91, // MALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("KRABBOSS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KINGLER"),
					#else
					.nickname = _("KINGLER"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CLOYSTER,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_DIVE, MOVE_WITHDRAW, MOVE_PROTECT, MOVE_SUPERSONIC},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x14, // FEMALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("CRUSTABRI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("AUSTOS"),
					#else
					.nickname = _("CLOYSTER"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_QUAGSIRE,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_DIG, MOVE_YAWN, MOVE_AMNESIA, MOVE_SAFEGUARD},
					.hpEV = 200,
					.attackEV = 0,
					.defenseEV = 110,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 200,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x94, // MALE CAREFUL
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MARAISTE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MORLORD"),
					#else
					.nickname = _("QUAGSIRE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_KABUTOPS,
					.heldItem = ITEM_PECHA_BERRY,
					.moves = {MOVE_DIG, MOVE_SAND_ATTACK, MOVE_ENDURE, MOVE_CONFUSE_RAY},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x30, // MALE CAREFUL
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("KABUTOPS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KABUTOPS"),
					#else
					.nickname = _("KABUTOPS"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00015d7c
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Double_8 = {
	.id = 21,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_DOUBLE,
	.prize = TTPRIZE_MENTAL_HERB,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("TED-SELI"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_ABSOLUTELY, EC_WORD_TALENT, EC_WORD_A_LOT, EC_WORD_RECOMMEND, EC_WORD_WIN, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_SORRY, EC_WORD_UNDEFINED, EC_WORD_FORGIVE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_OH_DEAR, EC_WORD_UNDEFINED, EC_WORD_EXCL_EXCL, EC_WORD_DOWN, EC_WORD_STRONG, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_HAVE, EC_WORD_A_LOT, EC_WORD_WHAT, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("GEB&MEGAN"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_THESE_WERE, EC_WORD_LISTEN, EC_WORD_TO, EC_WORD_SILKY, EC_WORD_FIGHTING, EC_WORD_QUES},
			.speechWin = {EC_WORD_ARE, EC_WORD_TO, EC_MOVE(STRENGTH), EC_WORD_PROBABLY, EC_WORD_NATURE, EC_WORD_EXCL},
			.speechLose = {EC_WORD_WILL_BE_HERE, EC_WORD_TO, EC_MOVE(STRENGTH), EC_WORD_PROBABLY, EC_WORD_NATURE, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_REFUSE, EC_WORD_EXCL, EC_WORD_TCH, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("GEB & MEL"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_YOU_RE, EC_WORD_OUR, EC_WORD_OPPONENT, EC_WORD_QUES, EC_WORD_WIMPY, EC_WORD_AHAHA},
			.speechWin = {EC_WORD_AHAHA, EC_WORD_FORGIVE, EC_WORD_WHO_IS, EC_WORD_FRIEND, EC_WORD_WHERE, EC_WORD_LOSS},
			.speechLose = {EC_WORD_OH_DEAR, EC_WORD_HIM, EC_WORD_YOU_RE, EC_WORD_VERY, EC_WORD_DONE, EC_WORD_EXCL_EXCL},
			.speechAfter = {EC_WORD_BELONGS_TO, EC_WORD_PLAYED, EC_WORD_PLEASE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("BERND&EMMA"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_YOU_RE, EC_WORD_OUR, EC_WORD_FOE, EC_WORD_QUES, EC_WORD_PUSHOVER, EC_WORD_HAHAHA},
			.speechWin = {EC_WORD_HAHAHA, EC_WORD_SORRY, EC_WORD_MY, EC_WORD_FRIEND, EC_WORD_TOUGH, EC_WORD_LOST},
			.speechLose = {EC_WORD_YOU_RE, EC_WORD_SERIOUS, EC_WORD_ISN_T_IT_QUES, EC_WORD_MY, EC_WORD_FRIEND, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_HIDDEN, EC_WORD_BABE, EC_WORD_PLEASE, EC_WORD_DON_T, EC_WORD_EXCL, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("GEB&MEGAN"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_YOU_RE, EC_WORD_OUR, EC_WORD_OPPONENT, EC_WORD_QUES, EC_WORD_PUSHOVER, EC_WORD_HAHAHA},
			.speechWin = {EC_WORD_HAHAHA, EC_WORD_SORRY, EC_WORD_MY, EC_WORD_FRIEND, EC_WORD_TOUGH, EC_WORD_LOSS},
			.speechLose = {EC_WORD_YOU_RE, EC_WORD_SERIOUS, EC_WORD_AREN_T, EC_WORD_YOU, EC_WORD_FRIEND, EC_WORD_QUES},
			.speechAfter = {EC_WORD_WON_T, EC_WORD_YOU, EC_WORD_GET, EC_WORD_LOST, EC_WORD_PLEASE, EC_WORD_QUES},
		#endif
			.mons = {
				{
					.species = SPECIES_POLITOED,
					.heldItem = ITEM_KINGS_ROCK,
					.moves = {MOVE_SURF, MOVE_HYPNOSIS, MOVE_PERISH_SONG, MOVE_SWAGGER},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x8C, // MALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TARPAUD"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("QUAXO"),
					#else
					.nickname = _("POLITOED"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GYARADOS,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_HYPER_BEAM, MOVE_DRAGON_DANCE, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 155,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x96, // MALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LEVIATOR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GARADOS"),
					#else
					.nickname = _("GYARADOS"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_LAPRAS,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x0F, // FEMALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LOKHLASS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LAPRAS"),
					#else
					.nickname = _("LAPRAS"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_NIDOQUEEN,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE},
					.hpEV = 110,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x00, // FEMALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NIDOQUEEN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NIDOQUEEN"),
					#else
					.nickname = _("NIDOQUEEN"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_JYNX,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_WATER_PULSE, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 155,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x00, // FEMALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LIPPOUTOU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ROSSANA"),
					#else
					.nickname = _("JYNX"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GIRAFARIG,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_LIGHT_SCREEN, MOVE_CRUNCH, MOVE_PSYCHIC, MOVE_REFLECT},
					.hpEV = 210,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x8C, // MALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GIRAFARIG"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GIRAFARIG"),
					#else
					.nickname = _("GIRAFARIG"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("TED-SELI"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_QUES_EXCL, EC_WORD_DIDN_T, EC_WORD_FIGHTS, EC_WORD_MISS, EC_WORD_WE, EC_WORD_QUES},
			.speechWin = {EC_WORD_GWAHAHAHA, EC_WORD_UNDEFINED, EC_WORD_SORRY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_DOWN, EC_WORD_WHY, EC_WORD_LIE, EC_WORD_LOSS, EC_WORD_EVERY, EC_WORD_TERRIBLE},
			.speechAfter = {EC_WORD_UNBELIEVABLE, EC_WORD_UNDEFINED, EC_WORD_EXCL_EXCL, EC_WORD_LET_S, EC_WORD_APPROVED, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("GEB&MEGAN"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_WAKES_UP, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_NOW, EC_WORD_FUNNY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_GOOD_BYE, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_ARE, EC_WORD_FINISH, EC_WORD_MISS, EC_WORD_SAID, EC_WORD_AND, EC_WORD_LOSE},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("GEB & MEL"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_YOU_RE, EC_WORD_OUR, EC_WORD_OPPONENT, EC_WORD_QUES, EC_WORD_GIGGLE, EC_WORD_ELLIPSIS},
			.speechWin = {EC_WORD_GIGGLE, EC_WORD_ELLIPSIS, EC_WORD_SORRY, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_SERIOUSLY, EC_WORD_IT_S, EC_WORD_UNBELIEVABLE, EC_WORD_EXCL_EXCL, EC_WORD_REALLY, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_DID, EC_WORD_WORKING, EC_WORD_PLUS, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("BERND&EMMA"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_YOU_RE, EC_WORD_OUR, EC_WORD_FOE, EC_WORD_QUES, EC_WORD_GIGGLE, EC_WORD_ELLIPSIS},
			.speechWin = {EC_WORD_GIGGLE, EC_WORD_ELLIPSIS, EC_WORD_I_AM, EC_WORD_SO, EC_WORD_SORRY, EC_WORD_EXCL},
			.speechLose = {EC_WORD_MY, EC_WORD_WORD, EC_WORD_IS, EC_WORD_SIMPLE, EC_WORD_UNBELIEVABLE, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_WE, EC_WORD_MUST_BE, EC_WORD_MORE, EC_WORD_TRAIN, EC_WORD_EXCL, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("GEB&MEGAN"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 7,
			.speechBefore = {EC_WORD_YOU_RE, EC_WORD_OUR, EC_WORD_FOE, EC_WORD_QUES, EC_WORD_GIGGLE, EC_WORD_ELLIPSIS},
			.speechWin = {EC_WORD_GIGGLE, EC_WORD_ELLIPSIS, EC_WORD_I_AM, EC_WORD_SO, EC_WORD_SORRY, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_MY, EC_WORD_WORD, EC_WORD_THIS, EC_WORD_IS, EC_WORD_JUST, EC_WORD_INCREDIBLE},
			.speechAfter = {EC_WORD_WE, EC_WORD_NEED, EC_WORD_TO, EC_WORD_TRAIN, EC_WORD_SOME, EC_WORD_MORE},
		#endif
			.mons = {
				{
					.species = SPECIES_MAROWAK,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE, MOVE_PROTECT},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x94, // MALE CAREFUL
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("OSSATUEUR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KNOGGA"),
					#else
					.nickname = _("MAROWAK"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_URSARING,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_AERIAL_ACE},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 155,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("URSARING"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("URSARING"),
					#else
					.nickname = _("URSARING"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SLOWKING,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_SHADOW_BALL},
					.hpEV = 0,
					.attackEV = 110,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 200,
					.spDefenseEV = 200,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x11, // FEMALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ROIGADA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LASCHOKING"),
					#else
					.nickname = _("SLOWKING"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ALAKAZAM,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_PSYCHIC, MOVE_PROTECT, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
					.hpEV = 110,
					.attackEV = 0,
					.defenseEV = 200,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 200,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x41, // MALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ALAKAZAM"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SIMSALA"),
					#else
					.nickname = _("ALAKAZAM"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_NIDOKING,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_SURF, MOVE_MEGAHORN, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
					.hpEV = 110,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x00, // MALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NIDOKING"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NIDOKING"),
					#else
					.nickname = _("NIDOKING"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_RHYDON,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_EARTHQUAKE, MOVE_PROTECT, MOVE_MEGAHORN, MOVE_ROCK_SLIDE},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x93, // MALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RHINOFEROS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RIZEROS"),
					#else
					.nickname = _("RHYDON"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x000160f4
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Double_Unused1 = {
	.id = 22,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_DOUBLE,
	.prize = TTPRIZE_ZINC,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("LISA-LOE"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 1,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("LISA & LU"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 1,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("LISA&ERIN"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 1,
			.speechBefore = {EC_WORD_WE_RE, EC_WORD_WIN, EC_WORD_THIS, EC_WORD_FIGHTING, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_AIYEEH, EC_WORD_WOW, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_DARN, EC_WORD_AND, EC_WORD_DARN, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("BEA&TINA"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 1,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("LISA&LEAH"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 1,
			.speechBefore = {EC_WORD_ABSOLUTELY, EC_WORD_WE_RE, EC_WORD_GOING, EC_WORD_TO, EC_WORD_WIN, EC_WORD_EXCL},
			.speechWin = {EC_WORD_YEAH_YEAH, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_AWW, EC_WORD_EXCL, EC_WORD_WAAAH, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_EXCUSE_ME, EC_WORD_BUT, EC_WORD_YOU_RE, EC_WORD_ALL, EC_WORD_TOO_STRONG, EC_WORD_UNDEFINED},
		#endif
			.mons = {
				{
					.species = SPECIES_POLIWAG,
					.heldItem = ITEM_CHERI_BERRY,
					.moves = {MOVE_SURF, MOVE_PROTECT, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x87, // MALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PTITARD"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("QUAPSEL"),
					#else
					.nickname = _("POLIWAG"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SQUIRTLE,
					.heldItem = ITEM_MYSTIC_WATER,
					.moves = {MOVE_WATER_PULSE, MOVE_PROTECT, MOVE_TOXIC, MOVE_MIRROR_COAT},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x2D, // MALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("CARAPUCE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SCHIGGY"),
					#else
					.nickname = _("SQUIRTLE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CHINCHOU,
					.heldItem = ITEM_MAGNET,
					.moves = {MOVE_SURF, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY, MOVE_THUNDERBOLT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x0F, // FEMALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LOUPIO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LAMPI"),
					#else
					.nickname = _("CHINCHOU"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_NIDORAN_F,
					.heldItem = ITEM_POISON_BARB,
					.moves = {MOVE_WATER_PULSE, MOVE_SLUDGE_BOMB, MOVE_CRUNCH, MOVE_DIG},
					.hpEV = 110,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x00, // FEMALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NIDORAN♀"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NIDORAN♀"),
					#else
					.nickname = _("NIDORAN♀"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CLEFAIRY,
					.heldItem = ITEM_WHITE_HERB,
					.moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_SING, MOVE_MINIMIZE},
					.hpEV = 110,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x0F, // FEMALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MELOFEE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PIEPI"),
					#else
					.nickname = _("CLEFAIRY"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_HORSEA,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_SURF, MOVE_SMOKESCREEN, MOVE_ATTRACT, MOVE_DRAGON_RAGE},
					.hpEV = 110,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x2D, // MALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("HYPOTREMPE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SEEPER"),
					#else
					.nickname = _("HORSEA"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("LISA-LOE"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 1,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("LISA &  LU"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 1,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("LISA&ERIN"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 1,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("BEA&TINA"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 1,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("LISA&LEAH"),
			.facilityClass = FACILITY_CLASS_TWINS,
			.textColor = 1,
			.speechBefore = {EC_WORD_CAN, EC_WORD_WE, EC_WORD_WIN, EC_WORD_QUES, EC_WORD_IT_S, EC_WORD_EXCITING},
			.speechWin = {EC_WORD_YEAH_YEAH, EC_WORD_EXCL_EXCL, EC_WORD_YOU, EC_WORD_MAKE, EC_WORD_ME, EC_WORD_HAPPY},
			.speechLose = {EC_WORD_AWW, EC_WORD_EXCL, EC_WORD_WAAAH, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_YOU, EC_WORD_SHOULD, EC_WORD_NOT, EC_MOVE2(BEAT_UP), EC_WORD_ON, EC_WORD_CHILDREN},
		#endif
			.mons = {
				{
					.species = SPECIES_WOOPER,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_YAWN, MOVE_FLASH},
					.hpEV = 110,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x93, // MALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("AXOLOTO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("FELINO"),
					#else
					.nickname = _("WOOPER"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PSYDUCK,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_SURF, MOVE_CROSS_CHOP, MOVE_HYPNOSIS, MOVE_DISABLE},
					.hpEV = 110,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 1,
					.personality = 0x96, // MALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PSYKOKWAK"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ENTON"),
					#else
					.nickname = _("PSYDUCK"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SNUBBULL,
					.heldItem = ITEM_PECHA_BERRY,
					.moves = {MOVE_WATER_PULSE, MOVE_THUNDER_WAVE, MOVE_CRUNCH, MOVE_SHADOW_BALL},
					.hpEV = 110,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x00, // FEMALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("SNUBBULL"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SNUBBULL"),
					#else
					.nickname = _("SNUBBULL"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_JIGGLYPUFF,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_WATER_PULSE, MOVE_THUNDER_WAVE, MOVE_SING, MOVE_DISABLE},
					.hpEV = 110,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x0F, // FEMALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RONDOUDOU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PUMMELUFF"),
					#else
					.nickname = _("JIGGLYPUFF"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_NIDORAN_M,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_WATER_PULSE, MOVE_SLUDGE_BOMB, MOVE_HORN_DRILL, MOVE_DIG},
					.hpEV = 110,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x00, // MALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NIDORAN♂"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NIDORAN♂"),
					#else
					.nickname = _("NIDORAN♂"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_TOTODILE,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_SURF, MOVE_PROTECT, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
					.hpEV = 110,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x2D, // MALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("KAIMINUS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KARNIMANI"),
					#else
					.nickname = _("TOTODILE"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(15),
	},
	.checksum = 0x000197d4
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Knockout_7 = {
	.id = 23,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_KNOCKOUT,
	.prize = TTPRIZE_PROTEIN,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("LOURDES"),
			.facilityClass = FACILITY_CLASS_TUBER,
			.textColor = 1,
			.speechBefore = {EC_WORD_ABSOLUTELY, EC_WORD_IT, EC_WORD_ONLY, EC_WORD_POKEMON, EC_WORD_EH_QUES, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_EXCL_EXCL, EC_WORD_WON, EC_WORD_THING, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_PLAYS, EC_WORD_LOSE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_LET_S, EC_WORD_BEING, EC_WORD_ALT_COLOR, EC_WORD_POKEMON, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("PRISCILLA"),
			.facilityClass = FACILITY_CLASS_TUBER,
			.textColor = 1,
			.speechBefore = {EC_WORD_AS_IF, EC_WORD_PLEASE, EC_WORD_IF_I_WIN, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_IS_IT_QUES, EC_WORD_WON, EC_WORD_LOWS, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_IS_IT_QUES, EC_WORD_LOST, EC_WORD_BUT, EC_WORD_IS, EC_WORD_NORMAL, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_THANKS, EC_WORD_NITWIT, EC_WORD_WEREN_T, EC_WORD_CHALLENGE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("NINON"),
			.facilityClass = FACILITY_CLASS_TUBER,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_AN, EC_WORD_GIRL, EC_WORD_EVEN_SO, EC_WORD_POKEMON, EC_WORD_HERE_I_COME},
			.speechWin = {EC_WORD_WAAAH, EC_WORD_EXCL_EXCL, EC_WORD_I_VE, EC_WORD_REALLY, EC_WORD_WINS, EC_WORD_QUES},
			.speechLose = {EC_WORD_OH_DEAR, EC_WORD_EXCL, EC_WORD_WHERE, EC_WORD_LOSS, EC_WORD_UNBELIEVABLE, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_YOU_RE, EC_WORD_A, EC_WORD_TRAINER, EC_WORD_NICE, EC_WORD_THANK_YOU, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("MARTINA"),
			.facilityClass = FACILITY_CLASS_TUBER,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_A, EC_WORD_SMALL, EC_WORD_POKEMON, EC_WORD_GIRL, EC_WORD_EXCL},
			.speechWin = {EC_WORD_WAAAH, EC_WORD_EXCL, EC_WORD_HAVE, EC_WORD_I, EC_WORD_WON, EC_WORD_QUES},
			.speechLose = {EC_WORD_OH_DEAR, EC_WORD_ELLIPSIS, EC_WORD_I_VE, EC_WORD_DON_T, EC_WORD_WON, EC_WORD_ELLIPSIS},
			.speechAfter = {EC_WORD_YOU_RE, EC_WORD_A, EC_WORD_NICE, EC_WORD_TRAINER, EC_WORD_THANK_YOU, EC_WORD_EXCL},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("PRISCILLA"),
			.facilityClass = FACILITY_CLASS_TUBER,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_A_LITTLE, EC_WORD_POKEMON, EC_WORD_GIRL, EC_WORD_HERE_I_COME, EC_WORD_EXCL},
			.speechWin = {EC_WORD_WAAAH, EC_WORD_EXCL, EC_WORD_DID, EC_WORD_I, EC_WORD_WIN, EC_WORD_QUES},
			.speechLose = {EC_WORD_OH_DEAR, EC_WORD_ELLIPSIS, EC_WORD_I, EC_WORD_COULDN_T, EC_WORD_WIN, EC_WORD_ELLIPSIS},
			.speechAfter = {EC_WORD_YOU_RE, EC_WORD_A, EC_WORD_NICE, EC_WORD_TRAINER, EC_WORD_THANK_YOU, EC_WORD_EXCL},
		#endif
			.mons = {
				{
					.species = SPECIES_GOLDEEN,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_WATER_PULSE, MOVE_MEGAHORN, MOVE_SUPERSONIC, MOVE_ICE_BEAM},
					.hpEV = 110,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x96, // MALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("POISSIRENE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GOLDINI"),
					#else
					.nickname = _("GOLDEEN"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_SEAKING,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_SURF, MOVE_MEGAHORN, MOVE_HORN_DRILL, MOVE_PROTECT},
					.hpEV = 100,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x00, // FEMALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("POISSOROY"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GOLKING"),
					#else
					.nickname = _("SEAKING"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_LANTURN,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ICE_BEAM},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 100,
					.spDefenseEV = 210,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x8C, // MALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LANTURN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LANTURN"),
					#else
					.nickname = _("LANTURN"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_LANTURN,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_RAIN_DANCE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 100,
					.spDefenseEV = 210,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x0F, // FEMALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LANTURN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LANTURN"),
					#else
					.nickname = _("LANTURN"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_GOLDEEN,
					.heldItem = ITEM_APICOT_BERRY,
					.moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_EDGE, MOVE_TOXIC, MOVE_PSYBEAM},
					.hpEV = 110,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x00, // FEMALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("POISSIRENE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GOLDINI"),
					#else
					.nickname = _("GOLDEEN"),
					#endif
					.friendship = 0
				},
				{
					.species = SPECIES_SEAKING,
					.heldItem = ITEM_PETAYA_BERRY,
					.moves = {MOVE_SURF, MOVE_HYPER_BEAM, MOVE_ICE_BEAM, MOVE_PSYBEAM},
					.hpEV = 110,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x96, // MALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("POISSOROY"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GOLKING"),
					#else
					.nickname = _("SEAKING"),
					#endif
					.friendship = 0
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("CHANTAL"),
			.facilityClass = FACILITY_CLASS_LADY,
			.textColor = 1,
			.speechBefore = {EC_WORD_HELLO, EC_WORD_UNDEFINED, EC_WORD_QUES_EXCL, EC_WORD_ARE, EC_WORD_ALT_COLOR, EC_WORD_QUES},
			.speechWin = {EC_WORD_I, EC_WORD_WILL_BE_HERE, EC_WORD_ALT_COLOR, EC_WORD_UNDEFINED, EC_WORD_SORRY, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_LET_S, EC_WORD_A_LOT, EC_WORD_SPIRALING, EC_WORD_NITWIT, EC_WORD_I, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_THANKS, EC_WORD_HOWEVER, EC_WORD_FOR_NOW, EC_WORD_BATTLE, EC_WORD_EVERY, EC_WORD_ANTICIPATION},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("CARLOTTA"),
			.facilityClass = FACILITY_CLASS_LADY,
			.textColor = 1,
			.speechBefore = {EC_WORD_ARE, EC_WORD_TO, EC_WORD_DUDE, EC_WORD_LISTEN, EC_WORD_COOLNESS, EC_WORD_EXCL},
			.speechWin = {EC_WORD_APOLOGIZE, EC_WORD_BUT, EC_WORD_IS_IT_QUES, EC_WORD_WON, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WILL, EC_WORD_PLUS, EC_WORD_COOLNESS, EC_WORD_LISTEN, EC_WORD_DON_T, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_THANKS, EC_WORD_AND, EC_WORD_CONGRATS, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("CHARLOTTE"),
			.facilityClass = FACILITY_CLASS_LADY,
			.textColor = 1,
			.speechBefore = {EC_WORD_HELLO, EC_WORD_I_AM, EC_WORD_AN, EC_WORD_LADY, EC_WORD_EVEN_SO, EC_WORD_POKEMON},
			.speechWin = {EC_WORD_OH, EC_WORD_ELLIPSIS, EC_WORD_SORRY, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_YOU, EC_WORD_SIBLINGS, EC_WORD_BESIDE, EC_WORD_EXCUSE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_HOHOHO, EC_WORD_THANK_YOU, EC_WORD_FOR, EC_WORD_THIS, EC_WORD_FIGHTING, EC_WORD_AMUSING},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("TANJA"),
			.facilityClass = FACILITY_CLASS_LADY,
			.textColor = 1,
			.speechBefore = {EC_WORD_HELLO, EC_WORD_I_AM, EC_WORD_AN, EC_WORD_POKEMON, EC_WORD_LADY, EC_WORD_EXCL},
			.speechWin = {EC_WORD_OH, EC_WORD_MY, EC_WORD_MY, EC_WORD_ELLIPSIS, EC_WORD_I_AM, EC_WORD_SORRY},
			.speechLose = {EC_WORD_YOU_RE, EC_WORD_BETTER, EC_WORD_THAN, EC_WORD_AN, EC_WORD_POKEMON, EC_WORD_LADY},
			.speechAfter = {EC_WORD_HOHOHO, EC_WORD_THANK_YOU, EC_WORD_FOR, EC_WORD_OF, EC_WORD_AMUSING, EC_WORD_FIGHTING},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("CHARLOTTE"),
			.facilityClass = FACILITY_CLASS_LADY,
			.textColor = 1,
			.speechBefore = {EC_WORD_HELLO, EC_WORD_THERE, EC_WORD_I_AM, EC_WORD_A, EC_WORD_POKEMON, EC_WORD_LADY},
			.speechWin = {EC_WORD_OH, EC_WORD_MY, EC_WORD_MY, EC_WORD_ELLIPSIS, EC_WORD_I_AM, EC_WORD_SORRY},
			.speechLose = {EC_WORD_YOU_RE, EC_WORD_BETTER, EC_WORD_THAN, EC_WORD_A, EC_WORD_POKEMON, EC_WORD_LADY},
			.speechAfter = {EC_WORD_HOHOHO, EC_WORD_THANK_YOU, EC_WORD_FOR, EC_WORD_AN, EC_WORD_AMUSING, EC_WORD_BATTLE},
		#endif
			.mons = {
				{
					.species = SPECIES_OCTILLERY,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_OCTAZOOKA, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER},
					.hpEV = 55,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x0F, // FEMALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("OCTILLERY"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("OCTILLERY"),
					#else
					.nickname = _("OCTILLERY"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_QWILFISH,
					.heldItem = ITEM_PERSIM_BERRY,
					.moves = {MOVE_SURF, MOVE_TOXIC, MOVE_REVENGE, MOVE_DOUBLE_TEAM},
					.hpEV = 200,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 210,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x14, // FEMALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("QWILFISH"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("BALDORFISH"),
					#else
					.nickname = _("QWILFISH"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_REMORAID,
					.heldItem = ITEM_PECHA_BERRY,
					.moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_THUNDER_WAVE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x96, // MALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("REMORAID"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("REMORAID"),
					#else
					.nickname = _("REMORAID"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_REMORAID,
					.heldItem = ITEM_WHITE_HERB,
					.moves = {MOVE_WATER_PULSE, MOVE_BLIZZARD, MOVE_FIRE_BLAST, MOVE_PROTECT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x00, // FEMALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("REMORAID"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("REMORAID"),
					#else
					.nickname = _("REMORAID"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_OCTILLERY,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_OCTAZOOKA, MOVE_SLUDGE_BOMB, MOVE_THUNDER_WAVE, MOVE_HYPER_BEAM},
					.hpEV = 155,
					.attackEV = 100,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x93, // MALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("OCTILLERY"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("OCTILLERY"),
					#else
					.nickname = _("OCTILLERY"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_QWILFISH,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND},
					.hpEV = 100,
					.attackEV = 100,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 210,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x96, // MALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("QWILFISH"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("BALDORFISH"),
					#else
					.nickname = _("QWILFISH"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("GABRIELA"),
			.facilityClass = FACILITY_CLASS_SWIMMER_F,
			.textColor = 1,
			.speechBefore = {EC_WORD_ISN_T_IT_QUES, EC_WORD_THAT_S, EC_WORD_SPIRALING, EC_WORD_ALT_COLOR, EC_WORD_POKEMON, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_GWAHAHAHA, EC_WORD_LET_S, EC_WORD_EXCITING, EC_WORD_FUNNY, EC_WORD_LIE, EC_WORD_THESE_WERE},
			.speechLose = {EC_WORD_ANTICIPATION, EC_WORD_UNDEFINED, EC_WORD_WHERE, EC_WORD_ISN_T_IT_QUES, EC_WORD_EVERY, EC_WORD_HAPPILY},
			.speechAfter = {EC_WORD_WENT, EC_WORD_FOR_NOW, EC_WORD_BATTLE, EC_WORD_VERY, EC_WORD_PLAY, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("SARA"),
			.facilityClass = FACILITY_CLASS_SWIMMER_F,
			.textColor = 1,
			.speechBefore = {EC_WORD_ARE, EC_WORD_FRIEND, EC_WORD_HOWEVER, EC_WORD_POKEMON, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_APOLOGIZE, EC_WORD_BUT, EC_WORD_WILL_BE_HERE, EC_WORD_LOWS, EC_WORD_WEAK, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WILL_BE_HERE, EC_WORD_LOWS, EC_WORD_OVERWHELMING, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_GREAT, EC_WORD_HEARING, EC_WORD_LAY, EC_WORD_DO, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("SHANIA"),
			.facilityClass = FACILITY_CLASS_SWIMMER_F,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_AN, EC_WORD_HEROINE, EC_WORD_POKEMON, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNBELIEVABLE, EC_WORD_EXCL, EC_WORD_YOU_RE, EC_WORD_REALLY, EC_WORD_TOO_WEAK, EC_WORD_EXCL},
			.speechLose = {EC_WORD_I_AM, EC_WORD_REALLY, EC_WORD_SURPRISE, EC_WORD_EXCL_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_BEAUTIFUL, EC_WORD_FIGHTING, EC_WORD_THANK_YOU, EC_WORD_A_LOT, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("DANIELA"),
			.facilityClass = FACILITY_CLASS_SWIMMER_F,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_AN, EC_WORD_POKEMON, EC_WORD_HEROINE, EC_WORD_EXCL, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_AHAHA, EC_WORD_NONE, EC_WORD_CHOICE, EC_WORD_YOU_RE, EC_WORD_SIMPLE, EC_WORD_TOO_WEAK},
			.speechLose = {EC_WORD_WHY, EC_WORD_QUES_EXCL, EC_WORD_YOU, EC_WORD_DON_T, EC_WORD_LIE, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_NICE, EC_WORD_FIGHTING, EC_WORD_THANK_YOU, EC_WORD_EXCL, EC_WORD_VERY, EC_WORD_ENTERTAINING},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("SHANIA"),
			.facilityClass = FACILITY_CLASS_SWIMMER_F,
			.textColor = 1,
			.speechBefore = {EC_WORD_A, EC_WORD_POKEMON, EC_WORD_HEROINE, EC_WORD_THAT_S, EC_WORD_WHAT, EC_WORD_I_AM},
			.speechWin = {EC_WORD_AHAHA, EC_WORD_NO, EC_WORD_WAY, EC_WORD_YOU_RE, EC_WORD_TOO_WEAK, EC_WORD_SERIOUSLY},
			.speechLose = {EC_WORD_WHY, EC_WORD_QUES_EXCL, EC_WORD_YOU, EC_WORD_SHOULD, EC_WORD_NOT, EC_WORD_LIE},
			.speechAfter = {EC_WORD_NICE, EC_WORD_BATTLE, EC_WORD_THANKS, EC_WORD_FOR, EC_WORD_ENTERTAINING, EC_WORD_ME},
		#endif
			.mons = {
				{
					.species = SPECIES_MANTINE,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("DEMANTA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MANTAX"),
					#else
					.nickname = _("MANTINE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MAGIKARP,
					.heldItem = ITEM_CHOICE_BAND,
					.moves = {MOVE_SPLASH, MOVE_TACKLE, MOVE_NONE, MOVE_NONE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x0D, // FEMALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MAGICARPE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KARPADOR"),
					#else
					.nickname = _("MAGIKARP"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MANTINE,
					.heldItem = ITEM_MENTAL_HERB,
					.moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x0F, // FEMALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("DEMANTA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MANTAX"),
					#else
					.nickname = _("MANTINE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GYARADOS,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_HYPER_BEAM, MOVE_THUNDER_WAVE, MOVE_EARTHQUAKE, MOVE_PROTECT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x03, // FEMALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LEVIATOR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GARADOS"),
					#else
					.nickname = _("GYARADOS"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MAGIKARP,
					.heldItem = ITEM_CHOICE_BAND,
					.moves = {MOVE_FLAIL, MOVE_TACKLE, MOVE_NONE, MOVE_NONE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x94, // MALE CAREFUL
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MAGICARPE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KARPADOR"),
					#else
					.nickname = _("MAGIKARP"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GYARADOS,
					.heldItem = ITEM_KINGS_ROCK,
					.moves = {MOVE_DOUBLE_EDGE, MOVE_THUNDER_WAVE, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LEVIATOR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GARADOS"),
					#else
					.nickname = _("GYARADOS"),
					#endif
					.friendship = 255
				},
			}
		},
	},
	.checksum = 0x0001521d
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Knockout_4 = {
	.id = 24,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_KNOCKOUT,
	.prize = TTPRIZE_DRAGON_SCALE,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("JUANRA"),
			.facilityClass = FACILITY_CLASS_SAILOR,
			.textColor = 1,
			.speechBefore = {EC_WORD_BELONGS_TO, EC_WORD_NITWIT, EC_WORD_FIGHTS, EC_WORD_MISS, EC_MOVE2(SLACK_OFF), EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_EXCL_EXCL, EC_WORD_GOTCHA, EC_WORD_APPROVED, EC_WORD_RECOMMEND, EC_WORD_WIN, EC_WORD_EXCL},
			.speechLose = {EC_WORD_EXCL_EXCL, EC_WORD_DOWN, EC_WORD_WANDERING, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_LOSS, EC_WORD_IS, EC_WORD_A_LITTLE, EC_WORD_HOPELESS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("BERTRAND"),
			.facilityClass = FACILITY_CLASS_SAILOR,
			.textColor = 1,
			.speechBefore = {EC_WORD_FOR, EC_WORD_IMPORTANT, EC_WORD_IS, EC_WORD_FOR, EC_WORD_CARES, EC_WORD_EXCL},
			.speechWin = {EC_WORD_BYE_BYE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_BUT, EC_WORD_MISS, EC_WORD_DECIDE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_IMPOSSIBLE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("NILS"),
			.facilityClass = FACILITY_CLASS_SAILOR,
			.textColor = 1,
			.speechBefore = {EC_WORD_LET_S, EC_WORD_NOT, EC_WORD_DONE, EC_WORD_ELLIPSIS, EC_WORD_SERIOUSLY, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_GIVE_UP, EC_WORD_IT_S, EC_WORD_LOSE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_OOPS, EC_WORD_THAT_WAS, EC_WORD_EASY, EC_WORD_OF, EC_WORD_WIN, EC_WORD_EXCL_EXCL},
			.speechAfter = {EC_WORD_GOOD, EC_WORD_WITHOUT, EC_MOVE(GRUDGE), EC_WORD_BUT, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("STEFFEN"),
			.facilityClass = FACILITY_CLASS_SAILOR,
			.textColor = 1,
			.speechBefore = {EC_WORD_TAKE_THAT, EC_WORD_EASY, EC_WORD_ELLIPSIS, EC_WORD_IT_S, EC_WORD_IMPORTANT, EC_WORD_EXCL},
			.speechWin = {EC_WORD_YOU, EC_WORD_LOSE, EC_WORD_AT, EC_WORD_GIVE_UP, EC_WORD_EXCL, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_HOPELESS, EC_WORD_YOU_VE, EC_WORD_SIMPLE, EC_WORD_WON, EC_WORD_EXCL, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_I, EC_WORD_WANTS, EC_WORD_NONE, EC_MOVE(GRUDGE), EC_WORD_BUT, EC_WORD_ELLIPSIS},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("BRENNAN"),
			.facilityClass = FACILITY_CLASS_SAILOR,
			.textColor = 1,
			.speechBefore = {EC_WORD_TAKE, EC_WORD_THINGS, EC_WORD_EASY, EC_WORD_ELLIPSIS, EC_WORD_THAT_S, EC_WORD_IMPORTANT},
			.speechWin = {EC_WORD_YOU, EC_WORD_LOSE, EC_WORD_IF, EC_WORD_YOU, EC_WORD_GIVE_UP, EC_WORD_EXCL},
			.speechLose = {EC_WORD_OOPS, EC_WORD_YOU, EC_WORD_GOT, EC_WORD_AN, EC_WORD_EASY, EC_WORD_WIN},
			.speechAfter = {EC_WORD_I, EC_WORD_DON_T, EC_MOVE(GRUDGE), EC_WORD_YOU, EC_WORD_BUT, EC_WORD_ELLIPSIS},
		#endif
			.mons = {
				{
					.species = SPECIES_LAPRAS,
					.heldItem = ITEM_CHESTO_BERRY,
					.moves = {MOVE_HYDRO_PUMP, MOVE_PSYCHIC, MOVE_ATTRACT, MOVE_REST},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 155,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 255,
					.otId = 15 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x0F, // FEMALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LOKHLASS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LAPRAS"),
					#else
					.nickname = _("LAPRAS"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_KINGDRA,
					.heldItem = ITEM_CHESTO_BERRY,
					.moves = {MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_DRAGON_BREATH, MOVE_REST},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x8C, // MALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("HYPOROI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SEEDRAKING"),
					#else
					.nickname = _("KINGDRA"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MACHAMP,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HYPER_BEAM},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 130,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 125,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x4E, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MACKOGNEUR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MACHOMEI"),
					#else
					.nickname = _("MACHAMP"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CHANSEY,
					.heldItem = ITEM_ORAN_BERRY,
					.moves = {MOVE_WATER_PULSE, MOVE_SOFT_BOILED, MOVE_MINIMIZE, MOVE_THUNDER_WAVE},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x05, // FEMALE BOLD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LEVEINARD"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("CHANEIRA"),
					#else
					.nickname = _("CHANSEY"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_TAUROS,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SWAGGER},
					.hpEV = 110,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x03, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TAUROS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TAUROS"),
					#else
					.nickname = _("TAUROS"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SNORLAX,
					.heldItem = ITEM_ORAN_BERRY,
					.moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_REST},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x21, // MALE IMPISH
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RONFLEX"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RELAXO"),
					#else
					.nickname = _("SNORLAX"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("JOSERRA"),
			.facilityClass = FACILITY_CLASS_FISHERMAN,
			.textColor = 1,
			.speechBefore = {EC_WORD_ABSOLUTELY, EC_WORD_LIKE, EC_WORD_A_LOT, EC_WORD_FISHING, EC_WORD_IS, EC_WORD_BEING},
			.speechWin = {EC_WORD_AND, EC_WORD_ABSOLUTELY, EC_WORD_LIKE, EC_WORD_A_LOT, EC_WORD_WIN, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_ABSOLUTELY, EC_WORD_OR, EC_WORD_LISTEN, EC_WORD_FISHING, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WHERE, EC_WORD_CASE, EC_WORD_IS, EC_WORD_FISHING, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("ANTONIO"),
			.facilityClass = FACILITY_CLASS_FISHERMAN,
			.textColor = 1,
			.speechBefore = {EC_WORD_WHOM, EC_WORD_LIKES, EC_WORD_FISHING, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_FISHING, EC_WORD_WHOM, EC_WORD_PLAYED, EC_WORD_IF_I_WIN, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_FISHING, EC_WORD_WHOM, EC_WORD_PLAYED, EC_WORD_IF_I_LOSE, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_NATURALLY, EC_WORD_AS_IF, EC_WORD_IS, EC_WORD_IT, EC_WORD_WITH, EC_WORD_SPORTS},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("KENNY"),
			.facilityClass = FACILITY_CLASS_FISHERMAN,
			.textColor = 1,
			.speechBefore = {EC_WORD_DAUGHTER, EC_WORD_MATCH_UP, EC_WORD_OF, EC_WORD_FISHING, EC_WORD_IS, EC_WORD_FANTASTIC},
			.speechWin = {EC_WORD_DAUGHTER, EC_WORD_MATCH_UP, EC_WORD_OF, EC_WORD_FISHING, EC_WORD_IS, EC_WORD_EXCELLENT},
			.speechLose = {EC_WORD_UH_OH, EC_WORD_ELLIPSIS, EC_WORD_HEY_QUES, EC_WORD_I_VE, EC_WORD_LOST, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_DAUGHTER, EC_WORD_MATCH_UP, EC_WORD_WHO_WAS, EC_WORD_WON_T, EC_WORD_NOT, EC_WORD_WIN},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("UMBERTO"),
			.facilityClass = FACILITY_CLASS_FISHERMAN,
			.textColor = 1,
			.speechBefore = {EC_WORD_MY, EC_WORD_FISHING, EC_WORD_FASHION, EC_WORD_IS, EC_WORD_FANTASTIC, EC_WORD_EXCL},
			.speechWin = {EC_WORD_MY, EC_WORD_FISHING, EC_WORD_FASHION, EC_WORD_WINS, EC_WORD_SIMPLE, EC_WORD_EXCL},
			.speechLose = {EC_WORD_UH_OH, EC_WORD_ELLIPSIS, EC_WORD_I_VE, EC_WORD_LOST, EC_WORD_EXCL, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_FASHION, EC_WORD_CUTENESS, EC_WORD_BECOMES, EC_WORD_DON_T, EC_WORD_WINS, EC_WORD_EXCL},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("KADEN"),
			.facilityClass = FACILITY_CLASS_FISHERMAN,
			.textColor = 1,
			.speechBefore = {EC_WORD_MY, EC_WORD_FISHING, EC_WORD_FASHION, EC_WORD_APPEAL, EC_WORD_IS, EC_WORD_FANTASTIC},
			.speechWin = {EC_WORD_MY, EC_WORD_FANTASTIC, EC_WORD_FASHION, EC_WORD_APPEAL, EC_WORD_WINS, EC_WORD_OUT},
			.speechLose = {EC_WORD_UH_OH, EC_WORD_ELLIPSIS, EC_WORD_I, EC_WORD_SEE, EC_WORD_I, EC_WORD_LOST},
			.speechAfter = {EC_WORD_FASHION, EC_WORD_APPEAL, EC_WORD_WON_T, EC_WORD_GET, EC_WORD_ME, EC_WORD_WINS},
		#endif
			.mons = {
				{
					.species = SPECIES_CHINCHOU,
					.heldItem = ITEM_MAGNET,
					.moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY, MOVE_PROTECT},
					.hpEV = 100,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x00, // FEMALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LOUPIO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LAMPI"),
					#else
					.nickname = _("CHINCHOU"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_DRATINI,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_WATER_PULSE, MOVE_THUNDER_WAVE, MOVE_DRAGON_BREATH, MOVE_PROTECT},
					.hpEV = 110,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x00, // FEMALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MINIDRACO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("DRATINI"),
					#else
					.nickname = _("DRATINI"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SLOWPOKE,
					.heldItem = ITEM_PECHA_BERRY,
					.moves = {MOVE_WATER_PULSE, MOVE_YAWN, MOVE_DISABLE, MOVE_PROTECT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x96, // MALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RAMOLOSS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("FLEGMON"),
					#else
					.nickname = _("SLOWPOKE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MAGIKARP,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_SPLASH, MOVE_FLAIL, MOVE_TACKLE, MOVE_NONE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 23 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x17, // FEMALE CAREFUL
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MAGICARPE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KARPADOR"),
					#else
					.nickname = _("MAGIKARP"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_SEAKING,
					.heldItem = ITEM_CHERI_BERRY,
					.moves = {MOVE_HORN_DRILL, MOVE_MEGAHORN, MOVE_SUPERSONIC, MOVE_AGILITY},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 23 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x17, // FEMALE CAREFUL
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("POISSOROY"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GOLKING"),
					#else
					.nickname = _("SEAKING"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_TENTACRUEL,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_MIRROR_COAT, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_TOXIC},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x96, // MALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TENTACRUEL"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TENTOXA"),
					#else
					.nickname = _("TENTACRUEL"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("MAURICIO"),
			.facilityClass = FACILITY_CLASS_GENTLEMAN,
			.textColor = 1,
			.speechBefore = {EC_WORD_EXCL_EXCL, EC_WORD_ISN_T_IT_QUES, EC_WORD_DECIDED, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_WHOM, EC_WORD_NATURALLY, EC_WORD_LOLLING, EC_WORD_STRONG, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_HAVE, EC_WORD_NATURALLY, EC_WORD_STRONG, EC_WORD_WOBBLY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_LAY, EC_WORD_WHOM, EC_WORD_HAS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("EUGENIO"),
			.facilityClass = FACILITY_CLASS_GENTLEMAN,
			.textColor = 1,
			.speechBefore = {EC_WORD_ABSOLUTELY, EC_WORD_WILL_BE_HERE, EC_WORD_STRONG, EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_AS_IF, EC_WORD_AS_MUCH_AS, EC_WORD_DON_T, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_LOWS, EC_WORD_AS_MUCH_AS, EC_WORD_DON_T, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_ANGRY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("CELESTIN"),
			.facilityClass = FACILITY_CLASS_GENTLEMAN,
			.textColor = 1,
			.speechBefore = {EC_WORD_HMM, EC_WORD_QUES, EC_WORD_YOU_RE, EC_WORD_HEALTHY, EC_WORD_TODAY, EC_WORD_QUES},
			.speechWin = {EC_WORD_HMM, EC_WORD_WHERE, EC_WORD_MISTAKE, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_YOU_RE, EC_WORD_REALLY, EC_WORD_A, EC_WORD_MASTER, EC_WORD_POKEMON, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_SORRY, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("WALTER"),
			.facilityClass = FACILITY_CLASS_GENTLEMAN,
			.textColor = 1,
			.speechBefore = {EC_WORD_HMM, EC_WORD_QUES, EC_WORD_ARE, EC_WORD_YOU, EC_WORD_TALENT, EC_WORD_QUES},
			.speechWin = {EC_WORD_I, EC_WORD_UNDERSTAND, EC_WORD_I, EC_WORD_HAVE, EC_WORD_DON_T, EC_WORD_AGREE},
			.speechLose = {EC_WORD_YOU, EC_WORD_ARE, EC_WORD_SIMPLE, EC_WORD_A, EC_WORD_MASTER, EC_WORD_TRAINER},
			.speechAfter = {EC_WORD_I_AM, EC_WORD_SORRY, EC_WORD_I_WAS, EC_WORD_SON, EC_WORD_FOE, EC_WORD_ELLIPSIS},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("EMANUEL"),
			.facilityClass = FACILITY_CLASS_GENTLEMAN,
			.textColor = 1,
			.speechBefore = {EC_WORD_HMM, EC_WORD_QUES, EC_WORD_ARE, EC_WORD_YOU, EC_WORD_SKILLED, EC_WORD_QUES},
			.speechWin = {EC_WORD_I, EC_WORD_SEE, EC_WORD_I, EC_WORD_WASN_T, EC_WORD_RIGHT, EC_WORD_ELLIPSIS},
			.speechLose = {EC_WORD_YOU, EC_WORD_TRULY, EC_WORD_ARE, EC_WORD_A, EC_WORD_MASTER, EC_WORD_TRAINER},
			.speechAfter = {EC_WORD_I_AM, EC_WORD_SORRY, EC_WORD_THAT, EC_WORD_I_WAS, EC_WORD_YOUR, EC_WORD_OPPONENT},
		#endif
			.mons = {
				{
					.species = SPECIES_VAPOREON,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ATTRACT, MOVE_BITE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x14, // FEMALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("AQUALI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("AQUANA"),
					#else
					.nickname = _("VAPOREON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ESPEON,
					.heldItem = ITEM_CHESTO_BERRY,
					.moves = {MOVE_PSYCHIC, MOVE_BITE, MOVE_REFLECT, MOVE_REST},
					.hpEV = 110,
					.attackEV = 0,
					.defenseEV = 200,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 200,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x0F, // FEMALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MENTALI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PSIANA"),
					#else
					.nickname = _("ESPEON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_BLISSEY,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_WATER_PULSE, MOVE_MINIMIZE, MOVE_THUNDER_WAVE, MOVE_PROTECT},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x05, // FEMALE BOLD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LEUPHORIE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("HEITEIRA"),
					#else
					.nickname = _("BLISSEY"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_STARMIE,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_PSYCHIC},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 155,
					.otId = 20 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x14, // GENDERLESS CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("STAROSS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("STARMIE"),
					#else
					.nickname = _("STARMIE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PERSIAN,
					.heldItem = ITEM_KINGS_ROCK,
					.moves = {MOVE_SLASH, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_FAKE_OUT},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 130,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 125,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x0D, // FEMALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PERSIAN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SNOBILIKAT"),
					#else
					.nickname = _("PERSIAN"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_AZUMARILL,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_SURF, MOVE_ENCORE, MOVE_ATTRACT, MOVE_DIG},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x00, // FEMALE HARDY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("AZUMARILL"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("AZUMARILL"),
					#else
					.nickname = _("AZUMARILL"),
					#endif
					.friendship = 255
				},
			}
		},
	},
	.checksum = 0x0001554b
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Single_3 = {
	.id = 25,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_SINGLE,
	.prize = TTPRIZE_METAL_COAT,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("JUANCAR"),
			.facilityClass = FACILITY_CLASS_JUGGLER,
			.textColor = 2,
			.speechBefore = {EC_WORD_GUARD, EC_WORD_LIE, EC_WORD_WHY, EC_WORD_AWFUL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_EXCL_EXCL, EC_WORD_WON, EC_WORD_PATTERN, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_CONGRATS, EC_WORD_UNDEFINED, EC_WORD_FOR_NOW, EC_WORD_BATTLE, EC_WORD_VERY, EC_WORD_ANTICIPATION},
			.speechAfter = {EC_WORD_QUES_EXCL, EC_WORD_DIDN_T, EC_WORD_FIGHTS, EC_MOVE(ENCORE), EC_WORD_NEAR, EC_WORD_QUES},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("GIAN"),
			.facilityClass = FACILITY_CLASS_JUGGLER,
			.textColor = 2,
			.speechBefore = {EC_WORD_WORKS, EC_WORD_FAINT, EC_MOVE2(EXPLOSION), EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_RUN, EC_WORD_FAINT, EC_MOVE2(EXPLOSION), EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WILL_BE_HERE, EC_WORD_LOWS, EC_WORD_SUPER, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_REJECT, EC_WORD_IS, EC_WORD_TO, EC_WORD_DECIDED, EC_WORD_EXCL, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("JAROD"),
			.facilityClass = FACILITY_CLASS_JUGGLER,
			.textColor = 2,
			.speechBefore = {EC_WORD_IF, EC_WORD_BELONGS_TO, EC_WORD_BE, EC_WORD_FEELING, EC_WORD_SUPER, EC_WORD_PARTY},
			.speechWin = {EC_WORD_THANK_YOU, EC_WORD_FOR, EC_WORD_FEELING, EC_WORD_VICTORY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_YOU_RE, EC_WORD_HEALTHY, EC_WORD_HIM, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_IT, EC_WORD_LAY, EC_WORD_MAKE, EC_WORD_FEELING, EC_WORD_PARTY, EC_WORD_QUES},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("YANNICK"),
			.facilityClass = FACILITY_CLASS_JUGGLER,
			.textColor = 2,
			.speechBefore = {EC_WORD_LET_S, EC_WORD_AN, EC_MOVE2(EXPLOSION), EC_WORD_PARTY, EC_WORD_GOT, EC_WORD_EXCL},
			.speechWin = {EC_WORD_CONGRATS, EC_WORD_FOR, EC_WORD_YOURS, EC_WORD_LOSS, EC_WORD_PARTY, EC_WORD_EXCL},
			.speechLose = {EC_WORD_NICE, EC_MOVE(SELF_DESTRUCT), EC_WORD_EXCL, EC_WORD_YOU_RE, EC_WORD_PERFECT, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_TOTALLY, EC_WORD_MORE, EC_WORD_PARTY, EC_WORD_QUES, EC_WORD_YAHOO, EC_WORD_YAHOO},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("JARRETT"),
			.facilityClass = FACILITY_CLASS_JUGGLER,
			.textColor = 2,
			.speechBefore = {EC_WORD_LET_S, EC_WORD_HAVE, EC_WORD_AN, EC_MOVE2(EXPLOSION), EC_WORD_PARTY, EC_WORD_EXCL},
			.speechWin = {EC_WORD_CONGRATS, EC_WORD_FOR, EC_WORD_YOUR, EC_WORD_LOSS, EC_WORD_PARTY, EC_WORD_KID},
			.speechLose = {EC_WORD_NICE, EC_MOVE(SELF_DESTRUCT), EC_WORD_THERE, EC_WORD_EXCL, EC_WORD_YOU_RE, EC_WORD_PERFECT},
			.speechAfter = {EC_WORD_WANT, EC_WORD_TO, EC_WORD_PARTY, EC_WORD_SOME, EC_WORD_MORE, EC_WORD_QUES},
		#endif
			.mons = {
				{
					.species = SPECIES_ELECTRODE,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_EXPLOSION, MOVE_LIGHT_SCREEN, MOVE_SCREECH, MOVE_THUNDERBOLT},
					.hpEV = 10,
					.attackEV = 150,
					.defenseEV = 100,
					.speedEV = 150,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x0D, // GENDERLESS JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ELECTRODE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LEKTROBAL"),
					#else
					.nickname = _("ELECTRODE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_VOLTORB,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_EXPLOSION, MOVE_FLASH, MOVE_DOUBLE_TEAM, MOVE_THUNDER},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 155,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x0D, // GENDERLESS JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("VOLTORBE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("VOLTOBAL"),
					#else
					.nickname = _("VOLTORB"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_WEEZING,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_EXPLOSION, MOVE_SLUDGE_BOMB, MOVE_DESTINY_BOND, MOVE_THUNDERBOLT},
					.hpEV = 0,
					.attackEV = 200,
					.defenseEV = 155,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x07, // FEMALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("SMOGOGO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SMOGMOG"),
					#else
					.nickname = _("WEEZING"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GOLEM,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_EXPLOSION, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 150,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x7F, // MALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GROLEM"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GEOWAZ"),
					#else
					.nickname = _("GOLEM"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_EXEGGCUTE,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_EXPLOSION, MOVE_STUN_SPORE, MOVE_HYPNOSIS, MOVE_GIGA_DRAIN},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x07, // FEMALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NOEUNOEUF"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("OWEI"),
					#else
					.nickname = _("EXEGGCUTE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_FORRETRESS,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_EXPLOSION, MOVE_GIGA_DRAIN, MOVE_DIG, MOVE_PROTECT},
					.hpEV = 0,
					.attackEV = 100,
					.defenseEV = 155,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x84, // MALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("FORETRESS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("FORSTELLKA"),
					#else
					.nickname = _("FORRETRESS"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00015b6a
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Mixed_3 = {
	.id = 26,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_SINGLE,
	.prize = TTPRIZE_DRAGON_SCALE,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("ODÓN"),
			.facilityClass = FACILITY_CLASS_SUPER_NERD,
			.textColor = 2,
			.speechBefore = {EC_MOVE2(THUNDER_WAVE), EC_WORD_IS, EC_WORD_AROUND, EC_WORD_SPIRALING, EC_WORD_NITWIT, EC_WORD_BELONGS_TO},
			.speechWin = {EC_MOVE2(THUNDER_WAVE), EC_WORD_DON_T, EC_WORD_LIE, EC_WORD_FASHION, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_ABSOLUTELY, EC_WORD_PLAYS, EC_WORD_GIDDY, EC_WORD_MISS, EC_MOVE2(THUNDER_WAVE), EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_SIGH, EC_WORD_UNDEFINED, EC_WORD_WILL_BE_HERE, EC_WORD_GIDDY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("MARCELLO"),
			.facilityClass = FACILITY_CLASS_SUPER_NERD,
			.textColor = 2,
			.speechBefore = {EC_WORD_CHOOSE, EC_WORD_MAKING, EC_MOVE2(THUNDER_WAVE), EC_WORD_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_MOVE2(THUNDER_WAVE), EC_WORD_IS, EC_WORD_IT, EC_WORD_WITH, EC_MOVE2(PRESENT), EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_ARE, EC_WORD_STRONG, EC_WORD_HOW, EC_WORD_A, EC_WORD_TRAIN, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_ARE, EC_WORD_A, EC_MOVE2(WHIRLWIND), EC_WORD_LISTEN, EC_WORD_POWER, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("OLIVER"),
			.facilityClass = FACILITY_CLASS_SUPER_NERD,
			.textColor = 2,
			.speechBefore = {EC_MOVE2(THUNDER_WAVE), EC_WORD_WINS, EC_WORD_ALWAYS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_LIKELY_TO, EC_WORD_ACCEPT, EC_WORD_DAUGHTER, EC_MOVE2(THUNDER_WAVE), EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_MOVE2(WRAP), EC_MOVE(BIND), EC_WORD_ELECTRIC, EC_MOVE2(WHIRLWIND), EC_WORD_SPIRALING, EC_WORD_UNDEFINED},
			.speechAfter = {EC_MOVE2(WHIRLWIND), EC_WORD_SPIRALING, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_MOVE2(WHIRLWIND), EC_WORD_SPIRALING},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("RAIMUND"),
			.facilityClass = FACILITY_CLASS_SUPER_NERD,
			.textColor = 2,
			.speechBefore = {EC_WORD_HERE_GOES, EC_MOVE2(THUNDER_WAVE), EC_MOVE2(WRAP), EC_WORD_ME, EC_WORD_DON_T, EC_WORD_EXCL},
			.speechWin = {EC_WORD_ACCEPT, EC_WORD_MY, EC_MOVE2(PRESENT), EC_WORD_THE, EC_MOVE2(THUNDER_WAVE), EC_WORD_EXCL},
			.speechLose = {EC_MOVE2(WRAP), EC_MOVE(BIND), EC_WORD_ELECTRIC, EC_MOVE2(WHIRLWIND), EC_WORD_SPIRALING, EC_WORD_ABOUT},
			.speechAfter = {EC_MOVE2(WHIRLWIND), EC_WORD_SPIRALING, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_SPIRALING, EC_MOVE2(WHIRLWIND)},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("OWEN"),
			.facilityClass = FACILITY_CLASS_SUPER_NERD,
			.textColor = 2,
			.speechBefore = {EC_WORD_HERE_IT_IS, EC_MOVE2(THUNDER_WAVE), EC_WORD_DON_T, EC_MOVE2(WRAP), EC_WORD_ME, EC_WORD_EXCL},
			.speechWin = {EC_WORD_ACCEPT, EC_WORD_MY, EC_MOVE2(PRESENT), EC_WORD_OF, EC_MOVE2(THUNDER_WAVE), EC_WORD_EXCL},
			.speechLose = {EC_MOVE2(WRAP), EC_MOVE(BIND), EC_WORD_ELECTRIC, EC_MOVE2(WHIRLWIND), EC_WORD_SPIRALING, EC_WORD_AROUND},
			.speechAfter = {EC_MOVE2(WHIRLWIND), EC_WORD_SPIRALING, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_SPIRALING, EC_MOVE2(WHIRLWIND)},
		#endif
			.mons = {
				{
					.species = SPECIES_MAGNETON,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_PROTECT, MOVE_ZAP_CANNON, MOVE_TOXIC, MOVE_SUPERSONIC},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 125,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 130,
					.otId = 10 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x0A, // GENDERLESS TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MAGNETON"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MAGNETON"),
					#else
					.nickname = _("MAGNETON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PIKACHU,
					.heldItem = ITEM_LIGHT_BALL,
					.moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_DOUBLE_TEAM},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 150,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 105,
					.otId = 15 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x0F, // FEMALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PIKACHU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PIKACHU"),
					#else
					.nickname = _("PIKACHU"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_JOLTEON,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_DOUBLE_TEAM, MOVE_TOXIC},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 100,
					.spAttackEV = 0,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x37, // MALE BOLD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("VOLTALI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("BLITZA"),
					#else
					.nickname = _("JOLTEON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_BLISSEY,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_THUNDER_WAVE, MOVE_BLIZZARD, MOVE_WATER_PULSE, MOVE_REST},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x05, // FEMALE BOLD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LEUPHORIE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("HEITEIRA"),
					#else
					.nickname = _("BLISSEY"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PORYGON2,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_THUNDER_WAVE, MOVE_ZAP_CANNON, MOVE_PSYCHIC, MOVE_RECOVER},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 125,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 130,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x05, // GENDERLESS BOLD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PORYGON2"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PORYGON2"),
					#else
					.nickname = _("PORYGON2"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PORYGON,
					.heldItem = ITEM_LAX_INCENSE,
					.moves = {MOVE_THUNDER_WAVE, MOVE_ZAP_CANNON, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 5 | (0 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x05, // GENDERLESS BOLD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PORYGON"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PORYGON"),
					#else
					.nickname = _("PORYGON"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x000160ec
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Mixed_2 = {
	.id = 27,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_SINGLE,
	.prize = TTPRIZE_PROTEIN,
	.trainers = {
	    {
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("PABLO"),
			.facilityClass = FACILITY_CLASS_PSYCHIC_M,
			.textColor = 1,
			.speechBefore = {EC_WORD_LET_S, EC_WORD_EXCITING, EC_WORD_PATTERN, EC_WORD_RECOMMEND, EC_WORD_TOO_LATE, EC_WORD_POKEMON},
			.speechWin = {EC_WORD_TOO_LATE, EC_WORD_POKEMON, EC_WORD_EVER, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_WHOM, EC_WORD_NITWIT, EC_WORD_USING, EC_MOVE(KINESIS), EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WHERE, EC_WORD_KNOW, EC_WORD_A_TINY_BIT, EC_WORD_HALL_OF_FAME, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("LORENZO"),
			.facilityClass = FACILITY_CLASS_PSYCHIC_M,
			.textColor = 1,
			.speechBefore = {EC_WORD_COUNT_ON, EC_WORD_MEAN, EC_WORD_APPEARS, EC_WORD_WEREN_T, EC_WORD_BETTER, EC_MOVE(STRENGTH)},
			.speechWin = {EC_WORD_NOW, EC_WORD_WORKS, EC_WORD_ABSOLUTELY, EC_WORD_ARE, EC_WORD_STRONG, EC_WORD_EXCL},
			.speechLose = {EC_WORD_AS_IF, EC_WORD_STORES, EC_WORD_THOSE_ARE, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_AS_IF, EC_WORD_ARE, EC_WORD_ALONE, EC_WORD_TODAY, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("LORENZO"),
			.facilityClass = FACILITY_CLASS_PSYCHIC_M,
			.textColor = 1,
			.speechBefore = {EC_WORD_DAUGHTER, EC_MOVE(STRENGTH), EC_WORD_IS, EC_WORD_THAT_S, EC_WORD_TOP, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_NONE, EC_WORD_TRAINER, EC_WORD_ISN_T, EC_WORD_BELONGS_TO, EC_WORD_WHO_WAS, EC_WORD_WHEN_I_WIN},
			.speechLose = {EC_WORD_IT_S, EC_WORD_ELLIPSIS, EC_WORD_IMPOSSIBLE, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WILL, EC_WORD_MAKE, EC_WORD_THE, EC_WORD_HALL_OF_FAME, EC_WORD_OF, EC_MOVE(KINESIS)},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("LOTHAR"),
			.facilityClass = FACILITY_CLASS_PSYCHIC_M,
			.textColor = 1,
			.speechBefore = {EC_WORD_THESE, EC_WORD_POWER, EC_WORD_IS, EC_WORD_NOW, EC_WORD_DONE, EC_WORD_EXCL},
			.speechWin = {EC_WORD_NONE, EC_WORD_KEEN_EYE, EC_WORD_STOP, EC_WORD_WHO_WAS, EC_WORD_POWER, EC_WORD_EXCL},
			.speechLose = {EC_WORD_HERE_IT_IS, EC_WORD_EXCL, EC_MOVE(KINESIS), EC_WORD_EXCL, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_I, EC_WORD_DO, EC_WORD_IT, EC_WORD_IN, EC_MOVE(KINESIS), EC_WORD_HALL_OF_FAME},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("LORENZO"),
			.facilityClass = FACILITY_CLASS_PSYCHIC_M,
			.textColor = 1,
			.speechBefore = {EC_WORD_THIS, EC_WORD_POWER, EC_WORD_IS, EC_WORD_NOW, EC_WORD_COMPLETE, EC_WORD_EXCL},
			.speechWin = {EC_WORD_NO, EC_WORD_KEEN_EYE, EC_WORD_CAN, EC_WORD_STOP, EC_WORD_MY, EC_WORD_POWER},
			.speechLose = {EC_WORD_HERE_IT_IS, EC_WORD_EXCL, EC_MOVE(KINESIS), EC_WORD_EXCL, EC_WORD_ELLIPSIS, EC_WORD_WHAT},
			.speechAfter = {EC_WORD_I, EC_WORD_WILL, EC_WORD_MAKE, EC_WORD_THE, EC_MOVE(KINESIS), EC_WORD_HALL_OF_FAME},
		#endif
			.mons = {
				{
					.species = SPECIES_MR_MIME,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x07, // FEMALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("M. MIME"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PANTIMOS"),
					#else
					.nickname = _("MR. MIME"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_HYPNO,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PSYCHIC},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 155,
					.speedEV = 0,
					.spAttackEV = 200,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x8C, // MALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("HYPNOMADE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("HYPNO"),
					#else
					.nickname = _("HYPNO"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ALAKAZAM,
					.heldItem = ITEM_CHOICE_BAND,
					.moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PSYCHIC},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 155,
					.speedEV = 150,
					.spAttackEV = 155,
					.spDefenseEV = 50,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x0F, // FEMALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ALAKAZAM"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SIMSALA"),
					#else
					.nickname = _("ALAKAZAM"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GENGAR,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_HYPNOSIS, MOVE_TOXIC},
					.hpEV = 0,
					.attackEV = 200,
					.defenseEV = 0,
					.speedEV = 100,
					.spAttackEV = 55,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x88, // MALE HASTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ECTOPLASMA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GENGAR"),
					#else
					.nickname = _("GENGAR"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GIRAFARIG,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_BODY_SLAM, MOVE_REST},
					.hpEV = 0,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 155,
					.spAttackEV = 0,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 1,
					.personality = 0x03, // FEMALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GIRAFARIG"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GIRAFARIG"),
					#else
					.nickname = _("GIRAFARIG"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_STARMIE,
					.heldItem = ITEM_APICOT_BERRY,
					.moves = {MOVE_THUNDERBOLT, MOVE_SURF, MOVE_RECOVER, MOVE_ICE_BEAM},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 55,
					.speedEV = 250,
					.spAttackEV = 150,
					.spDefenseEV = 55,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x0A, // GENDERLESS TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("STAROSS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("STARMIE"),
					#else
					.nickname = _("STARMIE"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x0001624b
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Double_Unused2 = {
	.id = 28,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_DOUBLE,
	.prize = TTPRIZE_SCOPE_LENS,
	.trainers = {
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("NÍA-NERO"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 4,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("NIA & CARL"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 4,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("NIA & CARL"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 4,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("MIA&FABIAN"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 4,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("NIA & CARL"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 4,
			.speechBefore = {EC_WORD_HERE_GOES, EC_WORD_MY, EC_WORD_DIGITAL, EC_WORD_ROMANTIC, EC_WORD_HERO, EC_WORD_STRATEGY},
			.speechWin = {EC_WORD_THAT_S, EC_WORD_THE, EC_WORD_DIGITAL, EC_WORD_HYPER, EC_WORD_MODE, EC_WORD_POWER},
			.speechLose = {EC_WORD_MY, EC_WORD_PERFECT, EC_WORD_STRATEGY, EC_WORD_WAS, EC_MOVE2(BEAT_UP), EC_WORD_QUES},
			.speechAfter = {EC_WORD_MY, EC_WORD_INVINCIBLE, EC_WORD_STRATEGY, EC_WORD_WAS, EC_WORD_DESTROYED, EC_WORD_ELLIPSIS},
		#endif
			.mons = {
				{
					.species = SPECIES_MUK,
					.heldItem = ITEM_CHOICE_BAND,
					.moves = {MOVE_THUNDERBOLT, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_BODY_SLAM},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 155,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 1,
					.personality = 0x07, // FEMALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GROTADMORV"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SLEIMOK"),
					#else
					.nickname = _("MUK"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GENGAR,
					.heldItem = ITEM_PETAYA_BERRY,
					.moves = {MOVE_THUNDERBOLT, MOVE_CONFUSE_RAY, MOVE_PSYCHIC, MOVE_EXPLOSION},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 155,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x15, // FEMALE GENTLE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ECTOPLASMA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GENGAR"),
					#else
					.nickname = _("GENGAR"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ALAKAZAM,
					.heldItem = ITEM_GANLON_BERRY,
					.moves = {MOVE_THUNDER_PUNCH, MOVE_PSYCHIC, MOVE_RECOVER, MOVE_REFLECT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x0A, // FEMALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ALAKAZAM"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SIMSALA"),
					#else
					.nickname = _("ALAKAZAM"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_JOLTEON,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_THUNDERBOLT, MOVE_FLAIL, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM},
					.hpEV = 0,
					.attackEV = 50,
					.defenseEV = 100,
					.speedEV = 160,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x05, // FEMALE BOLD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("VOLTALI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("BLITZA"),
					#else
					.nickname = _("JOLTEON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ELECTRODE,
					.heldItem = ITEM_LIECHI_BERRY,
					.moves = {MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_MIRROR_COAT, MOVE_LIGHT_SCREEN},
					.hpEV = 0,
					.attackEV = 55,
					.defenseEV = 0,
					.speedEV = 100,
					.spAttackEV = 100,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x14, // GENDERLESS CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ELECTRODE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LEKTROBAL"),
					#else
					.nickname = _("ELECTRODE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_RAICHU,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_THUNDERBOLT, MOVE_COUNTER, MOVE_REVERSAL, MOVE_LIGHT_SCREEN},
					.hpEV = 0,
					.attackEV = 55,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x02, // FEMALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RAICHU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RAICHU"),
					#else
					.nickname = _("RAICHU"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("NÍA-NERO"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 4,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("NIA & CARL"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 4,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("NIA & CARL"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 4,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("MIA&FABIAN"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 4,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("NIA & CARL"),
			.facilityClass = FACILITY_CLASS_COOL_COUPLE,
			.textColor = 4,
			.speechBefore = {EC_WORD_MASTER, EC_WORD_COMPLETE, EC_WORD_FASHION, EC_WORD_SYSTEM, EC_WORD_START, EC_WORD_EXCL},
			.speechWin = {EC_WORD_THAT_S_IT_EXCL, EC_WORD_THE, EC_WORD_POWER, EC_WORD_OF, EC_WORD_OUR, EC_WORD_SYSTEM},
			.speechLose = {EC_WORD_OKAY, EC_WORD_EXCL, EC_MOVE(THUNDERBOLT), EC_WORD_RUN_AWAY, EC_WORD_SYSTEM, EC_WORD_START},
			.speechAfter = {EC_WORD_GO, EC_WORD_ON, EC_WORD_PLEASE, EC_WORD_EXCL, EC_WORD_TCH, EC_WORD_ELLIPSIS},
		#endif
			.mons = {
				{
					.species = SPECIES_KANGASKHAN,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_SHADOW_BALL, MOVE_REVERSAL, MOVE_ENDURE, MOVE_FAKE_OUT},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 105,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 150,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x03, // FEMALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("KANGOUREX"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KANGAMA"),
					#else
					.nickname = _("KANGASKHAN"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_TAUROS,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_TOMB, MOVE_SURF, MOVE_REST},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x03, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TAUROS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TAUROS"),
					#else
					.nickname = _("TAUROS"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MILTANK,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_MILK_DRINK, MOVE_ROCK_TOMB},
					.hpEV = 0,
					.attackEV = 155,
					.defenseEV = 50,
					.speedEV = 250,
					.spAttackEV = 0,
					.spDefenseEV = 55,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x03, // FEMALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ECREMEUH"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MILTANK"),
					#else
					.nickname = _("MILTANK"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_RHYDON,
					.heldItem = ITEM_CHOICE_BAND,
					.moves = {MOVE_THUNDERBOLT, MOVE_MEGAHORN, MOVE_HORN_DRILL, MOVE_ROCK_TOMB},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 1,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RHINOFEROS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RIZEROS"),
					#else
					.nickname = _("RHYDON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_DRAGONITE,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_BLIZZARD, MOVE_SURF, MOVE_OUTRAGE, MOVE_FLAMETHROWER},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 0,
					.personality = 0x91, // MALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("DRACOLOSSE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("DRAGORAN"),
					#else
					.nickname = _("DRAGONITE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_LAPRAS,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_THUNDERBOLT, MOVE_BLIZZARD, MOVE_SURF, MOVE_HORN_DRILL},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 155,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 31,
					.attackIV = 31,
					.defenseIV = 31,
					.speedIV = 31,
					.spAttackIV = 31,
					.spDefenseIV = 31,
					.abilityNum = 1,
					.personality = 0x91, // MALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LOKHLASS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LAPRAS"),
					#else
					.nickname = _("LAPRAS"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00016360
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Double_7 = {
	.id = 29,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_DOUBLE,
	.prize = TTPRIZE_CARBOS,
	.trainers = {
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("SEL-RELA"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 2,
			.speechBefore = {EC_WORD_EXCL_EXCL, EC_WORD_DOWN, EC_MOVE(SHEER_COLD), EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_NOW, EC_WORD_WHERE, EC_WORD_WHOM, EC_MOVE(SHEER_COLD), EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_MISS, EC_MOVE(SHEER_COLD), EC_WORD_WHERE, EC_WORD_CAN, EC_WORD_WIN, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WHERE, EC_WORD_WHOM, EC_WORD_WHEN_I_WIN, EC_WORD_HOWEVER, EC_WORD_A_TINY_BIT, EC_MOVE(SHEER_COLD)},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("AXE & REN"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 2,
			.speechBefore = {EC_WORD_CHOOSE, EC_WORD_NATURALLY, EC_WORD_LESSONS, EC_WORD_LISTEN, EC_WORD_FIGHTING, EC_WORD_QUES},
			.speechWin = {EC_WORD_TODAY, EC_WORD_COME_OVER, EC_WORD_NITWIT, EC_WORD_ABOUT, EC_WORD_LESSONS, EC_WORD_QUES},
			.speechLose = {EC_WORD_TODAY, EC_WORD_SMELL, EC_WORD_NITWIT, EC_WORD_ABOUT, EC_WORD_LESSONS, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_THIS, EC_WORD_MISS, EC_WORD_LESSONS, EC_WORD_LISTEN, EC_WORD_FIGHTING, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("LEO & LEA"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 2,
			.speechBefore = {EC_WORD_HE, EC_WORD_BELONGS_TO, EC_WORD_MAKE, EC_WORD_SUPER, EC_WORD_COLD, EC_WORD_EXCL_EXCL},
			.speechWin = {EC_WORD_COUNT_ON, EC_WORD_EXCL, EC_WORD_IT_S, EC_WORD_SUPER, EC_WORD_COLD, EC_WORD_EXCL},
			.speechLose = {EC_WORD_CAN, EC_WORD_NOT, EC_WORD_WIN, EC_WORD_WITH, EC_WORD_THIS, EC_WORD_COLD},
			.speechAfter = {EC_WORD_THIS_IS_IT_EXCL, EC_MOVE(SHEER_COLD), EC_WORD_WHO_WAS, EC_WORD_DESTROYED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("AXEL&BEA"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 2,
			.speechBefore = {EC_WORD_IT, EC_WORD_BECOMES, EC_WORD_TERRIBLE, EC_WORD_COLD, EC_WORD_WILL, EC_WORD_EXCL},
			.speechWin = {EC_WORD_IT_S, EC_WORD_VERY, EC_WORD_COLD, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_I, EC_WORD_DON_T, EC_WORD_WINS, EC_WORD_AT, EC_WORD_THESE, EC_MOVE(SHEER_COLD)},
			.speechAfter = {EC_WORD_THESE, EC_MOVE(SHEER_COLD), EC_WORD_DOESN_T, EC_WORD_ME, EC_WORD_SHAKY, EC_WORD_EXCL},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("AXE & REN"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 2,
			.speechBefore = {EC_WORD_IT_S, EC_WORD_GOING, EC_WORD_TO, EC_WORD_GET, EC_WORD_AWFULLY, EC_WORD_COLD},
			.speechWin = {EC_WORD_THAT_S, EC_WORD_THAT, EC_WORD_MAN, EC_WORD_I_AM, EC_WORD_COLD, EC_WORD_EXCL},
			.speechLose = {EC_WORD_I, EC_WORD_CAN_T_WIN, EC_WORD_IN, EC_WORD_THIS, EC_MOVE(SHEER_COLD), EC_WORD_ELLIPSIS},
			.speechAfter = {EC_WORD_THIS, EC_MOVE(SHEER_COLD), EC_WORD_HAS, EC_WORD_ME, EC_WORD_FEELING, EC_WORD_SHAKY},
		#endif
			.mons = {
				{
					.species = SPECIES_LANTURN,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_RAIN_DANCE, MOVE_SURF, MOVE_THUNDER, MOVE_ICE_BEAM},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0A, // FEMALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LANTURN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LANTURN"),
					#else
					.nickname = _("LANTURN"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MANTINE,
					.heldItem = ITEM_PETAYA_BERRY,
					.moves = {MOVE_RAIN_DANCE, MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_ICE_BEAM},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 155,
					.spAttackEV = 100,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x14, // FEMALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("DEMANTA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MANTAX"),
					#else
					.nickname = _("MANTINE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_DEWGONG,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_RAIN_DANCE, MOVE_SURF, MOVE_SHEER_COLD, MOVE_BLIZZARD},
					.hpEV = 0,
					.attackEV = 100,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 55,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x11, // FEMALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LAMANTINE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("JUGONG"),
					#else
					.nickname = _("DEWGONG"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CLOYSTER,
					.heldItem = ITEM_KINGS_ROCK,
					.moves = {MOVE_RAIN_DANCE, MOVE_SURF, MOVE_ICE_BEAM, MOVE_HYPER_BEAM},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x11, // FEMALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("CRUSTABRI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("AUSTOS"),
					#else
					.nickname = _("CLOYSTER"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_TENTACRUEL,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_RAIN_DANCE, MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 100,
					.speedEV = 100,
					.spAttackEV = 255,
					.spDefenseEV = 55,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0A, // FEMALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TENTACRUEL"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TENTOXA"),
					#else
					.nickname = _("TENTACRUEL"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GYARADOS,
					.heldItem = ITEM_LIECHI_BERRY,
					.moves = {MOVE_RAIN_DANCE, MOVE_SURF, MOVE_DRAGON_DANCE, MOVE_RETURN},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x03, // FEMALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LEVIATOR"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GARADOS"),
					#else
					.nickname = _("GYARADOS"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("SEL-RELA"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 2,
			.speechBefore = {EC_WORD_ABSOLUTELY, EC_WORD_TIMES, EC_WORD_VERY, EC_WORD_THING, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_WIN, EC_WORD_IS, EC_WORD_VERY, EC_WORD_MATCH_UP, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_LOSS, EC_WORD_WHERE, EC_WORD_IS, EC_WORD_ANTICIPATION, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_A, EC_WORD_A_LITTLE, EC_WORD_BREAK, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("AXE & REN"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 2,
			.speechBefore = {EC_WORD_LATER, EC_WORD_A, EC_WORD_BATH, EC_WORD_TO, EC_WORD_FIGHTING, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_LATER, EC_WORD_TO, EC_WORD_VICTORY, EC_WORD_A, EC_WORD_THIS, EC_WORD_BATH},
			.speechLose = {EC_WORD_LOWS, EC_WORD_CONGRATS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_MEET_YOU, EC_WORD_SEE_YA, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("LEO & LEA"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 2,
			.speechBefore = {EC_WORD_OUR, EC_WORD_SWIFT_SWIM, EC_WORD_WHO_WAS, EC_WORD_GIVES, EC_WORD_COLD, EC_WORD_EXCL},
			.speechWin = {EC_WORD_I_VE, EC_WORD_WINS, EC_WORD_BUT, EC_WORD_I_VE, EC_WORD_A_LITTLE, EC_WORD_HOT},
			.speechLose = {EC_WORD_I_VE, EC_WORD_HUNGRY, EC_WORD_WANT, EC_WORD_WILL_BE_HERE, EC_WORD_HOT, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_SISTER, EC_WORD_WANT, EC_WORD_WILL_BE_HERE, EC_WORD_HOT, EC_WORD_PLEASE, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("AXEL&BEA"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 2,
			.speechBefore = {EC_WORD_OUR, EC_WORD_SWIFT_SWIM, EC_WORD_DOESN_T, EC_WORD_ME, EC_WORD_COLD, EC_WORD_EXCL},
			.speechWin = {EC_WORD_I, EC_WORD_WIN, EC_WORD_BUT, EC_WORD_I_AM, EC_WORD_DON_T, EC_WORD_HOT},
			.speechLose = {EC_WORD_I_VE, EC_WORD_HUNGRY, EC_WORD_OUT, EC_WORD_SOMETHING, EC_WORD_HOT, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_SISTER, EC_WORD_I, EC_WORD_NEED, EC_WORD_SOMETHING, EC_WORD_HOT, EC_WORD_PLEASE},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("AXE & REN"),
			.facilityClass = FACILITY_CLASS_SIS_AND_BRO,
			.textColor = 2,
			.speechBefore = {EC_WORD_OUR, EC_WORD_SWIFT_SWIM, EC_WORD_LEFT, EC_WORD_ME, EC_WORD_FEELING, EC_WORD_COLD},
			.speechWin = {EC_WORD_I, EC_WORD_WON, EC_WORD_BUT, EC_WORD_I_AM, EC_WORD_NOT, EC_WORD_HOT},
			.speechLose = {EC_WORD_I_AM, EC_WORD_HUNGRY, EC_WORD_FOR, EC_WORD_ANY, EC_WORD_HOT, EC_WORD_EATS},
			.speechAfter = {EC_WORD_SISTER, EC_WORD_I, EC_WORD_NEED, EC_WORD_SOMETHING, EC_WORD_HOT, EC_WORD_PLEASE},
		#endif
			.mons = {
				{
					.species = SPECIES_ELECTABUZZ,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_THUNDER, MOVE_PSYCHIC, MOVE_CROSS_CHOP, MOVE_LIGHT_SCREEN},
					.hpEV = 0,
					.attackEV = 155,
					.defenseEV = 155,
					.speedEV = 100,
					.spAttackEV = 100,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x40, // MALE NAIVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ELEKTEK"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ELEKTEK"),
					#else
					.nickname = _("ELECTABUZZ"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MAGNETON,
					.heldItem = ITEM_PETAYA_BERRY,
					.moves = {MOVE_THUNDER, MOVE_SONIC_BOOM, MOVE_METAL_SOUND, MOVE_REFLECT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 155,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x0A, // GENDERLESS TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MAGNETON"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MAGNETON"),
					#else
					.nickname = _("MAGNETON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PORYGON,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_THUNDER, MOVE_PSYCHIC, MOVE_BLIZZARD, MOVE_PROTECT},
					.hpEV = 255,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x11, // GENDERLESS QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PORYGON"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PORYGON"),
					#else
					.nickname = _("PORYGON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_DRAGONAIR,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_THUNDER, MOVE_SURF, MOVE_BLIZZARD, MOVE_OUTRAGE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 50,
					.speedEV = 155,
					.spAttackEV = 255,
					.spDefenseEV = 50,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0A, // FEMALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("DRACO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("DRAGONIR"),
					#else
					.nickname = _("DRAGONAIR"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PERSIAN,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_THUNDER, MOVE_FAKE_OUT, MOVE_WATER_PULSE, MOVE_RETURN},
					.hpEV = 0,
					.attackEV = 155,
					.defenseEV = 0,
					.speedEV = 200,
					.spAttackEV = 155,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0B, // FEMALE HASTY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PERSIAN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SNOBILIKAT"),
					#else
					.nickname = _("PERSIAN"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_STARMIE,
					.heldItem = ITEM_GANLON_BERRY,
					.moves = {MOVE_THUNDER, MOVE_SURF, MOVE_RECOVER, MOVE_REFLECT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 95,
					.speedEV = 255,
					.spAttackEV = 100,
					.spDefenseEV = 60,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x05, // GENDERLESS BOLD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("STAROSS"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("STARMIE"),
					#else
					.nickname = _("STARMIE"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00015272
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Double_Unused3 = {
	.id = 30,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_DOUBLE,
	.prize = TTPRIZE_ZINC,
	.trainers = {
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("LUCI-UDO"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 2,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("KATI & GEB"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 2,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("KATI & SEB"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 2,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("RESI&EDE"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 2,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("KATI & GEB"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 2,
			.speechBefore = {EC_WORD_WELCOME, EC_WORD_TO, EC_WORD_OUR, EC_WORD_LOVEY_DOVEY, EC_MOVE2(THUNDER_WAVE), EC_MOVE(SANDSTORM)},
			.speechWin = {EC_WORD_LALALA, EC_WORD_LALALA, EC_WORD_OUR, EC_WORD_LOVEY_DOVEY, EC_WORD_LALALA, EC_WORD_LIFE},
			.speechLose = {EC_WORD_I, EC_WORD_NEED, EC_WORD_TO, EC_WORD_LOSE, EC_WORD_MY, EC_MOVE2(FRUSTRATION)},
			.speechAfter = {EC_WORD_YOU_RE, EC_WORD_JUST, EC_WORD_A_LITTLE, EC_WORD_KID, EC_WORD_AHAHA, EC_WORD_EXCL},
		#endif
			.mons = {
				{
					.species = SPECIES_FLAAFFY,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_ATTRACT, MOVE_PROTECT, MOVE_THUNDERBOLT, MOVE_REFLECT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x84, // MALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LAINERGIE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("WAATY"),
					#else
					.nickname = _("FLAAFFY"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_QUAGSIRE,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_ATTRACT, MOVE_SURF, MOVE_AMNESIA, MOVE_BLIZZARD},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x93, // MALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MARAISTE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MORLORD"),
					#else
					.nickname = _("QUAGSIRE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PIKACHU,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_ATTRACT, MOVE_REVERSAL, MOVE_THUNDERBOLT, MOVE_IRON_TAIL},
					.hpEV = 0,
					.attackEV = 155,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x8A, // MALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PIKACHU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PIKACHU"),
					#else
					.nickname = _("PIKACHU"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ELECTABUZZ,
					.heldItem = ITEM_LIECHI_BERRY,
					.moves = {MOVE_ATTRACT, MOVE_COUNTER, MOVE_ICE_PUNCH, MOVE_BODY_SLAM},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 150,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 105,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x46, // MALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ELEKTEK"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ELEKTEK"),
					#else
					.nickname = _("ELECTABUZZ"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_TOGETIC,
					.heldItem = ITEM_KINGS_ROCK,
					.moves = {MOVE_ATTRACT, MOVE_BLIZZARD, MOVE_ANCIENT_POWER, MOVE_WATER_PULSE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x2D, // MALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TOGETIC"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TOGETIC"),
					#else
					.nickname = _("TOGETIC"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GOLDUCK,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_ATTRACT, MOVE_SURF, MOVE_DIG, MOVE_CROSS_CHOP},
					.hpEV = 0,
					.attackEV = 155,
					.defenseEV = 50,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 50,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("AKWAKWAK"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ENTORON"),
					#else
					.nickname = _("GOLDUCK"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("LUCI-UDO"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 2,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("KATI & GEB"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 2,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("KATI & SEB"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 2,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("RESI&EDE"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 2,
			.speechBefore = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("KATI & GEB"),
			.facilityClass = FACILITY_CLASS_YOUNG_COUPLE,
			.textColor = 2,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_PLUS, EC_WORD_YOU_RE, EC_WORD_MINUS, EC_WORD_LOVEY_DOVEY, EC_WORD_MAGNET_PULL},
			.speechWin = {EC_WORD_DON_T, EC_WORD_STOP, EC_WORD_OUR, EC_WORD_LOVEY_DOVEY, EC_WORD_LOCOMOTIVE, EC_WORD_EXCL},
			.speechLose = {EC_WORD_HIS, EC_WORD_CRY, EC_WORD_HAS, EC_WORD_CUTE_CHARM, EC_WORD_TOO, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_YOU, EC_WORD_HAVE, EC_WORD_TIME, EC_WORD_TO, EC_WORD_TALK, EC_WORD_QUES},
		#endif
			.mons = {
				{
					.species = SPECIES_PICHU,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_ATTRACT, MOVE_PROTECT, MOVE_SWEET_KISS, MOVE_REVERSAL},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x03, // FEMALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PICHU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PICHU"),
					#else
					.nickname = _("PICHU"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ELEKID,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_ATTRACT, MOVE_PROTECT, MOVE_DOUBLE_TEAM, MOVE_FOCUS_PUNCH},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 130,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 125,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x02, // FEMALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ELEKID"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ELEKID"),
					#else
					.nickname = _("ELEKID"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_TOGEPI,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_ATTRACT, MOVE_PROTECT, MOVE_YAWN, MOVE_WATER_PULSE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x0F, // FEMALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TOGEPI"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TOGEPI"),
					#else
					.nickname = _("TOGEPI"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PSYDUCK,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_ATTRACT, MOVE_PROTECT, MOVE_DIG, MOVE_DIVE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x16, // FEMALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PSYKOKWAK"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ENTON"),
					#else
					.nickname = _("PSYDUCK"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MAREEP,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_ATTRACT, MOVE_PROTECT, MOVE_LIGHT_SCREEN, MOVE_THUNDERBOLT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 0,
					.personality = 0x07, // FEMALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("WATTOUAT"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("VOLTILAMM"),
					#else
					.nickname = _("MAREEP"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_WOOPER,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_ATTRACT, MOVE_PROTECT, MOVE_SURF, MOVE_YAWN},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 10,
					.attackIV = 10,
					.defenseIV = 10,
					.speedIV = 10,
					.spAttackIV = 10,
					.spDefenseIV = 10,
					.abilityNum = 1,
					.personality = 0x07, // FEMALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("AXOLOTO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("FELINO"),
					#else
					.nickname = _("WOOPER"),
					#endif
					.friendship = 255
				},
			}
		},
		DUMMY_TOWER_TEAM(0),
	},
	.checksum = 0x00015966
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Knockout_6 = {
	.id = 31,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_KNOCKOUT,
	.prize = TTPRIZE_WHITE_HERB,
	.trainers = {
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("TELMO"),
			.facilityClass = FACILITY_CLASS_ROCKER,
			.textColor = 1,
			.speechBefore = {EC_WORD_HIYAH, EC_WORD_LALALA, EC_WORD_SONG, EC_WORD_IS, EC_WORD_AROUND, EC_WORD_SPIRALING},
			.speechWin = {EC_WORD_THAT_S, EC_WORD_STATIC, EC_WORD_IS, EC_WORD_BEING, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_A, EC_WORD_PLUS, EC_WORD_STATIC, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_THAT_S, EC_WORD_STATIC, EC_WORD_WITHOUT, EC_WORD_STRONG, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("SANDRO"),
			.facilityClass = FACILITY_CLASS_ROCKER,
			.textColor = 1,
			.speechBefore = {EC_WORD_WEREN_T, EC_WORD_WEREN_T, EC_WORD_WEREN_T, EC_WORD_IT, EC_MOVE(SING), EC_WORD_ELECTRIC},
			.speechWin = {EC_WORD_STATIC, EC_WORD_IS, EC_WORD_ELECTRIC, EC_WORD_QUES, EC_WORD_OH_YEAH, EC_WORD_EXCL},
			.speechLose = {EC_WORD_WHEN, EC_WORD_ELECTRIC, EC_WORD_WHEN, EC_WORD_TELEVISION, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_ELECTRIC, EC_WORD_IS, EC_WORD_TO, EC_MOVE(STRENGTH), EC_WORD_NATURAL, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("BEN"),
			.facilityClass = FACILITY_CLASS_ROCKER,
			.textColor = 1,
			.speechBefore = {EC_WORD_LALALA, EC_WORD_WILL, EC_WORD_SONGS, EC_WORD_FEELING, EC_MOVE(FOCUS_ENERGY), EC_WORD_ELECTRIC},
			.speechWin = {EC_WORD_STATIC, EC_WORD_IS, EC_WORD_ELECTRIC, EC_WORD_YAY, EC_WORD_WOWEE, EC_WORD_EXCL_EXCL},
			.speechLose = {EC_WORD_DAUGHTER, EC_WORD_TELEVISION, EC_WORD_DIGITAL, EC_WORD_IS, EC_WORD_FANTASTIC, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_ELECTRIC, EC_WORD_EXCL, EC_WORD_WHERE, EC_MOVE(FOCUS_ENERGY), EC_WORD_UNBELIEVABLE, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("ANATOL"),
			.facilityClass = FACILITY_CLASS_ROCKER,
			.textColor = 1,
			.speechBefore = {EC_WORD_LALALA, EC_WORD_LET_S, EC_WORD_OVER, EC_WORD_ELECTRIC, EC_WORD_POWER, EC_MOVE(SING)},
			.speechWin = {EC_WORD_STATIC, EC_WORD_IS, EC_WORD_ELECTRIC, EC_WORD_YES, EC_WORD_IT, EC_WORD_IS},
			.speechLose = {EC_WORD_ELECTRIC, EC_WORD_OVER, EC_WORD_MY, EC_WORD_DIGITAL, EC_WORD_TELEVISION, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_ELECTRIC, EC_WORD_EXCL, EC_WORD_IT_S, EC_WORD_AN, EC_MOVE(NATURE_POWER), EC_WORD_EXCL},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("BEN"),
			.facilityClass = FACILITY_CLASS_ROCKER,
			.textColor = 1,
			.speechBefore = {EC_WORD_LALALA, EC_WORD_LET_S, EC_MOVE(SING), EC_WORD_ABOUT, EC_WORD_ELECTRIC, EC_WORD_POWER},
			.speechWin = {EC_WORD_STATIC, EC_WORD_IS, EC_WORD_ELECTRIC, EC_WORD_YES, EC_WORD_IT, EC_WORD_IS},
			.speechLose = {EC_WORD_ELECTRIC, EC_WORD_ABOUT, EC_WORD_MY, EC_WORD_DIGITAL, EC_WORD_TELEVISION, EC_WORD_I_AM},
			.speechAfter = {EC_WORD_ELECTRIC, EC_WORD_EXCL, EC_WORD_IT_S, EC_WORD_A, EC_WORD_NATURAL, EC_WORD_POWER},
		#endif
			.mons = {
				{
					.species = SPECIES_ELECTRODE,
					.heldItem = ITEM_LIECHI_BERRY,
					.moves = {MOVE_THUNDERBOLT, MOVE_MIRROR_COAT, MOVE_EXPLOSION, MOVE_THUNDER_WAVE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 55,
					.speedEV = 255,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x14, // GENDERLESS CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ELECTRODE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LEKTROBAL"),
					#else
					.nickname = _("ELECTRODE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_ELECTABUZZ,
					.heldItem = ITEM_CHOICE_BAND,
					.moves = {MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_PSYCHIC, MOVE_ICE_PUNCH},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 155,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0F, // FEMALE MODEST
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ELEKTEK"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ELEKTEK"),
					#else
					.nickname = _("ELECTABUZZ"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_LANTURN,
					.heldItem = ITEM_CHOICE_BAND,
					.moves = {MOVE_THUNDERBOLT, MOVE_DOUBLE_EDGE, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 125,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 130,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x8E, // MALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LANTURN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("LANTURN"),
					#else
					.nickname = _("LANTURN"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MAGNETON,
					.heldItem = ITEM_LIECHI_BERRY,
					.moves = {MOVE_ZAP_CANNON, MOVE_HYPER_BEAM, MOVE_LOCK_ON, MOVE_SUPERSONIC},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 200,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 55,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x14, // GENDERLESS CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MAGNETON"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("MAGNETON"),
					#else
					.nickname = _("MAGNETON"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_RAICHU,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_DOUBLE_EDGE, MOVE_MEGA_KICK, MOVE_REVERSAL, MOVE_BODY_SLAM},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 80,
					.speedEV = 100,
					.spAttackEV = 0,
					.spDefenseEV = 75,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x8A, // MALE JOLLY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RAICHU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RAICHU"),
					#else
					.nickname = _("RAICHU"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_AMPHAROS,
					.heldItem = ITEM_SHELL_BELL,
					.moves = {MOVE_THUNDERBOLT, MOVE_MEGA_KICK, MOVE_COUNTER, MOVE_BODY_SLAM},
					.hpEV = 0,
					.attackEV = 200,
					.defenseEV = 150,
					.speedEV = 0,
					.spAttackEV = 10,
					.spDefenseEV = 150,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x07, // FEMALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PHARAMP"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("AMPHAROS"),
					#else
					.nickname = _("AMPHAROS"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("ROQUE"),
			.facilityClass = FACILITY_CLASS_ENGINEER,
			.textColor = 1,
			.speechBefore = {EC_WORD_RELEASE, EC_WORD_THAT_S, EC_WORD_STRONG, EC_WORD_LIE, EC_WORD_THAT_S, EC_WORD_STATIC},
			.speechWin = {EC_WORD_WHOM, EC_WORD_THAT_S, EC_WORD_STRONG, EC_WORD_HIT, EC_MOVE(THUNDERBOLT), EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_HIGH, EC_WORD_THAT_S, EC_WORD_LINK, EC_WORD_WIRELESS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_THAT_S, EC_WORD_LINK, EC_WORD_WIRELESS, EC_WORD_IS, EC_WORD_UNION, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("LUCIANO"),
			.facilityClass = FACILITY_CLASS_ENGINEER,
			.textColor = 1,
			.speechBefore = {EC_WORD_ELECTRIC, EC_WORD_IS, EC_WORD_BEAUTIFUL, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_MOVE(THUNDERBOLT), EC_WORD_IS, EC_WORD_TO, EC_WORD_MOVE, EC_WORD_ELECTRIC, EC_WORD_EXCL},
			.speechLose = {EC_WORD_IT, EC_WORD_LINK, EC_WORD_WIRELESS, EC_WORD_IS, EC_WORD_ELECTRIC, EC_WORD_QUES},
			.speechAfter = {EC_WORD_HERE, EC_WORD_IS, EC_WORD_ELECTRIC, EC_WORD_SOMETHING, EC_WORD_LIFE, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("PIERRICK"),
			.facilityClass = FACILITY_CLASS_ENGINEER,
			.textColor = 1,
			.speechBefore = {EC_WORD_LALALA, EC_WORD_WILL, EC_WORD_SONGS, EC_WORD_FEELING, EC_MOVE(FOCUS_ENERGY), EC_WORD_ELECTRIC},
			.speechWin = {EC_WORD_THE, EC_MOVE(THUNDERBOLT), EC_WORD_IS, EC_WORD_ELECTRIC, EC_WORD_ALSO, EC_WORD_EXCL_EXCL},
			.speechLose = {EC_WORD_ELECTRIC, EC_WORD_EXCL, EC_WORD_IT_S, EC_WORD_AN, EC_WORD_LINK, EC_WORD_WIRELESS},
			.speechAfter = {EC_WORD_ELECTRIC, EC_WORD_EXCL, EC_WORD_IT_S, EC_WORD_RECOMMEND, EC_WORD_EXCUSE, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("MARTIN"),
			.facilityClass = FACILITY_CLASS_ENGINEER,
			.textColor = 1,
			.speechBefore = {EC_WORD_LALALA, EC_WORD_LET_S, EC_WORD_OVER, EC_WORD_ELECTRIC, EC_WORD_POWER, EC_MOVE(SING)},
			.speechWin = {EC_WORD_A, EC_MOVE(THUNDERBOLT), EC_WORD_IS, EC_WORD_TOO, EC_WORD_ELECTRIC, EC_WORD_EXCL},
			.speechLose = {EC_WORD_ELECTRIC, EC_WORD_EXCL, EC_WORD_IS, EC_WORD_OVER, EC_WORD_WIRELESS, EC_WORD_LINK},
			.speechAfter = {EC_WORD_ELECTRIC, EC_WORD_EXCL, EC_WORD_IT_S, EC_WORD_AN, EC_WORD_TREASURE, EC_WORD_EXCL},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("CAMDEN"),
			.facilityClass = FACILITY_CLASS_ENGINEER,
			.textColor = 1,
			.speechBefore = {EC_WORD_LALALA, EC_WORD_LET_S, EC_MOVE(SING), EC_WORD_ABOUT, EC_WORD_ELECTRIC, EC_WORD_POWER},
			.speechWin = {EC_WORD_A, EC_MOVE(THUNDERBOLT), EC_WORD_IS, EC_WORD_ELECTRIC, EC_WORD_TOO, EC_WORD_EXCL},
			.speechLose = {EC_WORD_ELECTRIC, EC_WORD_EXCL, EC_WORD_IT_S, EC_WORD_ABOUT, EC_WORD_WIRELESS, EC_WORD_LINK},
			.speechAfter = {EC_WORD_ELECTRIC, EC_WORD_EXCL, EC_WORD_IT_S, EC_WORD_A, EC_WORD_TREASURE, EC_WORD_EXCL},
		#endif
			.mons = {
				{
					.species = SPECIES_GRANBULL,
					.heldItem = ITEM_CHOICE_BAND,
					.moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 55,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x02, // FEMALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GRANBULL"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GRANBULL"),
					#else
					.nickname = _("GRANBULL"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PERSIAN,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_THUNDERBOLT, MOVE_WATER_PULSE, MOVE_HYPNOSIS, MOVE_SLASH},
					.hpEV = 0,
					.attackEV = 100,
					.defenseEV = 55,
					.speedEV = 255,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PERSIAN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SNOBILIKAT"),
					#else
					.nickname = _("PERSIAN"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_LICKITUNG,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_PROTECT, MOVE_SURF, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL},
					.hpEV = 200,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 55,
					.spDefenseEV = 0,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x02, // FEMALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("EXCELANGUE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SCHLURP"),
					#else
					.nickname = _("LICKITUNG"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_RATICATE,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_THUNDERBOLT, MOVE_HYPER_FANG, MOVE_SUPER_FANG, MOVE_REVERSAL},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 100,
					.speedEV = 50,
					.spAttackEV = 0,
					.spDefenseEV = 105,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x94, // MALE CAREFUL
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RATTATAC"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RATTIKARL"),
					#else
					.nickname = _("RATICATE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PRIMEAPE,
					.heldItem = ITEM_SCOPE_LENS,
					.moves = {MOVE_THUNDERBOLT, MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 130,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 125,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x02, // FEMALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("COLOSSINGE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RASAFF"),
					#else
					.nickname = _("PRIMEAPE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_KANGASKHAN,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_THUNDERBOLT, MOVE_SURF, MOVE_CRUSH_CLAW, MOVE_REST},
					.hpEV = 0,
					.attackEV = 100,
					.defenseEV = 155,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x11, // FEMALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("KANGOUREX"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KANGAMA"),
					#else
					.nickname = _("KANGASKHAN"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("GERMÁN"),
			.facilityClass = FACILITY_CLASS_SCIENTIST,
			.textColor = 1,
			.speechBefore = {EC_WORD_RELEASE, EC_WORD_A_TINY_BIT, EC_WORD_POWER, EC_WORD_ELECTRIC, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_MOVE2(THUNDER_SHOCK), EC_WORD_IS, EC_WORD_LIE, EC_WORD_TYPE, EC_WORD_ELECTRIC, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_ELECTRIC, EC_WORD_AND, EC_MOVE2(FLASH), EC_WORD_WAS, EC_WORD_SHAKY, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_BELONGS_TO, EC_WORD_NITWIT, EC_WORD_AN, EC_WORD_A_LITTLE, EC_WORD_LIE, EC_MOVE(SPARK)},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("ZACK"),
			.facilityClass = FACILITY_CLASS_SCIENTIST,
			.textColor = 1,
			.speechBefore = {EC_WORD_ELECTRIC, EC_WORD_ELECTRIC, EC_WORD_ELECTRIC, EC_WORD_ELECTRIC, EC_WORD_ELECTRIC, EC_WORD_EXCL},
			.speechWin = {EC_MOVE2(THUNDER_SHOCK), EC_WORD_IS, EC_WORD_TO, EC_WORD_MOVE, EC_WORD_ELECTRIC, EC_WORD_EXCL},
			.speechLose = {EC_MOVE2(FLASH), EC_WORD_IS, EC_WORD_TO, EC_WORD_MOVE, EC_WORD_ELECTRIC, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_ARE, EC_WORD_TO, EC_MOVE(SPARK), EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("MARIO"),
			.facilityClass = FACILITY_CLASS_SCIENTIST,
			.textColor = 1,
			.speechBefore = {EC_WORD_LALALA, EC_WORD_WILL, EC_WORD_SONGS, EC_WORD_FEELING, EC_MOVE(FOCUS_ENERGY), EC_WORD_ELECTRIC},
			.speechWin = {EC_WORD_A, EC_MOVE2(THUNDER_SHOCK), EC_WORD_IS, EC_WORD_ELECTRIC, EC_WORD_HUH_QUES, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_ELECTRIC, EC_WORD_EXCL, EC_MOVE2(FLASH), EC_MOVE2(FLASH), EC_MOVE2(FLASH), EC_WORD_EXCL},
			.speechAfter = {EC_MOVE(SPARK), EC_WORD_IT_S, EC_WORD_SUPER, EC_WORD_EXCL, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("WILHELM"),
			.facilityClass = FACILITY_CLASS_SCIENTIST,
			.textColor = 1,
			.speechBefore = {EC_WORD_LALALA, EC_WORD_LET_S, EC_WORD_OVER, EC_WORD_ELECTRIC, EC_WORD_POWER, EC_MOVE(SING)},
			.speechWin = {EC_WORD_A, EC_MOVE2(THUNDER_SHOCK), EC_WORD_IS, EC_WORD_TOO, EC_WORD_ELECTRIC, EC_WORD_EXCL},
			.speechLose = {EC_WORD_ELECTRIC, EC_WORD_EXCL, EC_MOVE2(FLASH), EC_MOVE2(FLASH), EC_MOVE2(FLASH), EC_WORD_EXCL_EXCL},
			.speechAfter = {EC_WORD_ALL, EC_WORD_TOGETHER, EC_WORD_NOW, EC_WORD_EXCL_EXCL, EC_MOVE(SPARK), EC_MOVE(SPARK)},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("ZACKERY"),
			.facilityClass = FACILITY_CLASS_SCIENTIST,
			.textColor = 1,
			.speechBefore = {EC_WORD_LALALA, EC_WORD_LET_S, EC_MOVE(SING), EC_WORD_ABOUT, EC_WORD_ELECTRIC, EC_WORD_POWER},
			.speechWin = {EC_MOVE2(THUNDER_SHOCK), EC_WORD_IS, EC_WORD_ELECTRIC, EC_WORD_YOU, EC_WORD_KNOW, EC_WORD_QUES},
			.speechLose = {EC_WORD_ELECTRIC, EC_WORD_EXCL, EC_MOVE2(FLASH), EC_MOVE2(FLASH), EC_MOVE2(FLASH), EC_WORD_EXCL_EXCL},
			.speechAfter = {EC_WORD_ALL, EC_WORD_TOGETHER, EC_WORD_NOW, EC_WORD_EXCL, EC_MOVE(SPARK), EC_MOVE(SPARK)},
		#endif
			.mons = {
				{
					.species = SPECIES_WEEZING,
					.heldItem = ITEM_CHOICE_BAND,
					.moves = {MOVE_THUNDERBOLT, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_SHADOW_BALL},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 0,
					.speedEV = 0,
					.spAttackEV = 155,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x02, // FEMALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("SMOGOGO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SMOGMOG"),
					#else
					.nickname = _("WEEZING"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MUK,
					.heldItem = ITEM_LEFTOVERS,
					.moves = {MOVE_THUNDERBOLT, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_CURSE},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 150,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 105,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 1,
					.personality = 0x84, // MALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GROTADMORV"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("SLEIMOK"),
					#else
					.nickname = _("MUK"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_GENGAR,
					.heldItem = ITEM_PETAYA_BERRY,
					.moves = {MOVE_THUNDERBOLT, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_WILL_O_WISP},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 250,
					.spAttackEV = 155,
					.spDefenseEV = 105,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0A, // FEMALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("ECTOPLASMA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("GENGAR"),
					#else
					.nickname = _("GENGAR"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MISDREAVUS,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_PSYCHIC, MOVE_GRUDGE, MOVE_CONFUSE_RAY, MOVE_DESTINY_BOND},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 0,
					.speedEV = 150,
					.spAttackEV = 105,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x0A, // FEMALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("FEUFOREVE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("TRAUNFUGIL"),
					#else
					.nickname = _("MISDREAVUS"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CROBAT,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_SLUDGE_BOMB, MOVE_CONFUSE_RAY, MOVE_GIGA_DRAIN, MOVE_TOXIC},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 200,
					.speedEV = 110,
					.spAttackEV = 0,
					.spDefenseEV = 200,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x87, // MALE TIMID
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NOSTENFER"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("IKSBAT"),
					#else
					.nickname = _("CROBAT"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_HAUNTER,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_DESTINY_BOND, MOVE_HYPNOSIS, MOVE_CONFUSE_RAY, MOVE_TOXIC},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 155,
					.speedEV = 100,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 20,
					.attackIV = 20,
					.defenseIV = 20,
					.speedIV = 20,
					.spAttackIV = 20,
					.spDefenseIV = 20,
					.abilityNum = 0,
					.personality = 0x91, // MALE CALM
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("SPECTRUM"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("ALPOLLO"),
					#else
					.nickname = _("HAUNTER"),
					#endif
					.friendship = 255
				},
			}
		},
	},
	.checksum = 0x00014f49
};

static const struct TrainerTowerFloor sTrainerTowerFloor_Knockout_5 = {
	.id = 32,
	.floorIdx = MAX_TRAINER_TOWER_FLOORS,
	.challengeType = CHALLENGE_TYPE_KNOCKOUT,
	.prize = TTPRIZE_UP_GRADE,
	.trainers = {
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("MAGDA"),
			.facilityClass = FACILITY_CLASS_BEAUTY,
			.textColor = 2,
			.speechBefore = {EC_WORD_ISN_T_IT_QUES, EC_WORD_NATURALLY, EC_WORD_DESTROYED, EC_WORD_LEADER, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_QUES_EXCL, EC_WORD_LIE, EC_WORD_DOWN, EC_WORD_ISN_T_IT_QUES, EC_WORD_LEADER, EC_WORD_QUES},
			.speechLose = {EC_WORD_WHERE, EC_WORD_ISN_T_IT_QUES, EC_WORD_LEADER, EC_WORD_WHERE, EC_WORD_IS, EC_WORD_THESE_WERE},
			.speechAfter = {EC_WORD_ALWAYS, EC_WORD_BELONGS_TO, EC_WORD_NITWIT, EC_WORD_BE, EC_WORD_LIE, EC_WORD_THESE_WERE},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("ANNALISA"),
			.facilityClass = FACILITY_CLASS_BEAUTY,
			.textColor = 2,
			.speechBefore = {EC_WORD_ARE, EC_WORD_IT, EC_WORD_LEADER, EC_WORD_UNDERSTOOD, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_LISTEN, EC_WORD_THING, EC_WORD_ARE, EC_WORD_IT, EC_WORD_LEADER, EC_WORD_QUES},
			.speechLose = {EC_WORD_GIGGLE, EC_WORD_AS_IF, EC_WORD_ARE, EC_WORD_IT, EC_WORD_LEADER, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_IT, EC_WORD_LEADER, EC_WORD_IS, EC_WORD_WITH, EC_WORD_UNCLE, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("MYRIAM"),
			.facilityClass = FACILITY_CLASS_BEAUTY,
			.textColor = 2,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_THE, EC_WORD_LEADER, EC_WORD_WILL_BE_HERE, EC_WORD_GROUP, EC_WORD_EXCL},
			.speechWin = {EC_WORD_I_AM, EC_WORD_LEADER, EC_WORD_OF, EC_WORD_EH_QUES, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_I_AM, EC_WORD_NOT, EC_WORD_LEADER, EC_WORD_EXCL, EC_WORD_IT_S, EC_WORD_JOKING},
			.speechAfter = {EC_WORD_THE, EC_WORD_TYPE, EC_WORD_GROUND, EC_WORD_IS, EC_WORD_LOUSY, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("DOLORES"),
			.facilityClass = FACILITY_CLASS_BEAUTY,
			.textColor = 2,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_THE, EC_WORD_GROUP, EC_WORD_LEADER, EC_WORD_EXCL, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_I_AM, EC_WORD_THE, EC_WORD_LEADER, EC_WORD_FROM, EC_WORD_QUES, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_I_AM, EC_WORD_NONE, EC_WORD_LEADER, EC_WORD_IT_S, EC_WORD_A_LITTLE, EC_WORD_LAY},
			.speechAfter = {EC_WORD_HEH, EC_WORD_THE, EC_WORD_GROUND, EC_WORD_IS, EC_WORD_FULL, EC_WORD_SLIMY},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("MAURA"),
			.facilityClass = FACILITY_CLASS_BEAUTY,
			.textColor = 2,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_THE, EC_WORD_GROUP, EC_WORD_LEADER, EC_WORD_EXCL, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_WHAT, EC_WORD_AM, EC_WORD_I, EC_WORD_LEADER, EC_WORD_OF, EC_WORD_QUES},
			.speechLose = {EC_WORD_I_AM, EC_WORD_NO, EC_WORD_LEADER, EC_WORD_IT_S, EC_WORD_A_LITTLE, EC_WORD_LIE},
			.speechAfter = {EC_WORD_HEY, EC_WORD_EXCL, EC_WORD_THE, EC_WORD_GROUND, EC_WORD_IS, EC_WORD_SLIMY},
		#endif
			.mons = {
				{
					.species = SPECIES_PICHU,
					.heldItem = ITEM_FOCUS_BAND,
					.moves = {MOVE_THUNDER_SHOCK, MOVE_THUNDER_WAVE, MOVE_SWEET_KISS, MOVE_PROTECT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x05, // FEMALE BOLD
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PICHU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PICHU"),
					#else
					.nickname = _("PICHU"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_MAREEP,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_THUNDER_SHOCK, MOVE_CHARGE, MOVE_PROTECT, MOVE_RETURN},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x07, // FEMALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("WATTOUAT"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("VOLTILAMM"),
					#else
					.nickname = _("MAREEP"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_IGGLYBUFF,
					.heldItem = ITEM_QUICK_CLAW,
					.moves = {MOVE_SING, MOVE_SWEET_KISS, MOVE_PRESENT, MOVE_PROTECT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x07, // FEMALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("TOUDOUDOU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("FLUFFELUFF"),
					#else
					.nickname = _("IGGLYBUFF"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CLEFFA,
					.heldItem = ITEM_LAX_INCENSE,
					.moves = {MOVE_SING, MOVE_SWEET_KISS, MOVE_ENCORE, MOVE_METRONOME},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x16, // FEMALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MELO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PII"),
					#else
					.nickname = _("CLEFFA"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_NIDORAN_F,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_CRUNCH, MOVE_DIG, MOVE_FLATTER, MOVE_ATTRACT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x16, // FEMALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NIDORAN♀"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NIDORAN♀"),
					#else
					.nickname = _("NIDORAN♀"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_NIDORAN_M,
					.heldItem = ITEM_SITRUS_BERRY,
					.moves = {MOVE_HORN_DRILL, MOVE_SLUDGE_BOMB, MOVE_FLATTER, MOVE_ATTRACT},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 255,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 255,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x07, // MALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NIDORAN♂"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NIDORAN♂"),
					#else
					.nickname = _("NIDORAN♂"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("BLANCA"),
			.facilityClass = FACILITY_CLASS_LASS,
			.textColor = 1,
			.speechBefore = {EC_WORD_ISN_T_IT_QUES, EC_WORD_THAT_S, EC_WORD_NO_1, EC_WORD_ALT_COLOR, EC_WORD_POKEMON, EC_WORD_UNDEFINED},
			.speechWin = {EC_WORD_THAT_S, EC_WORD_NO_1, EC_WORD_ISN_T_IT_QUES, EC_WORD_I, EC_WORD_GWAHAHAHA, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_A_TINY_BIT, EC_WORD_NEXT, EC_WORD_BATTLE, EC_WORD_WERE, EC_WORD_SPIRALING, EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_WHERE, EC_WORD_ABSOLUTELY, EC_WORD_LIKE, EC_WORD_USING, EC_MOVE2(SPIT_UP), EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("MIKAELA"),
			.facilityClass = FACILITY_CLASS_LASS,
			.textColor = 1,
			.speechBefore = {EC_WORD_WONDER, EC_WORD_IS, EC_WORD_ABOVE, EC_WORD_LISTEN, EC_WORD_DON_T, EC_WORD_QUES},
			.speechWin = {EC_WORD_LET_S, EC_WORD_QUES, EC_WORD_NO, EC_WORD_LET_S, EC_WORD_NO, EC_WORD_EXCL},
			.speechLose = {EC_WORD_LET_S, EC_WORD_WILL_BE_HERE, EC_WORD_ABOVE, EC_WORD_LISTEN, EC_WORD_DON_T, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_BESIDE, EC_WORD_ELLIPSIS, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED, EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("DORINE"),
			.facilityClass = FACILITY_CLASS_LASS,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_REALLY, EC_WORD_THE, EC_WORD_TRAINER, EC_WORD_NO_1, EC_WORD_THERE},
			.speechWin = {EC_WORD_I_VE, EC_WORD_NOT, EC_WORD_SAID, EC_WORD_NO_1, EC_WORD_HUH_QUES, EC_WORD_UNDEFINED},
			.speechLose = {EC_WORD_THE, EC_WORD_NEXT, EC_WORD_FIGHTING, EC_WORD_BELONGS_TO, EC_WORD_BE, EC_WORD_UNBELIEVABLE},
			.speechAfter = {EC_WORD_I_VE, EC_WORD_LOST, EC_WORD_AND, EC_WORD_OF, EC_WORD_FAR, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("MICHAELA"),
			.facilityClass = FACILITY_CLASS_LASS,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_THE, EC_WORD_TRAINER, EC_WORD_NO_1, EC_WORD_HERE, EC_WORD_EXCL},
			.speechWin = {EC_WORD_NEVER, EC_WORD_SAID, EC_WORD_WHERE, EC_WORD_I_AM, EC_WORD_NO_1, EC_WORD_EXCL},
			.speechLose = {EC_WORD_ELSE, EC_WORD_TIME, EC_WORD_I_AM, EC_WORD_EXCESS, EC_WORD_ALL_RIGHT, EC_WORD_EXCL},
			.speechAfter = {EC_WORD_THE, EC_MOVE2(SPIT_UP), EC_WORD_DOESN_T, EC_WORD_ME, EC_WORD_FULL, EC_WORD_DONE},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("MIKAELA"),
			.facilityClass = FACILITY_CLASS_LASS,
			.textColor = 1,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_REALLY, EC_WORD_THE, EC_WORD_NO_1, EC_WORD_TRAINER, EC_WORD_HERE},
			.speechWin = {EC_WORD_NEVER, EC_WORD_SAID, EC_WORD_WHAT, EC_WORD_I_AM, EC_WORD_NO_1, EC_WORD_AT},
			.speechLose = {EC_WORD_NEXT, EC_WORD_TIME, EC_WORD_I, EC_WORD_WILL, EC_WORD_BE, EC_WORD_OVERWHELMING},
			.speechAfter = {EC_WORD_YOU, EC_MOVE2(SPIT_UP), EC_WORD_ME, EC_WORD_AS_IF, EC_WORD_I_AM, EC_WORD_NOTHING},
		#endif
			.mons = {
				{
					.species = SPECIES_NIDORINO,
					.heldItem = ITEM_CHOICE_BAND,
					.moves = {MOVE_SHOCK_WAVE, MOVE_HORN_DRILL, MOVE_ICE_BEAM, MOVE_IRON_TAIL},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 155,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x07, // MALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NIDORINO"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NIDORINO"),
					#else
					.nickname = _("NIDORINO"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_NIDORINA,
					.heldItem = ITEM_CHOICE_BAND,
					.moves = {MOVE_SHOCK_WAVE, MOVE_CRUNCH, MOVE_BODY_SLAM, MOVE_COUNTER},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 155,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x16, // FEMALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NIDORINA"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NIDORINA"),
					#else
					.nickname = _("NIDORINA"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_PIKACHU,
					.heldItem = ITEM_LIGHT_BALL,
					.moves = {MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_COUNTER, MOVE_BODY_SLAM},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 200,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 55,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x11, // FEMALE QUIET
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PIKACHU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PIKACHU"),
					#else
					.nickname = _("PIKACHU"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_FLAAFFY,
					.heldItem = ITEM_BRIGHT_POWDER,
					.moves = {MOVE_SHOCK_WAVE, MOVE_DOUBLE_TEAM, MOVE_SEISMIC_TOSS, MOVE_BODY_SLAM},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 150,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x07, // FEMALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("LAINERGIE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("WAATY"),
					#else
					.nickname = _("FLAAFFY"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_JIGGLYPUFF,
					.heldItem = ITEM_CHOICE_BAND,
					.moves = {MOVE_SHOCK_WAVE, MOVE_SHADOW_BALL, MOVE_FOCUS_PUNCH, MOVE_BODY_SLAM},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 150,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 105,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x16, // FEMALE SASSY
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RONDOUDOU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PUMMELUFF"),
					#else
					.nickname = _("JIGGLYPUFF"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CLEFAIRY,
					.heldItem = ITEM_CHOICE_BAND,
					.moves = {MOVE_SHOCK_WAVE, MOVE_METEOR_MASH, MOVE_MOONLIGHT, MOVE_BODY_SLAM},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 155,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x07, // FEMALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MELOFEE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PIEPI"),
					#else
					.nickname = _("CLEFAIRY"),
					#endif
					.friendship = 255
				},
			}
		},
		{
		#if GAME_LANGUAGE == LANGUAGE_SPANISH
			.name = _("TRISTÁN"),
			.facilityClass = FACILITY_CLASS_ENGINEER,
			.textColor = 4,
			.speechBefore = {EC_WORD_I, EC_WORD_USE, EC_MOVE2(MILK_DRINK), EC_WORD_UNDEFINED, EC_WORD_IS, EC_WORD_BEING},
			.speechWin = {EC_MOVE2(MILK_DRINK), EC_WORD_IS, EC_WORD_AROUND, EC_WORD_SPIRALING, EC_WORD_NITWIT, EC_WORD_BELONGS_TO},
			.speechLose = {EC_WORD_WHERE, EC_WORD_ALWAYS, EC_WORD_ABSOLUTELY, EC_WORD_LIKE, EC_MOVE2(MILK_DRINK), EC_WORD_UNDEFINED},
			.speechAfter = {EC_WORD_I, EC_WORD_UP, EC_WORD_NITWIT, EC_WORD_WILL_BE_HERE, EC_MOVE2(MILK_DRINK), EC_WORD_UNDEFINED},
		#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
			.name = _("QUINTO"),
			.facilityClass = FACILITY_CLASS_ENGINEER,
			.textColor = 4,
			.speechBefore = {EC_WORD_WHEN, EC_WORD_ABOVE, EC_WORD_LISTEN, EC_MOVE2(MILK_DRINK), EC_WORD_WEREN_T, EC_WORD_MORNING},
			.speechWin = {EC_WORD_WILL, EC_WORD_WON, EC_WORD_CHOOSE, EC_MOVE2(MILK_DRINK), EC_WORD_NOW, EC_WORD_QUES},
			.speechLose = {EC_WORD_OVER, EC_WORD_IS_IT_QUES, EC_WORD_WHERE, EC_WORD_LISTEN, EC_MOVE2(MILK_DRINK), EC_WORD_EXCL},
			.speechAfter = {EC_WORD_NOW, EC_MOVE2(MILK_DRINK), EC_WORD_AS_IF, EC_WORD_SATISFIED, EC_WORD_PLUS, EC_WORD_EXCL},
		#elif GAME_LANGUAGE == LANGUAGE_FRENCH
			.name = _("FREDERIC"),
			.facilityClass = FACILITY_CLASS_ENGINEER,
			.textColor = 4,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_THE, EC_WORD_LEADER, EC_WORD_WILL_BE_HERE, EC_MOVE2(MILK_DRINK), EC_WORD_EXCL},
			.speechWin = {EC_WORD_I_VE, EC_WORD_WINS, EC_WORD_THIS, EC_WORD_FIGHTING, EC_WORD_OF, EC_MOVE2(MILK_DRINK)},
			.speechLose = {EC_WORD_CAN, EC_WORD_PLUS, EC_WORD_SEE, EC_WORD_OF, EC_MOVE2(MILK_DRINK), EC_WORD_EXCL},
			.speechAfter = {EC_WORD_I_VE, EC_WORD_WILL_BE_HERE, EC_MOVE2(MILK_DRINK), EC_WORD_FULL, EC_WORD_UP, EC_WORD_ME},
		#elif GAME_LANGUAGE == LANGUAGE_GERMAN
			.name = _("NESTOR"),
			.facilityClass = FACILITY_CLASS_ENGINEER,
			.textColor = 4,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_LEADER, EC_WORD_AT, EC_MOVE2(MILK_DRINK), EC_WORD_THE, EC_WORD_WORLD},
			.speechWin = {EC_WORD_IF, EC_WORD_I_AM, EC_WORD_WINS, EC_WORD_THAT, EC_MOVE2(MILK_DRINK), EC_WORD_EXCL},
			.speechLose = {EC_WORD_I, EC_WORD_DON_T, EC_WORD_DRINK, EC_WORD_MORE, EC_MOVE2(MILK_DRINK), EC_WORD_EXCL},
			.speechAfter = {EC_WORD_WROOOAAR_EXCL, EC_WORD_EXCL, EC_WORD_I, EC_WORD_DROOLING, EC_WORD_ALL, EC_WORD_FULL},
		#else //GAME_LANGUAGE == LANGUAGE_ENGLISH
			.name = _("FLINT"),
			.facilityClass = FACILITY_CLASS_ENGINEER,
			.textColor = 4,
			.speechBefore = {EC_WORD_I_AM, EC_WORD_THE, EC_MOVE2(MILK_DRINK), EC_WORD_WORLD, EC_WORD_LEADER, EC_WORD_EXCL},
			.speechWin = {EC_WORD_I_VE, EC_WORD_WON, EC_WORD_THIS, EC_MOVE2(MILK_DRINK), EC_WORD_MATCH, EC_WORD_EXCL},
			.speechLose = {EC_WORD_I, EC_WORD_CAN_T, EC_WORD_DRINK, EC_WORD_ANY, EC_WORD_MORE, EC_WORD_DRINKS},
			.speechAfter = {EC_WORD_WHOAH, EC_WORD_EXCL, EC_WORD_I_AM, EC_WORD_DROOLING, EC_WORD_ALL, EC_WORD_OVER},
		#endif
			.mons = {
				{
					.species = SPECIES_WIGGLYTUFF,
					.heldItem = ITEM_CHOICE_BAND,
					.moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_WATER_PULSE, MOVE_FLAMETHROWER},
					.hpEV = 0,
					.attackEV = 0,
					.defenseEV = 155,
					.speedEV = 0,
					.spAttackEV = 255,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0xCF, // MALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("GRODOUDOU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("KNUDDELUFF"),
					#else
					.nickname = _("WIGGLYTUFF"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_CLEFABLE,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_THUNDERBOLT, MOVE_SOFT_BOILED, MOVE_METEOR_MASH, MOVE_DOUBLE_EDGE},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 100,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 150,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0xCF, // MALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("MELODELFE"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("PIXI"),
					#else
					.nickname = _("CLEFABLE"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_NIDOQUEEN,
					.heldItem = ITEM_CHOICE_BAND,
					.moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_SUPERPOWER, MOVE_SURF},
					.hpEV = 0,
					.attackEV = 200,
					.defenseEV = 110,
					.speedEV = 0,
					.spAttackEV = 100,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x07, // FEMALE RELAXED
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NIDOQUEEN"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NIDOQUEEN"),
					#else
					.nickname = _("NIDOQUEEN"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_NIDOKING,
					.heldItem = ITEM_CHOICE_BAND,
					.moves = {MOVE_THUNDERBOLT, MOVE_HYPER_BEAM, MOVE_MEGAHORN, MOVE_SHADOW_BALL},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 150,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 100,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x02, // MALE BRAVE
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("NIDOKING"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("NIDOKING"),
					#else
					.nickname = _("NIDOKING"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_RAICHU,
					.heldItem = ITEM_SALAC_BERRY,
					.moves = {MOVE_THUNDERBOLT, MOVE_REVERSAL, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE},
					.hpEV = 0,
					.attackEV = 155,
					.defenseEV = 150,
					.speedEV = 100,
					.spAttackEV = 0,
					.spDefenseEV = 105,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("RAICHU"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("RAICHU"),
					#else
					.nickname = _("RAICHU"),
					#endif
					.friendship = 255
				},
				{
					.species = SPECIES_AMPHAROS,
					.heldItem = ITEM_LUM_BERRY,
					.moves = {MOVE_THUNDERBOLT, MOVE_REST, MOVE_BODY_SLAM, MOVE_IRON_TAIL},
					.hpEV = 0,
					.attackEV = 255,
					.defenseEV = 150,
					.speedEV = 0,
					.spAttackEV = 0,
					.spDefenseEV = 105,
					.otId = 0 | (4096 << 16),
					.hpIV = 15,
					.attackIV = 15,
					.defenseIV = 15,
					.speedIV = 15,
					.spAttackIV = 15,
					.spDefenseIV = 15,
					.abilityNum = 0,
					.personality = 0x80, // MALE ADAMANT
					#if GAME_LANGUAGE == LANGUAGE_FRENCH
					.nickname = _("PHARAMP"),
					#elif GAME_LANGUAGE == LANGUAGE_GERMAN
					.nickname = _("AMPHAROS"),
					#else
					.nickname = _("AMPHAROS"),
					#endif
					.friendship = 255
				},
			}
		},
	},
	.checksum = 0x00016b80
};

const struct EReaderTrainerTowerSetSubstruct gTrainerTowerLocalHeader = {
    .numFloors = MAX_TRAINER_TOWER_FLOORS,
    .id = 1
};

const struct TrainerTowerFloor *const gTrainerTowerFloors[NUM_TOWER_CHALLENGE_TYPES][MAX_TRAINER_TOWER_FLOORS] = {
    [CHALLENGE_TYPE_SINGLE] = {
        &sTrainerTowerFloor_Single_1,
        &sTrainerTowerFloor_Single_2,
        &sTrainerTowerFloor_Single_3,
        &sTrainerTowerFloor_Single_4,
        &sTrainerTowerFloor_Single_5,
        &sTrainerTowerFloor_Single_6,
        &sTrainerTowerFloor_Single_7,
        &sTrainerTowerFloor_Single_8
    },
    [CHALLENGE_TYPE_DOUBLE] = {
        &sTrainerTowerFloor_Double_1,
        &sTrainerTowerFloor_Double_2,
        &sTrainerTowerFloor_Double_3,
        &sTrainerTowerFloor_Double_4,
        &sTrainerTowerFloor_Double_5,
        &sTrainerTowerFloor_Double_6,
        &sTrainerTowerFloor_Double_7,
        &sTrainerTowerFloor_Double_8
    },
    [CHALLENGE_TYPE_KNOCKOUT] = {
        &sTrainerTowerFloor_Knockout_1,
        &sTrainerTowerFloor_Knockout_2,
        &sTrainerTowerFloor_Knockout_3,
        &sTrainerTowerFloor_Knockout_4,
        &sTrainerTowerFloor_Knockout_5,
        &sTrainerTowerFloor_Knockout_6,
        &sTrainerTowerFloor_Knockout_7,
        &sTrainerTowerFloor_Knockout_8
    },
    [CHALLENGE_TYPE_MIXED] = {
        &sTrainerTowerFloor_Mixed_1,
        &sTrainerTowerFloor_Mixed_2,
        &sTrainerTowerFloor_Mixed_3,
        &sTrainerTowerFloor_Double_8,
        &sTrainerTowerFloor_Mixed_5,
        &sTrainerTowerFloor_Knockout_8,
        &sTrainerTowerFloor_Double_3,
        &sTrainerTowerFloor_Knockout_2
    }
};
