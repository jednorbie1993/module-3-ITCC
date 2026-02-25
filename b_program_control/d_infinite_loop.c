#include <stdio.h>

#define DELAY 1500000

int menu(void);
void delay(void);

int main(void)
{
    int choice;

    while (1)   /* infinite loop */
    {
        choice = menu();

        if (choice == 1)
        {
            puts("\nExecuting choice 1.");
            delay();
        }
        else if (choice == 2)
        {
            puts("\nExecuting choice 2.");
            delay();
        }
        else if (choice == 3)
        {
            puts("\nExecuting choice 3.");
            delay();
        }
        else if (choice == 4)
        {
            puts("\nExecuting choice 4.");
            delay();
        }
        else if (choice == 5)   /* exit program */
        {
            puts("\nExiting program now...");
            delay();
            break;   /* EXIT infinite loop */
        }
        else
        {
            puts("\nInvalid choice, try again.");
            delay();
        }
    }

    return 0;
}

/* Displays menu and gets user choice */
int menu(void)
{
    int reply;

    puts("\nEnter 1 for task A.");
    puts("Enter 2 for task B.");
    puts("Enter 3 for task C.");
    puts("Enter 4 for task D.");
    puts("Enter 5 to exit program.");
    printf("Choice: ");

    scanf("%d", &reply);

    return reply;
}

/* Simple delay function */
void delay(void)
{
    long x;
    for (x = 0; x < DELAY; x++)
        ;   /* do nothing */
}