#include <stdio.h>
struct emp
{
    int enumber;
    char ename[2];
    float esalary; /* data */
};
int main()
{
    struct emp e;
    printf("size of struct is:%ld\n", sizeof(e));
    printf("git example");
    printf("staging area");
}

