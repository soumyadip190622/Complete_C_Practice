/*Write a Program to perform menu-driven operations of a
Volume Calculator. Accept dimensions from user, calculate the
volume and display the result. The menu of shapes includes
Sphere, Cylinder, Cone, Cuboid. The program should run in a
loop until the user chooses to exit.*/
#include <stdio.h>

#define PI 3.14159

double sphereVolume(double radius) {
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

double cylinderVolume(double radius, double height) {
    return PI * radius * radius * height;
}

double coneVolume(double radius, double height) {
    return (1.0 / 3.0) * PI * radius * radius * height;
}

double cuboidVolume(double length, double width, double height) {
    return length * width * height;
}

int main() {
    int choice;
    double radius, height, length, width;

    do {
        printf("\n===== VOLUME CALCULATOR =====\n");
        printf("1. Sphere\n");
        printf("2. Cylinder\n");
        printf("3. Cone\n");
        printf("4. Cuboid\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter radius: ");
                scanf("%lf", &radius);

                printf("Volume of Sphere = %.2lf\n",
                       sphereVolume(radius));
                break;

            case 2:
                printf("Enter radius and height: ");
                scanf("%lf %lf", &radius, &height);

                printf("Volume of Cylinder = %.2lf\n",
                       cylinderVolume(radius, height));
                break;

            case 3:
                printf("Enter radius and height: ");
                scanf("%lf %lf", &radius, &height);

                printf("Volume of Cone = %.2lf\n",
                       coneVolume(radius, height));
                break;

            case 4:
                printf("Enter length, width and height: ");
                scanf("%lf %lf %lf", &length, &width, &height);

                printf("Volume of Cuboid = %.2lf\n",
                       cuboidVolume(length, width, height));
                break;

            case 5:
                printf("Exiting the program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}