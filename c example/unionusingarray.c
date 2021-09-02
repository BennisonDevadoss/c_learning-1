#include <stdio.h>
int main()
{
    union array
    {
        int a;
        int b;
    };
    int i, j;
    union array a[3];
    printf("enter the a value :");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i].a);
    }
    printf("enter the b value :");
    for (j = 0; j < 3; j++)
    {
        scanf("%d", &a[j].b);
    }
    for (i = 0; i < 3; i++)
    {
        printf("a[%d] value is :%d\n", i, a[i].a);
    }
    for (j = 0; i < 3; j++)
    {
        printf("b[%d] value is :%d\n", j, a[j].b);
    }
}
