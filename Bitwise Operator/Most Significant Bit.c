#include <stdio.h>
#include <math.h>


#define BITS sizeof(int) * 8


int main()
{

   //10110110
   int Number ;
   int MSB    ;


   printf("Enter the Number \n");
   scanf("%d",&Number);

// MSB =  1 << ( 32 - 1 ) = 1 << 31 = 10000000000000000000000000000000
   MSB = 1 << (BITS - 1) ;


// if( 10110110 & 10000000000000000000000000000000 ) = if(10000000 ) = if(128) = if(1)
   if (Number & MSB )
   {
       printf("MSB of %d set(1). that mean Negative Number \n",Number);
   }
   else
   {
       printf("MSB of %d set(0). that mean Positive Number \n",Number);
   }



    return 0;
}
