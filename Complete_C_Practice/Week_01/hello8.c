/*Read two numbers. Write a Program to find their product after
exchanging last digits.*/
#include <stdio.h>

int main() {
    int num1, num2, lastDigit1, lastDigit2, newNum1, newNum2, product;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    lastDigit1 = num1 % 10;
    lastDigit2 = num2 % 10;
    newNum1 = num1 / 10 * 10 + lastDigit2;
    newNum2 = num2 / 10 * 10 + lastDigit1;

    product = newNum1 * newNum2;

    printf("Product after exchanging last digits: %d\n", product);

    return 0;
}