/*Write a Program to check whether any input number is
Armstrong number or not using all user defined functions.
[153. (1^3 + 5^3 + 3^3) = 153.]*/
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digit;

    while (num > 0) {
        digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }

    if (sum == original)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}