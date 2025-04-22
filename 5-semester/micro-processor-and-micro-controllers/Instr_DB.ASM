	ORG	00
	JMP	inicio
	DB	41
	DB	42
	DB	43
inicio:	MOV	CL,02	; 1o. end. dos bytes guardados
	MOV	BL,C0	; 1o. end. da mem. de vídeo
loop:	MOV	AL,[CL]	; Copia um dos bytes em AL
	MOV   	[BL],AL ; Envia byte para mem. vídeo
	CMP	CL,04	; Se já usou todos os bytes
	JZ	fim	; Encerra o programa
	INC	CL	; Incr. o end. dos bytes guard.
	INC	BL	; Incr. o end. da mem. de vídeo
	JMP	loop	; Mostra novo byte no vídeo
fim:	END


