#include <stdio.h>

int main() {
    // Mga decimal na numero
    int decimal1 = 1;
    int decimal2 = 5;
    int decimal3 = 255;
    int decimal4 = 169;

    // Ang binary, hexadecimal, at octal ay paraan ng pagpapakita ng numero
    // Tandaan: Sa standard C, walang native binary literal (maliban sa C++14 o mas bago)
    // Hexadecimal: 0x prefix, Octal: 0 prefix

    // Binary equivalents (manual lang sa printf)
    printf("Mga binary na katumbas:\n");
    printf("1 sa binary: 00000001\n");
    printf("5 sa binary: 00000101\n");
    printf("255 sa binary: 11111111\n");
    printf("169 sa binary: 10101001\n\n");

    // Decimal → Hexadecimal
    printf("Mga hexadecimal na katumbas:\n");
    printf("1 sa hex: %Xh\n", decimal1);   // %X = uppercase hex
    printf("5 sa hex: %Xh\n", decimal2);
    printf("255 sa hex: %Xh\n", decimal3);
    printf("169 sa hex: %Xh\n", decimal4);
    printf("\n");

    // Decimal → Octal
    printf("Mga octal na katumbas:\n");
    printf("1 sa octal: %o\n", decimal1);  
    printf("5 sa octal: %o\n", decimal2);
    printf("255 sa octal: %o\n", decimal3);
    printf("169 sa octal: %o\n", decimal4);
    printf("\n");

    // Halimbawa: Hexadecimal → Binary (manual)
    printf("Hex F1 -> binary: F -> 1111, 1 -> 0001 -> 11110001\n");

    // Halimbawa: Binary → Hexadecimal (manual)
    printf("Binary 10101001 -> hex: 1010 -> A, 1001 -> 9 -> A9h\n");

    return 0;
}