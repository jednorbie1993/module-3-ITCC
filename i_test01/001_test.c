#include <stdio.h>

int main() {
    printf("===== Section 1: Questions 1–8, 10–11 =====\n\n");

    // Q1
    printf("Q1: What does scope refer to?\n");
    printf("A1: Scope is the region of the program where a variable can be accessed.\n\n");

    // Q2
    printf("Q2: What is the most important difference between local storage class and external storage class?\n");
    printf("A2: Local variables exist only inside a function; external (global) variables exist throughout the program.\n\n");

    // Q3
    printf("Q3: How does the location of a variable definition affect its storage class?\n");
    printf("A3: Variables declared inside functions are automatic (local), outside functions are global (external).\n\n");

    // Q4
    printf("Q4: When defining a local variable, what are the two options for the variable's lifetime?\n");
    printf("A4: Automatic (exists only during function call) and static (exists for entire program).\n\n");

    // Q5
    printf("Q5: Your program can initialize both automatic and static local variables when they are defined. When do the initializations take place?\n");
    printf("A5: Automatic variables are initialized each function call; static variables are initialized once at program start.\n\n");

    // Q6
    printf("Q6: True or false: A register variable will always be placed in a register.\n");
    printf("A6: False. It is only a hint to the compiler.\n\n");

    // Q7
    printf("Q7: What value does an uninitialized global variable contain?\n");
    printf("A7: Zero (0) by default.\n\n");

    // Q8
    printf("Q8: What value does an uninitialized local variable contain?\n");
    printf("A8: Undefined (garbage value).\n\n");

    // Q10
    printf("Q10: What does the extern keyword do?\n");
    printf("A10: Declares a variable that is defined elsewhere, usually a global variable.\n\n");

    // Q11
    printf("Q11: What does the static keyword do?\n");
    printf("A11: Keeps the value of a local variable between function calls or limits the visibility of global variables to the current file.\n\n");

    return 0;
}