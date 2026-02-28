#include <stdio.h>
#include <conio.h>

int main() {
    int ch;

    printf("Type characters (Press ENTER to stop):\n");

    while ((ch = getch()) != '\r') {   // ENTER = carriage return
        putchar(ch);                   // manually display
    }

    return 0;
}