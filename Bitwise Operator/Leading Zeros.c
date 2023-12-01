#include <stdio.h>
#include <math.h>

#define BITS sizeof(int) * 8

int main()
{

   int REG_BITS_values       ;
   int Check_Leading_Zeros   ;
   int Counter               ;


  printf("Enter any Number \n");
  scanf("%d",&REG_BITS_values);

  Check_Leading_Zeros = 1 << BITS - 1 ;



  //876543210 number of position bits
  //100001011
  for(Counter =0 ;Counter < BITS ; Counter++ )
  {
      //          1                         10000000000000000000000000000000
      if ((REG_BITS_values << Counter) & (          Check_Leading_Zeros        ) )
      {
         break;

      }

  }


  printf("Total number of Leading zeros in %d is %d \n", REG_BITS_values, Counter);


    return 0;
}
