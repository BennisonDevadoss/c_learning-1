#include <stdio.h>
int main()
{
    long n, sum = 0;
    char option;
    do
    {
        printf("enter the number:");
        scanf("%ld", &n);
        while (n > 0)
        {
            sum = sum + n % 10;
            n /= 10;
        }
        printf("sum=%ld\n", sum);
        printf("do you want to continue[Y/N]\n");
        scanf(" %c", &option);
    } while (option == 'y' || option == 'Y');
}
