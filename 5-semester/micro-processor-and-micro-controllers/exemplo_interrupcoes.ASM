	ORG	00
	JMP	inicio
	DB	20	;Endere�o da rotina de servi�o de INT02
	DB	40	;Endere�o da rotina de servi�o de INT03
	DB	60	;Endere�o da rotina de servi�o de INT04
inicio:	MOV	BL,C0
	MOV	CL,FF
	MOV	DL,30
	OUT	07	;Mostra o teclado alfanum�rico
	OUT	08	;Mostra o pad num�rico
	STI		;Habilita as interru��es
loop:	NOP
	JMP	loop

	ORG	20	;Endere�o inicial da rotina de servi�o do timer
	CLI		;Desabilita as interrup��es
	MOV	[CL],DL
	INC	DL
	CMP	DL,3A
	JNZ	volta
	MOV	DL,30
volta:	STI		;Habilita as interrup��es
	IRET		;Retorna ao programa principal

	ORG	40	;Endere�o inicial da rotina de servi�o do teclado
	CLI		;Desabilita as interrup��es
	IN	07	;L� um dado do teclado alfanum�rico
	MOV	[BL],AL
	STI		;Habilita as interrup��es
	IRET		;Retorna ao programa principal

	ORG	60	;Endere�o inicial da rotina de servi�o do pad
	CLI		;Desabilita as interrup��es
	IN	08	;L� um dado do pad num�rico
	MOV	[BL],AL
	STI		;Habilita as interrup��es
	IRET		;Retorna ao programa principal

	END

