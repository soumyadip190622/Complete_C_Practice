/*Write a Program to print the sum and product of digits of a user
given input number.*/
#include <stdio.h>

int main() {
    int number, sum = 0, product = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle negative numbers
    if (number < 0) {
        number = -number;
    }

    // Handle the case when the number is 0
    if (number == 0) {
        sum = 0;
        product = 0;
    } else {
        while (number != 0) {
            digit = number % 10;
            sum += digit;
            product *= digit;
            number /= 10;
        }
    }

    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);

    return 0;
}