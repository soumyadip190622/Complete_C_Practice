/*Write a Program to swap two numbers using and without using
a third variable.*/
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping using a third variable
    int temp = a;
    a = b;
    b = temp;

    printf("After swapping: %d %d\n", a, b);

    // Swapping without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping again: %d %d\n", a, b);

    return 0;
}