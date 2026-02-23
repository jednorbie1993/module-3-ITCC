#include <stdio.h>

void func1(void);

int main() {
    int count;

    for (count = 0; count < 10; count++) {
        printf("At iteration %d: ", count);
        func1();
    }

    return 0;
}

void func1(void) {
    static int x;   // Automatically initialized to 0
    int y;          // Not initialized (garbage value)

    printf("x = %d, y = %d\n", x++, y++);
}