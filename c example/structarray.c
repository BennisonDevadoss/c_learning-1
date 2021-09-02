#include <stdio.h>
struct stud
{
    int sno;
    char sname[20];
    int smark[5];
};
int main()
{
    struct stud s[3];
    int i, j;
    printf(".....please enter the student detail.....\n");
    for (i = 0; i < 3; i++)
    {
        printf("sno:");
        scanf("%d", &s[i].sno);
        printf("student name:");
        scanf("%s", s[i].sname);
        for (j = 0; j < 5; j++)
        {
            printf("mark%d:", j + 1);
            scanf("%d", &s[i].smark[j]);
        }
    }
    printf(".....displayed student mark.....\n");
    for (i = 0; i < 3; i++)
    {
        printf("student number:%d\n", s[i].sno);
        printf("student name:%s\n", s[i].sname);
        for (j = 0; j < 5; j++)
        {
            printf("mark%d:%d\n", j + 1, s[i].smark[j]);
        }
    }
}
