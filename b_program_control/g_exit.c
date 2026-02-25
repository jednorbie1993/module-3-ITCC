#include <stdio.h>
#include <stdlib.h>

void cleanup(void)
{
    printf("Cleaning up before exit...\n");
}

int main(void)
{
    atexit(cleanup);   // way to remember: gawin muna ito bago tuluyang mag-exit

    printf("Type 1 to exit normally, 2 for error, 3 to run system command: ");
    
    int choice;
    scanf("%d", &choice);

    if (choice == 1)
    {
        exit(EXIT_SUCCESS);  
        // way to remember: exit(0) → normal tapos
    }
    else if (choice == 2)
    {
        exit(EXIT_FAILURE);  
        // way to remember: exit(1) → may error
    }
    else if (choice == 3)
    {
        system("dir");  
        // way to remember: utusan ang OS (Windows: dir, Linux/Mac: ls)
    }

    return 0;
}

/*
EXIT_SUCCESS   → OK
EXIT_FAILURE   → ERROR
atexit()       → BEFORE STOP, gawin muna ito
system()       → utusan ang computer
*/