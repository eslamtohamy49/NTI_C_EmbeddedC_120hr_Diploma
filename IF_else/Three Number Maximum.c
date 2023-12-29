#include <stdio.h>

int main()
{
   int Number_One ;
   int Number_Two ;
   int Number_Three;

   printf("Enter Three Numbers \n");
   scanf("%d",&Number_One);
   scanf("%d",&Number_Two);
   scanf("%d",&Number_Three);

   if (Number_One > Number_Two && Number_One >Number_Three)
   {
       printf("The Number One %d is the Maximum Number \n",Number_One);
   }
   else if (Number_Two >Number_One && Number_Two > Number_Three)
   {
       printf("The Number Two %d is the Maximum Number \n",Number_Two);
   }
   else
   {
       printf("The Number Three %d is the Maximum Number \n",Number_Three);
   }

    return 0;
}
