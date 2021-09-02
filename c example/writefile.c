#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    FILE *file;
    file = fopen("file.txt", "w");
    if (file == NULL)
    {
        printf("error!file is not created");
        exit(1);
    }
    printf("enter the number:");
    scanf("%d", &num);
    printf("entered number is :%d\n", num);
    fprintf(file, "%d\n", num);
    fclose(file);
}