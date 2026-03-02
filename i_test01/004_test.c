#include <stdio.h>

int var = 100; // global variable

void printGlobalVar() {
    printf("Q13: Print global variable inside a function: %d\n", var);
}

int main() {
    printf("Q13: Demonstrate accessing a global variable from another function.\n");
    printGlobalVar();
    printf("No need to pass var because it's global.\n");
    return 0;
}