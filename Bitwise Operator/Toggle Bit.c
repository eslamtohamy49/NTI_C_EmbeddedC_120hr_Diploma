#include <stdio.h>
#include <math.h>

#define BITS sizeof(int) * 8

int main()
{

   int REG_BITS      ;
   int Bit_Position  ;

   printf("Enter any Register values \n");
   scanf("%d",&REG_BITS);

   printf("Enter The bit position to Clear \n");
   scanf("%d",&Bit_Position);

   if(Bit_Position >= BITS)
   {
       printf("INVALID BIT POSITION \n");
   }
   else
   {
       REG_BITS = REG_BITS ^ (1 << Bit_Position) ;
       printf("Register after Clear bits position %d \n",REG_BITS);

   }


    return 0;
}
