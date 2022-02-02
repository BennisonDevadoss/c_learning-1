// this program about swap two numbers
#include <stdio.h>
int main()
{
    // variable declaration
    int number1, number2, temp;

    // read information from users
    printf("enter the first number:");
    scanf("%d", &number1);

    printf("enter the second number");
    scanf("%d", &number2);
    printf("\n");

    printf("before swapping number one value is %d\n", number1);
    printf("before swapping number two value is %d\n", number2);
    printf("\n");

    // logic
    temp = number1;
    number1 = number2;
    number2 = temp;

    // print output
    printf("after swapping number one value is %d\n", number1);
    printf("after swapping number two value is %d\n", number2);
}