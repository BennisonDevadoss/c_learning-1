#include <stdio.h>
int main()
{
    int number;
    number = 0;
    while (getchar() != EOF)

    {
        ++number;
        printf("%d", number);
        // ++number;
    }
}