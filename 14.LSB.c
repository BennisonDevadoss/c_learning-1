#include <stdio.h>
int main()
{
    //variable declaratioin
    int number;

    // read information from user
    printf("enter the number");
    scanf("%d", &number);

    // logic
    if (number & 1)
    {
        printf("LSB of %d is set(1)\n", number);
    }
    else
    {
        printf("LSB of %d, is unset(0)\n", number);
    }
}
