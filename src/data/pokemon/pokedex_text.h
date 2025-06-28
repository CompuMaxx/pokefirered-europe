#if GAME_LANGUAGE == LANGUAGE_SPANISH
    #if defined(FIRERED)
        #include "pokedex_text_fr_es.h"
    #elif defined(LEAFGREEN)
        #include "pokedex_text_lg_es.h"
    #endif
#elif GAME_LANGUAGE == LANGUAGE_ITALIAN
    #if defined(FIRERED)
        #include "pokedex_text_fr_it.h"
    #elif defined(LEAFGREEN)
        #include "pokedex_text_lg_it.h"
    #endif
#else //LANGUAGE_ENGLISH
    #if defined(FIRERED)
        #include "pokedex_text_fr_en.h"
    #elif defined(LEAFGREEN)
        #include "pokedex_text_lg_en.h"
    #endif
#endif
