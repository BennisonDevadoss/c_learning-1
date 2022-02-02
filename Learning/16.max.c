#include <stdio.h>
int main()
{
    //variable declaration
    int num1, num2, num3;

    //read input from user
    printf("enter the first number:");
    scanf("%d", &num1);

    printf("enter the second number:");
    scanf("%d", &num2);

    printf("enter the third number:");
    scanf("%d", &num3);

    // logic
    if (num1 > num2 && num1 > num3)
    {
        printf("the biggest number :%d\n", num1);
    }

    if (num2 > num1 && num2 > num3)
    {
        printf("the bigset number :%d\n", num2);
    }

    if (num3 > num1 && num3 > num2)
    {
        printf("the biggest number :%d\n", num3);
    }
}