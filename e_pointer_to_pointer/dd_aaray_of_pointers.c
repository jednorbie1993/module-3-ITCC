#include <stdio.h>

int main() {

    char *names[] = {"Ana", "Ben", "Carl"};
    int i;

    for(i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

