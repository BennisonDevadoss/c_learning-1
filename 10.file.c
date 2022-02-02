#include <stdio.h>
#include <stdlib.h>
int main()
{
    //variable declaration
    char data[100];
    FILE *ptr;

    //file creation
    ptr = fopen("program.txt", "w");

    if (ptr == NULL)
    {
        printf("file did not created");
        exit(1);
    }

    printf("Enter the data: ");
    fgets(data, 100, stdin);

    fputs(data, ptr);

    //close file
    fclose(ptr);

    // print out put
    printf("please check that file\n");
}
