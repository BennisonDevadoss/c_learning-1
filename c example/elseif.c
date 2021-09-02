#include <stdio.h>
int main()
{
    double number;
    printf("enter the number:");
    scanf("%lf", &number);
    if (number <= 0.0)
    {
        if (number == 0)
        {
            printf("you are entered zero");
        } /* code */
        else
        {
            printf("entered number is negative integer");
        }
    }
    else
    {
        printf("entered number is passitive integer");
    }
    return 0;
}