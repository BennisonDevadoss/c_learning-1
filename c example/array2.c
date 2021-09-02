#include <stdio.h>
const int city = 2;
const int week = 7;
int main()
{
    int tempreture[city][week];
    int i, j;
    for (i = 0; i < city; i++)
    {
        for (j = 0; j < week; j++)
        {
            printf("city%d , day%d :", i + 1, j + 1);
            scanf("%d", &tempreture[i][j]);
        }
    }
    printf("display the weather result\n");
    for (i = 0; i < city; i++)
    {
        for (j = 0; j < week; j++)
        {
            printf("city%d , day%d = %d\n", i + 1, j + 1, tempreture[i][j]); /* code */
        }
    }
}