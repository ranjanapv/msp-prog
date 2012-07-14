#include<msp430.h>

main() {
	unsigned lfsr=0xacac;
	P1DIR=0x41;
	int i;
	while(1) {
		i=0;
		lfsr = (lfsr >> 1) ^ (-(lfsr & 1u) & 0xB400u);
		while(i++<25000);
		P1OUT=lfsr;
	}
}


