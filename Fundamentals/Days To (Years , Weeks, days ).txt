#include <stdio.h>
#include <stdlib.h>


int main()
{
     unsigned int Days   ;
     unsigned int Years  ;
     unsigned int Weeks  ;


    printf("Enter Days Number \n");
    scanf("%d",&Days);


    Years =  Days / 365       ;
    Weeks = (Days % 365) / 7  ;
    Days  = Days -((Years * 365)+(Weeks * 7));

    printf("Years %d \n",Years);
    printf("Weeks %d \n",Weeks);
    printf("Days  %d \n",Days );




    return 0;
}