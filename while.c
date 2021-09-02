#include<stdio.h>
int main()
{
    int number , count , sum = 0 ;
    printf("enter  the number:");
    scanf("%d" , &number);
    count=1;
    while(count<=number)
    {
        //printf("sum value is :%d\n" , sum);
        sum +=count;
        //printf("sem value is :%d\n" , sum);
     ++count;
     //sum +=count;
     //printf("sum value is :%d\n" , sum);
    }
   printf("sum value is :%d\n" , sum);
}