#include <stdio.h>
int factorial(int number);
int main()
{
    int number;
    printf("enter the number:");
    scanf("%d", &number);
    int fact = factorial(number);
    printf("factorial nimber is :%d", fact);
}
int factorial(int number)
{
    for (int i = number - 1; i > 0; i--)
    {
        number = number + i;
    }
    return number;
}