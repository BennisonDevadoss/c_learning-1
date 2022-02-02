#include <stdio.h>
#include <string.h>
int main()
{
    char name[30];
    int l, i;
    scanf("%s", name);
    printf("Before converting:%s\n", name);

    // logic
    l = strlen(name);
    for (i = 0; i < 8; i++)
    {
        if (name[i] >= 97)
        {
            name[i] = name[i] - 32;
        }

        name[i] = name[i] + 32;
    }
    printf("After convirting:%s\n", name);
}
