/*Write a Program to reverse the digits of an integer.*/
#include <stdio.h>

int main() {
    int number, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle negative numbers
    if (number < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (number != 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}