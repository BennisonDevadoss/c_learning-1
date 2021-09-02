#include <stdio.h>
int main()
{
    int a[2][2][2];
    int i, j, k;
    int(*p)[2][2] = a;
    printf(".....enter the array value.....\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("[%d][%d][%d]:", i, j, k);
                scanf("%d", &a[i][j][k]);
            }
        }
    }
    printf("address of a is:%p\n", a);
    printf("address of a is:%p\n", &a);
    printf("address of a is:%p\n", *a);
    printf("address of a is:%p\n", **a);
    printf("address of p is:%p\n", &p);
    printf("address a using int pointer:%p\n", p);
    printf("value of a is :%p\n", *p + 1);
    printf("address of a+1 is:%p\n", a + 1);
    printf("address of a[0][1]is:%p\n", a[0] + 1);
    printf("address of a[1] is :%p\n", p + 1);
}