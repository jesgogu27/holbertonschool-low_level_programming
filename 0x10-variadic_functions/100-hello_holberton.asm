section .data

msg db "Hello, Holberton",0xA,0xD
len equ $ - msg

section .text
	global main

main:

	mov eax, 4
	mov ebx, 1
	mov ecx, msg
	mov edx, len
	int 0x80

	mov eax, 1
	int 0x80
