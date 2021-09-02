//multiply two floating point number
#include<stdio.h>
int main()
{
    double a , b , c ;
    printf("enter two number:");
    scanf("%lf %lf" , &a , &b);
    c = a*b;
    printf("total value is:%.2lf\n" , c);
    return 0;
}
