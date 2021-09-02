//pointer some examples
#include <stdio.h>
int main()
{
    int number = 1025;
    int *p = &number;
    printf("%p\n", &p);
    printf("%p\n", p);
    printf("%d\n", *p);
    printf("%d\n", *(p + 1)); //display some garbage value
    char *p0;
    p0 = (char *)p; //this method name is typecasting
    printf("%p\n", p0);
    printf("%d\n", *p0);
    printf("%d\n", *(p0 + 1));
}
