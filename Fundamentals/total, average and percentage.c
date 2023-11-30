#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
     float Mark_1      ;
     float Mark_2      ;
     float Mark_3      ;
     float Mark_4      ;
     float Mark_5      ;
     float Mark_6      ;
     float Total       ;
     float Average     ;
     float Percentage  ;



     printf("Enter Student Marks \n");
     scanf("%f%f%f%f%f%f",&Mark_1,&Mark_2
                         ,&Mark_3,&Mark_4
                         ,&Mark_5,&Mark_6 );


     Total      = Mark_1 + Mark_2 + Mark_3 + Mark_4 + Mark_5 + Mark_6 ;
     Average    = Total /6                                            ;
     Percentage = (Average /500 )*100                                 ;


   printf("Total %f \n",Total);
   printf("Average %f \n",Average);
   printf("Percentage %f \n",Percentage);





    return 0;
}
