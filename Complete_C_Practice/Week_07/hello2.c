/*Write a Program to find x^y using user defined function.*/
#include <stdio.h>

int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, y;
    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (y): ");
    scanf("%d", &y);
    printf("%d^%d = %d\n", x, y, power(x, y));
    return 0;
}