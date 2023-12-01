#include <stdio.h>

unsigned int rotateRight(unsigned int num, int rotations);
unsigned int rotateLeft (unsigned int num, int rotations);

int main()
{

    unsigned int num, resultRight, resultLeft;
    int rotations;


    // Input the decimal number and the number of rotations
    printf("Enter a decimal number: ");
    scanf("%u", &num);

    printf("Enter the number of rotations: ");
    scanf("%d", &rotations);


    // Perform the rotations and display the results
    resultRight = rotateRight(num, rotations);
    resultLeft  = rotateLeft (num, rotations);


    printf("Result after right rotating %u by %d bits: %u\n", num, rotations, resultRight);
    printf("Result after left  rotating %u by %d bits: %u\n", num, rotations, resultLeft );



    return 0;
}


unsigned int rotateRight(unsigned int num, int rotations)
{

    // Get the number of bits in an integer
    int numBits = sizeof(unsigned int) * 8;


    // Perform the right rotation
    return (num >> rotations) | (num << (numBits - rotations));

}


unsigned int rotateLeft(unsigned int num, int rotations)
{

    // Get the number of bits in an integer
    int numBits = sizeof(unsigned int) * 8;


    // Perform the left rotation
    return (num << rotations) | (num >> (numBits - rotations));

}

