//sum of natural number
#include <stdio.h>
int main()
{
    int number, sum = 0, i;
    do
    {
        printf("enter passitive integer :");
        scanf("%d", &number);
        /* code */
    } while (number <= 0);
    for (i = 0; i <= number; ++i)
    {
        sum += i; /* code */
    }
    printf("sum=%d", sum);
}