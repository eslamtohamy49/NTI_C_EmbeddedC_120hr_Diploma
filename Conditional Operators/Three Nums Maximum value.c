#include <stdio.h>
#include <math.h>


int main()
{
     int Number_One    ;
     int Number_Two    ;
     int Number_Three  ;
     int Maximum       ;


    printf("Enter Number One \n");
    scanf("%d",&Number_One);

    printf("Enter Number Two \n");
    scanf("%d",&Number_Two);

    printf("Enter Number Three \n");
    scanf("%d",&Number_Three);


    Maximum = ((Number_One > Number_Two) && (Number_One > Number_Three)) ?
               Number_One : (Number_Two > Number_Three)? Number_Two : Number_Three ;





    printf("Maximum Number is %d \n",Maximum);




    return 0;
}
