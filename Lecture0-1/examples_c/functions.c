#include <stdio.h>

int doubleUp(num) {
    return num * 2;
}

int main(void) {
    int result = doubleUp(2);
    printf("result is %i", result);
}