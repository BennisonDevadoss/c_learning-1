#include <stdio.h>
char *string();
int main()
{
    char *ptr;
    ptr = string();
    printf("%s", ptr);
}
char *string()
{
    char *name = "bennison";
    return name;
}