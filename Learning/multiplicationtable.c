#include <stdio.h>
int main()
{
    int number1, number2;
    printf("enter the number to multiplication:\n");
    scanf("%d", &number1);
    printf("how many time multiply wntered number:\n");
    scanf("%d", &number2);
    for (int i = 1; i <= number2; i++)
    {
        printf("%d * %d = %d\n", i, number1, i * number1);
    }
}