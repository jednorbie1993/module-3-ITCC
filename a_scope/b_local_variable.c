#include <stdio.h>

void print_value(void);

int main() {
    int x = 999; // x is now local to main()
    
    printf("Main function sees x = %d\n", x); // prints 999
    print_value(); // x is NOT visible here in print_value()
    return 0;
}

void print_value(void) {
    // printf("Print_value function sees x = %d\n", x); // ERROR: x is undefined
    printf("Print_value function can't see x (it's local to main)\n");
}
//local variable