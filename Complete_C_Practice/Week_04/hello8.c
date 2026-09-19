/*A
AC
ACE
ACEG
ACEGI*/

#include <stdio.h>

int main() {
    int N, i, j;

    printf("Enter number of lines: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {

        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + 2 * (j - 1));
        }

        printf("\n");
    }

    return 0;
}