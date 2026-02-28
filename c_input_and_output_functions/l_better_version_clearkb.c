#include <stdio.h>

void clear_kb() {
    while (getchar() != '\n'); // moders style eto na gamit
}

int main() {
    int age;
    char name[20];

    printf("Enter age: ");
    scanf("%d", &age);

    clear_kb();

    printf("Enter name: ");
    fgets(name, 20, stdin);

    printf("Age: %d\n", age);
    printf("Name: %s", name);

    return 0;
}