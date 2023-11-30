#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int Number_One   ;
    unsigned int Number_Two   ;
    unsigned int Sum_Numbers  ;
    unsigned int Difference    ;
    unsigned int Quotient     ;
    unsigned int Product      ;
    unsigned int Modulus      ;



    printf("Enter Number One \n");
    scanf("%d",&Number_One);

    printf("Enter Number Two \n");
    scanf("%d",&Number_Two);

    Sum_Numbers = Number_One + Number_Two ;
    Difference  = Number_One - Number_Two ;
    Quotient    = Number_One / Number_Two ;
    Product     = Number_One * Number_Two ;
    Modulus     = Number_One % Number_Two ;

    printf(" Sum        :-  %d  \n",Sum_Numbers);
    printf(" Difference :-  %d \n",Difference);
    printf(" Quotient   :-  %d \n",Quotient);
    printf(" Product    :-  %d  \n",Product);
    printf(" Modulus    :-  %d \n",Modulus);


    return 0;
}
