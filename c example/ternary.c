#include <stdio.h>
int main()
{
    int number;
    printf("enter the integer number:");
    scanf("%d", &number);
    (number % 2 == 0)
        ? printf("entered number is even :%d\n", number)
        : printf("entered number is odd:%d\n", number);
}