/*Write a Program to add N natural numbers using function.*/
#include <stdio.h>

int addNaturalNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of natural numbers to add: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is: %d\n", n, addNaturalNumbers(n));
    return 0;
}