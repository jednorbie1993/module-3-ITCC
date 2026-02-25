#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char input[100];

    while (1)
    {
        printf("\nEnter OS command (blank to exit): ");
        fgets(input, sizeof(input), stdin);

        /* If user presses Enter only */
        if (input[0] == '\n')
            exit(0);

        system(input);
    }

    return 0;
}