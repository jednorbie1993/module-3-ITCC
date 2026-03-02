#include <stdio.h>

int main() {

    printf("1. What is a stream, and what does a C program use streams for?\n");
    printf("A stream is a flow of data between a program and an input/output device.\n");
    printf("C programs use streams to read input and send output.\n\n");

    printf("2. Input or Output Devices:\n");
    printf("Printer - Output Device\n");
    printf("Keyboard - Input Device\n");
    printf("Modem - Input and Output Device\n");
    printf("Monitor - Output Device\n");
    printf("Disk Drive - Input and Output Device\n\n");

    printf("3. Five predefined streams:\n");
    printf("stdin  - Keyboard\n");
    printf("stdout - Monitor\n");
    printf("stderr - Monitor (error output)\n");
    printf("stdprn - Printer\n");
    printf("stdaux - Auxiliary device\n\n");

    printf("4. Streams used by functions:\n");
    printf("printf() / puts() -> stdout\n");
    printf("scanf() / gets()  -> stdin\n");
    printf("fprintf() -> depends on specified stream\n\n");

    printf("5. Buffered vs Unbuffered input:\n");
    printf("Buffered waits until Enter is pressed.\n");
    printf("Unbuffered reads character immediately.\n\n");

    printf("6. Echoed vs Unechoed input:\n");
    printf("Echoed shows typed characters on screen.\n");
    printf("Unechoed hides typed characters.\n\n");

    printf("7. ungetc():\n");
    printf("Only one character can be pushed back.\n");
    printf("EOF cannot be ungotten.\n\n");

    printf("8. End of line in C:\n");
    printf("Determined by newline character (\\n).\n\n");

    printf("9. Valid type specifiers:\n");
    printf("%%d - VALID\n");
    printf("%%4d - VALID\n");
    printf("%%3i%%c - VALID\n");
    printf("%%q%%d - INVALID\n");
    printf("%%%%%%i - VALID\n");
    printf("%%9ld - VALID\n\n");

    printf("10. stderr vs stdout:\n");
    printf("stdout is normal output.\n");
    printf("stderr is error output.\n");

    return 0;
}