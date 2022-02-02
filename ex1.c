#include <stdio.h>
int main()
{
    // variable declaration
    int input, i;

    //read input from users
    printf("enter the any number");
    scanf("%d", &input);

    // logic
    for (i = 2; i < input; i++)
    {
        if (input % i == 0)
        {
            break;
        }
    }

    //print the output
    if (i == input)
    {
        printf("%d this number is prime number", input);
    }
    else
    {
        printf("%d this number is not prime number:", input);
    }
}
