#include <stdio.h>
int main()
{
    int number;
    printf("enter the number:\n");
    scanf("%d", &number);
    for (int i = number - 1; i > 0; i--)
    {
        number = number + i;
    }
    printf("factorial number is = %d", number);
}