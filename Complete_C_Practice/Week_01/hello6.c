/*Write a Program to double the last digit of any user given input
number and also print the new number.*/
#include <stdio.h>

int main() {
    int number, lastDigit, newNumber;

    printf("Enter a number: ");
    scanf("%d", &number);

    lastDigit = number % 10;
    newNumber = number / 10 * 10 + lastDigit * 2;

    printf("New number: %d\n", newNumber);

    return 0;
}