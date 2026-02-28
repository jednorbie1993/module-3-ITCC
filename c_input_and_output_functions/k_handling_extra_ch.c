#include <stdio.h>

void clear_kb(void);

int main() {
    int age;
    char name[20];

    puts("Enter your age:");
    scanf("%d", &age);

    clear_kb();   // remove extra input

    puts("Enter your first name:");
    scanf("%s", name);

    printf("Your age is %d\n", age);
    printf("Your name is %s\n", name);

    return 0;
}

void clear_kb(void) { // module style eto gamit
    char junk[80];
    gets(junk);
}