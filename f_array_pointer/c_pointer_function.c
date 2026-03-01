#include <stdio.h>

// normal function
int add(int a, int b) {
    return a + b;
}

int main() {

    // pointer to function
    int (*funcPtr)(int, int);

    // ituro pointer sa function
    funcPtr = add;

    // tawagin gamit pointer
    int result = funcPtr(5, 3);

    printf("Answer: %d", result);

    return 0;
}