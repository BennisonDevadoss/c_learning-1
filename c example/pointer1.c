#include <stdio.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("%p\n", &p);
    printf("%p\n", &a);
    printf("%p\n", p);
    printf("%p\n", p + 1);
}