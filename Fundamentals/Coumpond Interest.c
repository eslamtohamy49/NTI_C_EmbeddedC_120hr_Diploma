#include <stdio.h>
#include <math.h>


int main() 
{
    
    float principal, time, rate, compoundInterest;

    // Get input from the user
    printf("Enter the principal amount (P): ");
    scanf("%f", &principal);

    
    printf("Enter the time in years (T): ");
    scanf("%f", &time);

    
    printf("Enter the rate of interest per annum (R): ");
    scanf("%f", &rate);

    
    // Calculate compound interest
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    
    // Display the result
    printf("Compound Interest = %.2f\n", compoundInterest);

    
    
    
    return 0;
}
