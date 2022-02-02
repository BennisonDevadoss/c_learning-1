//this program find sum of digits
#include <stdio.h>
int main()
{
    // varaible declaration
    int number, number1, result = 0, remainder;

    //read input from users
    printf("enter the number");
    scanf("%d", &number);

    // logic

    number1 = number;
    while (number1 > 0)
    {
        remainder = number1 % 10;
        number1 = number1 / 10;
        result = result + remainder;
    }
    printf("%d sum of digits is %d", number, result);
}
