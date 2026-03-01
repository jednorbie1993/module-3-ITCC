#include <stdio.h>

int main() {
    int x = 12;
    int *ptr = &x;
    int **pptr = &ptr;

    printf("Value of x = %d\n", **pptr);

    return 0;
}