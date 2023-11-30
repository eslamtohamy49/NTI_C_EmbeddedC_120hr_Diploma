#include <stdio.h>


int main() 
{
    
    
    float principal, time, rate, simpleInterest;

    // Get input from the user
    printf("Enter the principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter the time in years (T): ");
    scanf("%f", &time);

    printf("Enter the rate of interest per annum (R): ");
    scanf("%f", &rate);

    // Calculate simple interest
    simpleInterest = (principal * time * rate) / 100;

    // Display the result
    printf("Simple Interest = %.2f\n", simpleInterest);

    
    
    return 0;
}
