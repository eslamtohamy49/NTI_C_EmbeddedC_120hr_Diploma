#include <stdio.h>
#include <stdlib.h>


int main()
{
     float Celsius        ;
     float Faherenheit    ;


     printf("Enter Temperature in Faherenheit \n");
     scanf("%f",&Faherenheit);

     Celsius = (Faherenheit - 32 ) *5/9;

     printf("Temperature in Celsius :-  %0.2f F \n",Celsius);


    return 0;
}
