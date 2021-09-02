#include <stdio.h>
int main()
{
    int number[10], i;
    int *p;
    printf(".....ENTER THE NUMBER..... :\n");
    for (i = 0; i < 10; ++i)
    {
        scanf("%d\n", &number[i]);
    }
    p = number;
    printf("address of number is :%p", &number);
    printf("p value is :%p", p);
    printf(".....DISPLAY THE ENTERED VALUE.....\n");
    for (i = 0; i < 10; i++)
    {
        printf("number[%d] is :%d\n", i, *p + i);
    }
}