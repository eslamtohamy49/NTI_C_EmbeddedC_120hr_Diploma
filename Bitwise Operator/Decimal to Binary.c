#include <stdio.h>
#include <math.h>

#define BITS sizeof(int) * 8

int main()
{

  int REG_BITS_VAL     ;
  int Num_Bits[ BITS ] ;
  int Counter          ;
  int Index            ;


  printf("Enter Decimal Number \n");
  scanf("%d",&REG_BITS_VAL);


  for(Counter =0 ; Counter < BITS ; Counter++)
  {

      Num_Bits[Counter] = REG_BITS_VAL & (1 << Counter );

  }


  for(Index = BITS -1 ; Index >= 0  ; Index--)
  {

     printf("%d", Num_Bits[Index] ? 1 : 0);

  }


  printf("\n");


    return 0;
}

