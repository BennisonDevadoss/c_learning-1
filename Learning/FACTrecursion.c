#include <stdio.h>
int FACT(int number);
int main()
{
    int number;
    int FACTORIAL;
    printf("enter the number:");
    scanf("%d", &number);
    FACTORIAL = FACT(number);
    printf("factorial number is :%d", FACTORIAL);
}
int FACT(int number)
{
    if (number != 0)
    {
        return number * FACT(number - 1);
    }
    else
        return 1;
}