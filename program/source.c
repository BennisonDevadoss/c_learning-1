#include <stdio.h>

int main()
{
    FILE *file;
    char ch;

    file = fopen(__FILE__, "r");

    while ((ch = getc(file)) != EOF)
    {
        putchar(ch);
    }

    fclose(file);
}
