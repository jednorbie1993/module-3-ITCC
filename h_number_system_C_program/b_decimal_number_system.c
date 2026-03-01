/* Program: decdump.c
   Prints file contents in DECIMAL values
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int ch;
    unsigned int line = 1;
    FILE *fp;

    // check kung may filename na binigay
    if (argc != 2)
    {
        printf("\nOops! Proper usage is:\n");
        printf("%s input_file\n", argv[0]);
        printf("Original file will be printed in decimal\n");
        return 1;
    }

    // open file
    fp = fopen(argv[1], "r");

    if (fp == NULL)
    {
        printf("\nOops! Error opening file: %s\n", argv[1]);
        exit(99);
    }

    // print first line number
    printf("\n%5.5d: ", line);

    // read character hanggang EOF
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%d ", ch);   // print decimal value

        // kapag newline character
        if (ch == '\n')
        {
            line++;
            printf("\n%5.5d: ", line);
        }
    }

    fclose(fp);

    return 0;
}