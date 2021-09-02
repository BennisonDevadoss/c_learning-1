#include <stdio.h>
int main()
{
    int inttype;
    float floattype;
    double doubletype;
    char chartype;
    long int longtype;
    long long int longlongtype;
    long double longdoubletype;
    printf("size of int:%ld bytes\n", sizeof(inttype));
    printf("size of float:%ld bytes\n", sizeof(floattype));
    printf("size of double:%ld bytes\n", sizeof(doubletype));
    printf("size of char :%ld bytes\n", sizeof(chartype));
    printf("size of long long int:%ld bytes\n", sizeof(longlongtype));
    printf("size od long int:%ld bytes\n", sizeof(longtype));
    printf("sizeof long double:%ld bytes\n", sizeof(longdoubletype));
}