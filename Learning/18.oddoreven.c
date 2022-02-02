#include <stdio.h>
int main()
{
    //variable declaration
    int num;

    //read information from users
    printf("enter the number:");
    scanf("%d", &num);

    //logic
    if (num % 2 == 0)
    {
        printf("%d <---- this is even number\n", num);
    }
    else
    {
        printf("%d <---- this is odd number\n", num);
    }
}
