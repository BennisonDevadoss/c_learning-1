//argument and return value is passed in this program
#include <stdio.h>
int addition(int x, int y)
{
    int z;
    z = x + y;
    return z;
}
int main()
{
    int a, b, c;
    printf("enter the two number:");
    scanf("%d %d", &a, &b);
    c = addition(a, b);
    printf("total value is :%d\n", c);
}