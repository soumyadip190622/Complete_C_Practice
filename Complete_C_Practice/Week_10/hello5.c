/*Write a Program to find the factorial of a given number using
function and pointers.*/
#include <stdio.h>

int factorial(int *n) {
    if (*n == 0) {
        return 1;
    } else {
        return *n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(&num));
    return 0;
}
