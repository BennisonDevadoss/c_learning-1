#include <stdio.h>
int main()
{
    // variable declaration
    char c;

    c = getchar();

    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}
