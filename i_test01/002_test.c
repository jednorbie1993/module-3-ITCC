#include <stdio.h>

void staticCounter() {
    static int count = 0; // Q9
    count++;
    printf("Q9: Static local variable count remembered between calls: %d\n", count);
}

int main() {
    printf("Q9: Demonstrate a local variable remembering its value between calls.\n");
    staticCounter();
    staticCounter(); // value is remembered
    staticCounter();
    return 0;
}