#include <stdio.h>

void printStrings(char *arr[]);

int main() {

    char *words[] = {"Hello", "World", "C Programming"};
    printStrings(words);

    return 0;
}

void printStrings(char *arr[]) {

    for(int i = 0; i < 3; i++) {
        printf("%s\n", arr[i]);
    }
}
/*
6. Write the prototype for a function that takes an array of pointers to type char as its
one argument and returns void.
*/