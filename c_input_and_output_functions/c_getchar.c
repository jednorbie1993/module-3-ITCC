#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    ch = getchar();   // read one character

    printf("You entered: %c\n", ch);

    return 0;
}