#include <stdio.h>
int main()
{
    int i;
    double number, sum = 0;
    for (i = 1; i <= 10; ++i)
    {
        printf("enter the sumber");
        scanf("%lf", &number);
        if (number < 0.0)
        {
            continue; /* code */
        }
        sum += number; /* code */
    }

    printf("sum value is :%lf", number);
}
