#include<AT89S52.h>
#define DATA P0
#define DIGIT P1
const char code[11]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90}; 
void main()
{
   while(1)
   {
   DATA=code[2];//to display the 2
   DIGIT=0x07;//8 4 2 1=4+2+1=7
   DIGIT=0x0F;//to off the condition
   DATA=code[0];//to display the 0
   DIGIT=0x0B;//8 4 2 1=8+2+1=11=B
   DIGIT=0x0F;//to off the condition
   DATA=code[2];//to display the 2
   DIGIT=0x0D;//8 4 2 1=4+8+1=13=D
   DIGIT=0x0F;//to off the condition
   DATA=code[3];//to display the 3
   DIGIT=0x0E;//8 4 2 1=8+4+2+1=15=E
   DIGIT=0x0F;//to off the condition
   }
}
