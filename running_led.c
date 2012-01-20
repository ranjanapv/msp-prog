#include<msp430.h>

main() {
	int led=8,j;
	int bit=15;
	P1DIR=15;
	while(1) {
		
		P1OUT=bit&led;
		for(j=0;j<32000;j++);
		led/=2;
		if(led==0)
			led=8;
	}
}
