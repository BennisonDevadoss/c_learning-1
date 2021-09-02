#include <stdio.h>
int main()
{
    char c[100];
    printf("please enter the text:");
    fgets(c, sizeof(c), stdin);
    printf("entered text is :");
    puts(c);
}