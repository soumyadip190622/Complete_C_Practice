/*Write a Program to copy the content of one file to another.*/
#include <stdio.h>

int main() {
    FILE *source = fopen("source.txt", "r");
    FILE *destination = fopen("destination.txt", "w");

    if (source == NULL || destination == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);
    return 0;
}
