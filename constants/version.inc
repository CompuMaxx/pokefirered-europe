	.ifdef FIRERED
	.equiv GAME_VERSION, 4
	.else
	.equiv GAME_VERSION, 5
	.endif

	.ifdef ENGLISH
	.equiv GAME_LANGUAGE, 2
	.else
	.ifdef FRENCH
	.equiv GAME_LANGUAGE, 3
	.else
	.ifdef ITALIAN
	.equiv GAME_LANGUAGE, 4
	.else
	.ifdef GERMAN
	.equiv GAME_LANGUAGE, 5
	.else
	.ifdef SPANISH
	.equiv GAME_LANGUAGE, 7
	.endif
	.endif
	.endif
	.endif
	.endif
