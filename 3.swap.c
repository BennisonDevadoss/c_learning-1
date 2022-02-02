//swap two number without using temp variable
#include <stdio.h>
int main()
{
    // variable declaration
    int number1, number2;

    // read information from users
    printf("enter the first numbr:");
    scanf("%d", &number1);

    printf("enter the second number:");
    scanf("%d", &number2);
    printf("\n");

    printf("number1 is :%d\n", number1);
    printf("number2 is :%d\n", number2);
    printf("\n");

    // logic
    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;

    //out put
    printf("after swapping number one is :%d\n", number1);
    printf("after swapping number two is :%d\n", number2);
}
