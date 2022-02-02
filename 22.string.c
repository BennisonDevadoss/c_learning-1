#include <stdio.h>

#define MAX_INPUT 100
int main()
{
    //variable declaration
    char ch[MAX_INPUT];
    int count = 0;

    //read input from user
    printf("Enter any string:");
    fgets(ch, sizeof(ch), stdin);

    //logic
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }

    printf("Total string counts:%d\n", count);
}