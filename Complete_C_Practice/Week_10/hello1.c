/*Write a Program to print the address of an integer variable.*/
#include <stdio.h>

int main() {
    int var;
    printf("Address of variable var: %p\n", (void*)&var);
    return 0;
}