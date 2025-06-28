	.section .rodata

#include "constants/global.h"
	.include "constants/version.inc"
gMultiBootProgram_BerryGlitchFix_Start::
	.if GAME_LANGUAGE == LANGUAGE_SPANISH
	.incbin "data/mb_berry_fix_es.gba"
	.else @LANGUAGE_ENGLISH
	.incbin "data/mb_berry_fix.gba"
	.endif
gMultiBootProgram_BerryGlitchFix_End::
