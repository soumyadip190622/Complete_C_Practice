/*Write a Program to read a text file containing subject and marks
of a student and calculate his average marks.*/
#include <stdio.h>

int main() {
    FILE *file = fopen("student_marks.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char subject[100];
    int marks;
    int total = 0;
    int count = 0;

    while (fscanf(file, "%s %d", subject, &marks) == 2) {
        total += marks;
        count++;
    }

    if (count > 0) {
        double average = (double)total / count;
        printf("Average marks: %.2f\n", average);
    } else {
        printf("No data found.\n");
    }

    fclose(file);
    return 0;
}
