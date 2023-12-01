#include <stdio.h>
#include <math.h>

#define BITS sizeof(int) * 8

int main()
{

   int REG_BITS_values          ;
   int Counter                  ;


  printf("Enter any Number \n");
  scanf("%d",&REG_BITS_values);

  //876543210 number of position bits
  //100001011
  for(Counter =0 ;Counter < BITS ; Counter++ )
  {

      //          1                      00000001
      if ((REG_BITS_values >> Counter) & (  1    ) )
      {
        
         break;

      }

  }


  printf("Total number of trailing zeros in %d is %d \n", REG_BITS_values, Counter);


    return 0;
}