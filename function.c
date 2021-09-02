#include<stdio.h>
int addition( int a ,int b)
{
    int c;
    c = a+b;
    return c;
}
int main()
{
    int x , y , z;
    z = x+y ;
    printf("enter the two number:");
    scanf("%d %d" , &x , &y);
    z=addition(x ,y);
    printf("addition af two number is :%d", z); 
}
