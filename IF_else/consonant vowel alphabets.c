#include <stdio.h>

int main()
{
   char character ;


   printf("Enter the Number \n");
   scanf("%c",&character);

   if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u' ||
       character=='A' || character=='E' || character=='I' || character=='O' || character=='U'   )
   {
        printf("the character is vowel \n");
   }
   else if ((character <='z' && character >='a') || (character <='Z' && character >='A'))
   {
      printf("the character is consonant  \n");
   }
   else
   {
      printf("the character is not alphabet \n");
   }

    return 0;
}
