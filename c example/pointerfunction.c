#include <stdio.h>
void increment(int *p);
int main()
{
    int a;
    printf("please enter value of A:");
    scanf("%d", &a);
    increment(&a);
    printf("incremented A is :%d", a);
}
void increment(int *p)
{
    *p = *p + 1;
}