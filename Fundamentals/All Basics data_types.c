#include <stdio.h>
#include <stdlib.h>


int main()
{
    char                  char_val                ;
    short                 short_val               ;
    int                   int_val                 ;
    long                  long_val                ;
    long long             long_long_val           ;
    unsigned char         unsigned_char_val       ;
    unsigned short        unsigned_short_val      ;
    unsigned int          unsigned_int_val        ;
    unsigned long         unsigned_long_val       ;
    unsigned long long    unsigned_long_long_val  ;

    float                 float_val               ;
    double                double_val              ;
    long double           long_double_val         ;


    printf("Enter a Character \n");
    char_val = getchar();
    getchar();

    printf("Enter another Character \n");
    unsigned_char_val = getchar();
    getchar();

    printf("Enter a signed short value \n");
    scanf("%hi",&short_val);

    printf("Enter an unsigned short value \n");
    scanf("%hu",&unsigned_short_val);

    printf("Enter a signed integer value \n");
    scanf("%d",&int_val);

    printf("Enter an unsigned integer value \n");
    scanf("%lu",&unsigned_int_val);

    printf("Enter a signed long value \n");
    scanf("%ld",&long_val);

    printf("Enter an unsigned long value \n");
    scanf("%lu",&unsigned_long_val);

    printf("Enter a signed long long value \n");
    scanf("%lld",long_long_val);

    printf("Enter an unsigned long long value \n");
    scanf("%llu",&unsigned_long_long_val);

    printf("Enter a float value \n");
    scanf("%f",&float_val);

    printf("Enter a double value \n");
    scanf("%lf",&double_val);

    printf("Enter a long double value \n");
    scanf("%Lf",&long_double_val);


    printf(" Entered Value character         : %c \n", char_val);
    printf(" Entered Value unsigned character: %c \n", unsigned_char_val);

    printf(" Entered Value signed short  : %hi \n", short_val);
    printf(" Entered Value unsigned short: %hu \n", unsigned_short_val);

    printf(" Entered Value signed int  : %d  \n", int_val);
    printf(" Entered Value unsigned int: %lu \n", unsigned_int_val);

    printf(" Entered Value signed long  : %ld \n", long_val);
    printf(" Entered Value unsigned long: %lu \n", unsigned_long_val);

    printf(" Entered Value signed long long  : %lld \n", long_long_val);
    printf(" Entered Value unsigned long long: %llu \n", unsigned_long_long_val);

    printf(" Entered Value float      : %f  \n", float_val);
    printf(" Entered Value double     : %lf \n", double_val);
    printf(" Entered Value long double: %Lf \n", long_double_val);

    
    return 0;
}
