#include <stdio.h>

int main() {

    unsigned char a = 240;   // 11110000
    unsigned char b = 85;    // 01010101

    unsigned char result = a | b;

    printf("OR Result = %d\n", result);

    return 0;
}
// or equal to |