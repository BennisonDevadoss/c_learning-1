#include <stdio.h>
int main()
{
    // variable declaration
    int number, i, j;

    // read information from user
    printf("Enter the number:");
    scanf("%d", &number);

    //logic
    for (size_t i = 0; i <= number; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}