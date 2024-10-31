EventScript_CutTree::
	goto_if_questlog EventScript_ReleaseEnd
	lockall
	goto_if_unset FLAG_BADGE02_GET, EventScript_CantCutTree
	checkpartymove MOVE_CUT
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantCutTree
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_CUT
	msgbox Text_CutTreeDown, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_DontCutTree
	msgbox Text_MonUsedMove
	closemessage
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

EventScript_FldEffCut::
	lockall
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

EventScript_CutTreeDown::
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
	waitmovement 0
	removeobject VAR_LAST_TALKED
	releaseall
	end

Movement_CutTreeDown::
	cut_tree
	step_end

EventScript_CantCutTree::
	msgbox Text_TreeCanBeCutDown, MSGBOX_SIGN
	releaseall
	end

EventScript_DontCutTree::
	closemessage
	releaseall
	end

Text_CutTreeDown::
	.ifdef ENGLISH
	.string "This tree looks like it can be CUT\n"
	.string "down!\p"
	.string "Would you like to CUT it?$"
	.endif
	.ifdef SPANISH
	.string "Parece que puedes CORTAR\n"
	.string "este árbol.\p"
	.string "¿Usas CORTE?$"
	.endif

Text_MonUsedMove::
	.ifdef ENGLISH
	.string "{STR_VAR_1} used {STR_VAR_2}!$"
	.endif
	.ifdef SPANISH
	.string "{STR_VAR_1} usó {STR_VAR_2}.$"
	.endif

Text_TreeCanBeCutDown::
	.ifdef ENGLISH
	.string "This tree looks like it can be CUT\n"
	.string "down!$"
	.endif
	.ifdef SPANISH
	.string "Parece que puedes CORTAR\n"
	.string "este árbol.$"
	.endif

EventScript_RockSmash::
	goto_if_questlog EventScript_ReleaseEnd
	lockall
	goto_if_unset FLAG_BADGE06_GET, EventScript_CantSmashRock
	checkpartymove MOVE_ROCK_SMASH
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSmashRock
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
	msgbox Text_UseRockSmash, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_DontSmashRock
	msgbox Text_MonUsedMove
	closemessage
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_UseRockSmash
	end

EventScript_FldEffRockSmash::
	lockall
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_UseRockSmash
	end

EventScript_UseRockSmash::
	applymovement VAR_LAST_TALKED, Movement_BreakRock
	waitmovement 0
	removeobject VAR_LAST_TALKED
	special RockSmashWildEncounter
	goto_if_eq VAR_RESULT, FALSE, EventScript_RockSmashNoEncounter
	waitstate
	releaseall
	end

EventScript_RockSmashNoEncounter::
	releaseall
	end

Movement_BreakRock::
	rock_smash_break
	step_end

EventScript_CantSmashRock::
	msgbox Text_MonMaySmashRock, MSGBOX_SIGN
	end

EventScript_DontSmashRock::
	closemessage
	releaseall
	end

Text_UseRockSmash::
	.ifdef ENGLISH
	.string "This rock appears to be breakable.\n"
	.string "Would you like to use ROCK SMASH?$"
	.endif
	.ifdef SPANISH
	.string "Parece que se puede romper esta\n"
	.string "roca. ¿Usas GOLPE ROCA?$"
	.endif

Text_MonMaySmashRock::
	.ifdef ENGLISH
	.string "It's a rugged rock, but a POKéMON\n"
	.string "may be able to smash it.$"
	.endif
	.ifdef SPANISH
	.string "Es una roca muy dura, pero un\n"
	.string "POKéMON podría hacerla añicos.$"
	.endif

EventScript_StrengthBoulder::
	goto_if_questlog EventScript_ReleaseEnd
	lockall
	goto_if_unset FLAG_BADGE04_GET, EventScript_CantMoveBoulder
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_AlreadyUsedStrength
	checkpartymove MOVE_STRENGTH
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantMoveBoulder
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_UseStrength, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_DontUseStrength
	closemessage
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_UseStrength
	end

EventScript_FldEffStrength::
	lockall
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_UseStrength
	end

EventScript_UseStrength::
	setflag FLAG_SYS_USE_STRENGTH
	msgbox Text_MonUsedStrengthCanMoveBoulders, MSGBOX_SIGN
	end

EventScript_CantMoveBoulder::
	msgbox Text_MonMayPushBoulder, MSGBOX_SIGN
	end

EventScript_AlreadyUsedStrength::
	msgbox Text_StrengthMadeMovingBouldersPossible, MSGBOX_SIGN
	end

EventScript_DontUseStrength::
	closemessage
	releaseall
	end

Text_UseStrength::
	.ifdef ENGLISH
	.string "It's a big boulder, but a POKéMON\n"
	.string "may be able to push it aside.\p"
	.string "Would you like to use STRENGTH?$"
	.endif
	.ifdef SPANISH
	.string "Es una roca enorme, pero un\n"
	.string "POKéMON podría moverla.\p"
	.string "¿Usas FUERZA?$"
	.endif

Text_MonUsedStrengthCanMoveBoulders::
	.ifdef ENGLISH
	.string "{STR_VAR_1} used STRENGTH!\p"
	.string "{STR_VAR_1}'s STRENGTH made it\n"
	.string "possible to move boulders around!$"
	.endif
	.ifdef SPANISH
	.string "{STR_VAR_1} usó FUERZA.\p"
	.string "La FUERZA de {STR_VAR_1} logró\n"
	.string "desplazar la roca a un lado.$"
	.endif

