#include <stdio.h>

int main() {

    unsigned char num;
    int i;

    printf("Question 8:\n");
    printf("Enter a number (0-255): ");
    scanf("%hhu", &num);

    printf("Binary value: ");

    for(i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }

    printf("\n");

    return 0;
}

//Display binary value of a number