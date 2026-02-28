#include <stdio.h>

int main() {
    int ch;

    printf("Enter text: ");

    while ((ch = getc(stdin)) != '\n') {
        putchar(ch);
    }

    return 0;
}