#include <stdio.h>

int main() {
    int x = 12;
    int *ptr = &x;

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    return 0;
}