#include <stdio.h>
void sumof(int number[], int size);
int main()
{
    int number[10], sum = 0;
    printf(".......enter the 10 number.......\n");
    int i;
    int size;
    size = sizeof(number) / sizeof(number[0]);
    for (i = 0; i < size; i++)
    {
        printf("%d element is :", i + 1);
        scanf("%d", &number[i]);
        sumof(number, size);
    }
    void sumof(int number[], int size);
    {
        int sum = 0, i;
        for (i = 0; i < size; i++)
        {
            sum += number[i];
        }
        printf("total value is :%d", sum);
    }
}