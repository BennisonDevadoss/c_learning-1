#include<stdio.h>
int main()
{
    int number ;
    printf("enter the number :");
    scanf("%d" , &number);
    if (number < 0)
    {
        //number = -number;
        printf("entered value is less then zero :%d" , number);/* code */
    }
    else
    printf("entered value is bigger then zero:%d\n", number);
    
}