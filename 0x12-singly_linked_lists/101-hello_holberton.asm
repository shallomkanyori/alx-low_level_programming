section .data
	hello db 'Hello, Holberton', 0Ah ;string to be printed, with newlin

section .text
	extern printf ;look for function in C std lib

	global main
	main:
		; load address of hello into rdi
		mov rdi, hello
		;call printf to print the string
		mov eax, 0
		call printf
		;return from main with status code 0
		xor eax, eax
		ret
