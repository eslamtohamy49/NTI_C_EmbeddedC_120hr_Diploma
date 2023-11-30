#include <stdio.h>
#include <stdlib.h>
#define PI  3.14


int main()
{
     float Radius           ;
     float Diameter         ;
     float Perimeter        ;
     float Area             ;


     printf("Enter the Circle Radius \n");
     scanf("%f",&Radius);

     Diameter  = 2 * Radius ;
     Perimeter = 2 * PI * Radius ;
     Area = PI * Radius * Radius ;

     printf("Circle Diameter  :- %0.2f  \n",Diameter);
     printf("Circle Perimeter :- %0.2f  \n",Perimeter);
     printf("Circle Area      :- %0.2f  \n",Area);

     
     
    return 0;
}