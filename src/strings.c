#include "global.h"
#include "strings.h"

#if GAME_LANGUAGE == LANGUAGE_SPANISH
#include "data/text/strings_1_es.h"
#include "data/text/quest_log_es.h"
#include "data/text/strings_2_es.h"
#include "data/text/teachy_tv_es.h"
#include "data/text/strings_3_es.h"
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
#include "data/text/strings_1_it.h"
#include "data/text/quest_log_it.h"
#include "data/text/strings_2_it.h"
#include "data/text/teachy_tv_it.h"
#include "data/text/strings_3_it.h"
#elif GAME_LANGUAGE == LANGUAGE_FRENCH
#include "data/text/strings_1_fr.h"
#include "data/text/quest_log_fr.h"
#include "data/text/strings_2_fr.h"
#include "data/text/teachy_tv_fr.h"
#include "data/text/strings_3_fr.h"
#elif GAME_LANGUAGE == LANGUAGE_GERMAN
#include "data/text/strings_1_de.h"
#include "data/text/quest_log_de.h"
#include "data/text/strings_2_de.h"
#include "data/text/teachy_tv_de.h"
#include "data/text/strings_3_de.h"
#else
#include "data/text/strings_1_en.h"
#include "data/text/quest_log_en.h"
#include "data/text/strings_2_en.h"
#include "data/text/teachy_tv_en.h"
#include "data/text/strings_3_en.h"
#endif
