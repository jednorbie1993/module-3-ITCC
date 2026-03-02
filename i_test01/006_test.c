#include <stdio.h>

int var = 100; // global variable

int main() {
    int var = 50; // local variable shadows global
    printf("Q15: Local variable (shadows global) = %d\n", var);
    printf("Q15: Global variable = %d\n", 100); // C cannot directly access global if shadowed
    return 0;
}