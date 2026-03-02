#include <stdio.h>

int main() {

    FILE *printer;
    int ch;
    int lines = 0;

    printer = fopen("printer.txt","w");

    while((ch = getchar()) != 27) {

        putchar(ch);
        fputc(ch, printer);

        if(ch == '\n')
            lines++;
    }

    fclose(printer);

    return 0;
}
/*
stdprn
stdaux

automatic isipin mo:

"Theory lang to — kailangan i-simulate gamit FILE."
*/