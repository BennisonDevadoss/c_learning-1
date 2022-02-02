// #include <stdio.h>
// void prime(int number);
// int main()
// {
//     int number, total;
//     printf("enter the number:");
//     scanf("%d", &number);
//     // total = prime(number);
//     prime(number);
// }
// void prime(int number)
// {
//     int number2;
//     for (int i = 2; i <= number; i++)
//     {
//         for (int j = 2; j < i; j++)
//         {
//             number2 = i % j;
//             if (number2 == 0)
//             {
//                 break;
//             }
//             printf("%d", i);
//         }
//     }
// }
#include <stdio.h>
//this program about find prime number
int main()
{
    //variable diclaration
    int number, number1;
    FILE *ptr;
    int number3, flag;
    //give input from user
    printf("enter the number");
    scanf("%d", &number);
    //statement
    int i, j;
    for (i = 3; i <= number; i++)
    {
        for (j = 2; j < i; j++)
        {
            number1 = i % j;
            // if (number1 == 0)
            // {
            //     // continue;
            // }
            // else
            // {
            //     printf("%d", i);
            // }
            if (number1 == 0)
            {
                flag = 1;
            }
        }
        if (flag != 1)
        {
            printf("%d", i);
        }
    }
}
