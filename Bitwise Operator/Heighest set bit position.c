#include <stdio.h>
#include <math.h>

#define BITS sizeof(int) * 8

int main()
{

   int REG_BITS_values          ;
   int Check_Highest_Val   = -1 ;
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
         Check_Highest_Val  = Counter;

      }

  }

   if(Check_Highest_Val != -1)
   {
       printf("The Highest value set(1). is in position %d \n",Check_Highest_Val);
   }
   else
   {
       printf("The Register bit values is all not(0). \n");
   }



    return 0;
}
