// find perimeter of rectangle
#include <stdio.h>
int main()
{
    // variable declaration
    int length, width, perimeter;

    // read input from user
    printf("Enter the length of rectangle:");
    scanf("%d", &length);

    printf("Enter the width of rectangle:");
    scanf("%d", &width);

    // logic
    perimeter = 2 * (length + width);

    // print output
    printf("rectangle's perimeter is :%d\n", perimeter);
}
