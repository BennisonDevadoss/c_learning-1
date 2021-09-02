#include <stdio.h>
int main()
{
    long long fact = 0;
    long long n = 1000000000;
    for (int i = 1; i < n; i++)
    {
        fact = fact + i;
    }
    printf("fact = %lld", fact);
}