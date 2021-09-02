/*return value and no passing arguments*/
#include <stdio.h>
int addition();
int main()
{
    printf("total value is %d", addition());
}
int addition()
{
    int a, b, c;
    // a = b+c;
    printf("enter the two number:");
    scanf("%d %d", &b, &c);
    a = b + c;
    return a;
}