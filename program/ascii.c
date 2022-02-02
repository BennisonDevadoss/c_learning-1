#include <stdio.h>
int main()
{
    char ch;
    int num;
    printf("enter the character:");
    scanf("%c", &ch);
    printf("%d", ch);
    num = getchar();
    putchar(num);
}