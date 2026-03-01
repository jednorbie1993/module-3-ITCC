#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;

    fp = fopen(argv[1], "r");

    if(fp == NULL)
        exit(1);

    printf("Reading file...\n");

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%d ", ch);
    }

    fclose(fp);

    return 0;
}
//Text → Decimal numbers na