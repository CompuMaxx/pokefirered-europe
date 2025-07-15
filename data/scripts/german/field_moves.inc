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
	.string "Du kannst den ZERSCHNEIDER hier\n"
	.string "einsetzen!\p"
	.string "Möchtest du den ZERSCHNEIDER\n"
	.string "einsetzen?$"

Text_MonUsedMove::
	.string "{STR_VAR_1} setzt\n"
	.string "{STR_VAR_2} ein.$"

Text_TreeCanBeCutDown::
	.string "Der ZERSCHNEIDER kann hier\n"
	.string "eingesetzt werden.$"

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
	.string "Dieser Fels ist zerbrechlich. Soll\n"
	.string "ZERTRÜMMERER eingesetzt werden?$"

Text_MonMaySmashRock::
	.string "Ein großer Felsen. Ein POKéMON\n"
	.string "könnte ihn vielleicht zertrümmern.$"

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
	.string "Ein POKéMON kann diesen Felsen\n"
	.string "vielleicht bewegen.\p"
	.string "Möchtest du STÄRKE einsetzen?$"

Text_MonUsedStrengthCanMoveBoulders::
	.string "{STR_VAR_1} setzt STÄRKE ein.\p"
	.string "STÄRKE von {STR_VAR_1} ermöglicht\n"
	.string "es, den Felsen zu bewegen.$"

Text_MonMayPushBoulder::
	.string "Ein POKéMON kann diesen Felsen\n"
	.string "vielleicht bewegen.$"

Text_StrengthMadeMovingBouldersPossible::
	.string "STÄRKE ermöglicht es, Felsen zu\n"
	.string "bewegen.$"

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
	.string "Das Wasser fällt steil wie eine\n"
	.string "Wand brüllend in die Tiefe.$"

Text_UseWaterfall::
	.string "Ein riesiger Wasserfall.\n"
	.string "Möchtest du KASKADE einsetzen?$"

Text_MonUsedWaterfall::
	.string "{STR_VAR_1} setzt KASKADE ein.$"

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
	.string "Das Wasser ist hier tief. Ein\n"
	.string "POKéMON könnte hier\l"
	.string "vielleicht tauchen.$"

Text_SeaIsDeepUseDive::
	.string "Das Meer ist an dieser Stelle\n"
	.string "sehr tief. Möchtest du\l"
	.string "TAUCHER einsetzen?$"

Text_MonUsedDive::
	.string "{STR_VAR_1} setzt TAUCHER ein.$"

Text_MonMaySurface::
	.string "Licht schimmert von oben herab. Ein\n"
	.string "POKéMON könnte hier auftauchen.$"

Text_LightFilteringUseDive::
	.string "Licht schimmert von oben herab.\n"
	.string "Möchtest du TAUCHER einsetzen?$"

Text_DiveCantBeUsedHere::
	.string "An der Oberfläche ist irgendetwas\n"
	.string "im Weg. TAUCHER kann nicht\l"
	.string "eingesetzt werden.$"

EventScript_FailSweetScent::
	msgbox Text_LooksLikeNothingHere, MSGBOX_SIGN
	end

Text_LooksLikeNothingHere::
	.string "Hier scheint nichts zu sein...$"
