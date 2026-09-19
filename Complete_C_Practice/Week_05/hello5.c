/*Write a Program to reverse the elements of a user defined array
of size n. [Do not print the array in reverse order]*/
#include <stdio.h>

int main() {
    int n, i, temp;
    int arr[100]; // Assuming maximum size of 100

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the elements of the array
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("The elements of the array after reversing are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}