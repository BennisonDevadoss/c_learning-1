//multi dimensional array
#include <stdio.h>
int main()
{
    int number[3][2][2];
    int i, j, k;
    printf("enter the number:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                scanf("%d", &number[i][j][k]);
            }
        }
    }
    printf("entered number is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("number[%d][%d][%d]=%d\n", i, j, k, number[i][j][k]);
            }
        }
    }
    return 0;
}