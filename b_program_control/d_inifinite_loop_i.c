#include <stdio.h>

int main(void)
{
    int choice;

    while (1)   // infinite loop
    {
        printf("\n1. Task A\n");
        printf("2. Task B\n");
        printf("3. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            printf("Executing Task A...\n");
        else if (choice == 2)
            printf("Executing Task B...\n");
        else if (choice == 3)
        {
            printf("Exiting program...\n");
            break;   // exit loop
        }
        else
            printf("Invalid choice!\n");
    }

    return 0;
}