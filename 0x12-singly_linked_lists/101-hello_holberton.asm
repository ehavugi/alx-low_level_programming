	global main
	extern printf

	section .text
main:
	mov rdi, message
	mov al, 0
	call printf
	mov eax, 1
	mov ebx, 0
	int 80h
message:
	db "Hello, Holberton",10,0
