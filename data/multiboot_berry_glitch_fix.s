	.section .rodata


gMultiBootProgram_BerryGlitchFix_Start::
	.ifdef ENGLISH
	.incbin "data/mb_berry_fix.gba"
	.endif
	.ifdef SPANISH
	.incbin "data/mb_berry_fix_es.gba"
	.endif
gMultiBootProgram_BerryGlitchFix_End::
