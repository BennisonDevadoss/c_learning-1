/*argument passed but no return value*/
#include <stdio.h>
addition(int, int);
int main()
{
    int a, b, c;
    printf("enter the two number");
    scanf("%d %d ", &a, &b);
    addition(a, b);
}
addition(int x, int y)
{
    int z;
    z = x + y;
    printf("total value is :%d", z);
}
