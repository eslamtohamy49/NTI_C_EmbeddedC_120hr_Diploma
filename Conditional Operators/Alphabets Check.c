#include <stdio.h>
#include <math.h>


int main()
{
     char Character    ;


     printf("Enter Character value \n");
     scanf("%d",&Character);

            //  Number 97                      122                          65                       90                     
     (  (Character >= 'a')  &&  (Character <= 'z')  )  ||  (  (Character >= 'A')  &&  (Character <= 'Z')  ) ? 
                                    printf("Character is ALPHABET \n") : printf("Number is not ALPHABET  \n");






    return 0;
}
