#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d", &a);

    if (a)
        ; // if statement will be terminated
    {
        printf("inside the if statement:\n");
        printf("a=%d\n", a);
    }

    printf("outside of if statement\n");
}