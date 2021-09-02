#include <stdio.h>
int main()
{
    double a, b, c;
    printf("enter the first number:");
    scanf("%lf", &a);
    printf("enter the second number:");
    scanf("%lf", &b);
    //initaial a -initial b
    a = a - b;
    //(initial a -initial b)-intial b
    b = a + b;
    //((initial a - initail b)-initial b) - (initial a - initial b)
    a = b - a;
    printf("after swaping first number is :%.2lf\n", a);
    printf("after swaping second number is :%.2lf\n", b);
}