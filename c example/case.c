#include <stdio.h>
int main()
{
    int a = 1;
    switch (a)
    {
    case 1:
        printf("hello");
        break;
    case 1l:
        printf("a=%d", a);
        break;
    default:
        printf("know program");
        break;
    }
    return 0;
}
