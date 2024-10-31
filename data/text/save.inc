gText_WouldYouLikeToSaveTheGame::
	.ifdef ENGLISH
	.string "Would you like to save the game?$"
	.endif
	.ifdef SPANISH
	.string "¿Quieres guardar la partida?$"
	.endif

gText_AlreadySaveFile_WouldLikeToOverwrite::
	.ifdef ENGLISH
	.string "There is already a saved file.\n"
	.string "Is it okay to overwrite it?$"
	.endif
	.ifdef SPANISH
	.string "Ya hay una partida guardada.\n"
	.string "¿Quieres sobrescribirla?$"
	.endif

gText_SavingDontTurnOffThePower::
	.ifdef ENGLISH
	.string "SAVING…\n"
	.string "DON'T TURN OFF THE POWER.$"
	.endif
	.ifdef SPANISH
	.string "GUARDANDO...\n"
	.string "NO APAGUES LA CONSOLA.$"
	.endif

gText_PlayerSavedTheGame::
	.ifdef ENGLISH
	.string "{PLAYER} saved the game.$"
	.endif
	.ifdef SPANISH
	.string "{PLAYER} guardó la partida.$"
	.endif

gText_SaveFailed2::
	.string "セーブに　しっぱい　しました‥$"

gText_DifferentGameFile::
	.ifdef ENGLISH
	.string "WARNING!\p"
	.string "There is a different game file that\n"
	.string "is already saved.\p"
	.string "If you save now, the other file's\n"
	.string "adventure, including items and\l"
	.string "POKéMON, will be entirely lost.\p"
	.string "Are you sure you want to save now\n"
	.string "and overwrite the other save file?$"
	.endif
	.ifdef SPANISH
	.string "¡ATENCIÓN!\p"
	.string "Ya hay una partida guardada.\p"
	.string "Si guardas, perderás los datos\n"
	.string "de la partida incluyendo los\l"
	.string "objetos y los POKéMON.\p"
	.string "¿Seguro que quieres guardar ahora\n"
	.string "y sobrescribir los otros datos?$"
	.endif
