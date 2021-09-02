#include <stdio.h>
int main()
{
    char c[6] = "hello";
    char *c2;
    c2 = c;
    printf("%c", c2[1]);
}