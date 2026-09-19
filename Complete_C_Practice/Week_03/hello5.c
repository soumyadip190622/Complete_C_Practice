/*Write a Program to check if a user given number is
Krishnamurthy number or not. (4! + 0! + 5! + 8! + 5!) = 40585*/
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int isKrishnamurthy(int num) {
    int original = num, sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return original == sum;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isKrishnamurthy(number)) {
        printf("%d is a Krishnamurthy number.\n", number);
    } else {
        printf("%d is not a Krishnamurthy number.\n", number);
    }

    return 0;
}