#include <stdio.h>
int main()
{
    double c;
    for (c = 1; getchar() != EOF; c++)
        ;
    printf("%.0f", c);
}
