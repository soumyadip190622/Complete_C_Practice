/*A
BB
CCC
DDDD */

#include <stdio.h>

int main() {
    int N, i, j;
    char ch = 'A';

    printf("Enter number of lines: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
        }

        printf("\n");
        ch++;
    }

    return 0;
}