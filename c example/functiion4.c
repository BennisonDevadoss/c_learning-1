#include <stdio.h>
void add(int x, int b);
int main()
{
    int a, b, c;
    printf("enter the a value :");
    scanf("%d", &a);
    printf("enter the b value :");
    scanf("%d", &b);
    add(a, b);
}
void add(int x, int y)
{
    int z;
    z = x + y;
    printf("c vlaue is :%d\n", z);
}