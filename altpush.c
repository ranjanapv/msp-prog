#include<msp430.h>


#define TOGGLE ( P1OUT ^=0x41)

void delay()
{
unsigned int i = 0;
while(++i < 27000);
}


main()
{	P1DIR=0x41;
	P1OUT=1;

	while(1){

		if( (P1IN & 0x8) == 0)
			TOGGLE;
		delay();

	}
}


