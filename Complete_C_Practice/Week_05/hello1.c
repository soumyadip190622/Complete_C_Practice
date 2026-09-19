/*Write a Program to declare, read and display values in 1-D array
of size n.*/

#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // Assuming maximum size of 100

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}