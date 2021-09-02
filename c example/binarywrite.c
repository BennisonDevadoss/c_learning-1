#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    FILE *file;
    file = fopen("binary.bin", "wb");
    if (file == NULL)
    {
        printf("error!, file not ecreated");
        exit(1);
    }
    printf("enter the binary value:");
    scanf("%d", &num);
    fwrite(&num, sizeof(num), 1, file);
    fclose(file);
}
