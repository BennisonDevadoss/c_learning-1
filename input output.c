//c language input and output method simple example
#include<stdio.h>
int main()
{
    //declare the variable 
    int number ;
    char name ;
    float weight ;
    // integer
    // input the number
    printf("enter the number is:");
    scanf("%d" , &number);

    // output the number
    printf("entered number is:%d\n" , number);

    //input the char
    printf("\n\n enter the name is:");
    scanf("%c" , &name);

    //output the name 
    printf("entered name is:%c\n" , name);

    //input the float value 
    printf("\n\n enter the weight is:");
    scanf("%f" , &weight);

    //output the float value
    printf("enterd weight is:%f \n" , weight);

}