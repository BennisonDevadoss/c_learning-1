#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("enter the first number :");
    scanf("%d", &num1);
    printf("enrer the second number:");
    fflush(stdin);
    scanf("%d", &num2);
    printf("number 1 and number 2 total value is:"); //once again u run this program u enter the value in number 1 10, 20, 30 and out put is 30 y in this problem in this codin and solve this using fflush function
    printf("total value is =%d\n", num1 + num2);
}
