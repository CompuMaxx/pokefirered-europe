Text_MonSentToBoxInSomeonesPC::
    .ifdef ENGLISH
    .string "{STR_VAR_2} was transferred to\n"
    .string "Someone's PC.\p"
    .string "It was placed in \n"
    .string "BOX “{STR_VAR_1}.”$"
    .endif
    .ifdef SPANISH
    .string "{STR_VAR_2} fue enviado al PC\n"
    .string "de alguien.\p"
    .string "Se ha guardado en la CAJA\n"
    .string "“{STR_VAR_1}”.$"
    .endif

Text_MonSentToBoxInBillsPC::
    .ifdef ENGLISH
    .string "{STR_VAR_2} was transferred to\n"
    .string "BILL'S PC.\p"
    .string "It was placed in \n"
    .string "BOX “{STR_VAR_1}.”$"
    .endif
    .ifdef SPANISH
    .string "{STR_VAR_2} fue enviado al PC\n"
    .string "de BILL.\p"
    .string "Se ha guardado en la CAJA\n"
    .string "“{STR_VAR_1}”.$"
    .endif

Text_MonSentToBoxSomeonesBoxFull::
    .ifdef ENGLISH
    .string "BOX “{STR_VAR_3}” on\n"
    .string "Someone's PC was full.\p"
    .string "{STR_VAR_2} was transferred to\n"
    .string "BOX “{STR_VAR_1}.”$"
    .endif
    .ifdef SPANISH
    .string "La CAJA “{STR_VAR_3}” del PC\n"
    .string "de alguien estaba llena.\p"
    .string "{STR_VAR_2} fue enviado a la CAJA\n"
    .string "“{STR_VAR_1}”.$"
    .endif

Text_MonSentToBoxBillsBoxFull::
    .ifdef ENGLISH
    .string "BOX “{STR_VAR_3}” on\n"
    .string "BILL'S PC was full.\p"
    .string "{STR_VAR_2} was transferred to\n"
    .string "BOX “{STR_VAR_1}.”$"
    .endif
    .ifdef SPANISH
    .string "La CAJA “{STR_VAR_3}” del PC\n"
    .string "de BILL estaba llena.\p"
    .string "{STR_VAR_2} fue enviado a la CAJA\n"
    .string "“{STR_VAR_1}”.$"
    .endif

Text_PlayerObtainedTheMon::
    .ifdef ENGLISH
    .string "{PLAYER} obtained\n"
    .string "the {STR_VAR_1}!$"
    .endif
    .ifdef SPANISH
    .string "¡{PLAYER} obtuvo\n"
    .string "el {STR_VAR_1}!$"
    .endif

@ Unused. Translated below
@ You cannot carry any more Pokemon, so {STR_VAR_2} was sent to PC Box {STR_VAR_1}!
Text_MonSentToBoxInPC::
    .string "ポケモンを　もちきれないので\n"
    .string "パソコンの　ボックス“{STR_VAR_1}”　に\l"
    .string "{STR_VAR_2}を　てんそうした！$"

Text_NoMoreRoomForPokemon::
    .ifdef ENGLISH
    .string "There's no more room for POKéMON!\p"
    .string "The POKéMON BOXES are full and\n"
    .string "can't accept any more!$"
    .endif
    .ifdef SPANISH
    .string "¡No queda sitio para más POKéMON!\p"
    .string "¡Las CAJAS POKéMON están llenas!$"
    .endif
