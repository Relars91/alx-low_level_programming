section .data
    hello db 'Hello, Holberton', 10, 0  ; 10 is the ASCII code for newline

section .text
    global main

    extern printf

main:
    push    rbp
    mov     rbp, rsp

    mov     edi, hello      ; load the address of the hello string into the first argument register (EDI)
    xor     eax, eax        ; zero out the second argument register (EAX)
    call    printf          ; call the printf function

    mov     rsp, rbp
    pop     rbp

    mov     eax, 0
    ret
