#include <stdio.h>
#include <math.h>


int main()
{
     unsigned int Years ;

     printf("Enter the year \n");
     scanf("%d",&Years);

     /*
      (Years%4==0 && Years%100!=0) ? printf("LEAP YEAR") :
        (Years%400 ==0 ) ? printf("LEAP YEAR") : printf("COMMON YEAR");
     */


     (Years%4==0 && Years%100!=0) || (Years%400 ==0 ) ? printf("LEAP YEAR") : printf("COMMON YEAR");




    return 0;
}