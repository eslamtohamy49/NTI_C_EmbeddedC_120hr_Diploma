#include <stdio.h>

int main()
{
   int Number;


   printf("Enter the Number \n");
   scanf("%d",&Number);

   if ((Number % 5 == 0) && (Number % 11 == 0))
   {
       printf("The is divisible by 5 and 11 \n");
   }
   else
   {
       printf("The Number is not divisible by 5 and 11 \n");
   }

    return 0;
}
