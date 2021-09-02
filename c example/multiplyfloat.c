#include <stdio.h>
int main()
{
    double a, b, c;
    printf("enter two floating point value:");
    scanf("%lf %lf", &a, &b);
    c = a * b;
    printf("multiply value is :%.2lf\n", c);
}