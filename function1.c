//no argument passed and no return value
#include <stdio.h>
void addition();
// {
//     int a, b, c;
//     printf("enter the two number :");
//     scanf("%d %d", &a, &b);
//     c = a + b;
//     printf("total value is:%d", c);
// }
int main()
{
    addition();
}
void addition()
{
    int a, b, c;
    printf("enter the two number:");
    scanf("%d %d", &b, &c);
    a = b + c;
    printf("addition of two number is %d", a);
}
