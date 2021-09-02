// #include<stdio.h>
// int main()
// {
//     int number, i , sum =0;
//     printf("enter the number :");
//     scanf("%d", &number);
//     for ( i = 1; i <=number;++i)
//     {
//         sum +=i;/* code */
//     }
//     printf("sum =%d", sum);

// }

//sum of natural number using while loop
#include <stdio.h>
int main()
{
    int number, i, sum = 0;
    printf("enter the number :");
    scanf("%d", &number);
    i = 1;
    while (i <= number)
    {
        sum += i;
        ++i; /* code */
    }
    printf("sum=%d", sum);
}