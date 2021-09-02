//find the size of variable
#include<stdio.h>
int main()
{
    int inttype;
    float floattype;
    double doubletype;
    char chartype;
    printf("size of int = %ld bytes\n" , sizeof(inttype));
    printf("size of float = %ld bytes\n" , sizeof(floattype));
    printf("size of double = %ld bytes\n" , sizeof(doubletype));
    printf("size of char = %ld bytes\n" , sizeof(chartype));
}