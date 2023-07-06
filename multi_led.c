#include <AT89S52.h>
#define SEV_SEG P0
#define SW P1
const char code[11]={0xC0, 0XF9, 0XA4, 0XB0, 0X99, 0X92, 0X82, 0XF8, 0X80, 0X90}; 
void main(){
SEV_SEG=code[2];
SW=0x07;
SW=0x0F;
while(1){
}
}
