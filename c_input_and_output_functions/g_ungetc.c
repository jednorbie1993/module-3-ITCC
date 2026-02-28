#include <stdio.h>
#include <ctype.h>

int main() {
    int ch;

    printf("Enter digits followed by a letter:\n");

    while (isdigit(ch = getchar())) {
        putchar(ch);   // print digit
    }

    /* ibalik ang unang non-digit */
    ungetc(ch, stdin);

    printf("\nFirst non-digit returned: %c\n", getchar());

    return 0;
}