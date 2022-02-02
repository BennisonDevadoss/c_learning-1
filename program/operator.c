#include <stdio.h>
int main()
{
    int a = 10;
    float b = 7;
    printf("%f", a + b);
    int c = 5;
    int x, y;
    x = scanf("%d %d %d", &a, &c, &y);
    printf("%d", x);
}