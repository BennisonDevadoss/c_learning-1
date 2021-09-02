#include <stdio.h>
float calculatesum(float[]);
int main()
{
    float number[10] = {22.33, 2, 44.5, 2, 7, 1, 10.90, 54.8, 7.7, 12.08};
    float result;
    result = calculatesum(number);
    printf("sum is:%.2lf", result);
}
float calculatesum(float variable[])
{
    int sum = 0.0, i;
    for (i = 0; i < 10; i++)
    {
        sum += variable[i];
    }
}