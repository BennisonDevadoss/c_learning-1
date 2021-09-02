#include <stdio.h>
#include <stdlib.h>

struct emp
{
    int num1, num2, num3;
};

int main()
{
    struct emp e;
    FILE *file;
    file = fopen("bennison.bin", "rb");

    if (file == NULL)
    {
        printf("error!, file is not opened");
        exit(1);
    }

    fread(&e, sizeof(struct emp), 1, file);
    printf("num1:%d, num2:%d, num3:%d", e.num1, e.num2, e.num3);

    fclose(file);
}
