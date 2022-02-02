#include <stdio.h>
int main()
{
    //variabe declaration
    char ch;

    // head input from user
    printf("Enter the Character:");
    scanf("%c", &ch);

    // logic
    if ((ch >= 'a' && ch >= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("Entered Character is ALPHAPET\n");
    }
    else
    printf("Enter Character is NOT ALPHAPET\n");
}
