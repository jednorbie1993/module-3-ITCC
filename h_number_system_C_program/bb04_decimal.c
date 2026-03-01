#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;

    fp = fopen(argv[1], "r");

    printf("File opened\n");

    return 0;
}
//Marunong na magbukas ng file