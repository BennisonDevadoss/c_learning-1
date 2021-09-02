#include <stdio.h>
void increment(int x);
int main()
{
    int a = 10;
    increment(a);
    printf("increment of a is:%d\n", a); //why a is not incremented ?....
}
void increment(int x)
{
    x = x + 1;
    printf("increment of  a is :%d\n", x);
}