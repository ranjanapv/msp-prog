#include <msp430.h>
unsigned lfsr = 0xeca3;
unsigned bit;

main()
{
P1DIR=0x01;

int i;
while(1)
{

bit = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5) ) & 1;
lfsr = (lfsr >> 1) | (bit << 15);
for(i=0;i<25000;i++);


P1OUT=lfsr;

}
}


