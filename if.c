//working on if statement
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the two number:\n");
    scanf("%d %d", &a, &b);
    if (a == b)
    {
        printf("value a and b is equal\n");
        return 0;
    }
    printf("value a and b is not equal\n");
    return 0;
}