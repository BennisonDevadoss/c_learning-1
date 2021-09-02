#include <stdio.h>
int main()
{
    int i, *p;
    printf("enter the number");
    scanf("%d", &i);
    p = &i;
    printf("entered number is:%d", *p);
}