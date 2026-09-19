/*    1
   121
  12321
 1234321*/

 #include <stdio.h>

int main() {
    int N, i, j, space;

    printf("Enter number of lines: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {

        // Print spaces
        for (space = 1; space <= N - i; space++) {
            printf(" ");
        }

        // Increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Decreasing numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}