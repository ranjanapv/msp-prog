#include <msp430.h>

main()
{
    P1DIR = 0x40;
  
    P1OUT = 0x40;
    
    TACTL = 0x220;
    
    while(1) {

         while((TACTL & 1) == 0)
              ;
         TACTL &= ~1;
 
         P1OUT ^= 0x40;

    }
}


