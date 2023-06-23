#include <AT89S52.h>
#define SW P1
#define LED P0
void main()
{
	char s;
	SW=0xFF;
	while(1){
	s=SW;
	LED=s;
}
}
