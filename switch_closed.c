#include <AT89S52.h>   /*include header for AT89S52*/
#define LED P2_4   /*LED connected at port pin P2.4*/
#define ON 0  /*logic 0 active */
#define OFF 1  /*logic 1   active*/
#define SW P3_3  /*switch connected at port pin P3.3*/
#define INPUT 1  /*conf input as 1*/
void main()
{
__bit status; /*initialize a bit variable */
LED=OFF;/*turn off led*/
SW=INPUT;
while(1)
{
status=SW;
LED=status;/*write the logicto led*/
}
}
