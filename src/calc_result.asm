global CalcResult1_

CalcResult1_:
    ; edi for 1st argument, esi for 2nd argument
    ; rdx for 3rd argument, rcx for 4rd argument

    mov r10d, edi
    mov r11d, esi
    mov r12, rdx
    mov r13, rcx

    mov eax, edi
    cdq

    idiv r11d
    mov [r12], eax
    mov [r13], edx

    imul r10d, r11d
    mov eax, r10d
    ret