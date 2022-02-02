#include <stdio.h>
int main()
{
    char ch;
    ch = 'a';

    while (ch)
    {
        printf("%c\t", ch);
        ++ch;
    }

    printf("outside of the loop");
}