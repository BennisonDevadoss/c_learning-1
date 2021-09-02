#include <stdio.h>
int main()
{
    char character;
    printf("enter the character:");
    scanf("%c", &character);
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) //isalpha function
    {
        printf("entered character is alphapet"); /* code */
    }
    else
    {
        printf("entered character is not alphapet");
    }
}