#include <stdio.h>
#include <time.h> //for sleep function#pragma endregion
#include <unistd.h>
#include <stdlib.h>
int main()
{
    int hour, minutes, seconds;
    hour = minutes = seconds = 0;
    fflush(stdout);
    while (1)
    {
        system("clear");
        printf("%02d : %02d : %02d\n", hour, minutes, seconds);
        // fflush(stdout); //clear output buffer in gcc
        seconds++;
        if (seconds == 60)
        {
            minutes = minutes + 1;
            seconds = 0;
        }
        if (minutes == 60)
        {
            hour = hour + 1;
            minutes = 0;
        }
        if (hour = 24)
        {
            hour = 0;
            minutes = 0;
            seconds = 0;
        }
        sleep(1);
    }
    return 0;
}