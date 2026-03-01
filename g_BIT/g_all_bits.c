#include <stdio.h>

int main() {

    unsigned char x = 12; // 00001100

    printf("Original = %d\n", x);

    printf("AND  = %d\n", x & 10);
    printf("OR   = %d\n", x | 10);
    printf("XOR  = %d\n", x ^ 10);
    printf("NOT  = %d\n", ~x);

    return 0;
}