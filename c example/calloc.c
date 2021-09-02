#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int size;
    // size = sizeof(ptr) / sizeof(ptr[0]);
    ptr = (void *)calloc(5, sizeof(int));
    // size = sizeof(ptr) / sizeof(ptr[0]);
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]:", i);
        scanf("%d", ptr + i);
    }
    printf(".....DISPLAYED VALUE.....\n");
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]:%d\n", i, *(ptr + i));
    }
}