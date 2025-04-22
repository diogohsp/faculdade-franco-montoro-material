	ORG	00
	JMP	inicio
	DB	20	;Endereço da rotina de serviço de INT02
	DB	40	;Endereço da rotina de serviço de INT03
	DB	60	;Endereço da rotina de serviço de INT04
inicio:	MOV	BL,C0
	MOV	CL,FF
	MOV	DL,30
	OUT	07	;Mostra o teclado alfanumérico
	OUT	08	;Mostra o pad numérico
	STI		;Habilita as interruções
loop:	NOP
	JMP	loop

	ORG	20	;Endereço inicial da rotina de serviço do timer
	CLI		;Desabilita as interrupções
	MOV	[CL],DL
	INC	DL
	CMP	DL,3A
	JNZ	volta
	MOV	DL,30
volta:	STI		;Habilita as interrupções
	IRET		;Retorna ao programa principal

	ORG	40	;Endereço inicial da rotina de serviço do teclado
	CLI		;Desabilita as interrupções
	IN	07	;Lê um dado do teclado alfanumérico
	MOV	[BL],AL
	STI		;Habilita as interrupções
	IRET		;Retorna ao programa principal

	ORG	60	;Endereço inicial da rotina de serviço do pad
	CLI		;Desabilita as interrupções
	IN	08	;Lê um dado do pad numérico
	MOV	[BL],AL
	STI		;Habilita as interrupções
	IRET		;Retorna ao programa principal

	END

