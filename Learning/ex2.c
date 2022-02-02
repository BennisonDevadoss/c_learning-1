//function using prime number
#include <stdio.h>
int primenumber(int input);
int main()
{
    // vatiable declaration
    int input, i;

    //  read input from user
    printf("enter the eny number");
    scanf("%d", &input);

    //fucction call
    if (primenumber(input))
        printf("%d entered number is prime number", input);
    else
        printf("%d entered number is not prime number", input);
}
int primenumber(int input)
{
    int i;
    int true, false;
    for (i = 0; i < input; i++)
    {
        if (input % i == 0)
        {
            break;
        }
    }
    if (i == input)
        return true;
    else
        return false;
}