/*Write a Program to copy the elements of one array into another
array.*/
#include <stdio.h>

int main() {
    int n, i;
    int arr1[100], arr2[100]; // Assuming maximum size of 100

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Copy elements from arr1 to arr2
    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("The elements of the second array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}