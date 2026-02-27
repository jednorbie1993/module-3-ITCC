#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Say Hello\n");
        printf("2. Add Numbers\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Hello User!\n");
        }
        else if(choice == 2) {
            int a, b;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Sum = %d\n", a + b);
        }

    } while(choice != 3);

    printf("Program Ended.\n");
    return 0;
}