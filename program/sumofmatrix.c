#include <stdio.h>
int main()
{
    // Declaration
    int a[3][3], SR, SC, i, j, k;

    // Initialization
    SR = SC = k = 0;

    // Read input from user
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Logic for sum of row to the 3x3 matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            SR = SR + a[i][j];
        }
        ++k;
        printf("SUM OF %dST ROW: %d\n", k, SR);
        SR = 0;
    }
    printf("\n");
    k = 0;
    // Logic for sum of column to the 3x3 matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            SC = SC + a[j][i];
        }
        ++k;
        printf("SUM OF %dST COLUMN: %d\n", k, SC);
        SC = 0;
    }
}
