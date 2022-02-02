#include <stdio.h>
int main()
{
    //variable declaration
    int num;

    //read input from user
    printf("enter the number:");
    scanf("%d", &num);

    //logic
    if (num > 0)
    {
        printf("%d this is passitive number\n", num);
    }
    if (num < 0)
    {
        printf("%d this is negative number\n", num);
    }
    if (num == 0)
    {
        printf("%d this is zero\n", num);
    }
}