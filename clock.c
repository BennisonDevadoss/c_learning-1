#include <stdio.h>
const hh_MAX = 24;
int main()
{
    int hh, mm, ss;
    hh = 0;
    mm = 0;
    ss = 0;
    printf(".....WORLD CLOCK.....\n");
time:
    printf("hour:");
    scanf("%d", &hh);
    printf("minutes:");
    scanf("%d", &mm);
    printf("seconds:");
    scanf("%d", &ss);
    if (hh > 24 || mm > 60 || ss > 60)
    {
        printf("please enter currect time formate\n");
        goto time;
    }
    printf("current time :\t%d\t:\t%d\t:\t%d\n", hh, mm, ss);
    for (int i = 1; i < 25; i++)
    {
    
    }
}