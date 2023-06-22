#include<AT89S52.h>
void wait(int);
void main()
{
	char data=0xAA;
	while(1)
	{
	P0=0X01;
	wait(1);
	P0=0X02;
	wait(1);
	P0=0X04;
	wait(1);
	P0=0X08;
	wait(1);
	P0=0X10;
	wait(1);
	P0=0X20;
	wait(1);
	P0=0X40;
	wait(1);
	P0=0X80;
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


ALTERNATE METHOD:


#include<AT89S52.h>
void wait(int);
void main()
{
	char data=0x01;
	char i;
	while(1)
	{
	for(i=0;i<8;i++)
	{
	  P0=(data<<i);
	  wait(1);
	}
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

