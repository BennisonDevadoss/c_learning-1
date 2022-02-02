#include <stdio.h>
int main()
{ //variable declaration
    float amount, time, rate, SI;

    // read information from user
    printf("enter the amount");
    scanf("%f", &amount);

    printf("enter time");
    scanf("%f", &time);

    printf("enter rate");
    scanf("%f", &rate);

    // logic
    SI = (amount * rate * time) / 100;

    // print output
    printf("%.2f\n", SI);
}