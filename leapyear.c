#include <stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d", &year);
    // if (year % 400 == 0)
    // {
    //     /* code */ printf("%d is leap year", year);
    // }
    // else if (year % 100 == 0)
    // {
    //     /* code */ printf("%d is not leap year", year);
    // }
    if (year % 4 == 0)
    {
        printf("%d year is leap year", year);
    }
    else
    {
        printf("entered year is not leap year");
    }
}