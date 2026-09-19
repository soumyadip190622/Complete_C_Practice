/*Write a program to print the following pattern up to N lines:
    *******
     *****
      ***
       * */
#include <stdio.h>

int main() {
    int N, i, j, space;

    printf("Enter number of lines: ");
    scanf("%d", &N);

    for (i = N; i >= 1; i--) {

        // Print spaces
        for (space = 1; space <= N - i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}