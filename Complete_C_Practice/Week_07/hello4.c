/*Write a Program to find GCD (Greatest Common Divisor) and
LCM (Least Common Multiple) of two numbers using user
defined recursion function.*/
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("GCD of %d and %d is: %d\n", x, y, gcd(x, y));
    printf("LCM of %d and %d is: %d\n", x, y, lcm(x, y));
    return 0;
}