#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;

    fp = fopen(argv[1], "r");

    if(fp == NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }

    printf("File successfully opened\n");

    return 0;
}