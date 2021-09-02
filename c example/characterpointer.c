//using function //argument passed but no retturn value
#include <stdio.h>
void print(char *v);
int main()
{
    char name[20] = "hello";
    print(name);
}
void print(char *v)
{
    while (*v != '\0')
    {
        printf("%c", *v);
        v++; /* code */
    }
    printf("\n");
}