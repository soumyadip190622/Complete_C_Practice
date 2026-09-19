/*Write a Program to find factorial of a number using recursion
function. [5! = 120]*/
#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d is: %d\n", n, factorial(n));
    return 0;
}