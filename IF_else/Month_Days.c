/**
 * C program to check the Month Days
 */

#include <stdio.h>


#define EXIT          0
#define JANUARY       1
#define FEBRUARY      2
#define MARCH         3
#define APRIL         4
#define MAY           5
#define JUNE          6
#define JULY          7
#define AUGUST        8
#define SEPTMBER      9
#define OCTOBER      10
#define NOVEMBER     11
#define DECEMBER     12


int main()
{
    unsigned int Month_Number;


    while(1)
    {
        printf("Enter the MONTHE NUMBER form[1 to 12] and [0] to exit  \n");
        scanf("%d",&Month_Number);

        if ((Month_Number == JANUARY)|| (Month_Number == MARCH) ||(Month_Number == MAY) ||
            (Month_Number == JULY) || (Month_Number == AUGUST) ||(Month_Number == OCTOBER) ||
            (Month_Number == DECEMBER) )
        {
            printf("IT'S 31 days \n");
        }
        else if (Month_Number == FEBRUARY)
        {
            printf("IT'S 28\\29 day \n");
        }
        else if ((Month_Number == APRIL)|| (Month_Number == JUNE) ||(Month_Number == SEPTMBER) ||
                 (Month_Number == NOVEMBER))

        {
            printf("IT'S 30 days\n");
        }
        else if (Month_Number == EXIT)
        {
            printf("FINISHED");
            break;
        }
        else
        {
            printf("INVALID INPUT <>\n");
        }


    }


    return 0;
}

