#include <stdio.h>
int main()
{
    int number;
    char c;
    printf("enter the number:");
    scanf("%d", &number);
    printf("enter the character:");
    scanf(" %c", &c);
    printf("entered character is :%c\n", c);
}