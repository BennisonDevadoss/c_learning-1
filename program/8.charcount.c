#include <stdio.h>
int main()
{
    // variabel declaration
    int lc, cc, wc, state, c;
    lc = wc = cc = 0;

    while ((c = getchar()) != EOF)
    {

        // word counting
        ++cc;

        // line counting
        if (c == '\n')
        {
            ++lc;
        }

        //word counting
        if (c == ' ' || c == '\n' || c == '\t')
        {
            ++wc;
        }
    }
    // print outputs
    printf("%d %d %d\n", cc, wc, lc);
}
