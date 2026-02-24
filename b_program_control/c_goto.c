#include <stdio.h>

int main() {
    int n;

start:
    printf("Enter a number between 0 and 10: ");
    scanf("%d", &n);

    if (n < 0 || n > 10)
        goto start;
    else if (n == 0)
        goto location0;
    else if (n == 1)
        goto location1;
    else
        goto location2;

location0:
    printf("You entered 0.\n");
    goto end;

location1:
    printf("You entered 1.\n");
    goto end;

location2:
    printf("You entered something between 2 and 10.\n");

end:
    return 0;
}