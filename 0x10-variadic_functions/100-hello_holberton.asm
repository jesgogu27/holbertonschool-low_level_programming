SECTION .model
SECTION .stack
SECTION .data
	mjs db "Holberton School$"

SECTION .code
	main
		MOV AX, SEG @data
		MOV DS, AX

		MOV AH, 09h
		lea dx, msj
		int 21h
 