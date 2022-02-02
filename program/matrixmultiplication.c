#include <stdio.h>
int main()
{
    // Variable Declaration
    int a[3][3], b[3][3], c[3][3], d[3][3], sum, i, j, k;

    // Initialization
    sum = 0;

    // Read A value from user
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Read B value from user
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");

    // Print A and B matrices
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]); // Print Matrix A
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]); // Print Matrix B
        }
        printf("\n");
    }
    printf("\n");

    // 3x3 Matirix multiplication logic
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }

    // print Matrix c
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]); // Print Matrix B
        }
        printf("\n");
    }
}
