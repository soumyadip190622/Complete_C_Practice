/*Write a Program to accept your name and print, “Welcome,
<your name>”.*/
#include <stdio.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Welcome, %s!\n", name);
    return 0;
}