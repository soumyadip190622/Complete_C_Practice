/*ABCDE
CDEFG
EFG
GH
I*/

#include <stdio.h>

int main() {
    int N, i, j;
    char ch;

    printf("Enter number of lines: ");
    scanf("%d", &N);

    ch = 'A';

    for (i = 1; i <= N; i++) {

        for (j = 1; j <= N - i + 1; j++) {
            printf("%c", ch + j - 1);
        }

        printf("\n");
        ch = ch + 2;
    }

    return 0;
}