#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *file;
    int num;
    file = fopen("binary.bin", "rb");
    if (file == NULL)
    {
        printf("error! this file is not opened");
    }
    fread(&num, sizeof(num), 1, file);
    printf("%d\n", num);
}
