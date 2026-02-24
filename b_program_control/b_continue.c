#include <stdio.h>

int main()
{
    char buffer[81];
    int ctr;

    puts("Enter a line of text:");
    gets(buffer);   // luma na ito, pero nasa module

    for (ctr = 0; buffer[ctr] != '\0'; ctr++)
    {
        if (buffer[ctr] == 'a' ||
            buffer[ctr] == 'e' ||
            buffer[ctr] == 'i' ||
            buffer[ctr] == 'o' ||
            buffer[ctr] == 'u')
            continue;

        putchar(buffer[ctr]);
    }

    return 0;
}