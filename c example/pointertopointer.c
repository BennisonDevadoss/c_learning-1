#include <stdio.h>
int main()
{
    int x = 5;
    int *p;
    p = &x;
    *p = 6;
    int **q;
    q = &p;
    int ***r;
    r = &q;
    printf("%d\n", *p); //value is 6
    printf("%p\n", p);
    printf("%p\n", &p);
    printf("%p\n", *q);    // display some address
    printf("%d\n", *(*q)); // display the value of 6
    printf("%p\n", **r);   // display the value of the p
    printf("%d\n", ***r);  //display the value of 6
    ***r = 10;
    printf("x value is :%d\n", x);
    printf("\n");
    **q = *p + 2;
    printf("x value is %d\n", x);

    // printf("%d\n", *p);    //value is 10
    // printf("%p\n", *q);    // display some address
    // printf("%d\n", *(*q)); // display the value of 10
    // printf("%p\n", **r);   // display the value of the p
    // printf("%d\n", ***r);
}