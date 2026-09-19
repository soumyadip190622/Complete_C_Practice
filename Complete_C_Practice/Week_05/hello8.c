/*Write a Program to split an array from a user defined position.*/
#include <stdio.h>

int main() {
    int n, pos, i;
    int arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to split the array: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("The first part of the array is:\n");
    for (i = 0; i < pos; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("The second part of the array is:\n");
    for (i = pos; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}