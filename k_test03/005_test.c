#include <stdio.h>

char sampleFunction(char *arr[]);
char (*ptr)(char *arr[]);

int main() {

    char *data[] = {"A", "B"};
    ptr = sampleFunction;

    char result = ptr(data);
    printf("Returned char: %c\n", result);

    return 0;
}

char sampleFunction(char *arr[]) {
    return arr[0][0];// change 1 magiging B
}
/*
9. Write a declaration of a pointer to a function that returns a type char and takes an
array of pointers to type char as an argument.
*/