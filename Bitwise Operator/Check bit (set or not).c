#include <stdio.h>
#include <math.h>

#define BITS sizeof(int) * 8

int main()
{

   int Number;
   int N_th  ;

   printf("Enter any Number \n");
   scanf("%d",&Number);

   printf("Enter nth Number to check set or not (0 -31) \n");
   scanf("%d",&N_th);

   Number = Number >> N_th ;

   if ( N_th >= BITS )
   {
      printf("Invalid Bit Number \n");
   }
   else if ( Number & 1 )
   {
       printf("The Bit value is set (1). \n");
   }
   else
   {
       printf("The Bit value is Not (0). \n");
   }


    return 0;
}
