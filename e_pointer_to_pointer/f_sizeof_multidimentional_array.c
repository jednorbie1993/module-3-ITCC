#include <stdio.h>

int main() {

    int multi[2][4];

    printf("Size of multi = %lu\n", sizeof(multi));
    printf("Size of multi[0] = %lu\n", sizeof(multi[0]));
    printf("Size of multi[0][0] = %lu\n", sizeof(multi[0][0]));

    return 0;
}