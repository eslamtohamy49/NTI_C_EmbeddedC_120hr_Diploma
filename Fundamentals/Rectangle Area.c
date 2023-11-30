#include <stdio.h>
#include <stdlib.h>

int main()
{
     float Length       ;
     float Width        ;
     float Area         ;

    printf("Enter The Rectangle Length \n");
    scanf("%f",&Length);

    printf("Enter The Rectangle Width \n");
    scanf("%f",&Width);

    Area =  Length * Width;

    printf("The Rectangle Perimeter is %f M^2 \n",Area);



    return 0;
}