#include<stdio.h>
int main()
{
    int number1 , number2;
    printf("enter the two number :");
    scanf("%d %d" , &number1 , &number2);
    //check if the two integer are equal
    if (number1 == number2)
    {
        printf("result:%d = %d", number1 , number2);/* code */
    }
    else if (number1 < number2)
    {
        printf("result:%d < %d" , number1 , number2);/* code */
    }
    else
    {
    printf("result:%d > %d", number1 , number2);
    }
    return 0;
 }