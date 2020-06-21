

section .data

msg db "Hello, Holberton",0
formato:	db "%s", 10, 0

section .text
	global main
	extern printf

main:

	push rbp
	mov rdi, formato
	mov rsi, msg
	mov rax, 0
	call printf
	pop rbp
	mov rax,0
	ret