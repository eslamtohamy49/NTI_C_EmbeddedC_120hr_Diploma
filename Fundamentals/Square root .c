#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
     float Number ;
     float counter;

     printf("Enter Number to get root sqr \n");
     scanf("%f",&Number);

     for(counter = 0.01 ; counter * counter < Number ; counter += 0.01);

     printf("the square root value is %0.2f ",counter);


    return 0;
}
