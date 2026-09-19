/*Write a Program to encode a word in Pig Latin. Check the first
vowel, cut the letters before them & paste it at the end of the
word with ‘ay’. [“trouble” -> “oubletray”. “paris” -> “arispay”.]*/
#include <stdio.h>
#include <string.h>

int main() {
    char word[100], result[100];
    int i, j = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    // Find the first vowel
    for (i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'a' || word[i] == 'e' ||
            word[i] == 'i' || word[i] == 'o' ||
            word[i] == 'u') {
            break;
        }
    }

    // Copy letters from first vowel to the end
    for (j = 0; word[i] != '\0'; i++, j++) {
        result[j] = word[i];
    }

    // Add letters before the first vowel
    for (i = 0; word[i] != '\0' && 
         !(word[i] == 'a' || word[i] == 'e' ||
           word[i] == 'i' || word[i] == 'o' ||
           word[i] == 'u'); i++) {
        result[j++] = word[i];
    }

    // Add "ay"
    result[j++] = 'a';
    result[j++] = 'y';
    result[j] = '\0';

    printf("Pig Latin: %s\n", result);

    return 0;
}