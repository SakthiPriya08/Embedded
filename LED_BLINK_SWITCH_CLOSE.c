#include <AT89S52.h>
#define LED P2_0
#define SW P3_3
#define LED_OFF 1 
#define ON 0
#define OFF 0
#define INPUT 1
void wait(int);
void main()
{
	__bit status;
	LED=OFF;
	SW=INPUT;
	while(1)
	{
	    status=SW;
		if(status==0)
		{
		LED=!LED;
		wait(1);
		}
	       else
		{
		LED=OFF;
		}
	    }
	}
void wait(int del)
{
	int c1,c2;
	for(c1=0;c1<del;c1++){
	for(c2=0;c2<15;c2++){
}
}
}

