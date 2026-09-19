/*10001
01010
00100
01010
10001*/

#include <stdio.h>

int main() {
    int N, i, j;

    printf("Enter number of lines: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++) {

            if (j == i || j == N - i + 1)
                printf("1");
            else
                printf("0");
        }

        printf("\n");
    }

    return 0;
}