#include<stdio.h>
int main()
{
    int number , sum = 0 , count;
    for (count=1 ; count<=10 ; ++count )
    {
      printf("entr the number :");
      scanf("%d" , &number);
      if (number < 0)
      {
        break; /* code */
      }
        sum +=number;/* code */
    }
    printf("sum value is :%d" ,sum);

}