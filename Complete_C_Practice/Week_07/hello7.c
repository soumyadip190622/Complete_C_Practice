/*Write a Program to check whether any input number is
Munchausen number or not using all user defined functions.
[3435. 3^3 + 4^4 + 3^3 + 5^5 = 27 + 256 + 27 + 3125 = 3435.]*/
#include <stdio.h>
#include <math.h>

int isMunchausen(int num) {
    int original = num;
    int sum = 0;
    int digit;

    while (num > 0) {
        digit = num % 10;
        if (digit == 0) {
            sum += 0;
        } else {
            sum += pow(digit, digit);
        }
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

    if (isMunchausen(n))
        printf("%d is a Munchausen number.\n", n);
    else
        printf("%d is not a Munchausen number.\n", n);

    return 0;
}