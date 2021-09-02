#include<stdio.h>
int main()
{
    char operator;
    double n1 , n2;
    printf("enter the operator( + - / *):");
    scanf("%c" , &operator);
    printf("eneter two operant :");
    scanf("%lf %lf" , &n1 , &n2);
    switch (operator)
    {
    case '+':
    printf("%lf + %lf = %lf", n1 , n2 , n1 + n2 );
        break;
        case '-':
        printf("%lf - %lf = %lf", n1 , n2 , n1 + n2);
        break;
        case '*':
        printf("%lf * %lf = %lf", n1 , n2 , n1 * n2);
        break;
        case '/':
        printf("%lf / %lf = %lf", n1 , n2 , n1 / n2);
        break;
        default:
        printf("please enter the currect operator");
    }
        return 0;
}
