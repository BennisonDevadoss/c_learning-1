#include <stdio.h>
int main()
{
    int number, number1;
    printf("enter the number:\n");
    scanf("%d", &number);
    number1= number;
    for (int i = 1; i < number; i++)
    {
        number1 *= number - i;
        printf("%d", number1);
    }
    printf("factorial number is :%d", number1);
}