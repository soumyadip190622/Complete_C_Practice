/*Write a Program to print the even and odd positions elements in
a 1D array separately and also show their counts.*/
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int even_count = 0, odd_count = 0;
    int even_elements[100], odd_elements[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Separate even and odd positioned elements
    for (i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0) {
            even_elements[even_count] = arr[i];
            even_count++;
        } else {
            odd_elements[odd_count] = arr[i];
            odd_count++;
        }
    }

    // Print even positioned elements and their count
    printf("Even positioned elements: ");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even_elements[i]);
    }
    printf("\nCount of even positioned elements: %d\n", even_count);

    // Print odd positioned elements and their count
    printf("Odd positioned elements: ");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd_elements[i]);
    }
    printf("\nCount of odd positioned elements: %d\n", odd_count);

    return 0;
}