#include <stdio.h>
int main()
{
    int i, j, n, temp, a[30];
    printf("enter number of elements:");
    scanf("%d", &n);
    printf("enter the nummber :");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("assending order:");
    for (i = 0; i < n; ++i)
    {
        printf("%d\t", a[i]);
    }
}