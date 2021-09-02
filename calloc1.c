#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the number of elements:\n");
    scanf("%d", &n);
    int *p;
    p = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
        printf("%d\n", *(p + i));
    }
    // for (int i = 0; i < n; i++)
    // {
    free(p);
    // }
    printf("after using free function\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d\n", *(p + j));
    }
}