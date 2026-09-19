/*Write a Program to write into a file.*/
#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "Hello, World!\n");
    fprintf(file, "This is a sample text.\n");

    fclose(file);
    return 0;
}
