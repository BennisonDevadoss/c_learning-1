#include <stdio.h>
int main()
{
    int i, j;

    for (i = 1, j = 0; i < 5, j < 3; i++, j++)
        ;
    {
        printf("%d %d \n", i, j);
        printf("\n");
    }

    // condition 2
    for (i = 1, j = 0; i < 5, j < 3; i++, j++)
    {
        printf("%d %d \n", i, j);
    }
}
