#include <stdio.h>

void a_sample_function(void) {
    int ctrl;
    for(ctrl = 0; ctrl < 25; ctrl++)
        printf("*");
    puts("\nThis is a sample function");

    {
        char star = '*'; // Problem: declared after statements in older C
        puts("It has a problem");
        for(int ctr2 = 0; ctr2 < 25; ctr2++)
            printf("%c", star);
    }
}

int main() {
    printf("Q16: Demonstrate a function with a problematic variable declaration.\n");
    a_sample_function();
    return 0;
}