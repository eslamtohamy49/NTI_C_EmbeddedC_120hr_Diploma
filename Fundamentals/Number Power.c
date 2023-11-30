#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
     unsigned int Base       ;
     unsigned int Exponent   ;
     unsigned int Power  = 1 ;
     unsigned int counter    ;

    printf("Enter Base \n");
    scanf("%d",&Base);

    printf("Enter Exponent \n");
    scanf("%d",&Exponent);

    for(counter = Exponent ; counter > 0 ; counter--)
    {
        Power *= Base;
    }

    printf("Power is %d \n",Power);



    
    return 0;
}
