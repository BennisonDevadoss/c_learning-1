#include <stdio.h>
int main()
{
    int b[2][3];
    int(*p)[3] = b;
    printf("%p\n", b);    //display the address of b
    printf("%p\n", b[0]); //and it is display the address of b
    printf("%p\n", b + 1);
    printf("%p\n", &b[1]); //b+1 and b[1] and &b[1] is display the same address
    printf("%p\n", *(b + 1) + 2);
    printf("%p\n", b[1] + 2); //last two printf function are print the same address
    printf("%p\n", &b[1][2]); //last three printf statement are print the same address
}