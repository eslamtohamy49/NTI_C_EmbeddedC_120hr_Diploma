#include <stdio.h>
#include <stdlib.h>


int main()
{
     float Celsius        ;
     float Faherenheit    ;


     printf("Enter Temperature in Celsius \n");
     scanf("%f",&Celsius);

     Faherenheit = (Celsius * (9/5)) + 32 ;

     printf("Temperature in Faherenheit :- %0.2f F \n",Faherenheit);


    return 0;
}
