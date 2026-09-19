/*Write a Program to add and multiply two numbers using
pointers.*/
#include <stdio.h>

void add(int *a, int *b, int *result) {
    *result = *a + *b;
}

void multiply(int *a, int *b, int *result) {
    *result = *a * *b;
}

int main() {
    int x = 10, y = 20;
    int sum, product;

    add(&x, &y, &sum);
    multiply(&x, &y, &product);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
