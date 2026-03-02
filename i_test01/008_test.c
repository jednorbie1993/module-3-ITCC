#include <stdio.h>

int main() {
    int x;
    static int tally = 0; // static optional here

    for(x = 0; x <= 100; x++) {
        if(x % 2 == 0) // if x is even
            tally++;   // removed syntax error from original
    }

    printf("Q17: There are %d even numbers between 0 and 100.\n", tally);
    return 0;
}