#include <stdio.h>
int main()
{
    const int MAX_INPUT = 100;
    double number, i, sum = 0, average;
    for (i = 0; i <= MAX_INPUT; ++i)
    {
        printf("enter the number:");
        scanf("%lf", &number);
        if (number < 0)
        {
            //goto jump;
            printf("sum = %2lf", sum);
            average = sum / (i - 1);
            printf("average = %2lf", average);
            return 0;
        }
        sum += number;
    }

    // jump:
    // printf("sum = %2lf" , sum);
    // average=sum / (i-1);
    // printf("average = %2lf" , average);
    // return 0;
}