#include <stdio.h>
int main()
{
    int number;
    printf("enter the number:");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("entered number is even number" , number); /* code */
    }
    else
        printf("entered number is odd", number);
}