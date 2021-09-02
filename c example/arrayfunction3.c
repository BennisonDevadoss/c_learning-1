#include <stdio.h>
void display(int variable[2][3]);
int main()
{
    int number[2][3], i, j;
    printf("enter the element:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &number[i][j]);
        }
    }
    display(number);
}
void display(int variable[2][3])
{
    int i, j;
    printf("displayed:\n");
    for (i = 0; i < 2; i++)
    {
        /* code */ for (j = 0; j < 3; j++)
        {
            printf(" %d", variable[i][j]); /* code */
        }
    }
}