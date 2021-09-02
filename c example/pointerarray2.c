#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    // int *p;
    int i;
    // p = a;
    printf("address of a is:%p\n", a + 4); //we print arrry variable name use integer formate specifiers and out put is print in the address of a:
    for (i = 0; i < 5; i++)
    {
        printf("ADDRESS=%p\n", &a[i]);
        printf("address=%p\n", a + i);
        printf("value=%d\n", a[i]);
        printf("value=%d\n", *(a + i));
        printf("value=%d\n", *a);
    }
}