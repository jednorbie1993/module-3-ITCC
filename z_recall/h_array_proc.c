#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("Total = %d\n", sum);
    printf("Average = %.2f\n", sum / 5.0);

    return 0;
}