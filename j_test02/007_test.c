#include <stdio.h>

int main() {

    FILE *printer;
    int ch;

    printer = fopen("printer_output.txt", "w");

    if(printer == NULL) {
        printf("Printer error\n");
        return 1;
    }

    while((ch = getchar()) != EOF)
        fputc(ch, printer);

    fclose(printer);

    return 0;
}