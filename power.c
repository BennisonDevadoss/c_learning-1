#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter the number:");
    scanf("%d", &a);
    printf("enter the number:");
    scanf("%d", &b);
    c = pow(a, b);
    printf("%d^%d :%d", a, b, c);
}