/*Write a Program to count the frequency of each element of a
user defined array of size n.*/
#include <stdio.h>

int main() {
    int n, i, j;
    int arr[100], frequency[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        frequency[i] = 0;
    }

    // Count the frequency of each element
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                frequency[i]++;
            }
        }
    }

    // Print the frequency of each element
    printf("Element\tFrequency\n");
    for (i = 0; i < n; i++) {
        if (frequency[i] != 0) {
            printf("%d\t%d\n", arr[i], frequency[i]);
        }
    }

    return 0;
}