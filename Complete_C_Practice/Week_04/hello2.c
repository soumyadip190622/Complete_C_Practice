/*Print the following pattern up to N Lines:
   *
  **
 ***
****/
#include <stdio.h>

int main() {
    int N, i, j, space;

    printf("Enter the number of lines: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {

        // Print spaces
        for (space = 1; space <= N - i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}