#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, size;
    printf("enter the number of elements:\n");
    scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));
    printf("enter the p value:\n");
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }
    printf("enterd elements:");
    for (int j = 0; j < n; j++)
    {
        printf("%d", *(p + j));
    }
}