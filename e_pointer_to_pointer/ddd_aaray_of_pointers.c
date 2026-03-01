#include <stdio.h>

int main() {

    char *names[] = {"Ana", "Ben", "Carl"};

    int size = sizeof(names) / sizeof(names[0]);

    for(int i = 0; i < size; i++) { // size lan hnd na number so if may idadagdag no need na baguhin kung number
        printf("%s\n", names[i]);
    }

    return 0;
}