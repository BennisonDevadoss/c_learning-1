//working on arithmetic operator
#include<stdio.h>
int main()
{
int a  , b , c;
printf("enter a value :");
scanf("%d" , &a);
printf("enered b value :");
scanf("%d" , &b);
c = a+b;
printf("a+b = %d \n",c);
c = a-b;
printf("a-b = %d \n",c);
c = a*b;
printf("a*b = %d \n",c);
c = a/b;
printf("a/b = %d \n",c);
c = a%b;
printf("remainder when a devided by the b value = %d\n",c);    
return 0;
}
