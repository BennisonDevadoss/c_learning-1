//fibonacci series 0 1 2 3 5 8 13 ...
#include <stdio.h>
int main()
{
    //variable declaration
    int number, i, a = 0, b = 1, c;

    // read input from user
    printf("enter the number:");
    scanf("%d", &number);

    //logic
    printf("fibonacci serries is %d %d", a, b);
    for (i = 0; i <= number - 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf(" %d", c);
    }
}
