//matrix of 2*2
#include <stdio.h>
int main()
{
    int a[2][2], b[2][2], result[2][2];
    int i, j;
    printf("enter the first element:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("a%d%d:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second element:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("b%d%d:", i + 1, i + 2);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("sum of matrix:\n");
    for (i = 0; i < 2; i++)

    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", result[i][j]);
            if (j == 1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}