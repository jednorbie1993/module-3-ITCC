#include <stdio.h>

int main() {

    printf("Section 1 - Definitions\n\n");

    printf("1. Most memory-efficient way to store day of week (1-7):\n");
    printf("Answer: Use a 3-bit bit-field since 3 bits can store values from 0 to 7.\n\n");

    printf("2. Smallest memory to store current date (month/day/year offset from 1900):\n");
    printf("Answer: Month (4 bits), Day (5 bits), Year offset (7 bits). Total = 16 bits (2 bytes).\n\n");

    printf("5. Difference between (01010101 ^ 11111111) and (~01010101):\n");
    printf("Answer: XOR with 11111111 flips all bits. The ~ operator also flips all bits.\n");
    printf("Both produce the same result, but ~ is the direct bitwise NOT operator.\n\n");

    printf("6. Is the structure allowed?\n");
    printf("Answer: Yes, it is allowed. Bit-fields can be used inside structures.\n\n");

    return 0;
}