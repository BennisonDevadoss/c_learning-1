#include <stdio.h>
void sum(int a, int b)
{
    printf("%d\n", a + b);
}

void sub(int a, int b)
{
    printf("%d", a + b);
}

void display(void (*fptr)(int, int))
{
    (*fptr)(10, 10);
}

int main()
{
    display(sum);
    display(sub);
}
