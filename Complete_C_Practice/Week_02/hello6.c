/*Write a Program using switch-case that allows the user to enter
two operands and select a mathematical operation from a
menu. The program should perform the selected operation and
display the result. The menu includes: Addition, Subtraction,
Multiplication, Division, Modulus, Exponent.*/
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double a, b, result;

    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);

    printf("\n----- MENU -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Exponent\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a + b;
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            result = a - b;
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            if (b != 0)
                result = a / b;
            else {
                printf("Error: Division by zero is not allowed.\n");
                return 0;
            }
            printf("Result = %.2lf\n", result);
            break;

        case 5:
            if ((int)b != 0)
                printf("Result = %d\n", (int)a % (int)b);
            else
                printf("Error: Modulus by zero is not allowed.\n");
            break;

        case 6:
            result = pow(a, b);
            printf("Result = %.2lf\n", result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}