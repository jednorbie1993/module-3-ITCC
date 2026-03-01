#include <stdio.h>

void printArray(int (*ptr)[4], int rows) {

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int multi[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    printArray(multi, 3);

    return 0;
}