#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
     float Triangle_side    = 0 ;
     float Triangle_Area    = 0 ;
     float counter              ;
     float sqrt_Num_3           ;
     printf("Enter Triangle side \n");
     scanf("%f",&Triangle_side);


     for(counter = 0.01; counter * counter < 3; counter += 0.01);
     printf("counter %0.2f \n",counter);


     Triangle_Area = (sqrt(3)/4)* Triangle_side * Triangle_side ;

     printf("Triangle Area :-   %0.2f ",Triangle_Area);



    return 0;
}
