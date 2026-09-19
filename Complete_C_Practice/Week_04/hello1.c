/*Print the following pattern up to N Lines:
****
****
****/
#include <stdio.h>

int main() {
    int N, i, j;

    printf("Enter the number of lines: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= 4; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}