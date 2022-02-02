#include <stdio.h>
int main()
{
    int number, number2, flag;
    printf("enter the number:");
    scanf("%d", &number);
    for (int i = 2; i < number; i++)
    {
        number2 = number % i;
        if (number2 == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d, this number is not prime number\n", number);
    }
    else
    {
        printf("%d,this number is prime number\n", number);
    }
}
