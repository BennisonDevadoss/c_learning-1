#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int x, y;
    printf("enter x value :");
    scanf("%d", &x);
    printf("enter y value :");
    scanf("%d", &y);
    printf("before swap x and y value is :%d, %d\n", x, y);
    swap(&x, &y);
    printf("after swap x and y value is :%d, %d\n", x, y);
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}