section .data

msg db "Hello, Holberton",10


section .text
	global main

main:

	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 17
	syscall

	mov eax,1
	mov ebx,0
	int 80h
