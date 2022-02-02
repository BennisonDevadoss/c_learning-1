#include <stdio.h>
int main()
{
    char c;
    int cc, wc, lc;

    cc = wc = lc = 0;

    while ((c = getchar()) != EOF)
    {
        // character counting
        ++cc;

        // word counting
        if (c == '\n' || c == ' ' || c == '\t')
        {
            ++wc;
        }

        // line counting
        if (c == '\n')
        {
            ++lc;
        }
    }

    // print output
    printf("number of characters :%d\n", cc);
    printf("number of words      :%d\n", wc);
    printf("number of lines      :%d\n", lc);
}