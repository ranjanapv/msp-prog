#include<msp430.h>

#define LED1 (P1OUT^=1)
#define LED2 (P1OUT^=0x40)

main()
{
P1DIR=0x41;
P1OUT=0x41;
while(1){

TACTL=0x260;
while((TACTL&1)==0);

TACTL &=~1;
P1OUT ^=LED1+LED2;
}

}



