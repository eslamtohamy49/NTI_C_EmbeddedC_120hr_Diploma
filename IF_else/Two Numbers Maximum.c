#include <stdio.h>

int main()
{
   int Number_One ;
   int Number_Two ;

   printf("Enter two Numbers \n");
   scanf("%d",&Number_One);
   scanf("%d",&Number_Two);

   if (Number_One > Number_Two)
   {
       printf("The Number One is the Maximum Number \n");
   }
   else
   {
       printf("The Number Two is the Maximum Number \n");
   }

    return 0;
}
