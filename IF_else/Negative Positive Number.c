#include <stdio.h>

int main()
{
   int Number;


   printf("Enter the Number \n");
   scanf("%d",&Number);

   if (Number == 0)
   {
       printf("The Number is Equal to zero  \n");
   }
   else if (Number < 0)
   {
       printf("The Number is Negative   \n");
   }
   else
   {
       printf("The Number is Positive  \n");
   }

    return 0;
}