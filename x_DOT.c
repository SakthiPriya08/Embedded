#include <AT89S52.h>
#define r P0
#define c P1
const char pat[9]={0x7E,0xBD,0xDB,0xE7,0xE7,0xDB,0xBD,0x7E};
void main()
{
	r=0x10;
	c=0xEF;
	while(1){
		char i;
		for(i=0;i<8;i++){
		c=pat[i];
		r=0x01<<i;
		r=0x00;
                }
           }
}

