#include <AT89S52.h>
void wait(int);
void main()
{

	while(1)
	{
	
	P0=0x55;
	wait(5);
	P0=0xAA;
	wait(5);
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

