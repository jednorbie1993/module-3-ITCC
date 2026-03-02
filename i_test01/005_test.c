#include <stdio.h>

void printLocalVar(int var) {
    printf("Q14: Print local variable inside a function: %d\n", var);
}

int main() {
    int var = 50; // local variable
    printf("Q14: Demonstrate passing a local variable to a function.\n");
    printLocalVar(var);
    printf("Need to pass var because it's local.\n");
    return 0;
}