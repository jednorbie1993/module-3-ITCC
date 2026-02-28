#include <stdio.h>

int getNumber() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    return num;
}

int main() {
    int x = getNumber();

    if(x % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}