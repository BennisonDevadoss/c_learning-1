#include <stdio.h>
int add(int, int);
int main()
{
    int a, b;
    a = 3, b = 4;
    int c;
    int (*ptr)(); //function pointer
    ptr = add;
    c = (*ptr)(a, b);
    printf("%d\n", c);
}
int add(int a, int b)
{
    return a + b;
}