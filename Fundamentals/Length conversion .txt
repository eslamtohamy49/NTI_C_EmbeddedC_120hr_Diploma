#include <stdio.h>
#include <stdlib.h>


int main()
{
     float C_Meter      ;
     float Meter        ;
     float K_meter      ;

     printf("Enter Length in cm \n");
     scanf("%f",&C_Meter);

     Meter   = C_Meter / 100.0 ;
     K_meter = C_Meter / 1000.0;


     printf("Length in Meter      :- %0.2f  \n",Meter);
     printf("Length in Kilo Meter :- %0.2f  \n",K_meter);



    return 0;
}
