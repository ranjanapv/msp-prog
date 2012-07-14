
org 0xf800
start:
     mov.w #0x5a80,&0x120
     mov.w #0x280, r4     
     mov.b #0x01,&0x22
     mov.b #0,&0x21
     mov.w #0x2e2, &0x160
     eint
L1:
     jmp L1
 
isr:
     xor.b #1,&0x21 
     bic.w #1, &0x160 
     reti
 
org 0xfffe          
     dw start
org 0xfff0
     dw isr
