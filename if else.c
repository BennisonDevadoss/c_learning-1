//working on if else statement
#include <stdio.h>
int main()
{
    int number;
    printf("enter the integer value");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("%d is an even number", number);
    }
    else
    {
        printf("%d is a odd number", number);
    }
}