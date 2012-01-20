#include<msp430.h>

main() {
	
	int i;
	P1DIR=1;
	do{
	
	ADC10CTL0 = ADC10ON | ADC10SHT_2 | SREF_0;
	ADC10CTL1 = INCH_0 | SHS_0 | ADC10DIV_0 | ADC10SSEL_0 | CONSEQ_0 ;
	ADC10AE0 = BIT0;
	ADC10CTL0 |= ENC ;


	ADC10CTL0 |= ADC10SC;

	while(ADC10CTL1 & ADC10BUSY);
	if(ADC10MEM > 380)
                            P1OUT=0x00;
                    	else
                            {	ADC10AE0=0;	
				P1OUT=1;}
	for(i=0;i<1000;i++);
	
	}while(1);
}


