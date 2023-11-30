#include <stdio.h>
#include <math.h>


int main()
{
     int Number_One ;
     int Number_Two ;
     int Maximum    ;


    printf("Enter Number One \n");
    scanf("%d",&Number_One);

    printf("Enter Number Two \n");
    scanf("%d",&Number_Two);



   Maximum = (Number_One > Number_Two) ? Number_One : Number_Two;

   printf("Maximum Number is %d \n",Maximum);




    return 0;
}
