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
	if(SW1==0&&SW2==0)
          LED=ON;  /*led is on*/
          else
          LED=OFF;  /*led is off*/
   
}
	
	}

ANOTHER METHOD:

#include <AT89S52.h> 
#define LED P2_0  /*define the led*/
#define SW1 P2_1  /*define the sw1*/
#define SW2 P2_2  /*define the sw2*/
#define ON 0      /*define the on*/
#define OFF 1     /*define the off*/
#define INPUT 1
void main()
{
	SW1=INPUT;
	SW2=INPUT;
	LED=OFF; /*initially led off*/
	while(1)
	{
	__bit a,b;
	a=SW1;
	b=SW2;
	if(a==0&&b==0)
          LED=ON;  /*led is on*/
          else
          LED=OFF;  /*led is off*/
   
}
	
	}


