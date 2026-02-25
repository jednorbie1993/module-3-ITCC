#include <stdio.h>
#include <stdlib.h>

#define DELAY 150000

void cleanup(void);
void delay(void);

int main(void)
{
    int reply;

    /* Register cleanup function */
    atexit(cleanup);

    printf("Enter 1 to exit, any other number to continue: ");
    scanf("%d", &reply);

    if (reply == 1)
        exit(EXIT_SUCCESS);

    /* Simulate work */
    for (reply = 0; reply < 5; reply++)
    {
        printf("Working...\n");
        delay();
    }

    return 0;
}

void cleanup(void)
{
    printf("\nPreparing for exit...\n");
    delay();
}

void delay(void)
{
    long x;
    for (x = 0; x < DELAY; x++)
        ;
}