#include <stdio.h>
int main()
{
    // variable declaration
    int a[5], i, even = 0, odd = 0;

    // read input from user
    printf("Enter the input");
    for (i = 0; i < 5; i++)
    {
        printf("enter the %dst element:", i + 1);
        scanf("%d", &a[i]);
    }

    // logic
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
            even += 1;
        else
            odd += 1;
    }

    // write output to the terminal
    printf("Total number of ODD value elements:%d\n", odd);
    printf("Total number of EVEN value elements:%d\n", even);
}
