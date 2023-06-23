#include <AT89S52.h>
#define SW P1
#define LED P0
void wait(int);
void main()
{
	char s;
	SW=0xFF;
	while(1){
	s=SW;
	LED=s;
	wait(1);
	LED=0xFF;
	wait(1);
}
}
void wait(int del)
{
	int i,j;
	for(i=0;i<del;i++);
	{
	for(j=0;j<15;j++){
	}
	}
}
