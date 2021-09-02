#include<stdio.h>
int main()
{
    double num , sum = 0;
    do
    {
        printf("enter the number");
        scanf("%lf" , &num);
        sum +=num;/* code */
    } while (num !=0.0/* condition */);

      printf("sum value is :%lf" , sum);
    
}
