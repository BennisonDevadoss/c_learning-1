// this program reverses the n number
// reverse the n number
#include <stdio.h>
int main()
{
    // variable declaration
    int number, number1, remainder, result = 0;
    // read input from user
    printf("enter the number:");
    scanf("%d", &number);

    // logic
    number1 = number;
    while (number1 > 0)
    {
        remainder = number1 % 10;
        number1 = number1 / 10;
        result = result * 10 + remainder;
    }

    printf("%d this number's reverse value is :%d\n", number, result);
}