#include<stdio.h>
int main()
{
    /*if you want define a variable cannot be changed using const keywod
    SIDE is a variable name*/
    const int SIDE = 10;
    int area;
    area = SIDE*SIDE;
    printf("the area of the square with the side: %d is: %d sq. units",SIDE ,area);
}