#include <stdio.h>

int main() {

    int ch;
    int line = 1;

    printf("%d ", line);

    while((ch = getchar()) != EOF) {

        putchar(ch);

        if(ch == '\n') {
            line++;
            printf("%d ", line);
        }
    }

    return 0;
}