/*Write a Program to find the last digit of a number and print the
new number deleting the last digit.*/
#include <stdio.h>

int main() {
    int number, lastDigit, newNumber;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    lastDigit = number % 10;
    newNumber = number / 10;
    
    printf("Last digit: %d\n", lastDigit);
    printf("New number: %d\n", newNumber);
    
    return 0;
}