#include <stdio.h>

int main()
{
   int Year;


   printf("Enter the Number \n");
   scanf("%d",&Year);

   if (((Year % 4 == 0)&& (Year % 100 !=0 ) ) || (Year % 400 == 0 ))
   {
       printf("Leap Year \n");
   }
   else
   {
       printf("Common Year \n");
   }

    return 0;
}
