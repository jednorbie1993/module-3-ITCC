#include <stdio.h>

int main() {

    printf("Section 1\n\n");

    printf("1. Write code that declares a float variable, a pointer to it, and a pointer to the pointer.\n");
    printf("Answer: Declare a float variable, then create a pointer that stores its address, then create a pointer to that pointer.\n\n");

    printf("2. What is wrong with the statement *ppx = 100; ?\n");
    printf("Answer: It is wrong because *ppx is still a pointer. It should be **ppx = 100; to modify the original variable.\n\n");

    printf("3. What is the structure of int array[2][3][4]; ?\n");
    printf("Answer: It is a 3-dimensional array with 2 blocks, 3 rows per block, and 4 integers per row.\n\n");

    printf("4. What does array[0][0] mean?\n");
    printf("Answer: It refers to the first row (which contains 4 integers).\n\n");

    printf("5. Which comparison is true?\n");
    printf("Answer:\n");
    printf("array[0][0] == &array[0][0][0];  (True)\n");
    printf("array[0][1] == &array[0][1][0];  (True)\n");
    printf("array[0][1] == array[0][0][1];   (False)\n\n");

    printf("6. Prototype for function taking array of char pointers and returning void.\n");
    printf("Answer: void functionName(char *arr[]);\n\n");

    printf("7. How does the function know how many elements are in the array?\n");
    printf("Answer: It does not know automatically. The size must be passed as another parameter.\n\n");

    printf("8. What is a pointer to a function?\n");
    printf("Answer: It is a pointer that stores the address of a function.\n\n");

    printf("9. Declaration of pointer to function returning char and taking array of char pointers.\n");
    printf("Answer: char (*ptr)(char *arr[]);\n\n");

    printf("10. What is wrong with: char *ptr(char *x[1]); ?\n");
    printf("Answer: This declares a function returning a pointer to char, not a pointer to a function.\n\n");

    printf("11a. int *var1; -> Pointer to int.\n");
    printf("11b. int var2; -> Integer variable.\n");
    printf("11c. int **var3; -> Pointer to pointer to int.\n\n");

    printf("12a. int a[3][12]; -> 2D array.\n");
    printf("12b. int (*b)[12]; -> Pointer to array of 12 integers.\n");
    printf("12c. int *c[12]; -> Array of 12 pointers to int.\n\n");

    printf("13a. char *z[10]; -> Array of 10 pointers to char.\n");
    printf("13b. char *y(int field); -> Function returning pointer to char.\n");
    printf("13c. char (*x)(int field); -> Pointer to function returning char.\n\n");

    printf("14. Pointer to function taking int and returning float.\n");
    printf("Answer: float (*ptr)(int);\n\n");

    printf("15. Array of pointers to functions taking string and returning int.\n");
    printf("Answer: int (*arr[SIZE])(char *);\n");
    printf("Use: It can store multiple functions and call them dynamically.\n\n");

    printf("16. Array of ten pointers to char.\n");
    printf("Answer: char *arr[10];\n\n");

    printf("17. Is this wrong?\n");
    printf("int x[3][12];\n");
    printf("int *ptr[12];\n");
    printf("ptr = x;\n");
    printf("Answer: Yes. You cannot assign an array to another array.\n");

    return 0;
}