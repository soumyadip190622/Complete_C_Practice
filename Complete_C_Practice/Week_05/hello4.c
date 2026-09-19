/*Write a Program to find out the largest & smallest element in a
user defined array of size n.*/
#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // Assuming maximum size of 100
    int largest, smallest;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and smallest with the first element
    largest = arr[0];
    smallest = arr[0];

    // Find the largest and smallest elements
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);
    printf("The smallest element in the array is: %d\n", smallest);

    return 0;
}