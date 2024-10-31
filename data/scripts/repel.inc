EventScript_RepelWoreOff::
	msgbox Text_RepelWoreOff, MSGBOX_SIGN
	end

Text_RepelWoreOff::
	.ifdef ENGLISH
	.string "REPEL's effect wore off…$"
	.endif
	.ifdef SPANISH
	.string "El REPELENTE ha dejado de hacer\n"
	.string "efecto.$"
	.endif
