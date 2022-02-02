#include <stdio.h>

void bubble_sort(int a[], int);

int main()
{
    int arr[10] = {5, 2, 9, 1, 0, 3, 6, 4, 7, 8};
    int length = 10;

    bubble_sort(arr, length);

    // print output
    for (int i = 0; i < length; i++)
    {
        printf("a[%d] = %d\n", i, arr[i]);
    }
}

void bubble_sort(int arr[], int length)
{
    int temp = 0, i, j = 0, k = 0;

    for (i = 0; i < length; i++)
    {
        for (j = k; j < (length - 1); j++)
        {
            if (arr[j + 1] < arr[i]) /*...swap if the order is broken...*/
            {
                temp = arr[i];
                arr[i] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        k++;
    }
}
