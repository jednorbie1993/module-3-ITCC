#include <stdio.h>

int main() {

    int ch;

    printf("Type text then press ENTER:\n");

    while((ch = getchar()) != '\n')
        putchar(ch);

    return 0;
}