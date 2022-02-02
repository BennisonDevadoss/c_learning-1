#include <stdio.h>
int main()
{
    // variable declaration
    int n, m, rem, result = 0;

    printf("\t\t\tPRINT ARMSTRONG NUMBER\t\t\t\n");

    //read value from user
    printf("enter any number::");
    scanf("%d", &n);

    // logic
    m = n;
    while (m > 0)
    {
        rem = m % 10;
        m = m / 10;
        result = result + rem * rem * rem;
    }
    if (result == n)
    {
        printf("%d this number is ARMSRONG NUMBER\n", n);
    }
    else
        printf("%d this number is NOT ARMSTRONG AMSTRONG\n", n);
}
