#include <stdio.h>
#include <math.h>

#define BITS sizeof(int) * 8

int main()
{

   int REG_BITS_values       ;
   int Flipped_values        ;
  


  printf("Enter any Number \n");
  scanf("%d",&REG_BITS_values);


  Flipped_values = ~REG_BITS_values;


  printf("original Value before Flip:-  %d (in decimal) \n",REG_BITS_values);
  printf("Values after Flipped :-  %d (in decimal) \n",Flipped_values );




    return 0;
}
