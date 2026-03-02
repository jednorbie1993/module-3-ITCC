#include <stdio.h>

int main() {

    char str[31];
    int i = 0;

    printf("14. Enter string (max 30 chars, * to stop): ");

    while(i < 30) {
        str[i] = getchar();

        if(str[i] == '*' || str[i] == '\n')
            break;

        i++;
    }

    str[i] = '\0';

    printf("Result: %s\n", str);

    return 0;
}