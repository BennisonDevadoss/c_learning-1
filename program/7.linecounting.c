#include <stdio.h>
int main()
{
    char ch;
    int ln = 1;

    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
        {
            ++ln;
            printf("%d", ln);
        }
    }
}