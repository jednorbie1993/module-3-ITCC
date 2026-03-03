#include <stdio.h>
#include <string.h>

int length(char *str);
int firstCharValue(char *str);

int (*functions[2])(char *);

int main() {

    functions[0] = length;
    functions[1] = firstCharValue;

    char text[] = "Hello";

    printf("Length: %d\n", functions[0](text));
    printf("First char ASCII: %d\n", functions[1](text));

    return 0;
}

int length(char *str) {
    return strlen(str);
}

int firstCharValue(char *str) {
    return str[0];
}

/*15. Write a declaration for an array of pointers to functions. The functions should all
take a character string as a parameter and return an integer.
*/