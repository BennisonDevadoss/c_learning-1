#include<stdio.h>
int main()
{
    int num , count , sum = 0;
    printf("enter the integer value");
    scanf("%d" ,&num);
    for(count = 1 ; count<=num ; ++count)
    {
        sum +=count;
    }
printf("sum value is :%d\n" , sum);
}
// #include <stdio.h>
// int main()
// {
//     int num, count, sum = 0;

//     printf("Enter a positive integer: ");
//     scanf("%d", &num);

//     // for loop terminates when num is less than count
//     for(count = 1; count <= num; ++count)
//     {
//         sum += count;
//     }

//     printf("Sum = %d", sum);

//     return 0;
// }
  