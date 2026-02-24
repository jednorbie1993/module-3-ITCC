#include <stdio.h>

int main() {
    char buffer[100];
    int ctr;

    printf("Enter a line of text: ");
    fgets(buffer, sizeof(buffer), stdin);

    for (ctr = 0; buffer[ctr] != '\0'; ctr++) {

        if (buffer[ctr] == 'a' ||
            buffer[ctr] == 'e' ||
            buffer[ctr] == 'i' ||
            buffer[ctr] == 'o' ||
            buffer[ctr] == 'u') {
            continue;   // skip vowels
        }

        putchar(buffer[ctr]);  // print if not vowel
    }

    return 0;
}