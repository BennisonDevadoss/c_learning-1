// #include <stdio.h>
// int recursion(int number, int number1);
// int main()
// {
//     int number1, number2, power;
//     printf("enter the rst number:");
//     scanf("%d", &number1);
//     printf("enter the second number:");
//     scanf("%d", &number2);
//     power = recursion(number1, number2)
// }
// int recursion(int number, int number1)
// {
//     if (number == number1 == 0)
//     {
//         return number1* recursion(number-)
//     }
// }
#include <stdio.h>
int main()
{
    long long number1, number2;
    printf("enter the number:");
    scanf("%lld", &number1);
    printf("%lld^", number1);
    scanf("%lld", &number2);
    long long temp = number1;
    for (int i = 2; i <= number2; i++)
    {
        number1 = number1 * temp;
    }
    printf("power value is :%lld\n", number1);
}
