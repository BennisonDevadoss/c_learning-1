#include <stdio.h>
int main()
{
    // variable declaration
    int number, temp, rem, rev = 0;

    // read information from user
    printf("enter the any number");
    scanf("%d", &number);

    // logic
    temp = number;
    while (temp > 0)
    {
        rem = temp % 10;
        temp = temp / 10;
        rev = rev * 10 + rem;
    }

    //output
    if (rev == number)
    {
        printf("%d, entered number is PALINDROME\n", number);
    }
    else
    {
        printf("%d, entered number is NOT PALINDROME\n", number);
    }
}
