#include <stdio.h>

int main() {

    float x = 25.5;
    float *px = &x;
    float **ppx = &px;

    printf("Value of x: %f\n", x);
    printf("Using pointer px: %f\n", *px);
    printf("Using pointer to pointer ppx: %f\n", **ppx);

    return 0;
}
/*1. Write code that declares a type float variable, declares and initializes a pointer to
the variable, and declares and initializes a pointer to the pointer.*/