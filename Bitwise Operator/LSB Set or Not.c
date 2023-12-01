#include <stdio.h>
#include <math.h>


int main()
{
    
    int Number ;

    
    printf("Enter the Number \n");
    scanf("%d",&Number);



    if (1 == (Number & 1))
    {
        printf("The Least bit in the Number %d is set (1).\n",Number);
    }
    else
    {
        printf("The Least bit in the Number %d is set (0).\n",Number);
    }


    
    return 0;
}
