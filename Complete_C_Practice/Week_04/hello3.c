/*Print the following pattern up to N Lines:
****
***
**
*/
#include <stdio.h>

int main() {
    int N, i, j;

    printf("Enter the number of lines: ");
    scanf("%d", &N);

    for (i = N; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}