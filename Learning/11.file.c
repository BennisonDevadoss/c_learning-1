#include <stdio.h>
int main()
{
    // variable declaration
    char ch;
    FILE *fptr;

    fptr = fopen("program.txt", "r");

    if (fptr == NULL)
    {
        printf("file didn't opened");
        printf("please check file name");
    }

    // logic display output
    do
    {
        ch = fgetc(fptr);
        putchar(ch);
    } while (ch != EOF);
}