#include<msp430.h>
main()
{

label:
{
P1DIR=1;
P1OUT=1;
}

while((P1IN & 0x8)==0)
{ P1DIR=0;
P1OUT=0;
}
goto label;
}


