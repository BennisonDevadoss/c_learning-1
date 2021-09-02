#include <stdio.h>
#define MAX_VALUE 100
int main()
{
    char operator;
    int i;
    double number1, number2;
    // printf("..... SIMPLE CALCULATOR.....\n");
    // scanf("%lf %c %lf" , &number1 , &operator , &number2);
    for (i = 0; i <= MAX_VALUE; i++)
    {
        printf("..... SIMPLE CALCULATOR.....\n");
        scanf("%lf %c %lf", &number1, &operator, & number2); /* code */
        switch (operator)
        {
        case '+':
            printf("%lf + %lf = %lf\n", number1, number2, number1 + number2);
            break;
        case '-':
            printf("%lf - %lf = %lf\n", number1, number2, number1 - number2);
            break;
        case '*':
            printf("%lf * %lf = %lf\n", number1, number2, number1 * number2);
            break;
        case '/':
            printf("%lf / %lf = %lf\n", number1, number2, number1 / number2);
            break;
        default:
            printf("please enter the currect operator and currect number\n");
        }
    }
    return 0;
}