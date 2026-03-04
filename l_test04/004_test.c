#include <stdio.h>

int main() {

    unsigned char num = 12;
    unsigned char result;

    printf("Question 7:\n");

    result = num & 5;
    printf("AND: %u\n", result);

    result = num | 5;
    printf("OR: %u\n", result);

    result = num ^ 5;
    printf("XOR: %u\n", result);

    result = ~num;
    printf("NOT: %u\n", result);

    return 0;
}

//Program that uses each bitwise logical operator