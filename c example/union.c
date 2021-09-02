#include <stdio.h>
union example
{
    int a;
    int b;
    char c; /* data */
};
int main()
{
    union example e;
    printf("enter value of a :");
    scanf("%d", &e.a);
    printf("enter vlaue of b :");
    scanf("%d", &e.b);
    // printf("enter value of c :");
    // scanf("%c", &e.c);
    printf(".....display the union value.....\n");
    printf("a=%d\n", e.a);
    printf("b=%d\n", e.b);
    // printf("c=%c\n", e.c);
}