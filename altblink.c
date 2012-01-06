#include<msp430.h>
main()
{ long int i;
for(;;)
{
i=10000;
while(i!=0)
{P1DIR=1;
P1OUT=1;
--i;
}
i=10000;


while(i!=0)
{ P1DIR=0x40;
P1OUT=0x40;
--i;
}
}

}


