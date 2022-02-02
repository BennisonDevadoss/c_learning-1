#include <stdio.h>
int main()
{
    int number;
    printf("enter the number:");
    scanf("%d", &number);
    //this program uses to find the FACTORS of numbers
    for (int i = 1; i <= number; i++)
    {
        int output = number % i;
        if (output == 0)
        {
            printf("%d factors is :%d\n", number, i);
        }
    }
}
