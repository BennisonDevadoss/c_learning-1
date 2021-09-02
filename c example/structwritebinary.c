#include <stdio.h>
#include <stdlib.h>

struct emp
{
    int num1, num2, num3;
};

int main()
{
    int number;
    struct emp e;
    FILE *file;
    file = fopen("bennison.bin", "wb");

    if (file == NULL)
    {
        printf("error!please check out the program");
        exit(1);
    }

    e.num1 = 20;
    e.num2 = 100;
    e.num3 = 5;
    fwrite(&e, sizeof(struct emp), 1, file);
    fclose(file);

    return 0;
}