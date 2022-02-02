// year, month, week, days calculation
#include <stdio.h>

int main()
{
    // variable declaration
    int numbers, temp, year, month, week, day;
    year = month = week = day = 0;

    //read information from user
    printf("enter the number");
    scanf("%d", &numbers);

    //logic
    temp = numbers;
    if (temp >= 365)
    {
        year = temp / 365;
        temp = temp - (365 * year);
    }

    if (temp > 31)
    {
        month = temp / 31;
        temp = temp - (31 * month);
    }

    if (temp >= 7)
    {
        week = temp / 7;
        temp = temp - (7 * week);
    }

    if (temp >= 1)
    {
        day = temp;
    }

    // print output
    printf("year:%d\nmonth:%d\nweek:%d\nday:%d\n", year, month, week, day);
}
