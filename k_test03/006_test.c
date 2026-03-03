#include <stdio.h>

float compute(int x);
float (*funcPtr)(int);

int main() {

    funcPtr = compute;

    float result = funcPtr(5);
    printf("Result: %f\n", result);

    return 0;
}

float compute(int x) {
    return x * 2.5;
}
/*
14. Write a declaration for a pointer to a function that takes an integer as an
argument and returns a type float variable.
*/