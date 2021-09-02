#include <stdio.h>
int main()
{
    int a[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("enter the %d element:", i + 1);
        scanf("%d", &a[i]);
    }
    printf("entered number is :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]); /* code */
    }
}