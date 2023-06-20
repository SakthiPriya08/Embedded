#include <AT89S52.h> 
#define LED P2_0  /*define the led*/
#define SW1 P2_1  /*define the sw1*/
#define SW2 P2_2  /*define the sw2*/
#define ON 0      /*define the on*/
#define OFF 1     /*define the off*/
void main()
{
	LED=OFF; /*initially led off*/
	while(1)
	{
	if((SW1==1&&SW2==1)||(SW1==1&&SW2==1))
          LED=ON;  /*led is on*/
          else
          LED=OFF;  /*led is off*/
   
}
	
	}

