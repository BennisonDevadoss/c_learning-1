#include <stdio.h>
int main()
{
    int number, factorial;
    printf("enter the number:"); //nice work welldone bennison
    scanf("%d", &number);
    int i = number - 1;
    factorial = number;
    while (i > 0)
    {
        factorial = factorial * i;
        i = i - 1;
    }
    printf("factorial number is =%d", factorial);
}