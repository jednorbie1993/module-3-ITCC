#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    fgets(name, 50, stdin);

    printf("Hello %s", name);

    return 0;
}

/*

may limit
 safe
 ginagamit sa files at keyboard
*/