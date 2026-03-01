#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[100]; // para sa user input ng file name
    int ch;
    int line = 1;

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%99s", filename); // read filename from user

    // Open file
    fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Print first line number
    printf("%05d: ", line);

    // Read file character by character until EOF
    while((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);   // print character

        // If newline, increment line number
        if(ch == '\n') {
            line++;
            printf("%05d: ", line);
        }
    }

    fclose(fp);
    return 0;
}