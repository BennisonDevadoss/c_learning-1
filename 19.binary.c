#include <stdio.h>
#include <math.h>

#define BASE 2

int main()
{
    //variable declaration
    long long int binary, decimal = 0, tempbinary;
    int N = 0;

    //read input from user
    printf("Enter the binary number:");
    scanf("%lld", &binary);

    //logic

    tempbinary = binary;
    while (tempbinary != 0)
    {
        if (tempbinary == 1)
        {
            decimal = decimal + bow(BASE, N);
        }
        N++;
        tempbinary /= 10;
    }

    // print output
    printf("binary number : %lld", binary);
    printf("decimal number :%lld", decimal);
}