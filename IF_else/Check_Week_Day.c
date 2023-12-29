/**
 * C program to check the week day
 */

#include <stdio.h>


#define EXIT         0
#define SATURDAY     1
#define SUNDAY       2
#define MONDAY       3
#define TUESDAY      4
#define WEDNESDAY    5
#define THURSDAY     6
#define FRIDAY       7







int main()
{
    unsigned int Day_Number;


    while(1)
    {
        printf("Enter the day number form[1 to 7] and [0] to exit  \n");
        scanf("%d",&Day_Number);

        if (Day_Number == SATURDAY)
        {
            printf("IT'S SATURDAY\n");
        }
        else if (Day_Number == SUNDAY)
        {
            printf("IT'S SUNDAY\n");
        }
        else if (Day_Number == MONDAY)
        {
            printf("IT'S MONDAY\n");
        }
        else if (Day_Number == TUESDAY)
        {
            printf("IT'S TUESDAY\n");
        }
        else if (Day_Number == WEDNESDAY)
        {
            printf("IT'S WEDNESDAY\n");
        }
        else if (Day_Number == THURSDAY)
        {
            printf("IT'S THURSDAY\n");
        }
        else if (Day_Number == FRIDAY)
        {
            printf("IT'S FRIDAY");
        }
        else if (Day_Number == EXIT)
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



