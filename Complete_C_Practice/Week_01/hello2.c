/* Write a Program to find the summation and difference of two
floating variables.*/
#include <stdio.h>

int main() {
    float a = 5.5, b = 3.2;
    float sum = a + b;
    float diff = a - b;

    printf("Sum: %f\n", sum);
    printf("Difference: %f\n", diff);

    return 0;
}



/*WAP to find sum , multiplication and division of two user given floating variables*/
int main() {
    float a, b;
    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &a, &b);

    float sum = a + b;
    float product = a * b;
    float quotient = a / b;

    printf("Sum: %f\n", sum);
    printf("Product: %f\n", product);
    printf("Quotient: %f\n", quotient);

    return 0;
}