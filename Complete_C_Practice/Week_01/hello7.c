/*Write a Program to exchange the last two digits of any user
given input number.*/
#include <stdio.h>

int main() {
    int number, lastTwoDigits, newNumber;

    printf("Enter a number: ");
    scanf("%d", &number);

    lastTwoDigits = number % 100;
    newNumber = number / 100 * 100 + (lastTwoDigits / 10) + (lastTwoDigits % 10) * 10;

    printf("New number: %d\n", newNumber);

    return 0;
}