#include <stdio.h>
#include <string.h>
int main()
{
    int len, i = 0, loop_run = 0;
    int temp;
    char name[30] = "bennison";
    // logic for string reverse
    len = strlen(name);
    printf("%d\n", len);
    loop_run = len / 2;

    while (i < loop_run)
    {
        temp = name[i];
        name[i] = name[len - 1 - i];
        name[len - 1 - i] = temp;
        i++;
    }
    printf("%s\n", name);
}
