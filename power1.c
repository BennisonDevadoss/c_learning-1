#include <stdio.h>
int main()
{
    int base, exp;
    long long int result;
    printf("enter the base value:");
    scanf("%d", &base);
    printf("enter the exponent:");
    scanf("%d", &exp);
    while (exp != 0)
    {
        result *= base;
        --exp;
    }
    printf("result =%lld", result);
    return 0;
}