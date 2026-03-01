#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;

    fp = fopen(argv[1], "r");

    if(fp == NULL)
        exit(1);

    ch = fgetc(fp);

    printf("First character decimal: %d\n", ch);

    fclose(fp);

    return 0;
}
//basa ng isang character lang