Text_MonMayPushBoulder::
	.ifdef ENGLISH
	.string "It's a big boulder, but a POKéMON\n"
	.string "may be able to push it aside.$"
	.endif
	.ifdef SPANISH
	.string "Es una roca enorme, pero un\n"
	.string "POKéMON podría apartarla.$"
	.endif

Text_StrengthMadeMovingBouldersPossible::
	.ifdef ENGLISH
	.string "STRENGTH made it possible to move\n"
	.string "boulders around.$"
	.endif
	.ifdef SPANISH
	.string "Usar FUERZA ha permitido desplazar\n"
	.string "la roca a un lado.$"
	.endif

EventScript_Waterfall::
	goto_if_questlog EventScript_ReleaseEnd
	lockall
	checkpartymove MOVE_WATERFALL
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_WaterCrashingDown
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_UseWaterfall, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndWaterfall
	msgbox Text_MonUsedWaterfall
	dofieldeffect FLDEFF_USE_WATERFALL
	goto EventScript_EndWaterfall

EventScript_CantUseWaterfall::
	lockall
EventScript_WaterCrashingDown:
	msgbox Text_WallOfWaterCrashingDown
EventScript_EndWaterfall:
	releaseall
	end

Text_WallOfWaterCrashingDown::
	.ifdef ENGLISH
	.string "A wall of water is crashing down\n"
	.string "with a mighty roar.$"
	.endif
	.ifdef SPANISH
	.string "Un muro de agua cae con un\n"
	.string "estruendo estremecedor...$"
	.endif

Text_UseWaterfall::
	.ifdef ENGLISH
	.string "It's a large waterfall.\n"
	.string "Would you like to use WATERFALL?$"
	.endif
	.ifdef SPANISH
	.string "Es una gran catarata.\n"
	.string "¿Usas CASCADA?$"
	.endif

Text_MonUsedWaterfall::
	.ifdef ENGLISH
	.string "{STR_VAR_1} used WATERFALL.$"
	.endif
	.ifdef SPANISH
	.string "{STR_VAR_1} usó CASCADA.$"
	.endif

@ Unused leftover from R/S
EventScript_DeepWater::
	lockall
	checkpartymove MOVE_DIVE
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_MayGoUnderwater
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_SeaIsDeepUseDive, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndDive
	msgbox Text_MonUsedDive
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndDive

EventScript_CantDive::
	lockall
EventScript_MayGoUnderwater:
	msgbox Text_MonMayGoUnderwater
EventScript_EndDive:
	releaseall
	end

EventScript_TrySurface::
	lockall
	checkpartymove MOVE_DIVE
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSurface
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_LightFilteringUseDive, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndSurface
	msgbox Text_MonUsedDive
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndSurface

EventScript_CantSurface::
	lockall
	msgbox Text_MonMaySurface
	goto EventScript_EndSurface

EventScript_ObstacleCantSurface::
	lockall
	msgbox Text_DiveCantBeUsedHere
EventScript_EndSurface:
	releaseall
	end

Text_MonMayGoUnderwater::
	.ifdef ENGLISH
	.string "The sea is deep here. A POKéMON\n"
	.string "may be able to go underwater.$"
	.endif
	.ifdef SPANISH
	.string "El mar es muy profundo en esta\n"
	.string "zona.\l"
	.string "Un POKéMON podría bucear aquí.$"
	.endif

Text_SeaIsDeepUseDive::
	.ifdef ENGLISH
	.string "The sea is deep here.\n"
	.string "Would you like to use DIVE?$"
	.endif
	.ifdef SPANISH
	.string "El mar es muy profundo en esta\n"
	.string "zona. ¿Usas BUCEO?$"
	.endif

Text_MonUsedDive::
	.ifdef ENGLISH
	.string "{STR_VAR_1} used DIVE.$"
	.endif
	.ifdef SPANISH
	.string "{STR_VAR_1} usó BUCEO.$"
	.endif

Text_MonMaySurface::
	.ifdef ENGLISH
	.string "Light is filtering down from above.\n"
	.string "A POKéMON may be able to surface.$"
	.endif
	.ifdef SPANISH
	.string "La luz se filtra desde la\n"
	.string "superficie.\l"
	.string "Un POKéMON puede emerger aquí.$"
	.endif

Text_LightFilteringUseDive::
	.ifdef ENGLISH
	.string "Light is filtering down from above.\n"
	.string "Would you like to use DIVE?$"
	.endif
	.ifdef SPANISH
	.string "La luz se filtra desde la\n"
	.string "superficie. ¿Usas BUCEO?$"
	.endif

Text_DiveCantBeUsedHere::
	.ifdef ENGLISH
	.string "There is an obstacle above.\n"
	.string "DIVE can't be used here.$"
	.endif
	.ifdef SPANISH
	.string "Hay algún obstáculo en la\n"
	.string "superficie.\l"
	.string "No se puede usar BUCEO.$"
	.endif

EventScript_FailSweetScent::
	msgbox Text_LooksLikeNothingHere, MSGBOX_SIGN
	end

Text_LooksLikeNothingHere::
	.ifdef ENGLISH
	.string "Looks like there's nothing here…$"
	.endif
	.ifdef SPANISH
	.string "Parece que aquí no hay nada...$"
	.endif
