#include <stdio.h>
#include <stdlib.h>

int main()
{
     float Length       ;
     float Width        ;
     float Perimeter    ;

    printf("Enter The Rectangle Length \n");
    scanf("%f",&Length);

    printf("Enter The Rectangle Width \n");
    scanf("%f",&Width);

    Perimeter = 2 * (Length + Width);

    printf("The Rectangle Perimeter is %f M\n",Perimeter);



    return 0;
}