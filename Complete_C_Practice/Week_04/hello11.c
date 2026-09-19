/*    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1*/

#include <stdio.h>

int main() {
    int N, i, j, space;
    int num;

    printf("Enter number of lines: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++) {

        // Print spaces
        for (space = 0; space < N - i - 1; space++) {
            printf(" ");
        }

        num = 1;

        for (j = 0; j <= i; j++) {
            printf("%d ", num);

            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}