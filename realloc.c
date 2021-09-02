#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("enter the number of elements:");
    scanf("%d", &n);
    int *ptr;
    printf("ptr size is:%ld", sizeof(ptr));
    ptr = (int *)calloc(5, sizeof(int));
    printf("enter the element\n");
    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d]:", i);
        scanf("%d", &ptr[i]);
    }
    printf("entered value is displayed\n");
    for (int j = 0; j < n; j++)
    {
        printf("ptr[%d]:%d", j, ptr[j]);
    }
    ptr = (int *)realloc(ptr, 6);
    int size = sizeof(ptr);
    printf("size of ptr is :%d\n", size);
    printf("after allocate extra memory sapace:");
    for (int k = 0; k < n; k++)
    {
        printf("ptr[%d]:%d\n", k, ptr[k]);
    }
}