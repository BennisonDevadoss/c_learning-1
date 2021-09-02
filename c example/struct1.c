#include <stdio.h>
struct employe
{
    int eno;
    char ename[20];
    float salary;
};
int main()
{
    struct employe p[20];
    printf("%p\n", p);
    printf("%p\n", &p[1].eno);
    printf("%p\n", &p[0].ename);
    scanf("%d", &p[0].eno);
    printf("%d\n", p[0].eno);
}