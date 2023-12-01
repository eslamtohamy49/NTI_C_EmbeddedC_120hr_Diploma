#include <stdio.h>
#include <math.h>

#define BITS sizeof(int) * 8

int main()
{

   int REG_BITS_values    = 0 ;
   int Number_of_Ones     = 0 ;
   int Number_of_Zeros    = 0 ;
   int Counter            = 0 ;

  printf("Enter any Number \n");
  scanf("%d",&REG_BITS_values);



  //876543210 number of position bits
  //100001011
  for(Counter =0 ;Counter < BITS ; Counter++ )
  {

      //          1                         00000000000000000000000000000001
      if ((REG_BITS_values >> Counter) & (                 1                  ) )
      {
          Number_of_Ones++;

      }
      else
      {
          Number_of_Zeros++;
      }


  }


   printf("Number of Ones  in %d is %d \n",REG_BITS_values,Number_of_Ones);
   printf("Number of Zeros in %d is %d \n",REG_BITS_values,Number_of_Zeros);




    return 0;
}
