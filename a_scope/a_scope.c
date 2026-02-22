#include <stdio.h>

// External variable
int x = 999;  // x is accessible anywhere in this file

void print_value(void);

int main() {
    printf("Main function sees x = %d\n", x); // prints 999
    print_value(); // function can also see x
    return 0;
}

void print_value(void) {
    printf("Print_value function sees x = %d\n", x); // prints 999
}
//variable scope