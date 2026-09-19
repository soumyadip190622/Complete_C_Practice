/*Write a Program to delete the last two digits of any user given
input number and print the new number.*/
#include <stdio.h>

int main() {
    int number, newNumber;

    printf("Enter a number: ");
    scanf("%d", &number);

    newNumber = number / 100;

    printf("New number: %d\n", newNumber);

    return 0;
}