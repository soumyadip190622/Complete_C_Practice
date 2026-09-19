/*Write a Program to change temperature from Fahrenheit to
Celsius or vice-versa as per user choice.*/
#include <stdio.h>

int main() {
    float temperature, result;
    int choice;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    printf("Enter 1 to convert from Fahrenheit to Celsius\n");
    printf("Enter 2 to convert from Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        result = (temperature - 32) * 5/9;
        printf("Temperature in Celsius: %.2f\n", result);
    } else if (choice == 2) {
        result = (temperature * 9/5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", result);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}