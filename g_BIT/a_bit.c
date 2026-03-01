#include <stdio.h>

int main() {

    unsigned char x = 255; // starting value
    unsigned char y;
    int count;

    printf("LEFT SHIFT\n");

    // loop from 1 to 7
    for(count = 1; count < 8; count++) {

        y = x << count;   // shift bits to LEFT
        printf("%d << %d = %d\n", x, count, y);
    }

    printf("\nRIGHT SHIFT\n");

    for(count = 1; count < 8; count++) {

        y = x >> count;   // shift bits to RIGHT
        printf("%d >> %d = %d\n", x, count, y);
    }

    return 0;
}