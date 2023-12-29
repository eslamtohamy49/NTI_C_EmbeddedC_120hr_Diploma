#include <stdio.h>

int main()
{
   int Number;


   printf("Enter the Number \n");
   scanf("%d",&Number);

   if ((Number % 2 == 0) )
   {
       printf("The Number is Even \n");
   }
   else
   {
       printf("The Number is Odd  \n");
   }

    return 0;
}
