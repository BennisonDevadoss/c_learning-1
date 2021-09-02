#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the three different integer number:");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is the largest number\n", a); /* code */
    }
    else if (b > a && b > c)
    {
        printf("%d is the largest number\n", b);
    }
    else
        (c > a && c > b /* condition */);
    {
        printf("%d is largest number\n", c); /* code */
    }
}