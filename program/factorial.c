#include <stdio.h>
int main()
{
    int number, temp = 0, i;
    printf("Eneter a number");
    scanf("%d", &number);
    temp = number;
    for (i = number - 1; i != 0; i--)
    {
        number = number * i;
    }
    // while (temp != 0)
    // {
    //     number = number * (--temp);
    // }

    printf("Number of factorial to entered number: %d\n", number);
}