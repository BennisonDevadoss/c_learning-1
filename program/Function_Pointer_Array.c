// Application of Function Pointer
#include <stdio.h>

void add(int a, int b)
{
    printf("sum = %d", a + b);
}

void sub(int a, int b)
{
    printf("sup = %d", a + b);
}

void mul(int a, int b)
{
    printf("mul = %d", a * b);
}

int main()
{
    int choice, a, b;
    void (*fptr[10])(int, int) = {add, sub, mul}; // function pointer array
    printf("Enter two number:");
    scanf("%d %d", &a, &b);
    printf("enter the choice:1, 2, 3, 4");
    scanf("%d", &choice);
    (*fptr[choice - 1])(a, b);
}
