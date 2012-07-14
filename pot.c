#include<msp430.h>
	
void adc_init()
{
	ADC10CTL0 = ADC10ON | ADC10SHT_2 | SREF_0;
	ADC10CTL1 = INCH_4 | SHS_0 | ADC10DIV_0 | ADC10SSEL_0 | CONSEQ_0 ;
	ADC10AE0 = BIT4;
	ADC10CTL0 |= ENC ;
}

void start_conversion()
{
	ADC10CTL0 |= ADC10SC;
}


unsigned int converting()
{
	return ADC10CTL1 & ADC10BUSY;
}






main() {

int i=0;
P1DIR=0x41;
while(1) {	
	
	adc_init();

	P1OUT=0;
	start_conversion();

	while(converting());
	
	if((ADC10MEM > 255)&& (ADC10MEM < 511))
		P1OUT=0x1;

	else if((ADC10MEM > 511)&&(ADC10MEM <767)) 		
		P1OUT=0x40;
	

	else if((ADC10MEM > 767)&&(ADC10MEM <1023 ))
		P1OUT=0x41;
	

	for(i=0;i<5000;i++);


	}
}
