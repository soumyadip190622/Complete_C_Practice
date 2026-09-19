/*Write a Program to check if a user given number is Disarium
number or not. [135. (1^1 + 3^2 + 5^3) = 135.]*/
#include <stdio.h>
#include <math.h>

int isDisarium(int num) {
    int original = num, sum = 0, digits = 0;
    int temp = num;
    
    // Count the number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    // Calculate the sum of each digit raised to the power of its position
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        digits--;
        temp /= 10;
    }
    
    return original == sum;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isDisarium(number)) {
        printf("%d is a Disarium number.\n", number);
    } else {
        printf("%d is not a Disarium number.\n", number);
    }

    return 0;
}