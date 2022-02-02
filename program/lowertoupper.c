#include <stdio.h>
#include <string.h>
int main()
{
    char name[30];
    int i = 0;
    printf("Please enter your name:\n");
    scanf("%s", name);
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] < 96)
        {
            name[i] = name[i] + 32;
        }

        name[i] = name[i] - 32;
    }
    printf("After converting:%s\n", name);
}
