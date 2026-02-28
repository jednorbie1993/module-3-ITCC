#include <stdio.h>
#include <conio.h>

int main() {
    int ch;

    printf("Type characters (Press ENTER to stop):\n");

    while ((ch = getche()) != '\r');

    return 0;
}