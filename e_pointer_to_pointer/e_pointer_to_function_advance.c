#include <stdio.h>

void hello() {
    printf("Hello\n");
}

int main() {

    void (*funcPtr)() = hello;
    funcPtr();

    return 0;
}