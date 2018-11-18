#include <stdio.h>

int num1 = 100;
int num2 = 166;

int main()
{
    int sum_num = num1 + num2;
    int extract_num = num1 - num2;
    int multiply = num1 * num2;
    float divide = num1 / num2;
    int rem = num2 % num1;
    
    printf("sum is - %i \n", sum_num);
    printf("extraction is - %i \n", extract_num);
    printf("multiply is - %i \n", multiply);
    printf("division is - %i \n", divide);
    printf("remainder is - %i \n", rem);
    
    return 0;
}