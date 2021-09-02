#include <stdio.h>
#include <stdlib.h>
struct emp
{
    int enumber;
    char ename[20];
    float esalary;
};
int main()
{
    struct emp *ptr;
    ptr = (void *)malloc((sizeof(ptr)));
    printf("enter the employe number:");
    scanf("%d", &ptr->enumber);
    printf("enter the employe name:");
    scanf("%s", &ptr->ename[20]);
    printf("enter the emplaye salary:");
    scanf("%f", &ptr->esalary);
    printf("\n\ndisplayed student document\n");
    printf("employe number:%d\n", ptr->enumber);
    printf("employe name:%s\n", ptr->ename);
    printf("employe salary:%.1f\n", ptr->esalary);
    free(ptr);
    printf("employe name is :%d", ptr->enumber);
}
