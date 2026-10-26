; ASM.ASM - Symmetry 1 + '1 = 2 np.offset --force E*
; 'touch' 1 + '1 = 2
section .data
    msg db "Symmetry 1 + '1 = 2", 10
    msg_len equ $ - msg
    np_offset dq 0
    E_star db "E*", 10
    E_len equ $ - E_star
section .text
    global _start
_start:
    mov rax, 2
    mov rdi, file_one
    mov rsi, 0x241
    mov rdx, 0o644
    syscall
    mov [fd_store], rax
    mov rax, [np_offset]
    add rax, 2
    mov [np_offset], rax
    mov rax, 1
    mov rdi, 1
    mov rsi, E_star
    mov rdx, E_len
    syscall
    mov rax, 60
    xor rdi, rdi
    syscall
section .bss
    fd_store resq 1
section .rodata
    file_one db "1", 0
