//Double precision (double) gives you 52 bits of significand, 11 bits of exponent, and 1 sign bit.
//But it takes double space in the memory
#include <stdio.h>

int main()
{
    double num1 = 16.6666;
    printf("double type is - %f \n", num1);
    
    return 0;
}