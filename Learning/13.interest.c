#include <stdio.h>
#include <math.h>
int main()
{
    // variable declaration
    double CI, amount, rate, time;

    // read information from user
    printf("Enter the amount");
    scanf("%lf", &amount);

    printf("Enter the time");
    scanf("%lf", &time);

    printf("Enter the rate");
    scanf("%lf", &rate);

    // logic
    CI = amount * (pow((1 + rate / 100), time));

    // print output
    printf("%.0lf", CI);
}