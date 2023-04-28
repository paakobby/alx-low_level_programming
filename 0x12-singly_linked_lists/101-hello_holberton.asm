section .data
    message db "Hello, Holberton", 0Ah ; message to print

section .text
    global main

    extern printf
    main:
        push    rbp
        mov     rbp, rsp

        lea     rdi, [message] ; load message address into rdi
        mov     eax, 0         ; set return value to 0
        call    printf         ; call printf to print message

        mov     rsp, rbp
        pop     rbp
        ret

