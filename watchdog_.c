#include <msp430.h>
#define LED1 BIT0

__attribute__((interrupt(WDT_VECTOR)))

void isr()
{
	P1OUT ^= LED1;
}

//initialize watchdog as interval timer
void watchdog_init()
{
	
	 WDTCTL = 0x5A10;
	 IE1 = 0x11;
}


main()
{

	P1DIR = LED1;

	__enable_interrupt();
	watchdog_init();
	while(1);
}

