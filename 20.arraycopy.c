#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    // variable declaration
    int array1[MAX_SIZE];
    int array2[MAX_SIZE], size, i, j, k, l;
    ;

    // read input from user
    printf("enter your array size:");
    scanf("%d", &size);

    // logic
    printf("Enter the array inputs:\n");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &array1[i]);
    }

    // array copy
    for (j = 0; j < size; j++)
    {
        array2[j] = array1[j];
    }

    // print output
    printf("first array's value:\n");
    for (k = 0; k < size; k++)
    {
        printf("%d", array1[k]);
    }

    printf("\n");

    printf("second array's (or) copied array value\n");
    for (l = 0; l < size; l++)
    {
        printf("%d", array2[l]);
    }

    printf("\n");
}