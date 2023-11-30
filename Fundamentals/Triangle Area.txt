#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
     float Triangle_Base    = 0 ;
     float Triangle_Height  = 0 ;
     float Triangle_Area    = 0 ;

     printf("Enter Triangle Base  \n");
     scanf("%f",&Triangle_Base);

     printf("Enter Triangle Height \n");
     scanf("%f",&Triangle_Height);

     Triangle_Area = 0.5 * Triangle_Base * Triangle_Height ;

     printf("Triangle Area :-   %0.2f ",Triangle_Area);



    return 0;
}
