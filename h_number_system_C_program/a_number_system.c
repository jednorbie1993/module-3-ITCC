/* Program: Display ASCII Values */

#include <stdio.h>

int main(void)
{
    unsigned char ch;     // variable para sa ASCII value (0–127)
    char trash[256];      // pang hold ng input kapag nag pause

    printf("\n\nThe ASCII VALUES:");

    // loop from 0 hanggang 127 (ASCII standard)
    for(ch = 0; ch < 128; ch++)
    {
        // print number at katumbas na character
        printf("\n%3.3d : %c", ch, ch);

        // every 20 values mag pause
        if(((ch % 20) == 0) && (ch != 0))
        {
            printf("\nPress <Enter> to continue");
            gets(trash);   // wait user press Enter
        }
    }

    return 0;
}