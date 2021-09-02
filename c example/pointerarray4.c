#include <stdio.h>
int main()
{
    int a[2][3];
    int i, j;
    printf("enter the value :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int(*p)[3] = a;
    printf("address of a is:%p\n", a);
    printf("%p , %p , %p\n", *a, a[0], &a[0][0]);
    printf("value of p is :%p\n", p);
    printf("%p\n", a + 1);
    printf("%p\n", a[1]);
    printf("%p\n", *(a + 1));
    printf("%d\n", a[0][0]);
    printf("%p\n", *(a + 1) + 2);
    printf("%p\n", &a[1][0] + 2);
    printf("%d\n", *(a[0] + 1));
    printf("%d\n", **p += 1);
    printf("%d\n", **p);
}