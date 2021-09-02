#include<stdio.h>
int main()
{
    int x = 10 , y = 20 , a = 30 , b = 40 ;
    printf(".....PRE INCREMENT OPERATOR.....\n");
    printf("value of x: %d\n" , x);//original value
    printf("value of x:%d\n" , ++x); //using pre increment value 
    printf("value of incremented x:%d\n" , x);

    printf("\n\n.....POST INCREMENT OPERATOR.....\n");
    printf("value of y:%d\n" , y);//original value 
    printf("value of y:%d\n" , y++);//using post increment value 
    printf("value of post incremented value y:%d\n" , y);//post incremented value 

    printf("\n\n.....PRE DECREMENT OPERATOR.....\n");
    printf("value of a:%d\n" , a);//using original value 
    printf("value of a:%d\n" , --a);//using pre decrement value 
    printf("value of pre decremented a:%d\n" , a);//pre decremented value 

    printf("\n\n.....POST DECREMENT OPERATOR.....\n");
    printf("value of b:%d\n" , b);//original value 
    printf("value of b:%d\n" , --b);// using pre decrement value 
    printf("value of post decremented b:%d \n" , b);//post incremented value
   // return 0;


}