/* Illustrates declaring external variables */
#include <stdio.h>

int x = 999;

void print_value(void);

int main()
{
    extern int x;

    printf("%d\n", x);
    print_value();// pag wala to hnd lalabas c 999 pantawag ito

    return 0;
}

void print_value(void)
{
    extern int x;
    printf("%d\n", x);
}