#include <stdio.h>

int main()
{
   char character ;


   printf("Enter the Number \n");
   scanf("%c",&character);

   if ((character <='z' && character >='a') || (character <='Z' && character >='A'))
   {
       printf("the character is alphabet \n");
   }
   else
   {
       printf("the character is not alphabet \n");
   }

    return 0;
}
