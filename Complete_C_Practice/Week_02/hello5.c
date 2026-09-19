/*Write a Program to accept the marks of a student and display
the grade accordingly. [100-90: O, 89-80: E, 79-70: A, 69-60: B,
59-50: C, 49-40: D, Rest: F]*/
#include <stdio.h>

int main() {
    float marks;
    char grade;

    printf("Enter the marks of the student: ");
    scanf("%f", &marks);

    if (marks >= 90 && marks <= 100) {
        grade = 'O';
    } else if (marks >= 80 && marks <= 89) {
        grade = 'E';
    } else if (marks >= 70 && marks <= 79) {
        grade = 'A';
    } else if (marks >= 60 && marks <= 69) {
        grade = 'B';
    } else if (marks >= 50 && marks <= 59) {
        grade = 'C';
    } else if (marks >= 40 && marks <= 49) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("The grade of the student is: %c", grade);

    return 0;
}