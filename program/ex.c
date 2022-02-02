#include <stdio.h>
int main()
{
    char s[20];
    int i;
    fgets(s, sizeof(s), stdin);
    // s = getchar();
    for (i = 0; s[i] != '\0'; i++)
    {
        s[i]--;
    }
    puts(s);
}
