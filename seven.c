#include<msp430.h>

main() {
	
	char disp_code[10]={0x3f,0x6,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67};
	int i,j=0;
	
	for(i=0;i<10;) {

	for(j=0;j<32000;j++);
	P1DIR=disp_code[i];
	P1OUT=disp_code[i];
	i=(i+1)%10;
	
	}
}

