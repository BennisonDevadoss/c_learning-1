#include <stdio.h>
#include <math.h>

int main()
{
    int number, exponent, power;

    printf("enter number");
    scanf("%d", &number);

    printf("enter the expononent:");
    scanf("%d", &exponent);

    //logic
    power = pow(number, exponent);

    //print output
    printf("power value is %d:", power);

    return 0;
}