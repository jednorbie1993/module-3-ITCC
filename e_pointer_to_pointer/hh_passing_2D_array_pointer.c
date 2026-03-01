#include <stdio.h>

// FUNCTION para mag print ng 2D array
// ptr  -> pointer papunta sa array na may 4 columns
// rows -> ilang rows meron ang array
void printArray(int (*ptr)[4], int rows)
{
    // LOOP para sa ROWS
    // rows = 3 (galing sa main)
    for(int i = 0; i < rows; i++)
    {
        // LOOP para sa COLUMNS
        // 4 kasi multi[3][4]
        for(int j = 0; j < 4; j++)
        {
            // print value sa row i at column j
            printf("%d ", ptr[i][j]);
        }

        // lipat sa next line pagkatapos ng isang row
        printf("\n");
    }
}

int main()
{
    // 2D ARRAY
    // 3 rows
    // 4 columns
    int multi[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    // tawagin ang function
    // multi -> ipinapasa ang array
    // 3     -> bilang ng rows
    printArray(multi, 3);

    return 0;
}