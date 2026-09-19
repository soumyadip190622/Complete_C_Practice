/*Write a Program to read and display values in a 2-D array of size
m x n using pointers.*/
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int arr[m][n];
    int *ptr = &arr[0][0];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", (ptr + i * n + j));
        }
    }

    printf("The elements of the array are:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(ptr + i * n + j));
        }
        printf("\n");
    }

    return 0;
}
