#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    FILE *file;
    file = fopen("file.txt", "r");
    if (file == NULL)
    {
        printf("error!not finding this file");
        exit(1);
    }
    printf("displayed the file content:");
    fscanf(file, "%d\n", &num);
    printf("%d\n", num);
    fclose(file);
}