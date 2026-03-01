#include <stdio.h>

int main() {

    int multi[2][4] = {
        {1,2,3,4},
        {5,6,7,8}
    };

    printf("%d\n", multi[0][0]);
    printf("%d\n", *multi[0]);

    return 0;
}