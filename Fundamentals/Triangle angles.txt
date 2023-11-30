#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
     float Angle_One   ;
     float Angle_Two   ;
     float Angle_Three ;

     printf("Enter Angle one \n");
     scanf("%f",&Angle_One);

     printf("Enter Angle one \n");
     scanf("%f",&Angle_Two);

     Angle_Three = 180 - (Angle_One +Angle_Two);

     printf("Angle Number Three of Triangle :-   %0.2f ",Angle_Three);



    return 0;
}