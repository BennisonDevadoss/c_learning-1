#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **ptr;
    ptr = NULL;
    **ptr = (void *)malloc(5 * sizeof(int));
    if (ptr == NULL)
    {
        printf("memory will be not allocated");
    }
    *ptr = (void *)calloc(5, sizeof(int));
    if (ptr == NULL)
    {
        printf("memory not allocated");
    }

    for (int i = 0; i < 5; i++)
    {
        ptr = *(ptr + i);
    }
    if (ptr == NULL)
    {
        printf("memory will be not allocated");
    }

    printf("displayed the array\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d", ptr[i][j]);
        }
    }
}