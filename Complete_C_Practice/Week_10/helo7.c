/*Write a Program to define a function that takes an integer n as
input and dynamically allocates an integer array of size N. The
function should return a pointer to the allocated array. Also,
find the largest and smallest elements of the array.*/
#include <stdio.h>
#include <stdlib.h>

int* createArray(int n) {
    int *arr = (int*)malloc(n * sizeof(int));
    return arr;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *ptr = createArray(n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    int largest = *ptr;
    int smallest = *ptr;

    for (int i = 0; i < n; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
        if (*(ptr + i) < smallest) {
            smallest = *(ptr + i);
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    free(ptr);
    return 0;
}
