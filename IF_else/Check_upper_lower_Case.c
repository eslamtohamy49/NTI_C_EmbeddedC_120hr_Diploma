/**
 * C program to check alphabet, digit or special character
 */

#include <stdio.h>

int main()
{
    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    /* Alphabet check */
    if((ch >= 'a' && ch <= 'z') )
    {
        printf("'%c' is lowercase.", ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase.", ch);
    }
    else
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}