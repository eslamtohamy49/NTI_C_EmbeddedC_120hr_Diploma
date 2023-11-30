#include <stdio.h>
#include <stdlib.h>


int main()
{
    unsigned int Number_One   ;
    unsigned int Number_Two   ;
    unsigned int Sum_Numbers  ;

    printf("Enter Number One \n");
    scanf("%d",&Number_One);

    printf("Enter Number Two \n");
    scanf("%d",&Number_Two);

    Sum_Numbers = Number_One + Number_Two;

    printf("the sum %d and %d is %d \n", Number_One, Number_Two, Sum_Numbers);


    return 0;
}