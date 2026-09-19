/*Write a Program to merge two user defined arrays.*/
#include <stdio.h>

int main() {
    int n1, n2, i, j;
    int arr1[100], arr2[100], merged[200];

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of the first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of the second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the two arrays
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    printf("The merged array is:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}