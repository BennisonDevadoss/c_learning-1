#include <stdio.h>
int main()
{
    double number1, number2, temp;
    printf("enter the first number:");
    scanf("%lf", &number1);
    printf("enter the secend number:");
    scanf("%lf", &number2);
    temp = number1;
    number1 = number2;
    number2 = temp;
    printf("after swaping first number:%.2lf\n", number1);
    printf("after swaping second number:%.2lf\n", number2);
}
