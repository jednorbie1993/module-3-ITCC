#include <stdio.h>

int main() {

    float x = 25.5;
    float *px = &x;
    float **ppx = &px;

    **ppx = 100;

    printf("New value of x: %f\n", x);

    return 0;
}
/*
2. Continuing with the example in question one, say that you want to use the pointer
to pointer to assign the value 100 to the variable x. What, if anything, is wrong with
the following assignment statement?

*ppx = 100;
*/