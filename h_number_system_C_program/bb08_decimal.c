#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;
    int line = 1;

    fp = fopen(argv[1], "r");

    if(fp == NULL)
        exit(1);

    printf("%05d: ", line);

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%d ", ch);

        if(ch == '\n')
        {
            line++;
            printf("\n%05d: ", line);
        }
    }

    fclose(fp);

    return 0;
}
/*
printf
↓
arguments
↓
file opening
↓
reading data
↓
ASCII numbers
↓
decimal dump
*/