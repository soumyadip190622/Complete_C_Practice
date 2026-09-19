/*Write a Program to input a word and check if it is palindrome or
not. [malayalam <-> malayalam]*/
#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int i, len, palindrome = 1;

    printf("Enter a word: ");
    scanf("%s", word);

    len = strlen(word);

    for (i = 0; i < len / 2; i++) {
        if (word[i] != word[len - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("%s is a palindrome.\n", word);
    else
        printf("%s is not a palindrome.\n", word);

    return 0;
}