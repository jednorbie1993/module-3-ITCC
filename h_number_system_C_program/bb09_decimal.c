#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch;
    int line = 1;

    // open file
    fp = fopen(argv[1], "r");

    // stop if file not found
    if(fp == NULL)
        exit(1);

    printf("%05d: ", line);

    // read file until end
    while((ch = fgetc(fp)) != EOF) //EOF = End Of File (constant sa <stdio.h>)
    {
        printf("%c", ch);   // print character

        // if new line found
        if(ch == '\n')
        {
            line++;
            printf("%05d: ", line);
        }
    }

    fclose(fp);
    return 0;
}