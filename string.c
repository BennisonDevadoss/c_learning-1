#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char ch[] = "c prpgramming";
    char ch1[20];
    printf("%s\n", ch);
    printf("enter the some text:\n");
    fgets(ch1, sizeof(ch1), stdin);
    strcpy(ch, "hi ben");
    printf("%s\n", ch);
    strcat(ch, "\thello");
    printf("%s\n", ch);
    a = strlen(ch);
    printf("%d\n", a);
    puts(ch1);
}