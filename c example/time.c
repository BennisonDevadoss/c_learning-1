#include <stdio.h>
int sum(int n);
int main()
{
    long long n = 100000000000;
    long long sum;
    sum = n * (n + 1) / 2;
    printf("sum value is :%lld", sum);
}