#include <stdio.h>

int multi[2][4];

int main() {

    printf("multi = %p\n", multi);
    printf("multi + 1 = %p\n", multi + 1);
    printf("&multi[1] = %p\n", &multi[1]);

    return 0;
}