#include <stdio.h>
int sum(int a, int b);
int main()
{
    int x, y, total;
    int (*ptr)(int, int); // function pointer
    ptr = sum;
    printf("Enter the number a & b:");
    scanf("%d %d", &x, &y);
    total = (*ptr)(x, y);
    printf("%d", total);
}

int sum(int a, int b)
{
    return a + b;
}