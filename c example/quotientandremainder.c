#include <stdio.h>
int main()
{
    int divident, diviser, quotient, remainder;
    printf("enter the divident number:");
    scanf("%d", &divident);
    printf("enter the deviser number:");
    scanf("%d", &diviser);
    quotient = divident / diviser;
    remainder = divident % diviser;
    printf("quotient value is :%d\n", quotient);
    printf("remainder value is :%d\n", remainder);
}