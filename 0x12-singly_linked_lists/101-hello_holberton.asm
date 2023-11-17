section .data
	hello_message db "Hello, Holberton", 0xA, 0

section .text
	extern printf
	global main

main:
	sub rsp, 8 ; align stack

	lea rdi, [rel hello_message]
	call printf

	add rsp, 8 ; restore stack

	mov eax, 0
	ret
