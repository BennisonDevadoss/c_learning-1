#include <stdio.h>
int main()
{
    int number[2][3];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter [%d][%d]:", i, j);
            scanf("%d", &number[i][j]);
        }
    }
    printf("....display the value....\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("number[%d][%d] =%d\n", i, j, number[i][j]);
        }
    }
    int *p;
    int(*p)[3] = number;
    printf("address of p is:%p", &p);
}
//........................................