//find square root without using sqrt function
#include <math.h>
#include <stdio.h>
int main()
{
    //variable declaration
    double number, squareroot;

    //read input from user
    printf("Enter the number:");
    scanf("%lf", &number);

    //logic
    squareroot = sqrt(number);

    // print output
    printf("%lf this number's sqrt is :%lf", number, squareroot);
}
