#include <stdio.h>
int main()
{
    FILE *file;

    file = fopen("ben.txt", "w");

    fprintf(file, "123456789\n");

    fprintf(file, "abcdefghijk\n");

    fseek(file, 4, SEEK_SET);

    fprintf(file, "ABC");

    fclose(file);
}
