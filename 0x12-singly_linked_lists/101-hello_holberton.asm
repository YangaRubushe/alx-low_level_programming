section .data
    msg db "Hello, Holberton", 10
    msglen equ $ - msg

section .text
    global main

main:
    mov rax, 1         ; syscall number for write
    mov rdi, 1         ; file descriptor (stdout)
    mov rsi, msg       ; address of the message
    mov rdx, msglen    ; length of the message
    syscall

    mov rax, 60        ; syscall number for exit
    xor rdi, rdi       ; exit status 0
    syscall

